module.exports = grammar({
    name: 'vala',

    externals: $ => [
        $._verbatim_content,
    ],

    extras: $ => [
        $.comment,
        /\s|\\\r?\n/
    ],

    conflicts: $ => [
        [$.chained_function_call, $._identifiers],
        [$.generic_identifier, $._expression],
        [$._identifiers, $.generic_identifier],
        [$.chained_function_call, $._identifiers, $.generic_identifier],
        [$._type, $._single_identifier],
        [$.static_cast, $.dynamic_cast],
        [$._type, $._identifiers],
        [$.new_instance, $._identifiers, $.namespaced_identifier],
        [$.new_instance, $.namespaced_identifier],
        [$.chained_function_call, $.new_instance, $.namespaced_identifier],
        [$.block, $.array_initializer],
        [$.enum_declaration],
        [$.closure, $.ternary_expression],
        [$.closure, $.unary_expression]
    ],

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ => choice(
            $._preproc,
            $.function_definition,
            $.namespace,
            $.using,
            $._statement,
            $.class_declaration,
            $.class_constructor_definition,
            $.class_destructor,
            $.struct_declaration,
            $.interface_declaration,
            $.enum_declaration,
            $.gobject_construct,
            $.code_attribute
        ),

        _preproc: $ => prec(10, choice(
            $.preproc_if,
            $.preproc_elif,
            $.preproc_else,
            $.preproc_endif
        )),

        preproc_if: $ => seq(
            '#if',
            $._expression
        ),

        preproc_elif: $ => seq(
            '#elif',
            $._expression
        ),

        preproc_else: $ => '#else',

        preproc_endif: $ => '#endif',

        function_definition: $ => seq(
            repeat($.modifier),
            field('type', $._type),
            field('name', $._identifiers),
            $.parameter_list,
            repeat(choice($.throws_declarator, $.requires_declarator, $.ensures_declarator)),
            choice($.block, ';')
        ),

        throws_declarator: $ => seq(
            'throws', 
            commaSep1($.identifier)
        ),

        requires_declarator: $ => seq(
            'requires',
            '(',
            $._expression,
            ')'
        ),

        ensures_declarator: $ => seq(
            'ensures',
            '(',
            $._expression,
            ')'
        ),

        function_call: $ => prec(3, seq(
            field('identifier', choice($._identifiers, $.primitive_type)),
            $.parameter_list
        )),

        chained_function_call: $ => seq(
            choice($.function_call, $.typeof_expression),
            repeat1(prec.left(seq('.', choice($.function_call, $._single_identifier))))
        ),

        class_declaration: $ => seq(
            repeat($.modifier),
            'class',
            choice($._identifiers),
            optional(seq(':', commaSep1($._identifiers))),
            $.block
        ),

        class_constructor_definition: $ => seq(
            repeat($.modifier),
            field('name', $._identifiers),
            $.parameter_list,
            $.block
        ),

        class_destructor: $ => seq(
            '~',
            $._identifiers,
            $.parameter_list,
            $.block
        ),

        interface_declaration: $ => seq(
            repeat($.modifier),
            'interface',
            choice($._identifiers),
            optional(seq(':', commaSep1($._identifiers))),
            $.block
        ),

        struct_declaration: $ => seq(
            repeat($.modifier),
            'struct',
            $._identifiers,
            $.block
        ),

        struct_initializer: $ => prec.right(-1, seq(
            $._identifiers,
            $.parameter_list,
            $.initializer
        )),

        initializer: $ => seq(
            '{',
            commaSep($.inline_assignment),
            '}'
        ),

        enum_declaration: $ => seq(
            repeat($.modifier),
            'enum',
            field('name', $._identifiers),
            '{',
            seq(
                repeat(seq($.identifier, ',')),
                $.identifier,
                optional(choice(',', ';'))
            ),
            optional(repeat($.function_definition)),
            '}'
        ),

        modifier: $ => choice(
            'abstract',
            'const',
            'dynamic',
            'extern',
            'inline',
            'internal',
            'override',
            'private',
            'protected',
            'public',
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
            $.primitive_type,
            $.namespaced_identifier,
            $.identifier,
            $.array_identifier,
            $.generic_identifier,
            prec(10, $.nullable_type),
            prec(10, $.pointer_type)
        ),

        primitive_type: $ => token(choice(
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
        )),

        nullable_type: $ => seq(
            $._type,
            '?'
        ),

        pointer_type: $ => prec.left(10, seq(
            $._type,
            '*'
        )),

        parameter_list: $ => seq(
            '(',
            commaSep($._parameter),
            ')'
        ),

        _parameter: $ => choice(
            $.declaration_parameter,
            $.instanciation_parameter,
            $.ellipsis
        ),

        declaration_parameter: $ => seq(
            repeat($.modifier),
            $._type,
            $._identifiers,
            optional(seq(
                '=',
                $._expression
            ))
        ),

        instanciation_parameter: $ => prec(3, seq(
            repeat($.modifier),
            optional(seq($._identifiers, ':')),
            choice($._expression)
        )),

        ellipsis: $ => '...',

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
        ),

        code_attribute: $ => seq(
            '[',
            field('name', $.identifier),
            optional(seq(
                '(',
                commaSep1(seq(
                    field('param', $._identifiers),
                    '=',
                    field('value', $._expression),
                )),
                ')'
            )),
            ']'
        ),

        _expression_statement: $ => seq($._expression, ';'),

        return_statement: $ => seq(
            'return',
            optional($._expression),
            ';'
        ),

        assignment: $ => seq(
            $._identifiers,
            '=',
            $._expression,
            ';'
        ),

        inline_assignment: $ => alias(seq(
            $._identifiers,
            '=',
            $._expression,
        ), $.assignment),

        if_statement: $ => prec.right(seq(
            'if',
            '(',
            choice($._expression, $.inline_assignment),
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
            $._expression,
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
            field('exception', $.parameter_list),
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
            optional(token('unowned')),
            choice($._type, 'var'),
            field('loop_item', $._identifiers),
            'in',
            $._expression,
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
            commaSep($._identifiers),
            ')',
            token('=>'),
            choice($.block, $._expression)
        ),

        declaration: $ => seq(
            repeat($.modifier),
            field('type_name', choice($._type, 'var')),
            $._identifiers,
            choice(
                seq('=', choice($._expression, $.array_initializer, $.struct_initializer), ';'),
                seq('{', $.gobject_property_acces, '}'),
                ';'
            )
        ),

        array_initializer: $ => prec.right(seq(
            '{',
            commaSep(choice($._expression, $.array_initializer)),
            '}'
        )),

        property_parameter: $ => choice(
            'get',
            'set',
            'construct'
        ),

        property_default_value: $ => seq(
            'default',
            '=',
            $._expression
        ),

        gobject_property_acces: $ => repeat1(
            seq(
                optional($.modifier),
                choice($.property_parameter, $.property_default_value),
                choice($.block, ';')
            )
        ),

        gobject_construct: $ => seq(
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

        _expression: $ => prec(-2, choice(
            $._identifiers,
            $.number,
            $.decimal_literal,
            $.char_literal,
            $.parenthesized_expression,
            $.unary_expression,
            $.binary_expression,
            $.ternary_expression,
            $.string_literal,
            $.verbatim,
            $.translation_string,
            $.string_template,
            $.typeof_expression,
            $.is_type_expression,
            $.regex_literal,
            $.array_initializer,
            $.function_call,
            $.chained_function_call,
            $.new_instance,
            $.throw_error,
            $.static_cast,
            $.dynamic_cast,
            $.yield_expression,
            $.ownership_transfer,
            $.global_access,
            $.free_pointer,
            $.closure,
            $.true,
            $.false,
            $.null,
            $.this,
            $.underscore
        )),

        parenthesized_expression: $ => seq(
            '(',
            $._expression,
            ')'
        ),

        new_instance: $ => prec(-1, seq(
            'new',
            choice(
                $.function_call,
                $.chained_function_call,
                $.array_identifier,
                alias($.struct_initializer, $.object_initializer)
            ),
        )),

        throw_error: $ => prec(7, seq(
            'throw',
            $._expression
        )),

        unary_expression: $ => prec(6, choice(
            seq('-', $._expression),
            seq('!', $._expression),
            prec.right(seq($._expression, '++')),
            prec.right(seq($._expression, '--')),
        )),

        binary_expression: $ => choice(
            prec.left(5, seq($._expression, '*', $._expression)),
            prec.left(5, seq($._expression, '/', $._expression)),
            prec.left(5, seq($._expression, '+', $._expression)),
            prec.left(5, seq($._expression, '-', $._expression)),
            prec.left(5, seq($._expression, '%', $._expression)),
            prec.left(4, seq($._expression, '<', $._expression)),
            prec.left(4, seq($._expression, '<=', $._expression)),
            prec.left(4, seq($._expression, '>', $._expression)),
            prec.left(4, seq($._expression, '>=', $._expression)),
            prec.left(4, seq($._expression, '==', $._expression)),
            prec.left(4, seq($._expression, '!=', $._expression)),
            prec.left(4, seq($._expression, '+=', $._expression)),
            prec.left(4, seq($._expression, '-=', $._expression)),
            prec.left(4, seq($._expression, '*=', $._expression)),
            prec.left(4, seq($._expression, '/=', $._expression)),
            prec.left(4, seq($._expression, '%=', $._expression)),
            prec.left(3, seq($._expression, '&&', $._expression)),
            prec.left(3, seq($._expression, '||', $._expression)),
            prec.left(5, seq($._expression, '&', $._expression)),
            prec.left(5, seq($._expression, '|', $._expression)),
            prec.left(5, seq($._expression, '^', $._expression)),
            prec.left(5, seq($._expression, '~', $._expression)),
            prec.left(4, seq($._expression, '|=', $._expression)),
            prec.left(4, seq($._expression, '&=', $._expression)),
            prec.left(4, seq($._expression, '^=', $._expression)),
            prec.left(4, seq($._expression, '??', $._expression)),
        ),

        ternary_expression: $ => prec.right(seq(
            field('condition', $._expression),
            '?',
            field('match', $._expression),
            ':',
            field('else', $._expression)
        )),

        free_pointer: $ => seq(
            'delete',
            $._identifiers
        ),

        yield_expression: $ => prec.right(seq(
            'yield',
            optional($._expression),
        )),

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

        verbatim: $ => seq(
            '"""',
            repeat($._verbatim_content),
            '"""'
        ),

        translation_string: $ => seq(
            '_',
            token.immediate('('),
            $.string_literal,
            ')'
        ),

        string_template: $ => seq(
            '@',
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^\\"\n$]+/)),
                $.escape_sequence,
                $.string_template_variable,
                $.string_template_expression
            )),
            '"'
        ),

        string_template_variable: $ => prec.right(seq(
            '$',
            $._identifiers
        )),

        string_template_expression: $ => prec.right(seq(
            '$(',
            $._expression,
            ')'
        )),

        decimal_literal: $ => prec(12, seq(
            $.number,
            '.',
            $.number
        )),

        char_literal: $ => seq(
            '\'',
            choice(
                $.escape_sequence,
                token.immediate(/[^\n']/)
            ),
            '\''
        ),

        typeof_expression: $ => seq(
            'typeof',
            '(',
            $._type,
            ')'
        ),

        is_type_expression: $ => prec(-1, seq(
            $._identifiers,
            'is',
            $._type
        )),

        // Borrowed from [tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript)
        regex_literal: $ => seq(
            '/',
            field('pattern', $.regex_pattern),
            token.immediate('/'),
            optional(field('flags', $.regex_flags))
        ),

        regex_pattern: $ => token.immediate(prec(-1,
            repeat1(choice(
                seq(
                    '[',
                    repeat(choice(
                        seq('\\', /./), // escaped character
                        /[^\]\n\\]/       // any character besides ']' or '\n'
                    )),
                    ']'
                ),              // square-bracket-delimited character class
                seq('\\', /./), // escaped character
                /[^/\\\[\n]/    // any character besides '[', '\', '/', '\n'
            ))
        )),

        regex_flags: $ => token.immediate(/[a-z]+/),

        array_slice: $ => seq(
            $._expression,
            ':',
            $._expression
        ),

        static_cast: $ => prec(12, seq(
            '(',
            field('type', $._type),
            ')',
            field('value', $._expression)
        )),

        dynamic_cast: $ => prec(12, seq(
            field('value', $._expression),
            'as',
            field('type', $._type),
        )),

        ownership_transfer: $ => seq(
            '(',
            'owned',
            ')',
            $._identifiers
        ),

        global_access: $ => seq(
            token('global::'),
            $._identifiers
        ),

        _identifiers: $ => choice(
            $._single_identifier,
            $.namespaced_identifier,
            $.ambiguous_identifier,
            prec(-1, $.underscore)
        ),

        array_identifier: $ => prec(5, seq(
            choice($._expression, $.primitive_type),
            '[',
            optional(choice(
                commaSep1(choice(
                    $._expression,
                    $.array_slice
                )),
                repeat1(',')
            )),
            ']'
        )),

        generic_identifier: $ => prec.dynamic(10, seq(
            $._single_identifier,
            '<',
            commaSep1(choice($._single_identifier, $._type)),
            '>'
        )),

        _single_identifier: $ => choice(
            $.identifier,
            $.array_identifier,
            $.generic_identifier,
            $.address_of_identifier,
            $.indirection_identifier
        ),

        ambiguous_identifier: $ => seq(
            '@',
            $.identifier,
        ),

        identifier: $ => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

        namespaced_identifier: $ => prec.right(5, seq(
            field('left', choice(
                $._identifiers,
                $.string_literal,
                $.regex_literal,
                $.this,
                $.primitive_type,
                $.parenthesized_expression
            )),
            choice('.', '->'), 
            field('right', choice(
                $._single_identifier,
                $.string_literal,
                alias('new', $.new_instance)
            )),
        )),

        address_of_identifier: $ => prec(10, seq(
            '&',
            $._identifiers
        )),

        indirection_identifier: $ => prec(10, seq(
            '*',
            $._identifiers
        )),

        true: $ => 'true',

        false: $ => 'false',

        null: $ => 'null',

        this: $ => 'this',

        underscore: $ => '_',

        number: $ => /\d+/,

        comment: $ => token(choice(
            /\/\/.+/, // Single line
            seq(      // Multi-line
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),

    }
});

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}
