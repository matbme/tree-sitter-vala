; Constant
(uppercased_identifier) @constant

; Methods

(function_definition
  (modifier)* @keyword
  type: (_)
  name: (_) @method
  (
    (_)
    (camel_cased_identifier) @type
  )
)

(function_call
  identifier: [
  	(identifier) @method
    (camel_cased_identifier) @type
    (generic_identifier (_) @type) 
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
"->"
] @punctuation.delimiter

; Operators

(binary_expression
  (_)
  [
    "+"
    "-"
 	"*"
    "/"
  ] @operator    
  (_)
)

(null) @keyword

; Comments

(comment) @comment

; Namespace

(namespace
  "namespace" @include
  (camel_cased_identifier) @namespace
)

"global" @namespace

"using" @include

; Brackets

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

; declaration
(declaration
  (_)*
  [
    (camel_cased_identifier) @type
    (_)
  ]
  (_)*
)

; Classes

(class_declaration
    (modifier) @keyword
    "class" @keyword
    [
      (camel_cased_identifier) @type
      (generic_identifier (_) @type )
    ]
)

(class_constructor_definition
  (modifier)* @keyword
  [
    (identifier)
    (namespaced_identifier)
    (camel_cased_identifier)
  ] @type
  (_)*
)

; Interfaces

(interface_declaration
    (modifier) @keyword
    "interface" @keyword
    [
      (camel_cased_identifier) @type
      (generic_identifier (_) @type )
    ]
)

; Class properties

(property_parameter) @keyword
(this) @keyword

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

; Enum

"enum" @keyword
(enum_declaration
    (camel_cased_identifier) @type
    (_)*
)

; Loop

[
"for"
"foreach"
"in"
"while"
"do"
] @repeat

(foreach_statement
  (_)*
  loop_item: (identifier) @variable
  (_)*
)

; Generics

(generic_identifier
  (camel_cased_identifier) @type
)

; Closure

(closure
    (identifier)* @variable
    (_)*
)

; Casting

(dynamic_cast
  (_)
  "as" @keyword
  (_)
)

; Throw error

"throws" @keyword
"throw" @exception

; Pointers

(address_of_identifier
  "&" @symbol
  (_)*
)

(pointer_type
  (_)*
  "*" @symbol
)

(indirection_identifier
  "*" @symbol
  (_)*
)

"delete" @keyword

; Ownership

(ownership_transfer
  "owned" @keyword
  (_)
)

; Booleans

(true) @boolean
(false) @boolean

; Regex

(regex_literal) @string.regex
