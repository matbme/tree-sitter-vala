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
        [$.chained_function_call, $._symbol],
        // [$.generic_identifier, $._expression],
        // [$._symbol, $.generic_identifier],
        // [$.chained_function_call, $._symbol, $.generic_identifier],
        [$._type, $._symbol_part],
        [$.static_cast, $.dynamic_cast],
        [$._type, $._symbol],
        // [$.new_instance, $._symbol, $.namespaced_identifier],
        // [$.new_instance, $.namespaced_identifier],
        // [$.chained_function_call, $.new_instance, $.namespaced_identifier],
        [$.block, $.array_initializer],
        [$.enum_declaration],
        [$.closure, $.ternary_expression],
        [$.closure, $.unary_expression],
        // [$.free_pointer, $.generic_identifier],
        // [$.string_literal, $.string_template],
        [$._symbol],
        [$.new_instance],
        [$._expression, $.free_pointer, $.generic_identifier],
        [$.ambiguous_identifier, $._symbol_part],
        [$.generic_identifier, $._symbol_part],
        [$.generic_identifier, $.ambiguous_identifier, $._symbol_part],
        [$._type, $.generic_identifier, $._symbol_part]
    ],

    supertypes: $ => [
        $._type,
        // $._expression,
        $._identifier
    ],

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ => choice(
            $._preproc,
            $.function_definition,
            $.namespace,
            $.using_directive,
            $._statement,
            $.class_declaration,
            $.class_constructor_definition,
            $.class_destructor,
            $.struct_declaration,
            $.interface_declaration,
            $.enum_declaration,
            $.gobject_contruct,
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
            field('name', $._symbol),
            $.parameter_list,
            repeat(choice($.throws_declarator, $.requires_declarator, $.ensures_declarator)),
            choice($.block, ';')
        ),

        throws_declarator: $ => seq(
            'throws', 
            commaSep1($._symbol)
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
            field('identifier', choice($._symbol, $.primitive_type)),
            $.parameter_list
        )),

        chained_function_call: $ => seq(
            choice($.function_call, $.typeof_expression),
            repeat1(prec.left(seq('.', choice($.function_call, $._symbol))))
        ),

        class_declaration: $ => seq(
            repeat($.modifier),
            'class',
            $._symbol,
            optional(seq(':', commaSep1($._symbol))),
            $.block
        ),

        class_constructor_definition: $ => seq(
            repeat($.modifier),
            field('name', $._symbol),
            $.parameter_list,
            $.block
        ),

        class_destructor: $ => seq(
            '~',
            $._symbol,
            $.parameter_list,
            $.block
        ),

        interface_declaration: $ => seq(
            repeat($.modifier),
            'interface',
            choice($._symbol),
            optional(seq(':', commaSep1($._symbol))),
            $.block
        ),

        struct_declaration: $ => seq(
            repeat($.modifier),
            'struct',
            $._symbol,
            $.block
        ),

        struct_initializer: $ => prec(-1, seq(
            $._symbol,
            $.parameter_list,
            alias(seq(
                '{',
                commaSep(seq($._symbol, '=', $._expression)),
                '}',
            ), $.block)
        )),

        enum_declaration: $ => seq(
            repeat($.modifier),
            'enum',
            $._symbol,
            '{',
            seq(
                repeat(seq($._symbol, ',')),
                $._symbol,
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
            $._identifier,
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
            commaSep($._parameters),
            ')'
        ),

        _parameters: $ => choice(
            alias($._declaration_parameter, $.parameter),
            alias($._instanciation_parameter, $.parameter),
            $.ellipsis
        ),

        _declaration_parameter: $ => seq(
            repeat($.modifier),
            $._type,
            $._symbol,
            optional(seq(
                '=',
                $._expression
            ))
        ),

        _instanciation_parameter: $ => prec(3, seq(
            repeat($.modifier),
            optional(seq($._symbol, ':')),
            choice($._expression)
        )),

        ellipsis: _ => '...',

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
            field('name', $._symbol),
            optional(seq(
                '(',
                commaSep1(seq(
                    field('param', $._symbol),
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
            $._symbol,
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
            field('loop_item', $._symbol),
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
            commaSep($._symbol),
            ')',
            token('=>'),
            choice($.block, $._expression)
        ),

        declaration: $ => seq(
            repeat($.modifier),
            field('type_name', choice($._type, 'var')),
            $._symbol,
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

        gobject_contruct: $ => seq(
            repeat($.modifier),
            'construct',
            $.block
        ),

        namespace: $ => seq(
            'namespace',
            $._symbol,
            $.block
        ),

        using_directive: $ => seq(
            'using',
            commaSep1($._symbol),
            ';'
        ),

        _expression: $ => prec(-2, choice(
            $._symbol,
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

        new_instance: $ => prec(-1, choice(
            seq(
                'new',
                choice(
                    $.function_call,
                    $.chained_function_call,
                    $.array_identifier,
                    alias($.struct_initializer, $.object_initializer)
                )
            ),
            seq(
                sep('.', $._symbol),
                token.immediate('.new'),
                $.parameter_list
            )
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
            $._symbol
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
            '@"',
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
            $._symbol
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
            $._symbol,
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

        ownership_transfer: $ => prec.right(seq(
            '(',
            'owned',
            ')',
            $._symbol
        )),

        global_access: $ => prec.right(seq(
            token('global::'),
            $._symbol
        )),

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
            $._identifier,
            '<',
            commaSep1(choice($._symbol, $._type)),
            '>'
        )),

        _identifier: $ => choice(
            $.identifier,
            $.array_identifier,
            $.generic_identifier,
            $.address_of_identifier,
            $.indirection_identifier,
            $.ambiguous_identifier,
            prec(-1, $.underscore)
        ),

        identifier: _ => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

        ambiguous_identifier: $ => prec.left(seq(
            '@',
            $._identifier
        )),

        _symbol: $ => prec.right(sep1(choice('.', '->'), $._symbol_part)),

        _symbol_part: $ => choice(
            $.global_access, 
            $._identifier,
            $.string_literal,
            $.string_template,
            $.regex_literal,
            $.parenthesized_expression,
            $.this,
            $.primitive_type
        ),

        address_of_identifier: $ => prec(10, seq(
            '&',
            $._symbol
        )),

        indirection_identifier: $ => prec(10, seq(
            '*',
            $._symbol
        )),

        true: _ => 'true',

        false: _ => 'false',

        null: _ => 'null',

        this: _ => 'this',

        underscore: _ => '_',

        number: _ => /\d+/,

        comment: _ => token(choice(
            /\/\/.+/, // Single line
            seq(      // Multi-line
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),

    }
});

function sep1(symbol, rule) {
    return seq(rule, repeat(seq(symbol, rule)))
}

function sep(symbol, rule) {
    return optional(sep1(symbol, rule))
}

function commaSep1(rule) {
  return sep1(',', rule)
}

function commaSep(rule) {
    return sep(',', rule)
}
