module.exports = grammar({
    name: 'vala',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.function_definition,
            $.comment,
            $.namespace
        ),

        function_definition: $ => seq(
            repeat($.modifier),
            $._type,
            $._identifiers,
            $.parameter_list,
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
            $.primitive_type
            // TODO: arrays, generics, namespaced
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
            optional(seq($.parameter, repeat(seq(',', $.parameter)))),
            ')'
        ),

        parameter: $ => seq(repeat($.modifier), $._type, $._identifiers),

        block: $ => seq(
            '{',
            repeat(
                choice(
                    $._statement,
                    $._definition
                )
            ),
            '}'
        ),

        _statement: $ => choice(
            $.return_statement,
            $.assignment
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

        namespace: $ => seq(
            'namespace',
            $._identifiers,
            $.block
        ),

        _expression: $ => choice(
            $._identifiers,
            $.number,
            $.unary_expression,
            $.binary_expression
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

        _identifiers: $ => choice(
            $.identifier,
            $.camel_cased_identifier,
            $.uppercased_identifier
        ),

        identifier: $ => /[a-z_]+/,

        camel_cased_identifier: $ => /(?:[A-Z][a-z]*)+/,

        uppercased_identifier: $ => /[A-Z_]+/,

        number: $ => /\d+/
    }
});
