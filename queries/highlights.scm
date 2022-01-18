; Variable

(identifier) @variable

"var" @definition.var

; Constant
(uppercased_identifier) @constant

; Methods

(function_definition
  (modifier) @keyword
  (identifier) @method
)

; Modifiers
(modifier) @keyword

; Types

(primitive_type) @type

; Keywords
"return" @keyword.return

; Other

(number) @number

(namespaced_identifier
    (identifier) @variable
    (camel_cased_identifier) @type
    (uppercased_identifier) @constant
)

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

; Classes

(class_declaration
    (modifier) @keyword
    "class" @keyword
    (camel_cased_identifier) @type
)
