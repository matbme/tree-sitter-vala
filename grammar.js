module.exports = grammar({
    name: 'vala',

    rules: {
        source_file: $ => repeat($._top_level),

        _top_level: $ => choice(
            $.function_definition,
            $.comment,
            $.namespace,
            $.declaration,
            $._statement,
            $.class_declaration,
            $.gobject_contruct
        ),

        function_definition: $ => seq(
            repeat($.modifier),
            $._type,
            $._identifiers,
            $.parameter_list,
            $.block
        ),

        function_call: $ => seq(
            repeat($.modifier),
            $._identifiers,
            $.parameter_list
        ),

        class_declaration: $ => seq(
            repeat($.modifier),
            'class',
            $.camel_cased_identifier,
            optional(seq(':', $._identifiers)),
            $.block
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
            'out'
        ),

        _type: $ => choice(
            $.primitive_type,
            $.namespaced_identifier,
            $.camel_cased_identifier
            // TODO: arrays, generics
        ),

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

        comment: $ => choice(
            /\/\/.+/, // Single line
            /\/\*(.|\n)+\*\// // Multi-line
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
            choice($._identifiers, $.string_literal, $.number)
        )),

        block: $ => seq(
            '{',
            repeat($._top_level),
            '}'
        ),

        _statement: $ => choice(
            $.return_statement,
            $.assignment,
        ),

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

        declaration: $ => seq(
            repeat($.modifier),
            choice($._type, 'var'),
            $._identifiers,
            choice(
                seq('=', $._expression, ';'),
                seq('{', $.gobject_property_acces, '}'),
                ';'
            )
        ),

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

        _expression: $ => choice(
            $._identifiers,
            $.number,
            $.unary_expression,
            $.binary_expression,
            $.string_literal,
            $.function_call,
            $.new_instance
        ),

        new_instance: $ => seq(
            'new',
            $.function_call
        ),

        unary_expression: $ => prec(3, choice(
            seq('-', $._expression),
            seq('!', $._expression)
        )),

        binary_expression: $ => choice(
            prec.left(2, seq($._expression, '*', $._expression)),
            prec.left(2, seq($._expression, '/', $._expression)),
            prec.left(1, seq($._expression, '+', $._expression)),
            prec.left(1, seq($._expression, '-', $._expression))
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
            $.identifier,
            $.camel_cased_identifier,
            $.uppercased_identifier,
            $.namespaced_identifier
        ),

        identifier: $ => /[a-z_]+/,

        camel_cased_identifier: $ => /(?:[A-Z][a-z]*)+/,

        uppercased_identifier: $ => /[A-Z_]+/,

        namespaced_identifier: $ => seq(
            choice($.identifier, $.camel_cased_identifier),
            repeat1(
                seq('.', choice(
                    $.identifier, 
                    $.camel_cased_identifier, 
                    $.uppercased_identifier)
                )
            )
        ),

        number: $ => /\d+/
    }
});
