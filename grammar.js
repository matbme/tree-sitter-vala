module.exports = grammar({
    name: 'vala',

    extras: $ => [
        $.comment,
        /\s|\\\r?\n/
    ],

    conflicts: $ => [
        [$.chained_function_call, $._identifiers],
        [$.generic_identifier, $._expression],
        [$._identifiers, $.generic_identifier],
        [$.chained_function_call, $._identifiers, $.generic_identifier]
    ],

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ => choice(
            $.function_definition,
            $.namespace,
            $.using,
            $._statement,
            $.class_declaration,
            $.class_constructor_definition,
            $.struct_declaration,
            $.interface_declaration,
            $.enum_declaration,
            $.gobject_contruct
        ),

        function_definition: $ => seq(
            repeat($.modifier),
            $._type,
            $._identifiers,
            $.parameter_list,
            choice($.block, ';')
        ),

        function_call: $ => prec(3, seq(
            field('identifier', choice($._identifiers, $.generic_identifier)),
            $.parameter_list
        )),

        chained_function_call: $ => seq(
            $.function_call,
            repeat1(prec.left(seq('.', choice($.function_call, $._single_identifier))))
        ),

        class_declaration: $ => seq(
            repeat($.modifier),
            'class',
            choice($._identifiers, $.generic_identifier),
            optional(seq(':', seq($._identifiers, repeat(seq(',', $._identifiers))))),
            $.block
        ),

        class_constructor_definition: $ => seq(
            repeat($.modifier),
            $._identifiers,
            $.parameter_list,
            $.block
        ),

        interface_declaration: $ => seq(
            repeat($.modifier),
            'interface',
            choice($._identifiers, $.generic_identifier),
            optional(seq(':', seq($._identifiers, repeat(seq(',', $._identifiers))))),
            $.block
        ),

        struct_declaration: $ => seq(
            repeat($.modifier),
            'struct',
            $._identifiers,
            $.block
        ),

        enum_declaration: $ => seq(
            repeat($.modifier),
            'enum',
            $._identifiers,
            '{',
            seq(
                repeat(seq($.uppercased_identifier, ',')),
                $.uppercased_identifier,
                optional(',')
            ),
            '}'
        ),

        modifier: $ => choice(
            'abstract',
            'const',
            'dynamic',
            'ensures',
            'extern',
            'inline',
            'internal',
            'override',
            'private',
            'protected',
            'public',
            'requires',
            'signal',
            'static',
            'virtual',
            'volatile',
            'weak',
            'async',
            'owned',
            'unowned',
            'ref',
            'out',
            'delegate'
        ),

        _type: $ => choice(
            $._single_type,
            $.array_type,
            $.generic_identifier
        ),

        _single_type: $ => prec(5, choice(
            $.primitive_type,
            $.namespaced_identifier,
            $.camel_cased_identifier
        )),

        array_type: $ => prec(5, seq(
            $._single_type,
            '[',
            ']'
        )),

        primitive_type: $ => choice(
            'bool',
            'char',
            'double',
            'float',
            'size_t',
            'ssize_t',
            'string',
            'unichar',
            'void',
            'int',
            'int8',
            'int16',
            'int32',
            'int64',
            'long',
            'short',
            'uchar',
            'uint',
            'uint8',
            'uint16',
            'uint32',
            'uint64',
            'ulong',
            'ushort'
        ),

        parameter_list: $ => seq(
            '(',
            optional(seq($._parameter, repeat(seq(',', $._parameter)))),
            ')'
        ),

        _parameter: $ => choice($.declaration_parameter, $.instanciation_parameter),

        declaration_parameter: $ => seq(repeat($.modifier), $._type, $._identifiers),

        instanciation_parameter: $ => prec(3, seq(
            repeat($.modifier),
            optional(seq($._identifiers, ':')),
            choice($._identifiers, $.string_literal, $.number, $.closure)
        )),

        block: $ => seq(
            '{',
            repeat($._top_level),
            '}'
        ),

        _statement: $ => choice(
            $._expression_statement,
            $.return_statement,
            $.assignment,
            $.if_statement,
            $.declaration,
            prec(1, $.switch_statement),
            $.break_statement,
            $.try_statement,
            $.for_statement,
            $.foreach_statement,
            $.while_statement,
            $.do_while_statement,
            $.closure
        ),

        _expression_statement: $ => seq($._expression, ';'),

        return_statement: $ => seq(
            'return',
            $._expression,
            ';'
        ),

        assignment: $ => seq(
            $._identifiers,
            '=',
            $._expression,
            ';'
        ),

        if_statement: $ => prec.right(seq(
            'if',
            '(',
            $._expression,
            ')',
            choice($.block, $._expression, $._statement),
            optional(seq(
                'else',
                choice($.block, $._expression, $._statement),
            ))
        )),

        switch_statement: $ => seq(
            'switch',
            '(',
            $._identifiers,
            ')',
            $.switch_block
        ),

        switch_block: $ => prec.left(seq(
            '{',
            repeat1($.case),
            '}'
        )),

        case: $ => prec.left(1, seq(
            choice(
                seq('case', $._expression),
                'default'
            ),
            ':',
            choice($.block, repeat($._top_level)),
            optional($.break_statement)
        )),

        break_statement: $ => seq('break', ';'),

        try_statement: $ => seq(
            'try',
            $.block,
            'catch',
            $.parameter_list,
            $.block
        ),

        for_statement: $ => seq(
            'for',
            '(',
            choice($.declaration, ';'),
            optional($._expression),
            ';',
            optional($._expression),
            ')',
            choice($.block, $._statement)
        ),

        foreach_statement: $ => seq(
            'foreach',
            '(',
            choice($._type, 'var'),
            field('loop_item', $._identifiers),
            'in',
            $._identifiers,
            ')',
            choice($.block, $._statement)
        ),

        while_statement: $ => seq(
            'while',
            '(',
            $._expression,
            ')',
            choice($.block, $._statement)
        ),

        do_while_statement: $ => seq(
            'do',
            choice($.block, $._statement),
            'while',
            '(',
            $._expression,
            ')',
            ';'
        ),

        closure: $ => seq(
            '(',
            optional(seq($._identifiers, repeat(seq(',', $._identifiers)))),
            ')',
            token('=>'),
            $.block
        ),

        declaration: $ => seq(
            repeat($.modifier),
            field('type_name', choice($._type, 'var')),
            $._identifiers,
            choice(
                seq('=', choice($._expression, $.array_initializer), ';'),
                seq('{', $.gobject_property_acces, '}'),
                ';'
            )
        ),

        array_initializer: $ => prec.right(seq(
            '{',
            $._expression,
            repeat(seq(',', $._expression)),
            '}'
        )),

       property_parameter: $ => choice(
            'get',
            'set',
            'construct'
        ),

        gobject_property_acces: $ => repeat1(
            seq(
                optional($.modifier),
                $.property_parameter,
                choice($.block, ';')
            )
        ),

        gobject_contruct: $ => seq(
            'construct',
            $.block
        ),

        namespace: $ => seq(
            'namespace',
            $._identifiers,
            $.block
        ),

        using: $ => seq(
            'using',
            $._identifiers,
            ';'
        ),

        _expression: $ => prec(1, choice(
            $._identifiers,
            $.number,
            $.unary_expression,
            $.binary_expression,
            $.string_literal,
            $.function_call,
            $.chained_function_call,
            $.new_instance
        )),

        new_instance: $ => seq(
            'new',
            choice($.function_call, $.chained_function_call)
        ),

        unary_expression: $ => prec(6, choice(
            seq('-', $._expression),
            seq('!', $._expression),
            prec.right(seq($._expression, '++')),
            prec.right(seq($._expression, '--')),
        )),

        binary_expression: $ => choice(
            prec.left(4, seq($._expression, '*', $._expression)),
            prec.left(4, seq($._expression, '/', $._expression)),
            prec.left(4, seq($._expression, '+', $._expression)),
            prec.left(4, seq($._expression, '-', $._expression)),
            prec.left(4, seq($._expression, '<', $._expression)),
            prec.left(4, seq($._expression, '<=', $._expression)),
            prec.left(4, seq($._expression, '>', $._expression)),
            prec.left(4, seq($._expression, '>=', $._expression)),
            prec.left(4, seq($._expression, '==', $._expression)),
            prec.left(4, seq($._expression, '+=', $._expression)),
            prec.left(4, seq($._expression, '-=', $._expression)),
            prec.left(4, seq($._expression, '*=', $._expression)),
            prec.left(4, seq($._expression, '/=', $._expression)),
            prec.left(4, seq($._expression, '&&', $._expression)),
            prec.left(4, seq($._expression, '||', $._expression)),
            prec.left(4, seq($._expression, '&', $._expression)),
            prec.left(4, seq($._expression, '|', $._expression)),
        ),

        escape_sequence: $ => token(prec(1, seq(
            '\\',
            /\w/
        ))),

        string_literal: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^\\"\n]+/)),
                $.escape_sequence
            )),
            '"'
        ),

        _identifiers: $ => choice(
            $._single_identifier,
            $.namespaced_identifier,
        ),

        array_identifier: $ => seq(
            $._expression,
            '[',
            $._expression,
            ']'
        ),

        generic_identifier: $ => prec.dynamic(10, seq(
            $._single_identifier,
            '<',
            choice($._single_identifier, $._type),
            '>'
        )),

        _single_identifier: $ => choice(
            $.identifier,
            $.camel_cased_identifier,
            $.uppercased_identifier,
            $.array_identifier,
        ),

        identifier: $ => /[a-z_]\w*/,

        camel_cased_identifier: $ => /(?:[A-Z][a-z]*)+/,

        uppercased_identifier: $ => /[A-Z_]+/,

        namespaced_identifier: $ => prec.left(seq(
            $._single_identifier, 
            repeat1(prec.right(2, seq(
                '.', 
                $._single_identifier
            )))
        )),

        number: $ => /\d+/,

        comment: $ => token(choice(
            /\/\/.+/, // Single line
            /\/\*(.|\n)+\*\// // Multi-line
        )),

    }
});
