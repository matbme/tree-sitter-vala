; Variable

(identifier) @variable

; Constant
(uppercased_identifier) @constant

; Methods

(function_definition
  (modifier) @keyword
  (identifier) @method
)

; Types

(primitive_type) @type

; Keywords
"return" @keyword.return

; Constants

(number) @number

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
  "namespace" @keyword
  (camel_cased_identifier) @definition.namespace
)

; Brackets

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket
