#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_class = 1,
  anon_sym_COLON = 2,
  anon_sym_abstract = 3,
  anon_sym_const = 4,
  anon_sym_dynamic = 5,
  anon_sym_ensures = 6,
  anon_sym_extern = 7,
  anon_sym_inline = 8,
  anon_sym_internal = 9,
  anon_sym_override = 10,
  anon_sym_private = 11,
  anon_sym_protected = 12,
  anon_sym_public = 13,
  anon_sym_requires = 14,
  anon_sym_signal = 15,
  anon_sym_static = 16,
  anon_sym_virtual = 17,
  anon_sym_volatile = 18,
  anon_sym_weak = 19,
  anon_sym_async = 20,
  anon_sym_owned = 21,
  anon_sym_unowned = 22,
  anon_sym_ref = 23,
  anon_sym_out = 24,
  anon_sym_bool = 25,
  anon_sym_char = 26,
  anon_sym_double = 27,
  anon_sym_float = 28,
  anon_sym_size_t = 29,
  anon_sym_ssize_t = 30,
  anon_sym_string = 31,
  anon_sym_unichar = 32,
  anon_sym_void = 33,
  anon_sym_int = 34,
  anon_sym_int8 = 35,
  anon_sym_int16 = 36,
  anon_sym_int32 = 37,
  anon_sym_int64 = 38,
  anon_sym_long = 39,
  anon_sym_short = 40,
  anon_sym_uchar = 41,
  anon_sym_uint = 42,
  anon_sym_uint8 = 43,
  anon_sym_uint16 = 44,
  anon_sym_uint32 = 45,
  anon_sym_uint64 = 46,
  anon_sym_ulong = 47,
  anon_sym_ushort = 48,
  aux_sym_comment_token1 = 49,
  aux_sym_comment_token2 = 50,
  anon_sym_LPAREN = 51,
  anon_sym_COMMA = 52,
  anon_sym_RPAREN = 53,
  anon_sym_LBRACE = 54,
  anon_sym_RBRACE = 55,
  anon_sym_return = 56,
  anon_sym_SEMI = 57,
  anon_sym_EQ = 58,
  anon_sym_var = 59,
  anon_sym_get = 60,
  anon_sym_set = 61,
  anon_sym_construct = 62,
  anon_sym_namespace = 63,
  anon_sym_new = 64,
  anon_sym_DASH = 65,
  anon_sym_BANG = 66,
  anon_sym_STAR = 67,
  anon_sym_SLASH = 68,
  anon_sym_PLUS = 69,
  sym_escape_sequence = 70,
  anon_sym_DQUOTE = 71,
  aux_sym_string_literal_token1 = 72,
  sym_identifier = 73,
  sym_camel_cased_identifier = 74,
  sym_uppercased_identifier = 75,
  anon_sym_DOT = 76,
  sym_number = 77,
  sym_source_file = 78,
  sym__top_level = 79,
  sym_function_definition = 80,
  sym_class_declaration = 81,
  sym_modifier = 82,
  sym__type = 83,
  sym_primitive_type = 84,
  sym_comment = 85,
  sym_parameter_list = 86,
  sym__parameter = 87,
  sym_declaration_parameter = 88,
  sym_instanciation_parameter = 89,
  sym_block = 90,
  sym__statement = 91,
  sym_return_statement = 92,
  sym_assignment = 93,
  sym_declaration = 94,
  sym_property_parameter = 95,
  sym_gobject_property_acces = 96,
  sym_namespace = 97,
  sym__expression = 98,
  sym_new_instance = 99,
  sym_unary_expression = 100,
  sym_binary_expression = 101,
  sym_string_literal = 102,
  sym__identifiers = 103,
  sym_namespaced_identifier = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_function_definition_repeat1 = 106,
  aux_sym_parameter_list_repeat1 = 107,
  aux_sym_block_repeat1 = 108,
  aux_sym_gobject_property_acces_repeat1 = 109,
  aux_sym_string_literal_repeat1 = 110,
  aux_sym_namespaced_identifier_repeat1 = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_COLON] = ":",
  [anon_sym_abstract] = "abstract",
  [anon_sym_const] = "const",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_ensures] = "ensures",
  [anon_sym_extern] = "extern",
  [anon_sym_inline] = "inline",
  [anon_sym_internal] = "internal",
  [anon_sym_override] = "override",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_public] = "public",
  [anon_sym_requires] = "requires",
  [anon_sym_signal] = "signal",
  [anon_sym_static] = "static",
  [anon_sym_virtual] = "virtual",
  [anon_sym_volatile] = "volatile",
  [anon_sym_weak] = "weak",
  [anon_sym_async] = "async",
  [anon_sym_owned] = "owned",
  [anon_sym_unowned] = "unowned",
  [anon_sym_ref] = "ref",
  [anon_sym_out] = "out",
  [anon_sym_bool] = "bool",
  [anon_sym_char] = "char",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_size_t] = "size_t",
  [anon_sym_ssize_t] = "ssize_t",
  [anon_sym_string] = "string",
  [anon_sym_unichar] = "unichar",
  [anon_sym_void] = "void",
  [anon_sym_int] = "int",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_long] = "long",
  [anon_sym_short] = "short",
  [anon_sym_uchar] = "uchar",
  [anon_sym_uint] = "uint",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_ulong] = "ulong",
  [anon_sym_ushort] = "ushort",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_var] = "var",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_construct] = "construct",
  [anon_sym_namespace] = "namespace",
  [anon_sym_new] = "new",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_identifier] = "identifier",
  [sym_camel_cased_identifier] = "camel_cased_identifier",
  [sym_uppercased_identifier] = "uppercased_identifier",
  [anon_sym_DOT] = ".",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_function_definition] = "function_definition",
  [sym_class_declaration] = "class_declaration",
  [sym_modifier] = "modifier",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_comment] = "comment",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym_declaration_parameter] = "declaration_parameter",
  [sym_instanciation_parameter] = "instanciation_parameter",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_assignment] = "assignment",
  [sym_declaration] = "declaration",
  [sym_property_parameter] = "property_parameter",
  [sym_gobject_property_acces] = "gobject_property_acces",
  [sym_namespace] = "namespace",
  [sym__expression] = "_expression",
  [sym_new_instance] = "new_instance",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string_literal] = "string_literal",
  [sym__identifiers] = "_identifiers",
  [sym_namespaced_identifier] = "namespaced_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_gobject_property_acces_repeat1] = "gobject_property_acces_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_namespaced_identifier_repeat1] = "namespaced_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_ensures] = anon_sym_ensures,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_requires] = anon_sym_requires,
  [anon_sym_signal] = anon_sym_signal,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_owned] = anon_sym_owned,
  [anon_sym_unowned] = anon_sym_unowned,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_size_t] = anon_sym_size_t,
  [anon_sym_ssize_t] = anon_sym_ssize_t,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_unichar] = anon_sym_unichar,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_uchar] = anon_sym_uchar,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_ushort] = anon_sym_ushort,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_construct] = anon_sym_construct,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_identifier] = sym_identifier,
  [sym_camel_cased_identifier] = sym_camel_cased_identifier,
  [sym_uppercased_identifier] = sym_uppercased_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_function_definition] = sym_function_definition,
  [sym_class_declaration] = sym_class_declaration,
  [sym_modifier] = sym_modifier,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_comment] = sym_comment,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym_declaration_parameter] = sym_declaration_parameter,
  [sym_instanciation_parameter] = sym_instanciation_parameter,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_assignment] = sym_assignment,
  [sym_declaration] = sym_declaration,
  [sym_property_parameter] = sym_property_parameter,
  [sym_gobject_property_acces] = sym_gobject_property_acces,
  [sym_namespace] = sym_namespace,
  [sym__expression] = sym__expression,
  [sym_new_instance] = sym_new_instance,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string_literal] = sym_string_literal,
  [sym__identifiers] = sym__identifiers,
  [sym_namespaced_identifier] = sym_namespaced_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_gobject_property_acces_repeat1] = aux_sym_gobject_property_acces_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_namespaced_identifier_repeat1] = aux_sym_namespaced_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ensures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_owned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unowned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssize_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unichar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_construct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_camel_cased_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercased_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_instanciation_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_property_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_gobject_property_acces] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_new_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__identifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_namespaced_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gobject_property_acces_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespaced_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(132);
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'v') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(284);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(418);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(418);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 'w') ADVANCE(284);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(418);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(192);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(193);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(199);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 'w') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(419);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'v') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(419);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(45);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'q') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(168);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 122:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 123:
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 127:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(129);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '/') ADVANCE(205);
      END_STATE();
    case 128:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(129);
      if (lookahead == '*') ADVANCE(127);
      END_STATE();
    case 130:
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 131:
      if (eof) ADVANCE(132);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'v') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(284);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(418);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_signal);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_signal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_async);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_owned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unowned);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_unowned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_unichar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_uchar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(129);
      if (lookahead == '*') ADVANCE(127);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_construct);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_construct);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(393);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(381);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(327);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'q') ADVANCE(406);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'q') ADVANCE(406);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'z') ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(417);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(357);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(169);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 'x') ADVANCE(404);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == 'y') ADVANCE(341);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(248);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(255);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead == 'v') ADVANCE(287);
      if (lookahead == 'w') ADVANCE(342);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(320);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(369);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(347);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(339);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(294);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (lookahead == '_') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(419);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_uppercased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 131},
  [2] = {.lex_state = 131},
  [3] = {.lex_state = 131},
  [4] = {.lex_state = 131},
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 131},
  [7] = {.lex_state = 131},
  [8] = {.lex_state = 131},
  [9] = {.lex_state = 131},
  [10] = {.lex_state = 131},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 131},
  [14] = {.lex_state = 131},
  [15] = {.lex_state = 131},
  [16] = {.lex_state = 131},
  [17] = {.lex_state = 131},
  [18] = {.lex_state = 131},
  [19] = {.lex_state = 131},
  [20] = {.lex_state = 131},
  [21] = {.lex_state = 131},
  [22] = {.lex_state = 131},
  [23] = {.lex_state = 131},
  [24] = {.lex_state = 131},
  [25] = {.lex_state = 131},
  [26] = {.lex_state = 131},
  [27] = {.lex_state = 131},
  [28] = {.lex_state = 131},
  [29] = {.lex_state = 131},
  [30] = {.lex_state = 131},
  [31] = {.lex_state = 131},
  [32] = {.lex_state = 131},
  [33] = {.lex_state = 131},
  [34] = {.lex_state = 131},
  [35] = {.lex_state = 131},
  [36] = {.lex_state = 131},
  [37] = {.lex_state = 131},
  [38] = {.lex_state = 131},
  [39] = {.lex_state = 131},
  [40] = {.lex_state = 131},
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 131},
  [43] = {.lex_state = 131},
  [44] = {.lex_state = 131},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_ensures] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_requires] = ACTIONS(1),
    [anon_sym_signal] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_owned] = ACTIONS(1),
    [anon_sym_unowned] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_size_t] = ACTIONS(1),
    [anon_sym_ssize_t] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_unichar] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_uchar] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_construct] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_camel_cased_identifier] = ACTIONS(1),
    [sym_uppercased_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(165),
    [sym__top_level] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_modifier] = STATE(46),
    [sym__type] = STATE(117),
    [sym_primitive_type] = STATE(117),
    [sym_comment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym__identifiers] = STATE(164),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_namespace] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(25),
  },
  [2] = {
    [sym__top_level] = STATE(10),
    [sym_function_definition] = STATE(10),
    [sym_class_declaration] = STATE(10),
    [sym_modifier] = STATE(46),
    [sym__type] = STATE(117),
    [sym_primitive_type] = STATE(117),
    [sym_comment] = STATE(10),
    [sym__statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym_declaration] = STATE(10),
    [sym_namespace] = STATE(10),
    [sym__identifiers] = STATE(164),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_namespace] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(25),
  },
  [3] = {
    [sym__top_level] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_class_declaration] = STATE(8),
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(98),
    [sym_primitive_type] = STATE(98),
    [sym_comment] = STATE(8),
    [sym__statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym__identifiers] = STATE(169),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(31),
    [aux_sym_comment_token2] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_namespace] = ACTIONS(39),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(41),
  },
  [4] = {
    [sym__top_level] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_class_declaration] = STATE(8),
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(98),
    [sym_primitive_type] = STATE(98),
    [sym_comment] = STATE(8),
    [sym__statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym__identifiers] = STATE(169),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(31),
    [aux_sym_comment_token2] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_namespace] = ACTIONS(39),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(41),
  },
  [5] = {
    [sym__top_level] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_class_declaration] = STATE(4),
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(98),
    [sym_primitive_type] = STATE(98),
    [sym_comment] = STATE(4),
    [sym__statement] = STATE(4),
    [sym_return_statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_declaration] = STATE(4),
    [sym_namespace] = STATE(4),
    [sym__identifiers] = STATE(169),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(31),
    [aux_sym_comment_token2] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_namespace] = ACTIONS(39),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(41),
  },
  [6] = {
    [sym__top_level] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_class_declaration] = STATE(8),
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(98),
    [sym_primitive_type] = STATE(98),
    [sym_comment] = STATE(8),
    [sym__statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym__identifiers] = STATE(169),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(31),
    [aux_sym_comment_token2] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_namespace] = ACTIONS(39),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(41),
  },
  [7] = {
    [sym__top_level] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_class_declaration] = STATE(6),
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(98),
    [sym_primitive_type] = STATE(98),
    [sym_comment] = STATE(6),
    [sym__statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_declaration] = STATE(6),
    [sym_namespace] = STATE(6),
    [sym__identifiers] = STATE(169),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(31),
    [aux_sym_comment_token2] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_namespace] = ACTIONS(39),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__top_level] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_class_declaration] = STATE(8),
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(98),
    [sym_primitive_type] = STATE(98),
    [sym_comment] = STATE(8),
    [sym__statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym__identifiers] = STATE(169),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_class] = ACTIONS(51),
    [anon_sym_abstract] = ACTIONS(54),
    [anon_sym_const] = ACTIONS(54),
    [anon_sym_dynamic] = ACTIONS(54),
    [anon_sym_ensures] = ACTIONS(54),
    [anon_sym_extern] = ACTIONS(54),
    [anon_sym_inline] = ACTIONS(54),
    [anon_sym_internal] = ACTIONS(54),
    [anon_sym_override] = ACTIONS(54),
    [anon_sym_private] = ACTIONS(54),
    [anon_sym_protected] = ACTIONS(54),
    [anon_sym_public] = ACTIONS(54),
    [anon_sym_requires] = ACTIONS(54),
    [anon_sym_signal] = ACTIONS(54),
    [anon_sym_static] = ACTIONS(54),
    [anon_sym_virtual] = ACTIONS(54),
    [anon_sym_volatile] = ACTIONS(54),
    [anon_sym_weak] = ACTIONS(54),
    [anon_sym_async] = ACTIONS(54),
    [anon_sym_owned] = ACTIONS(54),
    [anon_sym_unowned] = ACTIONS(54),
    [anon_sym_ref] = ACTIONS(54),
    [anon_sym_out] = ACTIONS(54),
    [anon_sym_bool] = ACTIONS(57),
    [anon_sym_char] = ACTIONS(57),
    [anon_sym_double] = ACTIONS(57),
    [anon_sym_float] = ACTIONS(57),
    [anon_sym_size_t] = ACTIONS(57),
    [anon_sym_ssize_t] = ACTIONS(57),
    [anon_sym_string] = ACTIONS(57),
    [anon_sym_unichar] = ACTIONS(57),
    [anon_sym_void] = ACTIONS(57),
    [anon_sym_int] = ACTIONS(57),
    [anon_sym_int8] = ACTIONS(60),
    [anon_sym_int16] = ACTIONS(60),
    [anon_sym_int32] = ACTIONS(60),
    [anon_sym_int64] = ACTIONS(60),
    [anon_sym_long] = ACTIONS(57),
    [anon_sym_short] = ACTIONS(57),
    [anon_sym_uchar] = ACTIONS(57),
    [anon_sym_uint] = ACTIONS(57),
    [anon_sym_uint8] = ACTIONS(60),
    [anon_sym_uint16] = ACTIONS(60),
    [anon_sym_uint32] = ACTIONS(60),
    [anon_sym_uint64] = ACTIONS(60),
    [anon_sym_ulong] = ACTIONS(57),
    [anon_sym_ushort] = ACTIONS(57),
    [aux_sym_comment_token1] = ACTIONS(63),
    [aux_sym_comment_token2] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_return] = ACTIONS(68),
    [anon_sym_var] = ACTIONS(71),
    [anon_sym_namespace] = ACTIONS(74),
    [sym_identifier] = ACTIONS(77),
    [sym_camel_cased_identifier] = ACTIONS(80),
    [sym_uppercased_identifier] = ACTIONS(83),
  },
  [9] = {
    [sym__top_level] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(98),
    [sym_primitive_type] = STATE(98),
    [sym_comment] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym__identifiers] = STATE(169),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_class] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_dynamic] = ACTIONS(7),
    [anon_sym_ensures] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_requires] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_weak] = ACTIONS(7),
    [anon_sym_async] = ACTIONS(7),
    [anon_sym_owned] = ACTIONS(7),
    [anon_sym_unowned] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(31),
    [aux_sym_comment_token2] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_namespace] = ACTIONS(39),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(41),
  },
  [10] = {
    [sym__top_level] = STATE(10),
    [sym_function_definition] = STATE(10),
    [sym_class_declaration] = STATE(10),
    [sym_modifier] = STATE(46),
    [sym__type] = STATE(117),
    [sym_primitive_type] = STATE(117),
    [sym_comment] = STATE(10),
    [sym__statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym_declaration] = STATE(10),
    [sym_namespace] = STATE(10),
    [sym__identifiers] = STATE(164),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(93),
    [anon_sym_const] = ACTIONS(93),
    [anon_sym_dynamic] = ACTIONS(93),
    [anon_sym_ensures] = ACTIONS(93),
    [anon_sym_extern] = ACTIONS(93),
    [anon_sym_inline] = ACTIONS(93),
    [anon_sym_internal] = ACTIONS(93),
    [anon_sym_override] = ACTIONS(93),
    [anon_sym_private] = ACTIONS(93),
    [anon_sym_protected] = ACTIONS(93),
    [anon_sym_public] = ACTIONS(93),
    [anon_sym_requires] = ACTIONS(93),
    [anon_sym_signal] = ACTIONS(93),
    [anon_sym_static] = ACTIONS(93),
    [anon_sym_virtual] = ACTIONS(93),
    [anon_sym_volatile] = ACTIONS(93),
    [anon_sym_weak] = ACTIONS(93),
    [anon_sym_async] = ACTIONS(93),
    [anon_sym_owned] = ACTIONS(93),
    [anon_sym_unowned] = ACTIONS(93),
    [anon_sym_ref] = ACTIONS(93),
    [anon_sym_out] = ACTIONS(93),
    [anon_sym_bool] = ACTIONS(96),
    [anon_sym_char] = ACTIONS(96),
    [anon_sym_double] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(96),
    [anon_sym_size_t] = ACTIONS(96),
    [anon_sym_ssize_t] = ACTIONS(96),
    [anon_sym_string] = ACTIONS(96),
    [anon_sym_unichar] = ACTIONS(96),
    [anon_sym_void] = ACTIONS(96),
    [anon_sym_int] = ACTIONS(96),
    [anon_sym_int8] = ACTIONS(99),
    [anon_sym_int16] = ACTIONS(99),
    [anon_sym_int32] = ACTIONS(99),
    [anon_sym_int64] = ACTIONS(99),
    [anon_sym_long] = ACTIONS(96),
    [anon_sym_short] = ACTIONS(96),
    [anon_sym_uchar] = ACTIONS(96),
    [anon_sym_uint] = ACTIONS(96),
    [anon_sym_uint8] = ACTIONS(99),
    [anon_sym_uint16] = ACTIONS(99),
    [anon_sym_uint32] = ACTIONS(99),
    [anon_sym_uint64] = ACTIONS(99),
    [anon_sym_ulong] = ACTIONS(96),
    [anon_sym_ushort] = ACTIONS(96),
    [aux_sym_comment_token1] = ACTIONS(102),
    [aux_sym_comment_token2] = ACTIONS(102),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_var] = ACTIONS(108),
    [anon_sym_namespace] = ACTIONS(111),
    [sym_identifier] = ACTIONS(114),
    [sym_camel_cased_identifier] = ACTIONS(117),
    [sym_uppercased_identifier] = ACTIONS(120),
  },
  [11] = {
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(115),
    [sym_primitive_type] = STATE(115),
    [sym__parameter] = STATE(132),
    [sym_declaration_parameter] = STATE(132),
    [sym_instanciation_parameter] = STATE(132),
    [sym_string_literal] = STATE(143),
    [sym__identifiers] = STATE(143),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(47),
    [anon_sym_abstract] = ACTIONS(123),
    [anon_sym_const] = ACTIONS(123),
    [anon_sym_dynamic] = ACTIONS(123),
    [anon_sym_ensures] = ACTIONS(123),
    [anon_sym_extern] = ACTIONS(123),
    [anon_sym_inline] = ACTIONS(123),
    [anon_sym_internal] = ACTIONS(123),
    [anon_sym_override] = ACTIONS(123),
    [anon_sym_private] = ACTIONS(123),
    [anon_sym_protected] = ACTIONS(123),
    [anon_sym_public] = ACTIONS(123),
    [anon_sym_requires] = ACTIONS(123),
    [anon_sym_signal] = ACTIONS(123),
    [anon_sym_static] = ACTIONS(123),
    [anon_sym_virtual] = ACTIONS(123),
    [anon_sym_volatile] = ACTIONS(123),
    [anon_sym_weak] = ACTIONS(123),
    [anon_sym_async] = ACTIONS(123),
    [anon_sym_owned] = ACTIONS(123),
    [anon_sym_unowned] = ACTIONS(123),
    [anon_sym_ref] = ACTIONS(123),
    [anon_sym_out] = ACTIONS(123),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(129),
  },
  [12] = {
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(115),
    [sym_primitive_type] = STATE(115),
    [sym__parameter] = STATE(153),
    [sym_declaration_parameter] = STATE(153),
    [sym_instanciation_parameter] = STATE(153),
    [sym_string_literal] = STATE(143),
    [sym__identifiers] = STATE(143),
    [sym_namespaced_identifier] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(47),
    [anon_sym_abstract] = ACTIONS(123),
    [anon_sym_const] = ACTIONS(123),
    [anon_sym_dynamic] = ACTIONS(123),
    [anon_sym_ensures] = ACTIONS(123),
    [anon_sym_extern] = ACTIONS(123),
    [anon_sym_inline] = ACTIONS(123),
    [anon_sym_internal] = ACTIONS(123),
    [anon_sym_override] = ACTIONS(123),
    [anon_sym_private] = ACTIONS(123),
    [anon_sym_protected] = ACTIONS(123),
    [anon_sym_public] = ACTIONS(123),
    [anon_sym_requires] = ACTIONS(123),
    [anon_sym_signal] = ACTIONS(123),
    [anon_sym_static] = ACTIONS(123),
    [anon_sym_virtual] = ACTIONS(123),
    [anon_sym_volatile] = ACTIONS(123),
    [anon_sym_weak] = ACTIONS(123),
    [anon_sym_async] = ACTIONS(123),
    [anon_sym_owned] = ACTIONS(123),
    [anon_sym_unowned] = ACTIONS(123),
    [anon_sym_ref] = ACTIONS(123),
    [anon_sym_out] = ACTIONS(123),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(23),
    [sym_uppercased_identifier] = ACTIONS(129),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(133), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(131), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [61] = 2,
    ACTIONS(135), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(137), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [122] = 2,
    ACTIONS(141), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(139), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [183] = 2,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(145), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [244] = 2,
    ACTIONS(135), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(137), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [305] = 2,
    ACTIONS(149), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(147), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [366] = 2,
    ACTIONS(153), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(151), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [427] = 2,
    ACTIONS(157), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(155), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [488] = 2,
    ACTIONS(143), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(145), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [549] = 2,
    ACTIONS(161), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(159), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [610] = 2,
    ACTIONS(165), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(163), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [671] = 2,
    ACTIONS(169), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(167), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [732] = 2,
    ACTIONS(173), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(171), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [793] = 2,
    ACTIONS(153), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(151), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [854] = 2,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(163), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [915] = 2,
    ACTIONS(177), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(175), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [976] = 2,
    ACTIONS(179), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(181), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1037] = 2,
    ACTIONS(169), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(167), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1098] = 2,
    ACTIONS(183), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(185), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1159] = 2,
    ACTIONS(187), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(189), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1220] = 2,
    ACTIONS(141), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(139), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1281] = 2,
    ACTIONS(187), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(189), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1342] = 2,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(159), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1403] = 2,
    ACTIONS(183), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(185), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1464] = 2,
    ACTIONS(179), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(181), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1525] = 2,
    ACTIONS(133), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(131), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1586] = 2,
    ACTIONS(193), 11,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_RBRACE,
    ACTIONS(191), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1647] = 2,
    ACTIONS(193), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(191), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1708] = 2,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(147), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1769] = 2,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(155), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1830] = 2,
    ACTIONS(173), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(171), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1891] = 2,
    ACTIONS(177), 11,
      ts_builtin_sym_end,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(175), 45,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_return,
      anon_sym_var,
      anon_sym_namespace,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1952] = 9,
    ACTIONS(195), 1,
      anon_sym_class,
    ACTIONS(197), 1,
      anon_sym_var,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_camel_cased_identifier,
    STATE(49), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(95), 3,
      sym__type,
      sym_primitive_type,
      sym_namespaced_identifier,
    ACTIONS(11), 8,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
    ACTIONS(9), 16,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
    ACTIONS(7), 22,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2026] = 9,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_camel_cased_identifier,
    ACTIONS(203), 1,
      anon_sym_class,
    ACTIONS(205), 1,
      anon_sym_var,
    STATE(49), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(105), 3,
      sym__type,
      sym_primitive_type,
      sym_namespaced_identifier,
    ACTIONS(11), 8,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
    ACTIONS(9), 16,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
    ACTIONS(7), 22,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2100] = 7,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_camel_cased_identifier,
    STATE(51), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(99), 3,
      sym__type,
      sym_primitive_type,
      sym_namespaced_identifier,
    ACTIONS(11), 8,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
    ACTIONS(9), 16,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
    ACTIONS(207), 22,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2168] = 6,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(150), 3,
      sym_string_literal,
      sym__identifiers,
      sym_namespaced_identifier,
    ACTIONS(211), 8,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
    ACTIONS(209), 38,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
  [2234] = 4,
    STATE(49), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(220), 9,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      sym_camel_cased_identifier,
    ACTIONS(215), 19,
      anon_sym_class,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_var,
      sym_identifier,
    ACTIONS(217), 22,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2295] = 2,
    ACTIONS(224), 9,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_DQUOTE,
    ACTIONS(222), 41,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [2350] = 4,
    STATE(51), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(220), 9,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      sym_camel_cased_identifier,
    ACTIONS(215), 17,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      sym_identifier,
    ACTIONS(226), 22,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2409] = 2,
    ACTIONS(224), 9,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      sym_camel_cased_identifier,
    ACTIONS(222), 41,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_var,
      sym_identifier,
  [2464] = 2,
    ACTIONS(224), 9,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      sym_camel_cased_identifier,
    ACTIONS(222), 39,
      anon_sym_abstract,
      anon_sym_const,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_double,
      anon_sym_float,
      anon_sym_size_t,
      anon_sym_ssize_t,
      anon_sym_string,
      anon_sym_unichar,
      anon_sym_void,
      anon_sym_int,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint,
      anon_sym_ulong,
      anon_sym_ushort,
      sym_identifier,
  [2517] = 7,
    ACTIONS(231), 1,
      anon_sym_const,
    STATE(58), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(124), 1,
      sym_modifier,
    STATE(129), 1,
      sym_property_parameter,
    STATE(161), 1,
      sym_gobject_property_acces,
    ACTIONS(233), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(229), 21,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2561] = 7,
    ACTIONS(231), 1,
      anon_sym_const,
    STATE(58), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(124), 1,
      sym_modifier,
    STATE(129), 1,
      sym_property_parameter,
    STATE(167), 1,
      sym_gobject_property_acces,
    ACTIONS(233), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(229), 21,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2605] = 7,
    ACTIONS(238), 1,
      anon_sym_const,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(124), 1,
      sym_modifier,
    STATE(129), 1,
      sym_property_parameter,
    ACTIONS(243), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(235), 21,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2649] = 7,
    ACTIONS(231), 1,
      anon_sym_const,
    STATE(58), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(124), 1,
      sym_modifier,
    STATE(129), 1,
      sym_property_parameter,
    STATE(170), 1,
      sym_gobject_property_acces,
    ACTIONS(233), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(229), 21,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2693] = 7,
    ACTIONS(231), 1,
      anon_sym_const,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(124), 1,
      sym_modifier,
    STATE(129), 1,
      sym_property_parameter,
    ACTIONS(233), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(229), 21,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2737] = 7,
    ACTIONS(231), 1,
      anon_sym_const,
    STATE(58), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(124), 1,
      sym_modifier,
    STATE(129), 1,
      sym_property_parameter,
    STATE(163), 1,
      sym_gobject_property_acces,
    ACTIONS(233), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(229), 21,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
  [2781] = 2,
    ACTIONS(248), 1,
      anon_sym_const,
    ACTIONS(241), 25,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_RBRACE,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [2812] = 2,
    ACTIONS(252), 1,
      anon_sym_const,
    ACTIONS(250), 25,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_RBRACE,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [2843] = 2,
    ACTIONS(181), 1,
      anon_sym_const,
    ACTIONS(179), 25,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_RBRACE,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [2874] = 2,
    ACTIONS(191), 1,
      anon_sym_const,
    ACTIONS(193), 25,
      anon_sym_abstract,
      anon_sym_dynamic,
      anon_sym_ensures,
      anon_sym_extern,
      anon_sym_inline,
      anon_sym_internal,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_requires,
      anon_sym_signal,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_weak,
      anon_sym_async,
      anon_sym_owned,
      anon_sym_unowned,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_RBRACE,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [2905] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(260), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(89), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [2937] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(262), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(90), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [2969] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(264), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(116), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3001] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(266), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(119), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3033] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(268), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(121), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3065] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(270), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(108), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3097] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(106), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3129] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(274), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(120), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3161] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(276), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(104), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3193] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(278), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(94), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3225] = 8,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_new,
    ACTIONS(258), 1,
      sym_uppercased_identifier,
    ACTIONS(280), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(256), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(107), 5,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
  [3257] = 4,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(284), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(282), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3281] = 4,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(291), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(289), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3305] = 2,
    ACTIONS(284), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(282), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DOT,
  [3324] = 3,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(295), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3343] = 4,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
    ACTIONS(297), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [3360] = 1,
    ACTIONS(299), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3370] = 1,
    ACTIONS(301), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3380] = 3,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_parameter_list,
    ACTIONS(305), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3394] = 1,
    ACTIONS(307), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3403] = 1,
    ACTIONS(309), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3412] = 2,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
    ACTIONS(297), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [3423] = 1,
    ACTIONS(311), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3432] = 5,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_parameter_list,
  [3448] = 3,
    ACTIONS(319), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(137), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3460] = 3,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3472] = 3,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3484] = 3,
    ACTIONS(329), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(157), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3496] = 3,
    ACTIONS(331), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(142), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3508] = 3,
    ACTIONS(333), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(144), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3520] = 1,
    ACTIONS(335), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3528] = 3,
    ACTIONS(337), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(112), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3540] = 3,
    ACTIONS(339), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(127), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3552] = 5,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym_parameter_list,
  [3568] = 3,
    ACTIONS(347), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(118), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3580] = 3,
    ACTIONS(349), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(151), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3592] = 3,
    ACTIONS(351), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(159), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3604] = 3,
    ACTIONS(353), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(155), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3616] = 3,
    ACTIONS(355), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(135), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3628] = 1,
    ACTIONS(357), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3636] = 3,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3648] = 3,
    ACTIONS(361), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(97), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3660] = 1,
    ACTIONS(363), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3668] = 3,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3680] = 3,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3692] = 3,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(297), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [3704] = 3,
    ACTIONS(369), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(149), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3716] = 3,
    ACTIONS(371), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(131), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3728] = 5,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_parameter_list,
  [3744] = 1,
    ACTIONS(379), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3752] = 3,
    ACTIONS(381), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(156), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3764] = 3,
    ACTIONS(383), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(154), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3776] = 3,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3788] = 3,
    ACTIONS(387), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(87), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [3800] = 5,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_EQ,
    STATE(152), 1,
      sym_parameter_list,
  [3816] = 3,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3828] = 2,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(363), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3838] = 3,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3850] = 4,
    ACTIONS(399), 1,
      sym_escape_sequence,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_string_literal_token1,
    STATE(125), 1,
      aux_sym_string_literal_repeat1,
  [3863] = 4,
    ACTIONS(405), 1,
      sym_escape_sequence,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      aux_sym_string_literal_token1,
    STATE(123), 1,
      aux_sym_string_literal_repeat1,
  [3876] = 2,
    STATE(136), 1,
      sym_property_parameter,
    ACTIONS(233), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [3885] = 4,
    ACTIONS(413), 1,
      sym_escape_sequence,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      aux_sym_string_literal_token1,
    STATE(123), 1,
      aux_sym_string_literal_repeat1,
  [3898] = 1,
    ACTIONS(224), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [3904] = 3,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_EQ,
  [3914] = 1,
    ACTIONS(419), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [3920] = 3,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_block,
  [3930] = 3,
    ACTIONS(425), 1,
      anon_sym_COLON,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [3940] = 3,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_EQ,
  [3950] = 3,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_parameter_list_repeat1,
  [3960] = 3,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [3970] = 3,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_parameter_list_repeat1,
  [3980] = 3,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_EQ,
  [3990] = 3,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_block,
  [4000] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_EQ,
  [4010] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_parameter_list_repeat1,
  [4020] = 3,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym_block,
  [4030] = 1,
    ACTIONS(448), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [4036] = 3,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(450), 1,
      anon_sym_COLON,
    STATE(20), 1,
      sym_block,
  [4046] = 2,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [4053] = 1,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4058] = 2,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [4065] = 2,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [4072] = 2,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
  [4079] = 2,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_namespaced_identifier_repeat1,
  [4086] = 2,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [4093] = 2,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [4100] = 1,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4105] = 1,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4110] = 2,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [4117] = 1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4122] = 1,
    ACTIONS(458), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4127] = 2,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [4134] = 2,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_parameter_list,
  [4141] = 2,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [4148] = 1,
    ACTIONS(460), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [4153] = 2,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [4160] = 1,
    ACTIONS(462), 1,
      sym_camel_cased_identifier,
  [4164] = 1,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
  [4168] = 1,
    ACTIONS(464), 1,
      sym_camel_cased_identifier,
  [4172] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [4176] = 1,
    ACTIONS(466), 1,
      anon_sym_EQ,
  [4180] = 1,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
  [4184] = 1,
    ACTIONS(470), 1,
      sym_camel_cased_identifier,
  [4188] = 1,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
  [4192] = 1,
    ACTIONS(472), 1,
      sym_camel_cased_identifier,
  [4196] = 1,
    ACTIONS(474), 1,
      anon_sym_EQ,
  [4200] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 61,
  [SMALL_STATE(15)] = 122,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 305,
  [SMALL_STATE(19)] = 366,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 488,
  [SMALL_STATE(22)] = 549,
  [SMALL_STATE(23)] = 610,
  [SMALL_STATE(24)] = 671,
  [SMALL_STATE(25)] = 732,
  [SMALL_STATE(26)] = 793,
  [SMALL_STATE(27)] = 854,
  [SMALL_STATE(28)] = 915,
  [SMALL_STATE(29)] = 976,
  [SMALL_STATE(30)] = 1037,
  [SMALL_STATE(31)] = 1098,
  [SMALL_STATE(32)] = 1159,
  [SMALL_STATE(33)] = 1220,
  [SMALL_STATE(34)] = 1281,
  [SMALL_STATE(35)] = 1342,
  [SMALL_STATE(36)] = 1403,
  [SMALL_STATE(37)] = 1464,
  [SMALL_STATE(38)] = 1525,
  [SMALL_STATE(39)] = 1586,
  [SMALL_STATE(40)] = 1647,
  [SMALL_STATE(41)] = 1708,
  [SMALL_STATE(42)] = 1769,
  [SMALL_STATE(43)] = 1830,
  [SMALL_STATE(44)] = 1891,
  [SMALL_STATE(45)] = 1952,
  [SMALL_STATE(46)] = 2026,
  [SMALL_STATE(47)] = 2100,
  [SMALL_STATE(48)] = 2168,
  [SMALL_STATE(49)] = 2234,
  [SMALL_STATE(50)] = 2295,
  [SMALL_STATE(51)] = 2350,
  [SMALL_STATE(52)] = 2409,
  [SMALL_STATE(53)] = 2464,
  [SMALL_STATE(54)] = 2517,
  [SMALL_STATE(55)] = 2561,
  [SMALL_STATE(56)] = 2605,
  [SMALL_STATE(57)] = 2649,
  [SMALL_STATE(58)] = 2693,
  [SMALL_STATE(59)] = 2737,
  [SMALL_STATE(60)] = 2781,
  [SMALL_STATE(61)] = 2812,
  [SMALL_STATE(62)] = 2843,
  [SMALL_STATE(63)] = 2874,
  [SMALL_STATE(64)] = 2905,
  [SMALL_STATE(65)] = 2937,
  [SMALL_STATE(66)] = 2969,
  [SMALL_STATE(67)] = 3001,
  [SMALL_STATE(68)] = 3033,
  [SMALL_STATE(69)] = 3065,
  [SMALL_STATE(70)] = 3097,
  [SMALL_STATE(71)] = 3129,
  [SMALL_STATE(72)] = 3161,
  [SMALL_STATE(73)] = 3193,
  [SMALL_STATE(74)] = 3225,
  [SMALL_STATE(75)] = 3257,
  [SMALL_STATE(76)] = 3281,
  [SMALL_STATE(77)] = 3305,
  [SMALL_STATE(78)] = 3324,
  [SMALL_STATE(79)] = 3343,
  [SMALL_STATE(80)] = 3360,
  [SMALL_STATE(81)] = 3370,
  [SMALL_STATE(82)] = 3380,
  [SMALL_STATE(83)] = 3394,
  [SMALL_STATE(84)] = 3403,
  [SMALL_STATE(85)] = 3412,
  [SMALL_STATE(86)] = 3423,
  [SMALL_STATE(87)] = 3432,
  [SMALL_STATE(88)] = 3448,
  [SMALL_STATE(89)] = 3460,
  [SMALL_STATE(90)] = 3472,
  [SMALL_STATE(91)] = 3484,
  [SMALL_STATE(92)] = 3496,
  [SMALL_STATE(93)] = 3508,
  [SMALL_STATE(94)] = 3520,
  [SMALL_STATE(95)] = 3528,
  [SMALL_STATE(96)] = 3540,
  [SMALL_STATE(97)] = 3552,
  [SMALL_STATE(98)] = 3568,
  [SMALL_STATE(99)] = 3580,
  [SMALL_STATE(100)] = 3592,
  [SMALL_STATE(101)] = 3604,
  [SMALL_STATE(102)] = 3616,
  [SMALL_STATE(103)] = 3628,
  [SMALL_STATE(104)] = 3636,
  [SMALL_STATE(105)] = 3648,
  [SMALL_STATE(106)] = 3660,
  [SMALL_STATE(107)] = 3668,
  [SMALL_STATE(108)] = 3680,
  [SMALL_STATE(109)] = 3692,
  [SMALL_STATE(110)] = 3704,
  [SMALL_STATE(111)] = 3716,
  [SMALL_STATE(112)] = 3728,
  [SMALL_STATE(113)] = 3744,
  [SMALL_STATE(114)] = 3752,
  [SMALL_STATE(115)] = 3764,
  [SMALL_STATE(116)] = 3776,
  [SMALL_STATE(117)] = 3788,
  [SMALL_STATE(118)] = 3800,
  [SMALL_STATE(119)] = 3816,
  [SMALL_STATE(120)] = 3828,
  [SMALL_STATE(121)] = 3838,
  [SMALL_STATE(122)] = 3850,
  [SMALL_STATE(123)] = 3863,
  [SMALL_STATE(124)] = 3876,
  [SMALL_STATE(125)] = 3885,
  [SMALL_STATE(126)] = 3898,
  [SMALL_STATE(127)] = 3904,
  [SMALL_STATE(128)] = 3914,
  [SMALL_STATE(129)] = 3920,
  [SMALL_STATE(130)] = 3930,
  [SMALL_STATE(131)] = 3940,
  [SMALL_STATE(132)] = 3950,
  [SMALL_STATE(133)] = 3960,
  [SMALL_STATE(134)] = 3970,
  [SMALL_STATE(135)] = 3980,
  [SMALL_STATE(136)] = 3990,
  [SMALL_STATE(137)] = 4000,
  [SMALL_STATE(138)] = 4010,
  [SMALL_STATE(139)] = 4020,
  [SMALL_STATE(140)] = 4030,
  [SMALL_STATE(141)] = 4036,
  [SMALL_STATE(142)] = 4046,
  [SMALL_STATE(143)] = 4053,
  [SMALL_STATE(144)] = 4058,
  [SMALL_STATE(145)] = 4065,
  [SMALL_STATE(146)] = 4072,
  [SMALL_STATE(147)] = 4079,
  [SMALL_STATE(148)] = 4086,
  [SMALL_STATE(149)] = 4093,
  [SMALL_STATE(150)] = 4100,
  [SMALL_STATE(151)] = 4105,
  [SMALL_STATE(152)] = 4110,
  [SMALL_STATE(153)] = 4117,
  [SMALL_STATE(154)] = 4122,
  [SMALL_STATE(155)] = 4127,
  [SMALL_STATE(156)] = 4134,
  [SMALL_STATE(157)] = 4141,
  [SMALL_STATE(158)] = 4148,
  [SMALL_STATE(159)] = 4153,
  [SMALL_STATE(160)] = 4160,
  [SMALL_STATE(161)] = 4164,
  [SMALL_STATE(162)] = 4168,
  [SMALL_STATE(163)] = 4172,
  [SMALL_STATE(164)] = 4176,
  [SMALL_STATE(165)] = 4180,
  [SMALL_STATE(166)] = 4184,
  [SMALL_STATE(167)] = 4188,
  [SMALL_STATE(168)] = 4192,
  [SMALL_STATE(169)] = 4196,
  [SMALL_STATE(170)] = 4200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(162),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(128),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(128),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(102),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(100),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(169),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(52),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(53),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2), SHIFT_REPEAT(126),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2), SHIFT_REPEAT(126),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2), SHIFT_REPEAT(158),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gobject_property_acces, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(140),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifiers, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_instance, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_instance, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(123),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(123),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(12),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instanciation_parameter, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instanciation_parameter, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_parameter, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_parameter, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_parameter, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [468] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vala(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
