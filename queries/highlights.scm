; Constant
(uppercased_identifier) @constant

; Methods

(function_definition
  (modifier)* @keyword
  (identifier) @method
)

(function_call
  modifier: (modifier)* @keyword
  identifier: [
  	(identifier) @method
    (camel_cased_identifier) @type
    (namespaced_identifier
        (identifier) @method .
    )
  ]
  (parameter_list)
)

(parameter_list
  "(" @punctuation.bracket
  [
  	(declaration_parameter)
    (instanciation_parameter)
  ]+
  ")" @punctuation.bracket
)

; Modifiers
(modifier) @keyword
"var" @keyword

; Types

(primitive_type) @type

; Keywords
"return" @keyword.return
"break" @keyword

; Other

(number) @number

(namespaced_identifier
  [
    (camel_cased_identifier) @namespace
    (identifier) @variable
  ]
  (
    "."
    [
      (identifier) @parameter
      (camel_cased_identifier) @type
      (uppercased_identifier) @constant
    ]
  )+
)

[
";"
"."
","
] @punctuation.delimiter

; Operators

[
  "+"
  "-"
  "*"
  "/"
] @operator

; Comments

(comment) @comment

; Namespace

(namespace
  "namespace" @include
  (camel_cased_identifier) @namespace
)

"using" @include

; Brackets

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

; Classes

(class_declaration
    (modifier) @keyword
    "class" @keyword
    (camel_cased_identifier) @type
)

; Class properties

(property_parameter) @keyword

; Strings and escape sequences

(string_literal) @string
(escape_sequence) @string.escape

; Assignment and declaration

"new" @keyword

; Parameters

(instanciation_parameter
    (modifier) @keyword
)

; GObject construct

"construct" @constructor

; Conditionals

[
"if"
"else"
"switch"
"case"
"default"
] @conditional

; Variable

(identifier) @variable

; Try statement

[
"try"
"catch"
] @exception
