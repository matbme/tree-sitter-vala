; Variable

(identifier) @variable

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
