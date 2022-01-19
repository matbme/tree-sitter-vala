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
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 48
#define SYMBOL_COUNT 113
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
  sym_function_call = 81,
  sym_class_declaration = 82,
  sym_modifier = 83,
  sym__type = 84,
  sym_primitive_type = 85,
  sym_comment = 86,
  sym_parameter_list = 87,
  sym__parameter = 88,
  sym_declaration_parameter = 89,
  sym_instanciation_parameter = 90,
  sym_block = 91,
  sym__statement = 92,
  sym_return_statement = 93,
  sym_assignment = 94,
  sym_declaration = 95,
  sym_property_parameter = 96,
  sym_gobject_property_acces = 97,
  sym_gobject_contruct = 98,
  sym_namespace = 99,
  sym__expression = 100,
  sym_new_instance = 101,
  sym_unary_expression = 102,
  sym_binary_expression = 103,
  sym_string_literal = 104,
  sym__identifiers = 105,
  sym_namespaced_identifier = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym_function_definition_repeat1 = 108,
  aux_sym_parameter_list_repeat1 = 109,
  aux_sym_gobject_property_acces_repeat1 = 110,
  aux_sym_string_literal_repeat1 = 111,
  aux_sym_namespaced_identifier_repeat1 = 112,
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
  [sym_function_call] = "function_call",
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
  [sym_gobject_contruct] = "gobject_contruct",
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
  [sym_function_call] = sym_function_call,
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
  [sym_gobject_contruct] = sym_gobject_contruct,
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
  [sym_function_call] = {
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
  [sym_gobject_contruct] = {
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
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'v') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('h' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(430);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
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
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(350);
      if (lookahead == 'v') ADVANCE(316);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(430);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'v') ADVANCE(315);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(430);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(228);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(430);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
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
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(350);
      if (lookahead == 'v') ADVANCE(316);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(430);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'v') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(431);
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
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'v') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(430);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_signal);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_signal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_async);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_owned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unowned);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_unowned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_unichar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_uchar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_construct);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_construct);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(432);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(402);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(404);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(335);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == 'z') ADVANCE(275);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(429);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(367);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(169);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'x') ADVANCE(415);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(349);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead == 'v') ADVANCE(288);
      if (lookahead == 'w') ADVANCE(351);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(254);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(356);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(349);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(347);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(296);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (lookahead == '_') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(430);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(431);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_uppercased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
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
  [13] = {.lex_state = 3},
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
  [45] = {.lex_state = 131},
  [46] = {.lex_state = 131},
  [47] = {.lex_state = 131},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 15},
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
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 14},
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
    [sym_source_file] = STATE(178),
    [sym__top_level] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_modifier] = STATE(49),
    [sym__type] = STATE(105),
    [sym_primitive_type] = STATE(105),
    [sym_comment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_gobject_contruct] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym__identifiers] = STATE(179),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(49),
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
    [anon_sym_construct] = ACTIONS(19),
    [anon_sym_namespace] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(27),
  },
  [2] = {
    [sym__top_level] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_class_declaration] = STATE(8),
    [sym_modifier] = STATE(49),
    [sym__type] = STATE(105),
    [sym_primitive_type] = STATE(105),
    [sym_comment] = STATE(8),
    [sym__statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_gobject_contruct] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym__identifiers] = STATE(179),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(29),
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
    [anon_sym_construct] = ACTIONS(19),
    [anon_sym_namespace] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(27),
  },
  [3] = {
    [sym__top_level] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_class_declaration] = STATE(9),
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(93),
    [sym_primitive_type] = STATE(93),
    [sym_comment] = STATE(9),
    [sym__statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_declaration] = STATE(9),
    [sym_gobject_contruct] = STATE(9),
    [sym_namespace] = STATE(9),
    [sym__identifiers] = STATE(182),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_function_definition_repeat1] = STATE(48),
    [anon_sym_class] = ACTIONS(31),
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
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_construct] = ACTIONS(41),
    [anon_sym_namespace] = ACTIONS(43),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(45),
  },
  [4] = {
    [sym__top_level] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(93),
    [sym_primitive_type] = STATE(93),
    [sym_comment] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_gobject_contruct] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym__identifiers] = STATE(182),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(48),
    [anon_sym_class] = ACTIONS(31),
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
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_construct] = ACTIONS(41),
    [anon_sym_namespace] = ACTIONS(43),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(45),
  },
  [5] = {
    [sym__top_level] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_class_declaration] = STATE(9),
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(93),
    [sym_primitive_type] = STATE(93),
    [sym_comment] = STATE(9),
    [sym__statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_declaration] = STATE(9),
    [sym_gobject_contruct] = STATE(9),
    [sym_namespace] = STATE(9),
    [sym__identifiers] = STATE(182),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_function_definition_repeat1] = STATE(48),
    [anon_sym_class] = ACTIONS(31),
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
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_construct] = ACTIONS(41),
    [anon_sym_namespace] = ACTIONS(43),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(45),
  },
  [6] = {
    [sym__top_level] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_class_declaration] = STATE(5),
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(93),
    [sym_primitive_type] = STATE(93),
    [sym_comment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_gobject_contruct] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym__identifiers] = STATE(182),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_function_definition_repeat1] = STATE(48),
    [anon_sym_class] = ACTIONS(31),
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
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_construct] = ACTIONS(41),
    [anon_sym_namespace] = ACTIONS(43),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(45),
  },
  [7] = {
    [sym__top_level] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_class_declaration] = STATE(9),
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(93),
    [sym_primitive_type] = STATE(93),
    [sym_comment] = STATE(9),
    [sym__statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_declaration] = STATE(9),
    [sym_gobject_contruct] = STATE(9),
    [sym_namespace] = STATE(9),
    [sym__identifiers] = STATE(182),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_function_definition_repeat1] = STATE(48),
    [anon_sym_class] = ACTIONS(31),
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
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_construct] = ACTIONS(41),
    [anon_sym_namespace] = ACTIONS(43),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(45),
  },
  [8] = {
    [sym__top_level] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_class_declaration] = STATE(8),
    [sym_modifier] = STATE(49),
    [sym__type] = STATE(105),
    [sym_primitive_type] = STATE(105),
    [sym_comment] = STATE(8),
    [sym__statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_gobject_contruct] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym__identifiers] = STATE(179),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_class] = ACTIONS(57),
    [anon_sym_abstract] = ACTIONS(60),
    [anon_sym_const] = ACTIONS(60),
    [anon_sym_dynamic] = ACTIONS(60),
    [anon_sym_ensures] = ACTIONS(60),
    [anon_sym_extern] = ACTIONS(60),
    [anon_sym_inline] = ACTIONS(60),
    [anon_sym_internal] = ACTIONS(60),
    [anon_sym_override] = ACTIONS(60),
    [anon_sym_private] = ACTIONS(60),
    [anon_sym_protected] = ACTIONS(60),
    [anon_sym_public] = ACTIONS(60),
    [anon_sym_requires] = ACTIONS(60),
    [anon_sym_signal] = ACTIONS(60),
    [anon_sym_static] = ACTIONS(60),
    [anon_sym_virtual] = ACTIONS(60),
    [anon_sym_volatile] = ACTIONS(60),
    [anon_sym_weak] = ACTIONS(60),
    [anon_sym_async] = ACTIONS(60),
    [anon_sym_owned] = ACTIONS(60),
    [anon_sym_unowned] = ACTIONS(60),
    [anon_sym_ref] = ACTIONS(60),
    [anon_sym_out] = ACTIONS(60),
    [anon_sym_bool] = ACTIONS(63),
    [anon_sym_char] = ACTIONS(63),
    [anon_sym_double] = ACTIONS(63),
    [anon_sym_float] = ACTIONS(63),
    [anon_sym_size_t] = ACTIONS(63),
    [anon_sym_ssize_t] = ACTIONS(63),
    [anon_sym_string] = ACTIONS(63),
    [anon_sym_unichar] = ACTIONS(63),
    [anon_sym_void] = ACTIONS(63),
    [anon_sym_int] = ACTIONS(63),
    [anon_sym_int8] = ACTIONS(66),
    [anon_sym_int16] = ACTIONS(66),
    [anon_sym_int32] = ACTIONS(66),
    [anon_sym_int64] = ACTIONS(66),
    [anon_sym_long] = ACTIONS(63),
    [anon_sym_short] = ACTIONS(63),
    [anon_sym_uchar] = ACTIONS(63),
    [anon_sym_uint] = ACTIONS(63),
    [anon_sym_uint8] = ACTIONS(66),
    [anon_sym_uint16] = ACTIONS(66),
    [anon_sym_uint32] = ACTIONS(66),
    [anon_sym_uint64] = ACTIONS(66),
    [anon_sym_ulong] = ACTIONS(63),
    [anon_sym_ushort] = ACTIONS(63),
    [aux_sym_comment_token1] = ACTIONS(69),
    [aux_sym_comment_token2] = ACTIONS(69),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_var] = ACTIONS(75),
    [anon_sym_construct] = ACTIONS(78),
    [anon_sym_namespace] = ACTIONS(81),
    [sym_identifier] = ACTIONS(84),
    [sym_camel_cased_identifier] = ACTIONS(87),
    [sym_uppercased_identifier] = ACTIONS(90),
  },
  [9] = {
    [sym__top_level] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_class_declaration] = STATE(9),
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(93),
    [sym_primitive_type] = STATE(93),
    [sym_comment] = STATE(9),
    [sym__statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_declaration] = STATE(9),
    [sym_gobject_contruct] = STATE(9),
    [sym_namespace] = STATE(9),
    [sym__identifiers] = STATE(182),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_function_definition_repeat1] = STATE(48),
    [anon_sym_class] = ACTIONS(93),
    [anon_sym_abstract] = ACTIONS(60),
    [anon_sym_const] = ACTIONS(60),
    [anon_sym_dynamic] = ACTIONS(60),
    [anon_sym_ensures] = ACTIONS(60),
    [anon_sym_extern] = ACTIONS(60),
    [anon_sym_inline] = ACTIONS(60),
    [anon_sym_internal] = ACTIONS(60),
    [anon_sym_override] = ACTIONS(60),
    [anon_sym_private] = ACTIONS(60),
    [anon_sym_protected] = ACTIONS(60),
    [anon_sym_public] = ACTIONS(60),
    [anon_sym_requires] = ACTIONS(60),
    [anon_sym_signal] = ACTIONS(60),
    [anon_sym_static] = ACTIONS(60),
    [anon_sym_virtual] = ACTIONS(60),
    [anon_sym_volatile] = ACTIONS(60),
    [anon_sym_weak] = ACTIONS(60),
    [anon_sym_async] = ACTIONS(60),
    [anon_sym_owned] = ACTIONS(60),
    [anon_sym_unowned] = ACTIONS(60),
    [anon_sym_ref] = ACTIONS(60),
    [anon_sym_out] = ACTIONS(60),
    [anon_sym_bool] = ACTIONS(63),
    [anon_sym_char] = ACTIONS(63),
    [anon_sym_double] = ACTIONS(63),
    [anon_sym_float] = ACTIONS(63),
    [anon_sym_size_t] = ACTIONS(63),
    [anon_sym_ssize_t] = ACTIONS(63),
    [anon_sym_string] = ACTIONS(63),
    [anon_sym_unichar] = ACTIONS(63),
    [anon_sym_void] = ACTIONS(63),
    [anon_sym_int] = ACTIONS(63),
    [anon_sym_int8] = ACTIONS(66),
    [anon_sym_int16] = ACTIONS(66),
    [anon_sym_int32] = ACTIONS(66),
    [anon_sym_int64] = ACTIONS(66),
    [anon_sym_long] = ACTIONS(63),
    [anon_sym_short] = ACTIONS(63),
    [anon_sym_uchar] = ACTIONS(63),
    [anon_sym_uint] = ACTIONS(63),
    [anon_sym_uint8] = ACTIONS(66),
    [anon_sym_uint16] = ACTIONS(66),
    [anon_sym_uint32] = ACTIONS(66),
    [anon_sym_uint64] = ACTIONS(66),
    [anon_sym_ulong] = ACTIONS(63),
    [anon_sym_ushort] = ACTIONS(63),
    [aux_sym_comment_token1] = ACTIONS(96),
    [aux_sym_comment_token2] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_var] = ACTIONS(102),
    [anon_sym_construct] = ACTIONS(105),
    [anon_sym_namespace] = ACTIONS(108),
    [sym_identifier] = ACTIONS(84),
    [sym_camel_cased_identifier] = ACTIONS(87),
    [sym_uppercased_identifier] = ACTIONS(111),
  },
  [10] = {
    [sym__top_level] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_class_declaration] = STATE(7),
    [sym_modifier] = STATE(48),
    [sym__type] = STATE(93),
    [sym_primitive_type] = STATE(93),
    [sym_comment] = STATE(7),
    [sym__statement] = STATE(7),
    [sym_return_statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_declaration] = STATE(7),
    [sym_gobject_contruct] = STATE(7),
    [sym_namespace] = STATE(7),
    [sym__identifiers] = STATE(182),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_function_definition_repeat1] = STATE(48),
    [anon_sym_class] = ACTIONS(31),
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
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(39),
    [anon_sym_construct] = ACTIONS(41),
    [anon_sym_namespace] = ACTIONS(43),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(45),
  },
  [11] = {
    [sym_modifier] = STATE(13),
    [sym__type] = STATE(115),
    [sym_primitive_type] = STATE(115),
    [sym__parameter] = STATE(139),
    [sym_declaration_parameter] = STATE(139),
    [sym_instanciation_parameter] = STATE(139),
    [sym_string_literal] = STATE(161),
    [sym__identifiers] = STATE(140),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_function_definition_repeat1] = STATE(13),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_const] = ACTIONS(116),
    [anon_sym_dynamic] = ACTIONS(116),
    [anon_sym_ensures] = ACTIONS(116),
    [anon_sym_extern] = ACTIONS(116),
    [anon_sym_inline] = ACTIONS(116),
    [anon_sym_internal] = ACTIONS(116),
    [anon_sym_override] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_requires] = ACTIONS(116),
    [anon_sym_signal] = ACTIONS(116),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_virtual] = ACTIONS(116),
    [anon_sym_volatile] = ACTIONS(116),
    [anon_sym_weak] = ACTIONS(116),
    [anon_sym_async] = ACTIONS(116),
    [anon_sym_owned] = ACTIONS(116),
    [anon_sym_unowned] = ACTIONS(116),
    [anon_sym_ref] = ACTIONS(116),
    [anon_sym_out] = ACTIONS(116),
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
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(122),
    [sym_number] = ACTIONS(124),
  },
  [12] = {
    [sym_modifier] = STATE(13),
    [sym__type] = STATE(115),
    [sym_primitive_type] = STATE(115),
    [sym__parameter] = STATE(154),
    [sym_declaration_parameter] = STATE(154),
    [sym_instanciation_parameter] = STATE(154),
    [sym_string_literal] = STATE(161),
    [sym__identifiers] = STATE(140),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_function_definition_repeat1] = STATE(13),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_const] = ACTIONS(116),
    [anon_sym_dynamic] = ACTIONS(116),
    [anon_sym_ensures] = ACTIONS(116),
    [anon_sym_extern] = ACTIONS(116),
    [anon_sym_inline] = ACTIONS(116),
    [anon_sym_internal] = ACTIONS(116),
    [anon_sym_override] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_requires] = ACTIONS(116),
    [anon_sym_signal] = ACTIONS(116),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_virtual] = ACTIONS(116),
    [anon_sym_volatile] = ACTIONS(116),
    [anon_sym_weak] = ACTIONS(116),
    [anon_sym_async] = ACTIONS(116),
    [anon_sym_owned] = ACTIONS(116),
    [anon_sym_unowned] = ACTIONS(116),
    [anon_sym_ref] = ACTIONS(116),
    [anon_sym_out] = ACTIONS(116),
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
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(122),
    [sym_number] = ACTIONS(124),
  },
  [13] = {
    [sym_modifier] = STATE(50),
    [sym__type] = STATE(100),
    [sym_primitive_type] = STATE(100),
    [sym_string_literal] = STATE(165),
    [sym__identifiers] = STATE(142),
    [sym_namespaced_identifier] = STATE(86),
    [aux_sym_function_definition_repeat1] = STATE(50),
    [anon_sym_abstract] = ACTIONS(116),
    [anon_sym_const] = ACTIONS(116),
    [anon_sym_dynamic] = ACTIONS(116),
    [anon_sym_ensures] = ACTIONS(116),
    [anon_sym_extern] = ACTIONS(116),
    [anon_sym_inline] = ACTIONS(116),
    [anon_sym_internal] = ACTIONS(116),
    [anon_sym_override] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_requires] = ACTIONS(116),
    [anon_sym_signal] = ACTIONS(116),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_virtual] = ACTIONS(116),
    [anon_sym_volatile] = ACTIONS(116),
    [anon_sym_weak] = ACTIONS(116),
    [anon_sym_async] = ACTIONS(116),
    [anon_sym_owned] = ACTIONS(116),
    [anon_sym_unowned] = ACTIONS(116),
    [anon_sym_ref] = ACTIONS(116),
    [anon_sym_out] = ACTIONS(116),
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
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_identifier] = ACTIONS(23),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(126),
    [sym_number] = ACTIONS(128),
  },
  [14] = {
    [anon_sym_class] = ACTIONS(130),
    [anon_sym_abstract] = ACTIONS(130),
    [anon_sym_const] = ACTIONS(130),
    [anon_sym_dynamic] = ACTIONS(130),
    [anon_sym_ensures] = ACTIONS(130),
    [anon_sym_extern] = ACTIONS(130),
    [anon_sym_inline] = ACTIONS(130),
    [anon_sym_internal] = ACTIONS(130),
    [anon_sym_override] = ACTIONS(130),
    [anon_sym_private] = ACTIONS(130),
    [anon_sym_protected] = ACTIONS(130),
    [anon_sym_public] = ACTIONS(130),
    [anon_sym_requires] = ACTIONS(130),
    [anon_sym_signal] = ACTIONS(130),
    [anon_sym_static] = ACTIONS(130),
    [anon_sym_virtual] = ACTIONS(130),
    [anon_sym_volatile] = ACTIONS(130),
    [anon_sym_weak] = ACTIONS(130),
    [anon_sym_async] = ACTIONS(130),
    [anon_sym_owned] = ACTIONS(130),
    [anon_sym_unowned] = ACTIONS(130),
    [anon_sym_ref] = ACTIONS(130),
    [anon_sym_out] = ACTIONS(130),
    [anon_sym_bool] = ACTIONS(130),
    [anon_sym_char] = ACTIONS(130),
    [anon_sym_double] = ACTIONS(130),
    [anon_sym_float] = ACTIONS(130),
    [anon_sym_size_t] = ACTIONS(130),
    [anon_sym_ssize_t] = ACTIONS(130),
    [anon_sym_string] = ACTIONS(130),
    [anon_sym_unichar] = ACTIONS(130),
    [anon_sym_void] = ACTIONS(130),
    [anon_sym_int] = ACTIONS(130),
    [anon_sym_int8] = ACTIONS(132),
    [anon_sym_int16] = ACTIONS(132),
    [anon_sym_int32] = ACTIONS(132),
    [anon_sym_int64] = ACTIONS(132),
    [anon_sym_long] = ACTIONS(130),
    [anon_sym_short] = ACTIONS(130),
    [anon_sym_uchar] = ACTIONS(130),
    [anon_sym_uint] = ACTIONS(130),
    [anon_sym_uint8] = ACTIONS(132),
    [anon_sym_uint16] = ACTIONS(132),
    [anon_sym_uint32] = ACTIONS(132),
    [anon_sym_uint64] = ACTIONS(132),
    [anon_sym_ulong] = ACTIONS(130),
    [anon_sym_ushort] = ACTIONS(130),
    [aux_sym_comment_token1] = ACTIONS(132),
    [aux_sym_comment_token2] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_var] = ACTIONS(130),
    [anon_sym_construct] = ACTIONS(130),
    [anon_sym_namespace] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [sym_camel_cased_identifier] = ACTIONS(130),
    [sym_uppercased_identifier] = ACTIONS(130),
  },
  [15] = {
    [anon_sym_class] = ACTIONS(134),
    [anon_sym_abstract] = ACTIONS(134),
    [anon_sym_const] = ACTIONS(134),
    [anon_sym_dynamic] = ACTIONS(134),
    [anon_sym_ensures] = ACTIONS(134),
    [anon_sym_extern] = ACTIONS(134),
    [anon_sym_inline] = ACTIONS(134),
    [anon_sym_internal] = ACTIONS(134),
    [anon_sym_override] = ACTIONS(134),
    [anon_sym_private] = ACTIONS(134),
    [anon_sym_protected] = ACTIONS(134),
    [anon_sym_public] = ACTIONS(134),
    [anon_sym_requires] = ACTIONS(134),
    [anon_sym_signal] = ACTIONS(134),
    [anon_sym_static] = ACTIONS(134),
    [anon_sym_virtual] = ACTIONS(134),
    [anon_sym_volatile] = ACTIONS(134),
    [anon_sym_weak] = ACTIONS(134),
    [anon_sym_async] = ACTIONS(134),
    [anon_sym_owned] = ACTIONS(134),
    [anon_sym_unowned] = ACTIONS(134),
    [anon_sym_ref] = ACTIONS(134),
    [anon_sym_out] = ACTIONS(134),
    [anon_sym_bool] = ACTIONS(134),
    [anon_sym_char] = ACTIONS(134),
    [anon_sym_double] = ACTIONS(134),
    [anon_sym_float] = ACTIONS(134),
    [anon_sym_size_t] = ACTIONS(134),
    [anon_sym_ssize_t] = ACTIONS(134),
    [anon_sym_string] = ACTIONS(134),
    [anon_sym_unichar] = ACTIONS(134),
    [anon_sym_void] = ACTIONS(134),
    [anon_sym_int] = ACTIONS(134),
    [anon_sym_int8] = ACTIONS(136),
    [anon_sym_int16] = ACTIONS(136),
    [anon_sym_int32] = ACTIONS(136),
    [anon_sym_int64] = ACTIONS(136),
    [anon_sym_long] = ACTIONS(134),
    [anon_sym_short] = ACTIONS(134),
    [anon_sym_uchar] = ACTIONS(134),
    [anon_sym_uint] = ACTIONS(134),
    [anon_sym_uint8] = ACTIONS(136),
    [anon_sym_uint16] = ACTIONS(136),
    [anon_sym_uint32] = ACTIONS(136),
    [anon_sym_uint64] = ACTIONS(136),
    [anon_sym_ulong] = ACTIONS(134),
    [anon_sym_ushort] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(136),
    [aux_sym_comment_token2] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_return] = ACTIONS(134),
    [anon_sym_var] = ACTIONS(134),
    [anon_sym_construct] = ACTIONS(134),
    [anon_sym_namespace] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [sym_camel_cased_identifier] = ACTIONS(134),
    [sym_uppercased_identifier] = ACTIONS(134),
  },
  [16] = {
    [anon_sym_class] = ACTIONS(138),
    [anon_sym_abstract] = ACTIONS(138),
    [anon_sym_const] = ACTIONS(138),
    [anon_sym_dynamic] = ACTIONS(138),
    [anon_sym_ensures] = ACTIONS(138),
    [anon_sym_extern] = ACTIONS(138),
    [anon_sym_inline] = ACTIONS(138),
    [anon_sym_internal] = ACTIONS(138),
    [anon_sym_override] = ACTIONS(138),
    [anon_sym_private] = ACTIONS(138),
    [anon_sym_protected] = ACTIONS(138),
    [anon_sym_public] = ACTIONS(138),
    [anon_sym_requires] = ACTIONS(138),
    [anon_sym_signal] = ACTIONS(138),
    [anon_sym_static] = ACTIONS(138),
    [anon_sym_virtual] = ACTIONS(138),
    [anon_sym_volatile] = ACTIONS(138),
    [anon_sym_weak] = ACTIONS(138),
    [anon_sym_async] = ACTIONS(138),
    [anon_sym_owned] = ACTIONS(138),
    [anon_sym_unowned] = ACTIONS(138),
    [anon_sym_ref] = ACTIONS(138),
    [anon_sym_out] = ACTIONS(138),
    [anon_sym_bool] = ACTIONS(138),
    [anon_sym_char] = ACTIONS(138),
    [anon_sym_double] = ACTIONS(138),
    [anon_sym_float] = ACTIONS(138),
    [anon_sym_size_t] = ACTIONS(138),
    [anon_sym_ssize_t] = ACTIONS(138),
    [anon_sym_string] = ACTIONS(138),
    [anon_sym_unichar] = ACTIONS(138),
    [anon_sym_void] = ACTIONS(138),
    [anon_sym_int] = ACTIONS(138),
    [anon_sym_int8] = ACTIONS(140),
    [anon_sym_int16] = ACTIONS(140),
    [anon_sym_int32] = ACTIONS(140),
    [anon_sym_int64] = ACTIONS(140),
    [anon_sym_long] = ACTIONS(138),
    [anon_sym_short] = ACTIONS(138),
    [anon_sym_uchar] = ACTIONS(138),
    [anon_sym_uint] = ACTIONS(138),
    [anon_sym_uint8] = ACTIONS(140),
    [anon_sym_uint16] = ACTIONS(140),
    [anon_sym_uint32] = ACTIONS(140),
    [anon_sym_uint64] = ACTIONS(140),
    [anon_sym_ulong] = ACTIONS(138),
    [anon_sym_ushort] = ACTIONS(138),
    [aux_sym_comment_token1] = ACTIONS(140),
    [aux_sym_comment_token2] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_return] = ACTIONS(138),
    [anon_sym_var] = ACTIONS(138),
    [anon_sym_construct] = ACTIONS(138),
    [anon_sym_namespace] = ACTIONS(138),
    [sym_identifier] = ACTIONS(138),
    [sym_camel_cased_identifier] = ACTIONS(138),
    [sym_uppercased_identifier] = ACTIONS(138),
  },
  [17] = {
    [anon_sym_class] = ACTIONS(142),
    [anon_sym_abstract] = ACTIONS(142),
    [anon_sym_const] = ACTIONS(142),
    [anon_sym_dynamic] = ACTIONS(142),
    [anon_sym_ensures] = ACTIONS(142),
    [anon_sym_extern] = ACTIONS(142),
    [anon_sym_inline] = ACTIONS(142),
    [anon_sym_internal] = ACTIONS(142),
    [anon_sym_override] = ACTIONS(142),
    [anon_sym_private] = ACTIONS(142),
    [anon_sym_protected] = ACTIONS(142),
    [anon_sym_public] = ACTIONS(142),
    [anon_sym_requires] = ACTIONS(142),
    [anon_sym_signal] = ACTIONS(142),
    [anon_sym_static] = ACTIONS(142),
    [anon_sym_virtual] = ACTIONS(142),
    [anon_sym_volatile] = ACTIONS(142),
    [anon_sym_weak] = ACTIONS(142),
    [anon_sym_async] = ACTIONS(142),
    [anon_sym_owned] = ACTIONS(142),
    [anon_sym_unowned] = ACTIONS(142),
    [anon_sym_ref] = ACTIONS(142),
    [anon_sym_out] = ACTIONS(142),
    [anon_sym_bool] = ACTIONS(142),
    [anon_sym_char] = ACTIONS(142),
    [anon_sym_double] = ACTIONS(142),
    [anon_sym_float] = ACTIONS(142),
    [anon_sym_size_t] = ACTIONS(142),
    [anon_sym_ssize_t] = ACTIONS(142),
    [anon_sym_string] = ACTIONS(142),
    [anon_sym_unichar] = ACTIONS(142),
    [anon_sym_void] = ACTIONS(142),
    [anon_sym_int] = ACTIONS(142),
    [anon_sym_int8] = ACTIONS(144),
    [anon_sym_int16] = ACTIONS(144),
    [anon_sym_int32] = ACTIONS(144),
    [anon_sym_int64] = ACTIONS(144),
    [anon_sym_long] = ACTIONS(142),
    [anon_sym_short] = ACTIONS(142),
    [anon_sym_uchar] = ACTIONS(142),
    [anon_sym_uint] = ACTIONS(142),
    [anon_sym_uint8] = ACTIONS(144),
    [anon_sym_uint16] = ACTIONS(144),
    [anon_sym_uint32] = ACTIONS(144),
    [anon_sym_uint64] = ACTIONS(144),
    [anon_sym_ulong] = ACTIONS(142),
    [anon_sym_ushort] = ACTIONS(142),
    [aux_sym_comment_token1] = ACTIONS(144),
    [aux_sym_comment_token2] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_return] = ACTIONS(142),
    [anon_sym_var] = ACTIONS(142),
    [anon_sym_construct] = ACTIONS(142),
    [anon_sym_namespace] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [sym_camel_cased_identifier] = ACTIONS(142),
    [sym_uppercased_identifier] = ACTIONS(142),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_class] = ACTIONS(148),
    [anon_sym_abstract] = ACTIONS(148),
    [anon_sym_const] = ACTIONS(148),
    [anon_sym_dynamic] = ACTIONS(148),
    [anon_sym_ensures] = ACTIONS(148),
    [anon_sym_extern] = ACTIONS(148),
    [anon_sym_inline] = ACTIONS(148),
    [anon_sym_internal] = ACTIONS(148),
    [anon_sym_override] = ACTIONS(148),
    [anon_sym_private] = ACTIONS(148),
    [anon_sym_protected] = ACTIONS(148),
    [anon_sym_public] = ACTIONS(148),
    [anon_sym_requires] = ACTIONS(148),
    [anon_sym_signal] = ACTIONS(148),
    [anon_sym_static] = ACTIONS(148),
    [anon_sym_virtual] = ACTIONS(148),
    [anon_sym_volatile] = ACTIONS(148),
    [anon_sym_weak] = ACTIONS(148),
    [anon_sym_async] = ACTIONS(148),
    [anon_sym_owned] = ACTIONS(148),
    [anon_sym_unowned] = ACTIONS(148),
    [anon_sym_ref] = ACTIONS(148),
    [anon_sym_out] = ACTIONS(148),
    [anon_sym_bool] = ACTIONS(148),
    [anon_sym_char] = ACTIONS(148),
    [anon_sym_double] = ACTIONS(148),
    [anon_sym_float] = ACTIONS(148),
    [anon_sym_size_t] = ACTIONS(148),
    [anon_sym_ssize_t] = ACTIONS(148),
    [anon_sym_string] = ACTIONS(148),
    [anon_sym_unichar] = ACTIONS(148),
    [anon_sym_void] = ACTIONS(148),
    [anon_sym_int] = ACTIONS(148),
    [anon_sym_int8] = ACTIONS(146),
    [anon_sym_int16] = ACTIONS(146),
    [anon_sym_int32] = ACTIONS(146),
    [anon_sym_int64] = ACTIONS(146),
    [anon_sym_long] = ACTIONS(148),
    [anon_sym_short] = ACTIONS(148),
    [anon_sym_uchar] = ACTIONS(148),
    [anon_sym_uint] = ACTIONS(148),
    [anon_sym_uint8] = ACTIONS(146),
    [anon_sym_uint16] = ACTIONS(146),
    [anon_sym_uint32] = ACTIONS(146),
    [anon_sym_uint64] = ACTIONS(146),
    [anon_sym_ulong] = ACTIONS(148),
    [anon_sym_ushort] = ACTIONS(148),
    [aux_sym_comment_token1] = ACTIONS(146),
    [aux_sym_comment_token2] = ACTIONS(146),
    [anon_sym_return] = ACTIONS(148),
    [anon_sym_var] = ACTIONS(148),
    [anon_sym_construct] = ACTIONS(148),
    [anon_sym_namespace] = ACTIONS(148),
    [sym_identifier] = ACTIONS(148),
    [sym_camel_cased_identifier] = ACTIONS(148),
    [sym_uppercased_identifier] = ACTIONS(148),
  },
  [19] = {
    [anon_sym_class] = ACTIONS(150),
    [anon_sym_abstract] = ACTIONS(150),
    [anon_sym_const] = ACTIONS(150),
    [anon_sym_dynamic] = ACTIONS(150),
    [anon_sym_ensures] = ACTIONS(150),
    [anon_sym_extern] = ACTIONS(150),
    [anon_sym_inline] = ACTIONS(150),
    [anon_sym_internal] = ACTIONS(150),
    [anon_sym_override] = ACTIONS(150),
    [anon_sym_private] = ACTIONS(150),
    [anon_sym_protected] = ACTIONS(150),
    [anon_sym_public] = ACTIONS(150),
    [anon_sym_requires] = ACTIONS(150),
    [anon_sym_signal] = ACTIONS(150),
    [anon_sym_static] = ACTIONS(150),
    [anon_sym_virtual] = ACTIONS(150),
    [anon_sym_volatile] = ACTIONS(150),
    [anon_sym_weak] = ACTIONS(150),
    [anon_sym_async] = ACTIONS(150),
    [anon_sym_owned] = ACTIONS(150),
    [anon_sym_unowned] = ACTIONS(150),
    [anon_sym_ref] = ACTIONS(150),
    [anon_sym_out] = ACTIONS(150),
    [anon_sym_bool] = ACTIONS(150),
    [anon_sym_char] = ACTIONS(150),
    [anon_sym_double] = ACTIONS(150),
    [anon_sym_float] = ACTIONS(150),
    [anon_sym_size_t] = ACTIONS(150),
    [anon_sym_ssize_t] = ACTIONS(150),
    [anon_sym_string] = ACTIONS(150),
    [anon_sym_unichar] = ACTIONS(150),
    [anon_sym_void] = ACTIONS(150),
    [anon_sym_int] = ACTIONS(150),
    [anon_sym_int8] = ACTIONS(152),
    [anon_sym_int16] = ACTIONS(152),
    [anon_sym_int32] = ACTIONS(152),
    [anon_sym_int64] = ACTIONS(152),
    [anon_sym_long] = ACTIONS(150),
    [anon_sym_short] = ACTIONS(150),
    [anon_sym_uchar] = ACTIONS(150),
    [anon_sym_uint] = ACTIONS(150),
    [anon_sym_uint8] = ACTIONS(152),
    [anon_sym_uint16] = ACTIONS(152),
    [anon_sym_uint32] = ACTIONS(152),
    [anon_sym_uint64] = ACTIONS(152),
    [anon_sym_ulong] = ACTIONS(150),
    [anon_sym_ushort] = ACTIONS(150),
    [aux_sym_comment_token1] = ACTIONS(152),
    [aux_sym_comment_token2] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_return] = ACTIONS(150),
    [anon_sym_var] = ACTIONS(150),
    [anon_sym_construct] = ACTIONS(150),
    [anon_sym_namespace] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [sym_camel_cased_identifier] = ACTIONS(150),
    [sym_uppercased_identifier] = ACTIONS(150),
  },
  [20] = {
    [anon_sym_class] = ACTIONS(154),
    [anon_sym_abstract] = ACTIONS(154),
    [anon_sym_const] = ACTIONS(154),
    [anon_sym_dynamic] = ACTIONS(154),
    [anon_sym_ensures] = ACTIONS(154),
    [anon_sym_extern] = ACTIONS(154),
    [anon_sym_inline] = ACTIONS(154),
    [anon_sym_internal] = ACTIONS(154),
    [anon_sym_override] = ACTIONS(154),
    [anon_sym_private] = ACTIONS(154),
    [anon_sym_protected] = ACTIONS(154),
    [anon_sym_public] = ACTIONS(154),
    [anon_sym_requires] = ACTIONS(154),
    [anon_sym_signal] = ACTIONS(154),
    [anon_sym_static] = ACTIONS(154),
    [anon_sym_virtual] = ACTIONS(154),
    [anon_sym_volatile] = ACTIONS(154),
    [anon_sym_weak] = ACTIONS(154),
    [anon_sym_async] = ACTIONS(154),
    [anon_sym_owned] = ACTIONS(154),
    [anon_sym_unowned] = ACTIONS(154),
    [anon_sym_ref] = ACTIONS(154),
    [anon_sym_out] = ACTIONS(154),
    [anon_sym_bool] = ACTIONS(154),
    [anon_sym_char] = ACTIONS(154),
    [anon_sym_double] = ACTIONS(154),
    [anon_sym_float] = ACTIONS(154),
    [anon_sym_size_t] = ACTIONS(154),
    [anon_sym_ssize_t] = ACTIONS(154),
    [anon_sym_string] = ACTIONS(154),
    [anon_sym_unichar] = ACTIONS(154),
    [anon_sym_void] = ACTIONS(154),
    [anon_sym_int] = ACTIONS(154),
    [anon_sym_int8] = ACTIONS(156),
    [anon_sym_int16] = ACTIONS(156),
    [anon_sym_int32] = ACTIONS(156),
    [anon_sym_int64] = ACTIONS(156),
    [anon_sym_long] = ACTIONS(154),
    [anon_sym_short] = ACTIONS(154),
    [anon_sym_uchar] = ACTIONS(154),
    [anon_sym_uint] = ACTIONS(154),
    [anon_sym_uint8] = ACTIONS(156),
    [anon_sym_uint16] = ACTIONS(156),
    [anon_sym_uint32] = ACTIONS(156),
    [anon_sym_uint64] = ACTIONS(156),
    [anon_sym_ulong] = ACTIONS(154),
    [anon_sym_ushort] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [aux_sym_comment_token2] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_return] = ACTIONS(154),
    [anon_sym_var] = ACTIONS(154),
    [anon_sym_construct] = ACTIONS(154),
    [anon_sym_namespace] = ACTIONS(154),
    [sym_identifier] = ACTIONS(154),
    [sym_camel_cased_identifier] = ACTIONS(154),
    [sym_uppercased_identifier] = ACTIONS(154),
  },
  [21] = {
    [anon_sym_class] = ACTIONS(158),
    [anon_sym_abstract] = ACTIONS(158),
    [anon_sym_const] = ACTIONS(158),
    [anon_sym_dynamic] = ACTIONS(158),
    [anon_sym_ensures] = ACTIONS(158),
    [anon_sym_extern] = ACTIONS(158),
    [anon_sym_inline] = ACTIONS(158),
    [anon_sym_internal] = ACTIONS(158),
    [anon_sym_override] = ACTIONS(158),
    [anon_sym_private] = ACTIONS(158),
    [anon_sym_protected] = ACTIONS(158),
    [anon_sym_public] = ACTIONS(158),
    [anon_sym_requires] = ACTIONS(158),
    [anon_sym_signal] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(158),
    [anon_sym_virtual] = ACTIONS(158),
    [anon_sym_volatile] = ACTIONS(158),
    [anon_sym_weak] = ACTIONS(158),
    [anon_sym_async] = ACTIONS(158),
    [anon_sym_owned] = ACTIONS(158),
    [anon_sym_unowned] = ACTIONS(158),
    [anon_sym_ref] = ACTIONS(158),
    [anon_sym_out] = ACTIONS(158),
    [anon_sym_bool] = ACTIONS(158),
    [anon_sym_char] = ACTIONS(158),
    [anon_sym_double] = ACTIONS(158),
    [anon_sym_float] = ACTIONS(158),
    [anon_sym_size_t] = ACTIONS(158),
    [anon_sym_ssize_t] = ACTIONS(158),
    [anon_sym_string] = ACTIONS(158),
    [anon_sym_unichar] = ACTIONS(158),
    [anon_sym_void] = ACTIONS(158),
    [anon_sym_int] = ACTIONS(158),
    [anon_sym_int8] = ACTIONS(160),
    [anon_sym_int16] = ACTIONS(160),
    [anon_sym_int32] = ACTIONS(160),
    [anon_sym_int64] = ACTIONS(160),
    [anon_sym_long] = ACTIONS(158),
    [anon_sym_short] = ACTIONS(158),
    [anon_sym_uchar] = ACTIONS(158),
    [anon_sym_uint] = ACTIONS(158),
    [anon_sym_uint8] = ACTIONS(160),
    [anon_sym_uint16] = ACTIONS(160),
    [anon_sym_uint32] = ACTIONS(160),
    [anon_sym_uint64] = ACTIONS(160),
    [anon_sym_ulong] = ACTIONS(158),
    [anon_sym_ushort] = ACTIONS(158),
    [aux_sym_comment_token1] = ACTIONS(160),
    [aux_sym_comment_token2] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_return] = ACTIONS(158),
    [anon_sym_var] = ACTIONS(158),
    [anon_sym_construct] = ACTIONS(158),
    [anon_sym_namespace] = ACTIONS(158),
    [sym_identifier] = ACTIONS(158),
    [sym_camel_cased_identifier] = ACTIONS(158),
    [sym_uppercased_identifier] = ACTIONS(158),
  },
  [22] = {
    [anon_sym_class] = ACTIONS(162),
    [anon_sym_abstract] = ACTIONS(162),
    [anon_sym_const] = ACTIONS(162),
    [anon_sym_dynamic] = ACTIONS(162),
    [anon_sym_ensures] = ACTIONS(162),
    [anon_sym_extern] = ACTIONS(162),
    [anon_sym_inline] = ACTIONS(162),
    [anon_sym_internal] = ACTIONS(162),
    [anon_sym_override] = ACTIONS(162),
    [anon_sym_private] = ACTIONS(162),
    [anon_sym_protected] = ACTIONS(162),
    [anon_sym_public] = ACTIONS(162),
    [anon_sym_requires] = ACTIONS(162),
    [anon_sym_signal] = ACTIONS(162),
    [anon_sym_static] = ACTIONS(162),
    [anon_sym_virtual] = ACTIONS(162),
    [anon_sym_volatile] = ACTIONS(162),
    [anon_sym_weak] = ACTIONS(162),
    [anon_sym_async] = ACTIONS(162),
    [anon_sym_owned] = ACTIONS(162),
    [anon_sym_unowned] = ACTIONS(162),
    [anon_sym_ref] = ACTIONS(162),
    [anon_sym_out] = ACTIONS(162),
    [anon_sym_bool] = ACTIONS(162),
    [anon_sym_char] = ACTIONS(162),
    [anon_sym_double] = ACTIONS(162),
    [anon_sym_float] = ACTIONS(162),
    [anon_sym_size_t] = ACTIONS(162),
    [anon_sym_ssize_t] = ACTIONS(162),
    [anon_sym_string] = ACTIONS(162),
    [anon_sym_unichar] = ACTIONS(162),
    [anon_sym_void] = ACTIONS(162),
    [anon_sym_int] = ACTIONS(162),
    [anon_sym_int8] = ACTIONS(164),
    [anon_sym_int16] = ACTIONS(164),
    [anon_sym_int32] = ACTIONS(164),
    [anon_sym_int64] = ACTIONS(164),
    [anon_sym_long] = ACTIONS(162),
    [anon_sym_short] = ACTIONS(162),
    [anon_sym_uchar] = ACTIONS(162),
    [anon_sym_uint] = ACTIONS(162),
    [anon_sym_uint8] = ACTIONS(164),
    [anon_sym_uint16] = ACTIONS(164),
    [anon_sym_uint32] = ACTIONS(164),
    [anon_sym_uint64] = ACTIONS(164),
    [anon_sym_ulong] = ACTIONS(162),
    [anon_sym_ushort] = ACTIONS(162),
    [aux_sym_comment_token1] = ACTIONS(164),
    [aux_sym_comment_token2] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_return] = ACTIONS(162),
    [anon_sym_var] = ACTIONS(162),
    [anon_sym_construct] = ACTIONS(162),
    [anon_sym_namespace] = ACTIONS(162),
    [sym_identifier] = ACTIONS(162),
    [sym_camel_cased_identifier] = ACTIONS(162),
    [sym_uppercased_identifier] = ACTIONS(162),
  },
  [23] = {
    [anon_sym_class] = ACTIONS(148),
    [anon_sym_abstract] = ACTIONS(148),
    [anon_sym_const] = ACTIONS(148),
    [anon_sym_dynamic] = ACTIONS(148),
    [anon_sym_ensures] = ACTIONS(148),
    [anon_sym_extern] = ACTIONS(148),
    [anon_sym_inline] = ACTIONS(148),
    [anon_sym_internal] = ACTIONS(148),
    [anon_sym_override] = ACTIONS(148),
    [anon_sym_private] = ACTIONS(148),
    [anon_sym_protected] = ACTIONS(148),
    [anon_sym_public] = ACTIONS(148),
    [anon_sym_requires] = ACTIONS(148),
    [anon_sym_signal] = ACTIONS(148),
    [anon_sym_static] = ACTIONS(148),
    [anon_sym_virtual] = ACTIONS(148),
    [anon_sym_volatile] = ACTIONS(148),
    [anon_sym_weak] = ACTIONS(148),
    [anon_sym_async] = ACTIONS(148),
    [anon_sym_owned] = ACTIONS(148),
    [anon_sym_unowned] = ACTIONS(148),
    [anon_sym_ref] = ACTIONS(148),
    [anon_sym_out] = ACTIONS(148),
    [anon_sym_bool] = ACTIONS(148),
    [anon_sym_char] = ACTIONS(148),
    [anon_sym_double] = ACTIONS(148),
    [anon_sym_float] = ACTIONS(148),
    [anon_sym_size_t] = ACTIONS(148),
    [anon_sym_ssize_t] = ACTIONS(148),
    [anon_sym_string] = ACTIONS(148),
    [anon_sym_unichar] = ACTIONS(148),
    [anon_sym_void] = ACTIONS(148),
    [anon_sym_int] = ACTIONS(148),
    [anon_sym_int8] = ACTIONS(146),
    [anon_sym_int16] = ACTIONS(146),
    [anon_sym_int32] = ACTIONS(146),
    [anon_sym_int64] = ACTIONS(146),
    [anon_sym_long] = ACTIONS(148),
    [anon_sym_short] = ACTIONS(148),
    [anon_sym_uchar] = ACTIONS(148),
    [anon_sym_uint] = ACTIONS(148),
    [anon_sym_uint8] = ACTIONS(146),
    [anon_sym_uint16] = ACTIONS(146),
    [anon_sym_uint32] = ACTIONS(146),
    [anon_sym_uint64] = ACTIONS(146),
    [anon_sym_ulong] = ACTIONS(148),
    [anon_sym_ushort] = ACTIONS(148),
    [aux_sym_comment_token1] = ACTIONS(146),
    [aux_sym_comment_token2] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_return] = ACTIONS(148),
    [anon_sym_var] = ACTIONS(148),
    [anon_sym_construct] = ACTIONS(148),
    [anon_sym_namespace] = ACTIONS(148),
    [sym_identifier] = ACTIONS(148),
    [sym_camel_cased_identifier] = ACTIONS(148),
    [sym_uppercased_identifier] = ACTIONS(148),
  },
  [24] = {
    [anon_sym_class] = ACTIONS(166),
    [anon_sym_abstract] = ACTIONS(166),
    [anon_sym_const] = ACTIONS(166),
    [anon_sym_dynamic] = ACTIONS(166),
    [anon_sym_ensures] = ACTIONS(166),
    [anon_sym_extern] = ACTIONS(166),
    [anon_sym_inline] = ACTIONS(166),
    [anon_sym_internal] = ACTIONS(166),
    [anon_sym_override] = ACTIONS(166),
    [anon_sym_private] = ACTIONS(166),
    [anon_sym_protected] = ACTIONS(166),
    [anon_sym_public] = ACTIONS(166),
    [anon_sym_requires] = ACTIONS(166),
    [anon_sym_signal] = ACTIONS(166),
    [anon_sym_static] = ACTIONS(166),
    [anon_sym_virtual] = ACTIONS(166),
    [anon_sym_volatile] = ACTIONS(166),
    [anon_sym_weak] = ACTIONS(166),
    [anon_sym_async] = ACTIONS(166),
    [anon_sym_owned] = ACTIONS(166),
    [anon_sym_unowned] = ACTIONS(166),
    [anon_sym_ref] = ACTIONS(166),
    [anon_sym_out] = ACTIONS(166),
    [anon_sym_bool] = ACTIONS(166),
    [anon_sym_char] = ACTIONS(166),
    [anon_sym_double] = ACTIONS(166),
    [anon_sym_float] = ACTIONS(166),
    [anon_sym_size_t] = ACTIONS(166),
    [anon_sym_ssize_t] = ACTIONS(166),
    [anon_sym_string] = ACTIONS(166),
    [anon_sym_unichar] = ACTIONS(166),
    [anon_sym_void] = ACTIONS(166),
    [anon_sym_int] = ACTIONS(166),
    [anon_sym_int8] = ACTIONS(168),
    [anon_sym_int16] = ACTIONS(168),
    [anon_sym_int32] = ACTIONS(168),
    [anon_sym_int64] = ACTIONS(168),
    [anon_sym_long] = ACTIONS(166),
    [anon_sym_short] = ACTIONS(166),
    [anon_sym_uchar] = ACTIONS(166),
    [anon_sym_uint] = ACTIONS(166),
    [anon_sym_uint8] = ACTIONS(168),
    [anon_sym_uint16] = ACTIONS(168),
    [anon_sym_uint32] = ACTIONS(168),
    [anon_sym_uint64] = ACTIONS(168),
    [anon_sym_ulong] = ACTIONS(166),
    [anon_sym_ushort] = ACTIONS(166),
    [aux_sym_comment_token1] = ACTIONS(168),
    [aux_sym_comment_token2] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_return] = ACTIONS(166),
    [anon_sym_var] = ACTIONS(166),
    [anon_sym_construct] = ACTIONS(166),
    [anon_sym_namespace] = ACTIONS(166),
    [sym_identifier] = ACTIONS(166),
    [sym_camel_cased_identifier] = ACTIONS(166),
    [sym_uppercased_identifier] = ACTIONS(166),
  },
  [25] = {
    [anon_sym_class] = ACTIONS(170),
    [anon_sym_abstract] = ACTIONS(170),
    [anon_sym_const] = ACTIONS(170),
    [anon_sym_dynamic] = ACTIONS(170),
    [anon_sym_ensures] = ACTIONS(170),
    [anon_sym_extern] = ACTIONS(170),
    [anon_sym_inline] = ACTIONS(170),
    [anon_sym_internal] = ACTIONS(170),
    [anon_sym_override] = ACTIONS(170),
    [anon_sym_private] = ACTIONS(170),
    [anon_sym_protected] = ACTIONS(170),
    [anon_sym_public] = ACTIONS(170),
    [anon_sym_requires] = ACTIONS(170),
    [anon_sym_signal] = ACTIONS(170),
    [anon_sym_static] = ACTIONS(170),
    [anon_sym_virtual] = ACTIONS(170),
    [anon_sym_volatile] = ACTIONS(170),
    [anon_sym_weak] = ACTIONS(170),
    [anon_sym_async] = ACTIONS(170),
    [anon_sym_owned] = ACTIONS(170),
    [anon_sym_unowned] = ACTIONS(170),
    [anon_sym_ref] = ACTIONS(170),
    [anon_sym_out] = ACTIONS(170),
    [anon_sym_bool] = ACTIONS(170),
    [anon_sym_char] = ACTIONS(170),
    [anon_sym_double] = ACTIONS(170),
    [anon_sym_float] = ACTIONS(170),
    [anon_sym_size_t] = ACTIONS(170),
    [anon_sym_ssize_t] = ACTIONS(170),
    [anon_sym_string] = ACTIONS(170),
    [anon_sym_unichar] = ACTIONS(170),
    [anon_sym_void] = ACTIONS(170),
    [anon_sym_int] = ACTIONS(170),
    [anon_sym_int8] = ACTIONS(172),
    [anon_sym_int16] = ACTIONS(172),
    [anon_sym_int32] = ACTIONS(172),
    [anon_sym_int64] = ACTIONS(172),
    [anon_sym_long] = ACTIONS(170),
    [anon_sym_short] = ACTIONS(170),
    [anon_sym_uchar] = ACTIONS(170),
    [anon_sym_uint] = ACTIONS(170),
    [anon_sym_uint8] = ACTIONS(172),
    [anon_sym_uint16] = ACTIONS(172),
    [anon_sym_uint32] = ACTIONS(172),
    [anon_sym_uint64] = ACTIONS(172),
    [anon_sym_ulong] = ACTIONS(170),
    [anon_sym_ushort] = ACTIONS(170),
    [aux_sym_comment_token1] = ACTIONS(172),
    [aux_sym_comment_token2] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_return] = ACTIONS(170),
    [anon_sym_var] = ACTIONS(170),
    [anon_sym_construct] = ACTIONS(170),
    [anon_sym_namespace] = ACTIONS(170),
    [sym_identifier] = ACTIONS(170),
    [sym_camel_cased_identifier] = ACTIONS(170),
    [sym_uppercased_identifier] = ACTIONS(170),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(130),
    [anon_sym_abstract] = ACTIONS(130),
    [anon_sym_const] = ACTIONS(130),
    [anon_sym_dynamic] = ACTIONS(130),
    [anon_sym_ensures] = ACTIONS(130),
    [anon_sym_extern] = ACTIONS(130),
    [anon_sym_inline] = ACTIONS(130),
    [anon_sym_internal] = ACTIONS(130),
    [anon_sym_override] = ACTIONS(130),
    [anon_sym_private] = ACTIONS(130),
    [anon_sym_protected] = ACTIONS(130),
    [anon_sym_public] = ACTIONS(130),
    [anon_sym_requires] = ACTIONS(130),
    [anon_sym_signal] = ACTIONS(130),
    [anon_sym_static] = ACTIONS(130),
    [anon_sym_virtual] = ACTIONS(130),
    [anon_sym_volatile] = ACTIONS(130),
    [anon_sym_weak] = ACTIONS(130),
    [anon_sym_async] = ACTIONS(130),
    [anon_sym_owned] = ACTIONS(130),
    [anon_sym_unowned] = ACTIONS(130),
    [anon_sym_ref] = ACTIONS(130),
    [anon_sym_out] = ACTIONS(130),
    [anon_sym_bool] = ACTIONS(130),
    [anon_sym_char] = ACTIONS(130),
    [anon_sym_double] = ACTIONS(130),
    [anon_sym_float] = ACTIONS(130),
    [anon_sym_size_t] = ACTIONS(130),
    [anon_sym_ssize_t] = ACTIONS(130),
    [anon_sym_string] = ACTIONS(130),
    [anon_sym_unichar] = ACTIONS(130),
    [anon_sym_void] = ACTIONS(130),
    [anon_sym_int] = ACTIONS(130),
    [anon_sym_int8] = ACTIONS(132),
    [anon_sym_int16] = ACTIONS(132),
    [anon_sym_int32] = ACTIONS(132),
    [anon_sym_int64] = ACTIONS(132),
    [anon_sym_long] = ACTIONS(130),
    [anon_sym_short] = ACTIONS(130),
    [anon_sym_uchar] = ACTIONS(130),
    [anon_sym_uint] = ACTIONS(130),
    [anon_sym_uint8] = ACTIONS(132),
    [anon_sym_uint16] = ACTIONS(132),
    [anon_sym_uint32] = ACTIONS(132),
    [anon_sym_uint64] = ACTIONS(132),
    [anon_sym_ulong] = ACTIONS(130),
    [anon_sym_ushort] = ACTIONS(130),
    [aux_sym_comment_token1] = ACTIONS(132),
    [aux_sym_comment_token2] = ACTIONS(132),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_var] = ACTIONS(130),
    [anon_sym_construct] = ACTIONS(130),
    [anon_sym_namespace] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [sym_camel_cased_identifier] = ACTIONS(130),
    [sym_uppercased_identifier] = ACTIONS(130),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_class] = ACTIONS(176),
    [anon_sym_abstract] = ACTIONS(176),
    [anon_sym_const] = ACTIONS(176),
    [anon_sym_dynamic] = ACTIONS(176),
    [anon_sym_ensures] = ACTIONS(176),
    [anon_sym_extern] = ACTIONS(176),
    [anon_sym_inline] = ACTIONS(176),
    [anon_sym_internal] = ACTIONS(176),
    [anon_sym_override] = ACTIONS(176),
    [anon_sym_private] = ACTIONS(176),
    [anon_sym_protected] = ACTIONS(176),
    [anon_sym_public] = ACTIONS(176),
    [anon_sym_requires] = ACTIONS(176),
    [anon_sym_signal] = ACTIONS(176),
    [anon_sym_static] = ACTIONS(176),
    [anon_sym_virtual] = ACTIONS(176),
    [anon_sym_volatile] = ACTIONS(176),
    [anon_sym_weak] = ACTIONS(176),
    [anon_sym_async] = ACTIONS(176),
    [anon_sym_owned] = ACTIONS(176),
    [anon_sym_unowned] = ACTIONS(176),
    [anon_sym_ref] = ACTIONS(176),
    [anon_sym_out] = ACTIONS(176),
    [anon_sym_bool] = ACTIONS(176),
    [anon_sym_char] = ACTIONS(176),
    [anon_sym_double] = ACTIONS(176),
    [anon_sym_float] = ACTIONS(176),
    [anon_sym_size_t] = ACTIONS(176),
    [anon_sym_ssize_t] = ACTIONS(176),
    [anon_sym_string] = ACTIONS(176),
    [anon_sym_unichar] = ACTIONS(176),
    [anon_sym_void] = ACTIONS(176),
    [anon_sym_int] = ACTIONS(176),
    [anon_sym_int8] = ACTIONS(174),
    [anon_sym_int16] = ACTIONS(174),
    [anon_sym_int32] = ACTIONS(174),
    [anon_sym_int64] = ACTIONS(174),
    [anon_sym_long] = ACTIONS(176),
    [anon_sym_short] = ACTIONS(176),
    [anon_sym_uchar] = ACTIONS(176),
    [anon_sym_uint] = ACTIONS(176),
    [anon_sym_uint8] = ACTIONS(174),
    [anon_sym_uint16] = ACTIONS(174),
    [anon_sym_uint32] = ACTIONS(174),
    [anon_sym_uint64] = ACTIONS(174),
    [anon_sym_ulong] = ACTIONS(176),
    [anon_sym_ushort] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(174),
    [aux_sym_comment_token2] = ACTIONS(174),
    [anon_sym_return] = ACTIONS(176),
    [anon_sym_var] = ACTIONS(176),
    [anon_sym_construct] = ACTIONS(176),
    [anon_sym_namespace] = ACTIONS(176),
    [sym_identifier] = ACTIONS(176),
    [sym_camel_cased_identifier] = ACTIONS(176),
    [sym_uppercased_identifier] = ACTIONS(176),
  },
  [28] = {
    [anon_sym_class] = ACTIONS(178),
    [anon_sym_abstract] = ACTIONS(178),
    [anon_sym_const] = ACTIONS(178),
    [anon_sym_dynamic] = ACTIONS(178),
    [anon_sym_ensures] = ACTIONS(178),
    [anon_sym_extern] = ACTIONS(178),
    [anon_sym_inline] = ACTIONS(178),
    [anon_sym_internal] = ACTIONS(178),
    [anon_sym_override] = ACTIONS(178),
    [anon_sym_private] = ACTIONS(178),
    [anon_sym_protected] = ACTIONS(178),
    [anon_sym_public] = ACTIONS(178),
    [anon_sym_requires] = ACTIONS(178),
    [anon_sym_signal] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(178),
    [anon_sym_virtual] = ACTIONS(178),
    [anon_sym_volatile] = ACTIONS(178),
    [anon_sym_weak] = ACTIONS(178),
    [anon_sym_async] = ACTIONS(178),
    [anon_sym_owned] = ACTIONS(178),
    [anon_sym_unowned] = ACTIONS(178),
    [anon_sym_ref] = ACTIONS(178),
    [anon_sym_out] = ACTIONS(178),
    [anon_sym_bool] = ACTIONS(178),
    [anon_sym_char] = ACTIONS(178),
    [anon_sym_double] = ACTIONS(178),
    [anon_sym_float] = ACTIONS(178),
    [anon_sym_size_t] = ACTIONS(178),
    [anon_sym_ssize_t] = ACTIONS(178),
    [anon_sym_string] = ACTIONS(178),
    [anon_sym_unichar] = ACTIONS(178),
    [anon_sym_void] = ACTIONS(178),
    [anon_sym_int] = ACTIONS(178),
    [anon_sym_int8] = ACTIONS(180),
    [anon_sym_int16] = ACTIONS(180),
    [anon_sym_int32] = ACTIONS(180),
    [anon_sym_int64] = ACTIONS(180),
    [anon_sym_long] = ACTIONS(178),
    [anon_sym_short] = ACTIONS(178),
    [anon_sym_uchar] = ACTIONS(178),
    [anon_sym_uint] = ACTIONS(178),
    [anon_sym_uint8] = ACTIONS(180),
    [anon_sym_uint16] = ACTIONS(180),
    [anon_sym_uint32] = ACTIONS(180),
    [anon_sym_uint64] = ACTIONS(180),
    [anon_sym_ulong] = ACTIONS(178),
    [anon_sym_ushort] = ACTIONS(178),
    [aux_sym_comment_token1] = ACTIONS(180),
    [aux_sym_comment_token2] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_return] = ACTIONS(178),
    [anon_sym_var] = ACTIONS(178),
    [anon_sym_construct] = ACTIONS(178),
    [anon_sym_namespace] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [sym_camel_cased_identifier] = ACTIONS(178),
    [sym_uppercased_identifier] = ACTIONS(178),
  },
  [29] = {
    [anon_sym_class] = ACTIONS(182),
    [anon_sym_abstract] = ACTIONS(182),
    [anon_sym_const] = ACTIONS(182),
    [anon_sym_dynamic] = ACTIONS(182),
    [anon_sym_ensures] = ACTIONS(182),
    [anon_sym_extern] = ACTIONS(182),
    [anon_sym_inline] = ACTIONS(182),
    [anon_sym_internal] = ACTIONS(182),
    [anon_sym_override] = ACTIONS(182),
    [anon_sym_private] = ACTIONS(182),
    [anon_sym_protected] = ACTIONS(182),
    [anon_sym_public] = ACTIONS(182),
    [anon_sym_requires] = ACTIONS(182),
    [anon_sym_signal] = ACTIONS(182),
    [anon_sym_static] = ACTIONS(182),
    [anon_sym_virtual] = ACTIONS(182),
    [anon_sym_volatile] = ACTIONS(182),
    [anon_sym_weak] = ACTIONS(182),
    [anon_sym_async] = ACTIONS(182),
    [anon_sym_owned] = ACTIONS(182),
    [anon_sym_unowned] = ACTIONS(182),
    [anon_sym_ref] = ACTIONS(182),
    [anon_sym_out] = ACTIONS(182),
    [anon_sym_bool] = ACTIONS(182),
    [anon_sym_char] = ACTIONS(182),
    [anon_sym_double] = ACTIONS(182),
    [anon_sym_float] = ACTIONS(182),
    [anon_sym_size_t] = ACTIONS(182),
    [anon_sym_ssize_t] = ACTIONS(182),
    [anon_sym_string] = ACTIONS(182),
    [anon_sym_unichar] = ACTIONS(182),
    [anon_sym_void] = ACTIONS(182),
    [anon_sym_int] = ACTIONS(182),
    [anon_sym_int8] = ACTIONS(184),
    [anon_sym_int16] = ACTIONS(184),
    [anon_sym_int32] = ACTIONS(184),
    [anon_sym_int64] = ACTIONS(184),
    [anon_sym_long] = ACTIONS(182),
    [anon_sym_short] = ACTIONS(182),
    [anon_sym_uchar] = ACTIONS(182),
    [anon_sym_uint] = ACTIONS(182),
    [anon_sym_uint8] = ACTIONS(184),
    [anon_sym_uint16] = ACTIONS(184),
    [anon_sym_uint32] = ACTIONS(184),
    [anon_sym_uint64] = ACTIONS(184),
    [anon_sym_ulong] = ACTIONS(182),
    [anon_sym_ushort] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(184),
    [aux_sym_comment_token2] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_return] = ACTIONS(182),
    [anon_sym_var] = ACTIONS(182),
    [anon_sym_construct] = ACTIONS(182),
    [anon_sym_namespace] = ACTIONS(182),
    [sym_identifier] = ACTIONS(182),
    [sym_camel_cased_identifier] = ACTIONS(182),
    [sym_uppercased_identifier] = ACTIONS(182),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_class] = ACTIONS(188),
    [anon_sym_abstract] = ACTIONS(188),
    [anon_sym_const] = ACTIONS(188),
    [anon_sym_dynamic] = ACTIONS(188),
    [anon_sym_ensures] = ACTIONS(188),
    [anon_sym_extern] = ACTIONS(188),
    [anon_sym_inline] = ACTIONS(188),
    [anon_sym_internal] = ACTIONS(188),
    [anon_sym_override] = ACTIONS(188),
    [anon_sym_private] = ACTIONS(188),
    [anon_sym_protected] = ACTIONS(188),
    [anon_sym_public] = ACTIONS(188),
    [anon_sym_requires] = ACTIONS(188),
    [anon_sym_signal] = ACTIONS(188),
    [anon_sym_static] = ACTIONS(188),
    [anon_sym_virtual] = ACTIONS(188),
    [anon_sym_volatile] = ACTIONS(188),
    [anon_sym_weak] = ACTIONS(188),
    [anon_sym_async] = ACTIONS(188),
    [anon_sym_owned] = ACTIONS(188),
    [anon_sym_unowned] = ACTIONS(188),
    [anon_sym_ref] = ACTIONS(188),
    [anon_sym_out] = ACTIONS(188),
    [anon_sym_bool] = ACTIONS(188),
    [anon_sym_char] = ACTIONS(188),
    [anon_sym_double] = ACTIONS(188),
    [anon_sym_float] = ACTIONS(188),
    [anon_sym_size_t] = ACTIONS(188),
    [anon_sym_ssize_t] = ACTIONS(188),
    [anon_sym_string] = ACTIONS(188),
    [anon_sym_unichar] = ACTIONS(188),
    [anon_sym_void] = ACTIONS(188),
    [anon_sym_int] = ACTIONS(188),
    [anon_sym_int8] = ACTIONS(186),
    [anon_sym_int16] = ACTIONS(186),
    [anon_sym_int32] = ACTIONS(186),
    [anon_sym_int64] = ACTIONS(186),
    [anon_sym_long] = ACTIONS(188),
    [anon_sym_short] = ACTIONS(188),
    [anon_sym_uchar] = ACTIONS(188),
    [anon_sym_uint] = ACTIONS(188),
    [anon_sym_uint8] = ACTIONS(186),
    [anon_sym_uint16] = ACTIONS(186),
    [anon_sym_uint32] = ACTIONS(186),
    [anon_sym_uint64] = ACTIONS(186),
    [anon_sym_ulong] = ACTIONS(188),
    [anon_sym_ushort] = ACTIONS(188),
    [aux_sym_comment_token1] = ACTIONS(186),
    [aux_sym_comment_token2] = ACTIONS(186),
    [anon_sym_return] = ACTIONS(188),
    [anon_sym_var] = ACTIONS(188),
    [anon_sym_construct] = ACTIONS(188),
    [anon_sym_namespace] = ACTIONS(188),
    [sym_identifier] = ACTIONS(188),
    [sym_camel_cased_identifier] = ACTIONS(188),
    [sym_uppercased_identifier] = ACTIONS(188),
  },
  [31] = {
    [anon_sym_class] = ACTIONS(176),
    [anon_sym_abstract] = ACTIONS(176),
    [anon_sym_const] = ACTIONS(176),
    [anon_sym_dynamic] = ACTIONS(176),
    [anon_sym_ensures] = ACTIONS(176),
    [anon_sym_extern] = ACTIONS(176),
    [anon_sym_inline] = ACTIONS(176),
    [anon_sym_internal] = ACTIONS(176),
    [anon_sym_override] = ACTIONS(176),
    [anon_sym_private] = ACTIONS(176),
    [anon_sym_protected] = ACTIONS(176),
    [anon_sym_public] = ACTIONS(176),
    [anon_sym_requires] = ACTIONS(176),
    [anon_sym_signal] = ACTIONS(176),
    [anon_sym_static] = ACTIONS(176),
    [anon_sym_virtual] = ACTIONS(176),
    [anon_sym_volatile] = ACTIONS(176),
    [anon_sym_weak] = ACTIONS(176),
    [anon_sym_async] = ACTIONS(176),
    [anon_sym_owned] = ACTIONS(176),
    [anon_sym_unowned] = ACTIONS(176),
    [anon_sym_ref] = ACTIONS(176),
    [anon_sym_out] = ACTIONS(176),
    [anon_sym_bool] = ACTIONS(176),
    [anon_sym_char] = ACTIONS(176),
    [anon_sym_double] = ACTIONS(176),
    [anon_sym_float] = ACTIONS(176),
    [anon_sym_size_t] = ACTIONS(176),
    [anon_sym_ssize_t] = ACTIONS(176),
    [anon_sym_string] = ACTIONS(176),
    [anon_sym_unichar] = ACTIONS(176),
    [anon_sym_void] = ACTIONS(176),
    [anon_sym_int] = ACTIONS(176),
    [anon_sym_int8] = ACTIONS(174),
    [anon_sym_int16] = ACTIONS(174),
    [anon_sym_int32] = ACTIONS(174),
    [anon_sym_int64] = ACTIONS(174),
    [anon_sym_long] = ACTIONS(176),
    [anon_sym_short] = ACTIONS(176),
    [anon_sym_uchar] = ACTIONS(176),
    [anon_sym_uint] = ACTIONS(176),
    [anon_sym_uint8] = ACTIONS(174),
    [anon_sym_uint16] = ACTIONS(174),
    [anon_sym_uint32] = ACTIONS(174),
    [anon_sym_uint64] = ACTIONS(174),
    [anon_sym_ulong] = ACTIONS(176),
    [anon_sym_ushort] = ACTIONS(176),
    [aux_sym_comment_token1] = ACTIONS(174),
    [aux_sym_comment_token2] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_return] = ACTIONS(176),
    [anon_sym_var] = ACTIONS(176),
    [anon_sym_construct] = ACTIONS(176),
    [anon_sym_namespace] = ACTIONS(176),
    [sym_identifier] = ACTIONS(176),
    [sym_camel_cased_identifier] = ACTIONS(176),
    [sym_uppercased_identifier] = ACTIONS(176),
  },
  [32] = {
    [anon_sym_class] = ACTIONS(188),
    [anon_sym_abstract] = ACTIONS(188),
    [anon_sym_const] = ACTIONS(188),
    [anon_sym_dynamic] = ACTIONS(188),
    [anon_sym_ensures] = ACTIONS(188),
    [anon_sym_extern] = ACTIONS(188),
    [anon_sym_inline] = ACTIONS(188),
    [anon_sym_internal] = ACTIONS(188),
    [anon_sym_override] = ACTIONS(188),
    [anon_sym_private] = ACTIONS(188),
    [anon_sym_protected] = ACTIONS(188),
    [anon_sym_public] = ACTIONS(188),
    [anon_sym_requires] = ACTIONS(188),
    [anon_sym_signal] = ACTIONS(188),
    [anon_sym_static] = ACTIONS(188),
    [anon_sym_virtual] = ACTIONS(188),
    [anon_sym_volatile] = ACTIONS(188),
    [anon_sym_weak] = ACTIONS(188),
    [anon_sym_async] = ACTIONS(188),
    [anon_sym_owned] = ACTIONS(188),
    [anon_sym_unowned] = ACTIONS(188),
    [anon_sym_ref] = ACTIONS(188),
    [anon_sym_out] = ACTIONS(188),
    [anon_sym_bool] = ACTIONS(188),
    [anon_sym_char] = ACTIONS(188),
    [anon_sym_double] = ACTIONS(188),
    [anon_sym_float] = ACTIONS(188),
    [anon_sym_size_t] = ACTIONS(188),
    [anon_sym_ssize_t] = ACTIONS(188),
    [anon_sym_string] = ACTIONS(188),
    [anon_sym_unichar] = ACTIONS(188),
    [anon_sym_void] = ACTIONS(188),
    [anon_sym_int] = ACTIONS(188),
    [anon_sym_int8] = ACTIONS(186),
    [anon_sym_int16] = ACTIONS(186),
    [anon_sym_int32] = ACTIONS(186),
    [anon_sym_int64] = ACTIONS(186),
    [anon_sym_long] = ACTIONS(188),
    [anon_sym_short] = ACTIONS(188),
    [anon_sym_uchar] = ACTIONS(188),
    [anon_sym_uint] = ACTIONS(188),
    [anon_sym_uint8] = ACTIONS(186),
    [anon_sym_uint16] = ACTIONS(186),
    [anon_sym_uint32] = ACTIONS(186),
    [anon_sym_uint64] = ACTIONS(186),
    [anon_sym_ulong] = ACTIONS(188),
    [anon_sym_ushort] = ACTIONS(188),
    [aux_sym_comment_token1] = ACTIONS(186),
    [aux_sym_comment_token2] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_return] = ACTIONS(188),
    [anon_sym_var] = ACTIONS(188),
    [anon_sym_construct] = ACTIONS(188),
    [anon_sym_namespace] = ACTIONS(188),
    [sym_identifier] = ACTIONS(188),
    [sym_camel_cased_identifier] = ACTIONS(188),
    [sym_uppercased_identifier] = ACTIONS(188),
  },
  [33] = {
    [anon_sym_class] = ACTIONS(190),
    [anon_sym_abstract] = ACTIONS(190),
    [anon_sym_const] = ACTIONS(190),
    [anon_sym_dynamic] = ACTIONS(190),
    [anon_sym_ensures] = ACTIONS(190),
    [anon_sym_extern] = ACTIONS(190),
    [anon_sym_inline] = ACTIONS(190),
    [anon_sym_internal] = ACTIONS(190),
    [anon_sym_override] = ACTIONS(190),
    [anon_sym_private] = ACTIONS(190),
    [anon_sym_protected] = ACTIONS(190),
    [anon_sym_public] = ACTIONS(190),
    [anon_sym_requires] = ACTIONS(190),
    [anon_sym_signal] = ACTIONS(190),
    [anon_sym_static] = ACTIONS(190),
    [anon_sym_virtual] = ACTIONS(190),
    [anon_sym_volatile] = ACTIONS(190),
    [anon_sym_weak] = ACTIONS(190),
    [anon_sym_async] = ACTIONS(190),
    [anon_sym_owned] = ACTIONS(190),
    [anon_sym_unowned] = ACTIONS(190),
    [anon_sym_ref] = ACTIONS(190),
    [anon_sym_out] = ACTIONS(190),
    [anon_sym_bool] = ACTIONS(190),
    [anon_sym_char] = ACTIONS(190),
    [anon_sym_double] = ACTIONS(190),
    [anon_sym_float] = ACTIONS(190),
    [anon_sym_size_t] = ACTIONS(190),
    [anon_sym_ssize_t] = ACTIONS(190),
    [anon_sym_string] = ACTIONS(190),
    [anon_sym_unichar] = ACTIONS(190),
    [anon_sym_void] = ACTIONS(190),
    [anon_sym_int] = ACTIONS(190),
    [anon_sym_int8] = ACTIONS(192),
    [anon_sym_int16] = ACTIONS(192),
    [anon_sym_int32] = ACTIONS(192),
    [anon_sym_int64] = ACTIONS(192),
    [anon_sym_long] = ACTIONS(190),
    [anon_sym_short] = ACTIONS(190),
    [anon_sym_uchar] = ACTIONS(190),
    [anon_sym_uint] = ACTIONS(190),
    [anon_sym_uint8] = ACTIONS(192),
    [anon_sym_uint16] = ACTIONS(192),
    [anon_sym_uint32] = ACTIONS(192),
    [anon_sym_uint64] = ACTIONS(192),
    [anon_sym_ulong] = ACTIONS(190),
    [anon_sym_ushort] = ACTIONS(190),
    [aux_sym_comment_token1] = ACTIONS(192),
    [aux_sym_comment_token2] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym_return] = ACTIONS(190),
    [anon_sym_var] = ACTIONS(190),
    [anon_sym_construct] = ACTIONS(190),
    [anon_sym_namespace] = ACTIONS(190),
    [sym_identifier] = ACTIONS(190),
    [sym_camel_cased_identifier] = ACTIONS(190),
    [sym_uppercased_identifier] = ACTIONS(190),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_class] = ACTIONS(196),
    [anon_sym_abstract] = ACTIONS(196),
    [anon_sym_const] = ACTIONS(196),
    [anon_sym_dynamic] = ACTIONS(196),
    [anon_sym_ensures] = ACTIONS(196),
    [anon_sym_extern] = ACTIONS(196),
    [anon_sym_inline] = ACTIONS(196),
    [anon_sym_internal] = ACTIONS(196),
    [anon_sym_override] = ACTIONS(196),
    [anon_sym_private] = ACTIONS(196),
    [anon_sym_protected] = ACTIONS(196),
    [anon_sym_public] = ACTIONS(196),
    [anon_sym_requires] = ACTIONS(196),
    [anon_sym_signal] = ACTIONS(196),
    [anon_sym_static] = ACTIONS(196),
    [anon_sym_virtual] = ACTIONS(196),
    [anon_sym_volatile] = ACTIONS(196),
    [anon_sym_weak] = ACTIONS(196),
    [anon_sym_async] = ACTIONS(196),
    [anon_sym_owned] = ACTIONS(196),
    [anon_sym_unowned] = ACTIONS(196),
    [anon_sym_ref] = ACTIONS(196),
    [anon_sym_out] = ACTIONS(196),
    [anon_sym_bool] = ACTIONS(196),
    [anon_sym_char] = ACTIONS(196),
    [anon_sym_double] = ACTIONS(196),
    [anon_sym_float] = ACTIONS(196),
    [anon_sym_size_t] = ACTIONS(196),
    [anon_sym_ssize_t] = ACTIONS(196),
    [anon_sym_string] = ACTIONS(196),
    [anon_sym_unichar] = ACTIONS(196),
    [anon_sym_void] = ACTIONS(196),
    [anon_sym_int] = ACTIONS(196),
    [anon_sym_int8] = ACTIONS(194),
    [anon_sym_int16] = ACTIONS(194),
    [anon_sym_int32] = ACTIONS(194),
    [anon_sym_int64] = ACTIONS(194),
    [anon_sym_long] = ACTIONS(196),
    [anon_sym_short] = ACTIONS(196),
    [anon_sym_uchar] = ACTIONS(196),
    [anon_sym_uint] = ACTIONS(196),
    [anon_sym_uint8] = ACTIONS(194),
    [anon_sym_uint16] = ACTIONS(194),
    [anon_sym_uint32] = ACTIONS(194),
    [anon_sym_uint64] = ACTIONS(194),
    [anon_sym_ulong] = ACTIONS(196),
    [anon_sym_ushort] = ACTIONS(196),
    [aux_sym_comment_token1] = ACTIONS(194),
    [aux_sym_comment_token2] = ACTIONS(194),
    [anon_sym_return] = ACTIONS(196),
    [anon_sym_var] = ACTIONS(196),
    [anon_sym_construct] = ACTIONS(196),
    [anon_sym_namespace] = ACTIONS(196),
    [sym_identifier] = ACTIONS(196),
    [sym_camel_cased_identifier] = ACTIONS(196),
    [sym_uppercased_identifier] = ACTIONS(196),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_class] = ACTIONS(134),
    [anon_sym_abstract] = ACTIONS(134),
    [anon_sym_const] = ACTIONS(134),
    [anon_sym_dynamic] = ACTIONS(134),
    [anon_sym_ensures] = ACTIONS(134),
    [anon_sym_extern] = ACTIONS(134),
    [anon_sym_inline] = ACTIONS(134),
    [anon_sym_internal] = ACTIONS(134),
    [anon_sym_override] = ACTIONS(134),
    [anon_sym_private] = ACTIONS(134),
    [anon_sym_protected] = ACTIONS(134),
    [anon_sym_public] = ACTIONS(134),
    [anon_sym_requires] = ACTIONS(134),
    [anon_sym_signal] = ACTIONS(134),
    [anon_sym_static] = ACTIONS(134),
    [anon_sym_virtual] = ACTIONS(134),
    [anon_sym_volatile] = ACTIONS(134),
    [anon_sym_weak] = ACTIONS(134),
    [anon_sym_async] = ACTIONS(134),
    [anon_sym_owned] = ACTIONS(134),
    [anon_sym_unowned] = ACTIONS(134),
    [anon_sym_ref] = ACTIONS(134),
    [anon_sym_out] = ACTIONS(134),
    [anon_sym_bool] = ACTIONS(134),
    [anon_sym_char] = ACTIONS(134),
    [anon_sym_double] = ACTIONS(134),
    [anon_sym_float] = ACTIONS(134),
    [anon_sym_size_t] = ACTIONS(134),
    [anon_sym_ssize_t] = ACTIONS(134),
    [anon_sym_string] = ACTIONS(134),
    [anon_sym_unichar] = ACTIONS(134),
    [anon_sym_void] = ACTIONS(134),
    [anon_sym_int] = ACTIONS(134),
    [anon_sym_int8] = ACTIONS(136),
    [anon_sym_int16] = ACTIONS(136),
    [anon_sym_int32] = ACTIONS(136),
    [anon_sym_int64] = ACTIONS(136),
    [anon_sym_long] = ACTIONS(134),
    [anon_sym_short] = ACTIONS(134),
    [anon_sym_uchar] = ACTIONS(134),
    [anon_sym_uint] = ACTIONS(134),
    [anon_sym_uint8] = ACTIONS(136),
    [anon_sym_uint16] = ACTIONS(136),
    [anon_sym_uint32] = ACTIONS(136),
    [anon_sym_uint64] = ACTIONS(136),
    [anon_sym_ulong] = ACTIONS(134),
    [anon_sym_ushort] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(136),
    [aux_sym_comment_token2] = ACTIONS(136),
    [anon_sym_return] = ACTIONS(134),
    [anon_sym_var] = ACTIONS(134),
    [anon_sym_construct] = ACTIONS(134),
    [anon_sym_namespace] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [sym_camel_cased_identifier] = ACTIONS(134),
    [sym_uppercased_identifier] = ACTIONS(134),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_class] = ACTIONS(190),
    [anon_sym_abstract] = ACTIONS(190),
    [anon_sym_const] = ACTIONS(190),
    [anon_sym_dynamic] = ACTIONS(190),
    [anon_sym_ensures] = ACTIONS(190),
    [anon_sym_extern] = ACTIONS(190),
    [anon_sym_inline] = ACTIONS(190),
    [anon_sym_internal] = ACTIONS(190),
    [anon_sym_override] = ACTIONS(190),
    [anon_sym_private] = ACTIONS(190),
    [anon_sym_protected] = ACTIONS(190),
    [anon_sym_public] = ACTIONS(190),
    [anon_sym_requires] = ACTIONS(190),
    [anon_sym_signal] = ACTIONS(190),
    [anon_sym_static] = ACTIONS(190),
    [anon_sym_virtual] = ACTIONS(190),
    [anon_sym_volatile] = ACTIONS(190),
    [anon_sym_weak] = ACTIONS(190),
    [anon_sym_async] = ACTIONS(190),
    [anon_sym_owned] = ACTIONS(190),
    [anon_sym_unowned] = ACTIONS(190),
    [anon_sym_ref] = ACTIONS(190),
    [anon_sym_out] = ACTIONS(190),
    [anon_sym_bool] = ACTIONS(190),
    [anon_sym_char] = ACTIONS(190),
    [anon_sym_double] = ACTIONS(190),
    [anon_sym_float] = ACTIONS(190),
    [anon_sym_size_t] = ACTIONS(190),
    [anon_sym_ssize_t] = ACTIONS(190),
    [anon_sym_string] = ACTIONS(190),
    [anon_sym_unichar] = ACTIONS(190),
    [anon_sym_void] = ACTIONS(190),
    [anon_sym_int] = ACTIONS(190),
    [anon_sym_int8] = ACTIONS(192),
    [anon_sym_int16] = ACTIONS(192),
    [anon_sym_int32] = ACTIONS(192),
    [anon_sym_int64] = ACTIONS(192),
    [anon_sym_long] = ACTIONS(190),
    [anon_sym_short] = ACTIONS(190),
    [anon_sym_uchar] = ACTIONS(190),
    [anon_sym_uint] = ACTIONS(190),
    [anon_sym_uint8] = ACTIONS(192),
    [anon_sym_uint16] = ACTIONS(192),
    [anon_sym_uint32] = ACTIONS(192),
    [anon_sym_uint64] = ACTIONS(192),
    [anon_sym_ulong] = ACTIONS(190),
    [anon_sym_ushort] = ACTIONS(190),
    [aux_sym_comment_token1] = ACTIONS(192),
    [aux_sym_comment_token2] = ACTIONS(192),
    [anon_sym_return] = ACTIONS(190),
    [anon_sym_var] = ACTIONS(190),
    [anon_sym_construct] = ACTIONS(190),
    [anon_sym_namespace] = ACTIONS(190),
    [sym_identifier] = ACTIONS(190),
    [sym_camel_cased_identifier] = ACTIONS(190),
    [sym_uppercased_identifier] = ACTIONS(190),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_class] = ACTIONS(138),
    [anon_sym_abstract] = ACTIONS(138),
    [anon_sym_const] = ACTIONS(138),
    [anon_sym_dynamic] = ACTIONS(138),
    [anon_sym_ensures] = ACTIONS(138),
    [anon_sym_extern] = ACTIONS(138),
    [anon_sym_inline] = ACTIONS(138),
    [anon_sym_internal] = ACTIONS(138),
    [anon_sym_override] = ACTIONS(138),
    [anon_sym_private] = ACTIONS(138),
    [anon_sym_protected] = ACTIONS(138),
    [anon_sym_public] = ACTIONS(138),
    [anon_sym_requires] = ACTIONS(138),
    [anon_sym_signal] = ACTIONS(138),
    [anon_sym_static] = ACTIONS(138),
    [anon_sym_virtual] = ACTIONS(138),
    [anon_sym_volatile] = ACTIONS(138),
    [anon_sym_weak] = ACTIONS(138),
    [anon_sym_async] = ACTIONS(138),
    [anon_sym_owned] = ACTIONS(138),
    [anon_sym_unowned] = ACTIONS(138),
    [anon_sym_ref] = ACTIONS(138),
    [anon_sym_out] = ACTIONS(138),
    [anon_sym_bool] = ACTIONS(138),
    [anon_sym_char] = ACTIONS(138),
    [anon_sym_double] = ACTIONS(138),
    [anon_sym_float] = ACTIONS(138),
    [anon_sym_size_t] = ACTIONS(138),
    [anon_sym_ssize_t] = ACTIONS(138),
    [anon_sym_string] = ACTIONS(138),
    [anon_sym_unichar] = ACTIONS(138),
    [anon_sym_void] = ACTIONS(138),
    [anon_sym_int] = ACTIONS(138),
    [anon_sym_int8] = ACTIONS(140),
    [anon_sym_int16] = ACTIONS(140),
    [anon_sym_int32] = ACTIONS(140),
    [anon_sym_int64] = ACTIONS(140),
    [anon_sym_long] = ACTIONS(138),
    [anon_sym_short] = ACTIONS(138),
    [anon_sym_uchar] = ACTIONS(138),
    [anon_sym_uint] = ACTIONS(138),
    [anon_sym_uint8] = ACTIONS(140),
    [anon_sym_uint16] = ACTIONS(140),
    [anon_sym_uint32] = ACTIONS(140),
    [anon_sym_uint64] = ACTIONS(140),
    [anon_sym_ulong] = ACTIONS(138),
    [anon_sym_ushort] = ACTIONS(138),
    [aux_sym_comment_token1] = ACTIONS(140),
    [aux_sym_comment_token2] = ACTIONS(140),
    [anon_sym_return] = ACTIONS(138),
    [anon_sym_var] = ACTIONS(138),
    [anon_sym_construct] = ACTIONS(138),
    [anon_sym_namespace] = ACTIONS(138),
    [sym_identifier] = ACTIONS(138),
    [sym_camel_cased_identifier] = ACTIONS(138),
    [sym_uppercased_identifier] = ACTIONS(138),
  },
  [38] = {
    [anon_sym_class] = ACTIONS(196),
    [anon_sym_abstract] = ACTIONS(196),
    [anon_sym_const] = ACTIONS(196),
    [anon_sym_dynamic] = ACTIONS(196),
    [anon_sym_ensures] = ACTIONS(196),
    [anon_sym_extern] = ACTIONS(196),
    [anon_sym_inline] = ACTIONS(196),
    [anon_sym_internal] = ACTIONS(196),
    [anon_sym_override] = ACTIONS(196),
    [anon_sym_private] = ACTIONS(196),
    [anon_sym_protected] = ACTIONS(196),
    [anon_sym_public] = ACTIONS(196),
    [anon_sym_requires] = ACTIONS(196),
    [anon_sym_signal] = ACTIONS(196),
    [anon_sym_static] = ACTIONS(196),
    [anon_sym_virtual] = ACTIONS(196),
    [anon_sym_volatile] = ACTIONS(196),
    [anon_sym_weak] = ACTIONS(196),
    [anon_sym_async] = ACTIONS(196),
    [anon_sym_owned] = ACTIONS(196),
    [anon_sym_unowned] = ACTIONS(196),
    [anon_sym_ref] = ACTIONS(196),
    [anon_sym_out] = ACTIONS(196),
    [anon_sym_bool] = ACTIONS(196),
    [anon_sym_char] = ACTIONS(196),
    [anon_sym_double] = ACTIONS(196),
    [anon_sym_float] = ACTIONS(196),
    [anon_sym_size_t] = ACTIONS(196),
    [anon_sym_ssize_t] = ACTIONS(196),
    [anon_sym_string] = ACTIONS(196),
    [anon_sym_unichar] = ACTIONS(196),
    [anon_sym_void] = ACTIONS(196),
    [anon_sym_int] = ACTIONS(196),
    [anon_sym_int8] = ACTIONS(194),
    [anon_sym_int16] = ACTIONS(194),
    [anon_sym_int32] = ACTIONS(194),
    [anon_sym_int64] = ACTIONS(194),
    [anon_sym_long] = ACTIONS(196),
    [anon_sym_short] = ACTIONS(196),
    [anon_sym_uchar] = ACTIONS(196),
    [anon_sym_uint] = ACTIONS(196),
    [anon_sym_uint8] = ACTIONS(194),
    [anon_sym_uint16] = ACTIONS(194),
    [anon_sym_uint32] = ACTIONS(194),
    [anon_sym_uint64] = ACTIONS(194),
    [anon_sym_ulong] = ACTIONS(196),
    [anon_sym_ushort] = ACTIONS(196),
    [aux_sym_comment_token1] = ACTIONS(194),
    [aux_sym_comment_token2] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_return] = ACTIONS(196),
    [anon_sym_var] = ACTIONS(196),
    [anon_sym_construct] = ACTIONS(196),
    [anon_sym_namespace] = ACTIONS(196),
    [sym_identifier] = ACTIONS(196),
    [sym_camel_cased_identifier] = ACTIONS(196),
    [sym_uppercased_identifier] = ACTIONS(196),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_class] = ACTIONS(154),
    [anon_sym_abstract] = ACTIONS(154),
    [anon_sym_const] = ACTIONS(154),
    [anon_sym_dynamic] = ACTIONS(154),
    [anon_sym_ensures] = ACTIONS(154),
    [anon_sym_extern] = ACTIONS(154),
    [anon_sym_inline] = ACTIONS(154),
    [anon_sym_internal] = ACTIONS(154),
    [anon_sym_override] = ACTIONS(154),
    [anon_sym_private] = ACTIONS(154),
    [anon_sym_protected] = ACTIONS(154),
    [anon_sym_public] = ACTIONS(154),
    [anon_sym_requires] = ACTIONS(154),
    [anon_sym_signal] = ACTIONS(154),
    [anon_sym_static] = ACTIONS(154),
    [anon_sym_virtual] = ACTIONS(154),
    [anon_sym_volatile] = ACTIONS(154),
    [anon_sym_weak] = ACTIONS(154),
    [anon_sym_async] = ACTIONS(154),
    [anon_sym_owned] = ACTIONS(154),
    [anon_sym_unowned] = ACTIONS(154),
    [anon_sym_ref] = ACTIONS(154),
    [anon_sym_out] = ACTIONS(154),
    [anon_sym_bool] = ACTIONS(154),
    [anon_sym_char] = ACTIONS(154),
    [anon_sym_double] = ACTIONS(154),
    [anon_sym_float] = ACTIONS(154),
    [anon_sym_size_t] = ACTIONS(154),
    [anon_sym_ssize_t] = ACTIONS(154),
    [anon_sym_string] = ACTIONS(154),
    [anon_sym_unichar] = ACTIONS(154),
    [anon_sym_void] = ACTIONS(154),
    [anon_sym_int] = ACTIONS(154),
    [anon_sym_int8] = ACTIONS(156),
    [anon_sym_int16] = ACTIONS(156),
    [anon_sym_int32] = ACTIONS(156),
    [anon_sym_int64] = ACTIONS(156),
    [anon_sym_long] = ACTIONS(154),
    [anon_sym_short] = ACTIONS(154),
    [anon_sym_uchar] = ACTIONS(154),
    [anon_sym_uint] = ACTIONS(154),
    [anon_sym_uint8] = ACTIONS(156),
    [anon_sym_uint16] = ACTIONS(156),
    [anon_sym_uint32] = ACTIONS(156),
    [anon_sym_uint64] = ACTIONS(156),
    [anon_sym_ulong] = ACTIONS(154),
    [anon_sym_ushort] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(156),
    [aux_sym_comment_token2] = ACTIONS(156),
    [anon_sym_return] = ACTIONS(154),
    [anon_sym_var] = ACTIONS(154),
    [anon_sym_construct] = ACTIONS(154),
    [anon_sym_namespace] = ACTIONS(154),
    [sym_identifier] = ACTIONS(154),
    [sym_camel_cased_identifier] = ACTIONS(154),
    [sym_uppercased_identifier] = ACTIONS(154),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_class] = ACTIONS(142),
    [anon_sym_abstract] = ACTIONS(142),
    [anon_sym_const] = ACTIONS(142),
    [anon_sym_dynamic] = ACTIONS(142),
    [anon_sym_ensures] = ACTIONS(142),
    [anon_sym_extern] = ACTIONS(142),
    [anon_sym_inline] = ACTIONS(142),
    [anon_sym_internal] = ACTIONS(142),
    [anon_sym_override] = ACTIONS(142),
    [anon_sym_private] = ACTIONS(142),
    [anon_sym_protected] = ACTIONS(142),
    [anon_sym_public] = ACTIONS(142),
    [anon_sym_requires] = ACTIONS(142),
    [anon_sym_signal] = ACTIONS(142),
    [anon_sym_static] = ACTIONS(142),
    [anon_sym_virtual] = ACTIONS(142),
    [anon_sym_volatile] = ACTIONS(142),
    [anon_sym_weak] = ACTIONS(142),
    [anon_sym_async] = ACTIONS(142),
    [anon_sym_owned] = ACTIONS(142),
    [anon_sym_unowned] = ACTIONS(142),
    [anon_sym_ref] = ACTIONS(142),
    [anon_sym_out] = ACTIONS(142),
    [anon_sym_bool] = ACTIONS(142),
    [anon_sym_char] = ACTIONS(142),
    [anon_sym_double] = ACTIONS(142),
    [anon_sym_float] = ACTIONS(142),
    [anon_sym_size_t] = ACTIONS(142),
    [anon_sym_ssize_t] = ACTIONS(142),
    [anon_sym_string] = ACTIONS(142),
    [anon_sym_unichar] = ACTIONS(142),
    [anon_sym_void] = ACTIONS(142),
    [anon_sym_int] = ACTIONS(142),
    [anon_sym_int8] = ACTIONS(144),
    [anon_sym_int16] = ACTIONS(144),
    [anon_sym_int32] = ACTIONS(144),
    [anon_sym_int64] = ACTIONS(144),
    [anon_sym_long] = ACTIONS(142),
    [anon_sym_short] = ACTIONS(142),
    [anon_sym_uchar] = ACTIONS(142),
    [anon_sym_uint] = ACTIONS(142),
    [anon_sym_uint8] = ACTIONS(144),
    [anon_sym_uint16] = ACTIONS(144),
    [anon_sym_uint32] = ACTIONS(144),
    [anon_sym_uint64] = ACTIONS(144),
    [anon_sym_ulong] = ACTIONS(142),
    [anon_sym_ushort] = ACTIONS(142),
    [aux_sym_comment_token1] = ACTIONS(144),
    [aux_sym_comment_token2] = ACTIONS(144),
    [anon_sym_return] = ACTIONS(142),
    [anon_sym_var] = ACTIONS(142),
    [anon_sym_construct] = ACTIONS(142),
    [anon_sym_namespace] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [sym_camel_cased_identifier] = ACTIONS(142),
    [sym_uppercased_identifier] = ACTIONS(142),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_class] = ACTIONS(182),
    [anon_sym_abstract] = ACTIONS(182),
    [anon_sym_const] = ACTIONS(182),
    [anon_sym_dynamic] = ACTIONS(182),
    [anon_sym_ensures] = ACTIONS(182),
    [anon_sym_extern] = ACTIONS(182),
    [anon_sym_inline] = ACTIONS(182),
    [anon_sym_internal] = ACTIONS(182),
    [anon_sym_override] = ACTIONS(182),
    [anon_sym_private] = ACTIONS(182),
    [anon_sym_protected] = ACTIONS(182),
    [anon_sym_public] = ACTIONS(182),
    [anon_sym_requires] = ACTIONS(182),
    [anon_sym_signal] = ACTIONS(182),
    [anon_sym_static] = ACTIONS(182),
    [anon_sym_virtual] = ACTIONS(182),
    [anon_sym_volatile] = ACTIONS(182),
    [anon_sym_weak] = ACTIONS(182),
    [anon_sym_async] = ACTIONS(182),
    [anon_sym_owned] = ACTIONS(182),
    [anon_sym_unowned] = ACTIONS(182),
    [anon_sym_ref] = ACTIONS(182),
    [anon_sym_out] = ACTIONS(182),
    [anon_sym_bool] = ACTIONS(182),
    [anon_sym_char] = ACTIONS(182),
    [anon_sym_double] = ACTIONS(182),
    [anon_sym_float] = ACTIONS(182),
    [anon_sym_size_t] = ACTIONS(182),
    [anon_sym_ssize_t] = ACTIONS(182),
    [anon_sym_string] = ACTIONS(182),
    [anon_sym_unichar] = ACTIONS(182),
    [anon_sym_void] = ACTIONS(182),
    [anon_sym_int] = ACTIONS(182),
    [anon_sym_int8] = ACTIONS(184),
    [anon_sym_int16] = ACTIONS(184),
    [anon_sym_int32] = ACTIONS(184),
    [anon_sym_int64] = ACTIONS(184),
    [anon_sym_long] = ACTIONS(182),
    [anon_sym_short] = ACTIONS(182),
    [anon_sym_uchar] = ACTIONS(182),
    [anon_sym_uint] = ACTIONS(182),
    [anon_sym_uint8] = ACTIONS(184),
    [anon_sym_uint16] = ACTIONS(184),
    [anon_sym_uint32] = ACTIONS(184),
    [anon_sym_uint64] = ACTIONS(184),
    [anon_sym_ulong] = ACTIONS(182),
    [anon_sym_ushort] = ACTIONS(182),
    [aux_sym_comment_token1] = ACTIONS(184),
    [aux_sym_comment_token2] = ACTIONS(184),
    [anon_sym_return] = ACTIONS(182),
    [anon_sym_var] = ACTIONS(182),
    [anon_sym_construct] = ACTIONS(182),
    [anon_sym_namespace] = ACTIONS(182),
    [sym_identifier] = ACTIONS(182),
    [sym_camel_cased_identifier] = ACTIONS(182),
    [sym_uppercased_identifier] = ACTIONS(182),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_class] = ACTIONS(162),
    [anon_sym_abstract] = ACTIONS(162),
    [anon_sym_const] = ACTIONS(162),
    [anon_sym_dynamic] = ACTIONS(162),
    [anon_sym_ensures] = ACTIONS(162),
    [anon_sym_extern] = ACTIONS(162),
    [anon_sym_inline] = ACTIONS(162),
    [anon_sym_internal] = ACTIONS(162),
    [anon_sym_override] = ACTIONS(162),
    [anon_sym_private] = ACTIONS(162),
    [anon_sym_protected] = ACTIONS(162),
    [anon_sym_public] = ACTIONS(162),
    [anon_sym_requires] = ACTIONS(162),
    [anon_sym_signal] = ACTIONS(162),
    [anon_sym_static] = ACTIONS(162),
    [anon_sym_virtual] = ACTIONS(162),
    [anon_sym_volatile] = ACTIONS(162),
    [anon_sym_weak] = ACTIONS(162),
    [anon_sym_async] = ACTIONS(162),
    [anon_sym_owned] = ACTIONS(162),
    [anon_sym_unowned] = ACTIONS(162),
    [anon_sym_ref] = ACTIONS(162),
    [anon_sym_out] = ACTIONS(162),
    [anon_sym_bool] = ACTIONS(162),
    [anon_sym_char] = ACTIONS(162),
    [anon_sym_double] = ACTIONS(162),
    [anon_sym_float] = ACTIONS(162),
    [anon_sym_size_t] = ACTIONS(162),
    [anon_sym_ssize_t] = ACTIONS(162),
    [anon_sym_string] = ACTIONS(162),
    [anon_sym_unichar] = ACTIONS(162),
    [anon_sym_void] = ACTIONS(162),
    [anon_sym_int] = ACTIONS(162),
    [anon_sym_int8] = ACTIONS(164),
    [anon_sym_int16] = ACTIONS(164),
    [anon_sym_int32] = ACTIONS(164),
    [anon_sym_int64] = ACTIONS(164),
    [anon_sym_long] = ACTIONS(162),
    [anon_sym_short] = ACTIONS(162),
    [anon_sym_uchar] = ACTIONS(162),
    [anon_sym_uint] = ACTIONS(162),
    [anon_sym_uint8] = ACTIONS(164),
    [anon_sym_uint16] = ACTIONS(164),
    [anon_sym_uint32] = ACTIONS(164),
    [anon_sym_uint64] = ACTIONS(164),
    [anon_sym_ulong] = ACTIONS(162),
    [anon_sym_ushort] = ACTIONS(162),
    [aux_sym_comment_token1] = ACTIONS(164),
    [aux_sym_comment_token2] = ACTIONS(164),
    [anon_sym_return] = ACTIONS(162),
    [anon_sym_var] = ACTIONS(162),
    [anon_sym_construct] = ACTIONS(162),
    [anon_sym_namespace] = ACTIONS(162),
    [sym_identifier] = ACTIONS(162),
    [sym_camel_cased_identifier] = ACTIONS(162),
    [sym_uppercased_identifier] = ACTIONS(162),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_class] = ACTIONS(170),
    [anon_sym_abstract] = ACTIONS(170),
    [anon_sym_const] = ACTIONS(170),
    [anon_sym_dynamic] = ACTIONS(170),
    [anon_sym_ensures] = ACTIONS(170),
    [anon_sym_extern] = ACTIONS(170),
    [anon_sym_inline] = ACTIONS(170),
    [anon_sym_internal] = ACTIONS(170),
    [anon_sym_override] = ACTIONS(170),
    [anon_sym_private] = ACTIONS(170),
    [anon_sym_protected] = ACTIONS(170),
    [anon_sym_public] = ACTIONS(170),
    [anon_sym_requires] = ACTIONS(170),
    [anon_sym_signal] = ACTIONS(170),
    [anon_sym_static] = ACTIONS(170),
    [anon_sym_virtual] = ACTIONS(170),
    [anon_sym_volatile] = ACTIONS(170),
    [anon_sym_weak] = ACTIONS(170),
    [anon_sym_async] = ACTIONS(170),
    [anon_sym_owned] = ACTIONS(170),
    [anon_sym_unowned] = ACTIONS(170),
    [anon_sym_ref] = ACTIONS(170),
    [anon_sym_out] = ACTIONS(170),
    [anon_sym_bool] = ACTIONS(170),
    [anon_sym_char] = ACTIONS(170),
    [anon_sym_double] = ACTIONS(170),
    [anon_sym_float] = ACTIONS(170),
    [anon_sym_size_t] = ACTIONS(170),
    [anon_sym_ssize_t] = ACTIONS(170),
    [anon_sym_string] = ACTIONS(170),
    [anon_sym_unichar] = ACTIONS(170),
    [anon_sym_void] = ACTIONS(170),
    [anon_sym_int] = ACTIONS(170),
    [anon_sym_int8] = ACTIONS(172),
    [anon_sym_int16] = ACTIONS(172),
    [anon_sym_int32] = ACTIONS(172),
    [anon_sym_int64] = ACTIONS(172),
    [anon_sym_long] = ACTIONS(170),
    [anon_sym_short] = ACTIONS(170),
    [anon_sym_uchar] = ACTIONS(170),
    [anon_sym_uint] = ACTIONS(170),
    [anon_sym_uint8] = ACTIONS(172),
    [anon_sym_uint16] = ACTIONS(172),
    [anon_sym_uint32] = ACTIONS(172),
    [anon_sym_uint64] = ACTIONS(172),
    [anon_sym_ulong] = ACTIONS(170),
    [anon_sym_ushort] = ACTIONS(170),
    [aux_sym_comment_token1] = ACTIONS(172),
    [aux_sym_comment_token2] = ACTIONS(172),
    [anon_sym_return] = ACTIONS(170),
    [anon_sym_var] = ACTIONS(170),
    [anon_sym_construct] = ACTIONS(170),
    [anon_sym_namespace] = ACTIONS(170),
    [sym_identifier] = ACTIONS(170),
    [sym_camel_cased_identifier] = ACTIONS(170),
    [sym_uppercased_identifier] = ACTIONS(170),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_class] = ACTIONS(150),
    [anon_sym_abstract] = ACTIONS(150),
    [anon_sym_const] = ACTIONS(150),
    [anon_sym_dynamic] = ACTIONS(150),
    [anon_sym_ensures] = ACTIONS(150),
    [anon_sym_extern] = ACTIONS(150),
    [anon_sym_inline] = ACTIONS(150),
    [anon_sym_internal] = ACTIONS(150),
    [anon_sym_override] = ACTIONS(150),
    [anon_sym_private] = ACTIONS(150),
    [anon_sym_protected] = ACTIONS(150),
    [anon_sym_public] = ACTIONS(150),
    [anon_sym_requires] = ACTIONS(150),
    [anon_sym_signal] = ACTIONS(150),
    [anon_sym_static] = ACTIONS(150),
    [anon_sym_virtual] = ACTIONS(150),
    [anon_sym_volatile] = ACTIONS(150),
    [anon_sym_weak] = ACTIONS(150),
    [anon_sym_async] = ACTIONS(150),
    [anon_sym_owned] = ACTIONS(150),
    [anon_sym_unowned] = ACTIONS(150),
    [anon_sym_ref] = ACTIONS(150),
    [anon_sym_out] = ACTIONS(150),
    [anon_sym_bool] = ACTIONS(150),
    [anon_sym_char] = ACTIONS(150),
    [anon_sym_double] = ACTIONS(150),
    [anon_sym_float] = ACTIONS(150),
    [anon_sym_size_t] = ACTIONS(150),
    [anon_sym_ssize_t] = ACTIONS(150),
    [anon_sym_string] = ACTIONS(150),
    [anon_sym_unichar] = ACTIONS(150),
    [anon_sym_void] = ACTIONS(150),
    [anon_sym_int] = ACTIONS(150),
    [anon_sym_int8] = ACTIONS(152),
    [anon_sym_int16] = ACTIONS(152),
    [anon_sym_int32] = ACTIONS(152),
    [anon_sym_int64] = ACTIONS(152),
    [anon_sym_long] = ACTIONS(150),
    [anon_sym_short] = ACTIONS(150),
    [anon_sym_uchar] = ACTIONS(150),
    [anon_sym_uint] = ACTIONS(150),
    [anon_sym_uint8] = ACTIONS(152),
    [anon_sym_uint16] = ACTIONS(152),
    [anon_sym_uint32] = ACTIONS(152),
    [anon_sym_uint64] = ACTIONS(152),
    [anon_sym_ulong] = ACTIONS(150),
    [anon_sym_ushort] = ACTIONS(150),
    [aux_sym_comment_token1] = ACTIONS(152),
    [aux_sym_comment_token2] = ACTIONS(152),
    [anon_sym_return] = ACTIONS(150),
    [anon_sym_var] = ACTIONS(150),
    [anon_sym_construct] = ACTIONS(150),
    [anon_sym_namespace] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [sym_camel_cased_identifier] = ACTIONS(150),
    [sym_uppercased_identifier] = ACTIONS(150),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_class] = ACTIONS(166),
    [anon_sym_abstract] = ACTIONS(166),
    [anon_sym_const] = ACTIONS(166),
    [anon_sym_dynamic] = ACTIONS(166),
    [anon_sym_ensures] = ACTIONS(166),
    [anon_sym_extern] = ACTIONS(166),
    [anon_sym_inline] = ACTIONS(166),
    [anon_sym_internal] = ACTIONS(166),
    [anon_sym_override] = ACTIONS(166),
    [anon_sym_private] = ACTIONS(166),
    [anon_sym_protected] = ACTIONS(166),
    [anon_sym_public] = ACTIONS(166),
    [anon_sym_requires] = ACTIONS(166),
    [anon_sym_signal] = ACTIONS(166),
    [anon_sym_static] = ACTIONS(166),
    [anon_sym_virtual] = ACTIONS(166),
    [anon_sym_volatile] = ACTIONS(166),
    [anon_sym_weak] = ACTIONS(166),
    [anon_sym_async] = ACTIONS(166),
    [anon_sym_owned] = ACTIONS(166),
    [anon_sym_unowned] = ACTIONS(166),
    [anon_sym_ref] = ACTIONS(166),
    [anon_sym_out] = ACTIONS(166),
    [anon_sym_bool] = ACTIONS(166),
    [anon_sym_char] = ACTIONS(166),
    [anon_sym_double] = ACTIONS(166),
    [anon_sym_float] = ACTIONS(166),
    [anon_sym_size_t] = ACTIONS(166),
    [anon_sym_ssize_t] = ACTIONS(166),
    [anon_sym_string] = ACTIONS(166),
    [anon_sym_unichar] = ACTIONS(166),
    [anon_sym_void] = ACTIONS(166),
    [anon_sym_int] = ACTIONS(166),
    [anon_sym_int8] = ACTIONS(168),
    [anon_sym_int16] = ACTIONS(168),
    [anon_sym_int32] = ACTIONS(168),
    [anon_sym_int64] = ACTIONS(168),
    [anon_sym_long] = ACTIONS(166),
    [anon_sym_short] = ACTIONS(166),
    [anon_sym_uchar] = ACTIONS(166),
    [anon_sym_uint] = ACTIONS(166),
    [anon_sym_uint8] = ACTIONS(168),
    [anon_sym_uint16] = ACTIONS(168),
    [anon_sym_uint32] = ACTIONS(168),
    [anon_sym_uint64] = ACTIONS(168),
    [anon_sym_ulong] = ACTIONS(166),
    [anon_sym_ushort] = ACTIONS(166),
    [aux_sym_comment_token1] = ACTIONS(168),
    [aux_sym_comment_token2] = ACTIONS(168),
    [anon_sym_return] = ACTIONS(166),
    [anon_sym_var] = ACTIONS(166),
    [anon_sym_construct] = ACTIONS(166),
    [anon_sym_namespace] = ACTIONS(166),
    [sym_identifier] = ACTIONS(166),
    [sym_camel_cased_identifier] = ACTIONS(166),
    [sym_uppercased_identifier] = ACTIONS(166),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_class] = ACTIONS(158),
    [anon_sym_abstract] = ACTIONS(158),
    [anon_sym_const] = ACTIONS(158),
    [anon_sym_dynamic] = ACTIONS(158),
    [anon_sym_ensures] = ACTIONS(158),
    [anon_sym_extern] = ACTIONS(158),
    [anon_sym_inline] = ACTIONS(158),
    [anon_sym_internal] = ACTIONS(158),
    [anon_sym_override] = ACTIONS(158),
    [anon_sym_private] = ACTIONS(158),
    [anon_sym_protected] = ACTIONS(158),
    [anon_sym_public] = ACTIONS(158),
    [anon_sym_requires] = ACTIONS(158),
    [anon_sym_signal] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(158),
    [anon_sym_virtual] = ACTIONS(158),
    [anon_sym_volatile] = ACTIONS(158),
    [anon_sym_weak] = ACTIONS(158),
    [anon_sym_async] = ACTIONS(158),
    [anon_sym_owned] = ACTIONS(158),
    [anon_sym_unowned] = ACTIONS(158),
    [anon_sym_ref] = ACTIONS(158),
    [anon_sym_out] = ACTIONS(158),
    [anon_sym_bool] = ACTIONS(158),
    [anon_sym_char] = ACTIONS(158),
    [anon_sym_double] = ACTIONS(158),
    [anon_sym_float] = ACTIONS(158),
    [anon_sym_size_t] = ACTIONS(158),
    [anon_sym_ssize_t] = ACTIONS(158),
    [anon_sym_string] = ACTIONS(158),
    [anon_sym_unichar] = ACTIONS(158),
    [anon_sym_void] = ACTIONS(158),
    [anon_sym_int] = ACTIONS(158),
    [anon_sym_int8] = ACTIONS(160),
    [anon_sym_int16] = ACTIONS(160),
    [anon_sym_int32] = ACTIONS(160),
    [anon_sym_int64] = ACTIONS(160),
    [anon_sym_long] = ACTIONS(158),
    [anon_sym_short] = ACTIONS(158),
    [anon_sym_uchar] = ACTIONS(158),
    [anon_sym_uint] = ACTIONS(158),
    [anon_sym_uint8] = ACTIONS(160),
    [anon_sym_uint16] = ACTIONS(160),
    [anon_sym_uint32] = ACTIONS(160),
    [anon_sym_uint64] = ACTIONS(160),
    [anon_sym_ulong] = ACTIONS(158),
    [anon_sym_ushort] = ACTIONS(158),
    [aux_sym_comment_token1] = ACTIONS(160),
    [aux_sym_comment_token2] = ACTIONS(160),
    [anon_sym_return] = ACTIONS(158),
    [anon_sym_var] = ACTIONS(158),
    [anon_sym_construct] = ACTIONS(158),
    [anon_sym_namespace] = ACTIONS(158),
    [sym_identifier] = ACTIONS(158),
    [sym_camel_cased_identifier] = ACTIONS(158),
    [sym_uppercased_identifier] = ACTIONS(158),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_class] = ACTIONS(178),
    [anon_sym_abstract] = ACTIONS(178),
    [anon_sym_const] = ACTIONS(178),
    [anon_sym_dynamic] = ACTIONS(178),
    [anon_sym_ensures] = ACTIONS(178),
    [anon_sym_extern] = ACTIONS(178),
    [anon_sym_inline] = ACTIONS(178),
    [anon_sym_internal] = ACTIONS(178),
    [anon_sym_override] = ACTIONS(178),
    [anon_sym_private] = ACTIONS(178),
    [anon_sym_protected] = ACTIONS(178),
    [anon_sym_public] = ACTIONS(178),
    [anon_sym_requires] = ACTIONS(178),
    [anon_sym_signal] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(178),
    [anon_sym_virtual] = ACTIONS(178),
    [anon_sym_volatile] = ACTIONS(178),
    [anon_sym_weak] = ACTIONS(178),
    [anon_sym_async] = ACTIONS(178),
    [anon_sym_owned] = ACTIONS(178),
    [anon_sym_unowned] = ACTIONS(178),
    [anon_sym_ref] = ACTIONS(178),
    [anon_sym_out] = ACTIONS(178),
    [anon_sym_bool] = ACTIONS(178),
    [anon_sym_char] = ACTIONS(178),
    [anon_sym_double] = ACTIONS(178),
    [anon_sym_float] = ACTIONS(178),
    [anon_sym_size_t] = ACTIONS(178),
    [anon_sym_ssize_t] = ACTIONS(178),
    [anon_sym_string] = ACTIONS(178),
    [anon_sym_unichar] = ACTIONS(178),
    [anon_sym_void] = ACTIONS(178),
    [anon_sym_int] = ACTIONS(178),
    [anon_sym_int8] = ACTIONS(180),
    [anon_sym_int16] = ACTIONS(180),
    [anon_sym_int32] = ACTIONS(180),
    [anon_sym_int64] = ACTIONS(180),
    [anon_sym_long] = ACTIONS(178),
    [anon_sym_short] = ACTIONS(178),
    [anon_sym_uchar] = ACTIONS(178),
    [anon_sym_uint] = ACTIONS(178),
    [anon_sym_uint8] = ACTIONS(180),
    [anon_sym_uint16] = ACTIONS(180),
    [anon_sym_uint32] = ACTIONS(180),
    [anon_sym_uint64] = ACTIONS(180),
    [anon_sym_ulong] = ACTIONS(178),
    [anon_sym_ushort] = ACTIONS(178),
    [aux_sym_comment_token1] = ACTIONS(180),
    [aux_sym_comment_token2] = ACTIONS(180),
    [anon_sym_return] = ACTIONS(178),
    [anon_sym_var] = ACTIONS(178),
    [anon_sym_construct] = ACTIONS(178),
    [anon_sym_namespace] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [sym_camel_cased_identifier] = ACTIONS(178),
    [sym_uppercased_identifier] = ACTIONS(178),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(198), 1,
      anon_sym_class,
    ACTIONS(200), 1,
      anon_sym_var,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym_camel_cased_identifier,
    STATE(51), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(116), 3,
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
  [74] = 9,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym_camel_cased_identifier,
    ACTIONS(206), 1,
      anon_sym_class,
    ACTIONS(208), 1,
      anon_sym_var,
    STATE(51), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(104), 3,
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
  [148] = 4,
    STATE(50), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(215), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(213), 19,
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
    ACTIONS(210), 22,
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
  [210] = 4,
    STATE(51), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(215), 9,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      sym_camel_cased_identifier,
    ACTIONS(213), 19,
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
  [271] = 2,
    ACTIONS(222), 10,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(220), 41,
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
  [327] = 2,
    ACTIONS(222), 9,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      sym_camel_cased_identifier,
    ACTIONS(220), 41,
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
  [382] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(232), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(108), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [443] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(101), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [504] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(99), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [565] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(238), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(111), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [626] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(240), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(106), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [687] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(242), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(120), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [748] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(244), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(119), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [809] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(246), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(95), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [870] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(248), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(125), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [931] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(250), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(110), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [992] = 10,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_new,
    ACTIONS(230), 1,
      sym_uppercased_identifier,
    ACTIONS(252), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(228), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(89), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    STATE(126), 6,
      sym_function_call,
      sym__expression,
      sym_new_instance,
      sym_unary_expression,
      sym_binary_expression,
      sym_string_literal,
    ACTIONS(224), 22,
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
  [1053] = 6,
    ACTIONS(254), 1,
      sym_uppercased_identifier,
    STATE(103), 1,
      sym_function_call,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(69), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(171), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    ACTIONS(224), 22,
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
  [1096] = 7,
    ACTIONS(258), 1,
      anon_sym_const,
    STATE(68), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(131), 1,
      sym_modifier,
    STATE(132), 1,
      sym_property_parameter,
    STATE(173), 1,
      sym_gobject_property_acces,
    ACTIONS(260), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(256), 21,
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
  [1140] = 7,
    ACTIONS(258), 1,
      anon_sym_const,
    STATE(68), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(131), 1,
      sym_modifier,
    STATE(132), 1,
      sym_property_parameter,
    STATE(177), 1,
      sym_gobject_property_acces,
    ACTIONS(260), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(256), 21,
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
  [1184] = 7,
    ACTIONS(258), 1,
      anon_sym_const,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(131), 1,
      sym_modifier,
    STATE(132), 1,
      sym_property_parameter,
    ACTIONS(260), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(256), 21,
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
  [1228] = 5,
    ACTIONS(264), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(73), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    STATE(157), 2,
      sym__identifiers,
      sym_namespaced_identifier,
    ACTIONS(224), 22,
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
  [1268] = 7,
    ACTIONS(258), 1,
      anon_sym_const,
    STATE(68), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(131), 1,
      sym_modifier,
    STATE(132), 1,
      sym_property_parameter,
    STATE(174), 1,
      sym_gobject_property_acces,
    ACTIONS(260), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(256), 21,
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
  [1312] = 7,
    ACTIONS(269), 1,
      anon_sym_const,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(131), 1,
      sym_modifier,
    STATE(132), 1,
      sym_property_parameter,
    ACTIONS(274), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(266), 21,
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
  [1356] = 7,
    ACTIONS(258), 1,
      anon_sym_const,
    STATE(68), 1,
      aux_sym_gobject_property_acces_repeat1,
    STATE(131), 1,
      sym_modifier,
    STATE(132), 1,
      sym_property_parameter,
    STATE(181), 1,
      sym_gobject_property_acces,
    ACTIONS(260), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
    ACTIONS(256), 21,
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
  [1400] = 3,
    STATE(73), 2,
      sym_modifier,
      aux_sym_function_definition_repeat1,
    ACTIONS(213), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(277), 22,
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
  [1434] = 2,
    ACTIONS(170), 1,
      anon_sym_const,
    ACTIONS(172), 25,
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
  [1465] = 2,
    ACTIONS(280), 1,
      anon_sym_const,
    ACTIONS(272), 25,
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
  [1496] = 2,
    ACTIONS(148), 1,
      anon_sym_const,
    ACTIONS(146), 25,
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
  [1527] = 2,
    ACTIONS(284), 1,
      anon_sym_const,
    ACTIONS(282), 25,
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
  [1558] = 1,
    ACTIONS(220), 25,
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
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [1586] = 4,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(288), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(286), 11,
      anon_sym_COLON,
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
  [1611] = 4,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(294), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(292), 11,
      anon_sym_COLON,
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
  [1636] = 2,
    ACTIONS(294), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(292), 12,
      anon_sym_COLON,
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
  [1656] = 3,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(299), 11,
      anon_sym_COLON,
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
  [1676] = 4,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(301), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(299), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1694] = 5,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_uppercased_identifier,
    ACTIONS(305), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(160), 3,
      sym_string_literal,
      sym__identifiers,
      sym_namespaced_identifier,
  [1713] = 5,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      sym_uppercased_identifier,
    ACTIONS(309), 1,
      sym_number,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(152), 3,
      sym_string_literal,
      sym__identifiers,
      sym_namespaced_identifier,
  [1732] = 2,
    ACTIONS(301), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    ACTIONS(299), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1744] = 1,
    ACTIONS(311), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1754] = 1,
    ACTIONS(313), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1764] = 3,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_parameter_list,
    ACTIONS(317), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1778] = 1,
    ACTIONS(319), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1787] = 1,
    ACTIONS(321), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1796] = 1,
    ACTIONS(323), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1805] = 3,
    ACTIONS(325), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(107), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1817] = 3,
    ACTIONS(327), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(172), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1829] = 1,
    ACTIONS(329), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1837] = 3,
    ACTIONS(331), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(167), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1849] = 3,
    ACTIONS(333), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(145), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1861] = 3,
    ACTIONS(335), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(153), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1873] = 3,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1885] = 3,
    ACTIONS(343), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(164), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1897] = 3,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1909] = 5,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(151), 1,
      sym_parameter_list,
  [1925] = 1,
    ACTIONS(353), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [1933] = 3,
    ACTIONS(355), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(124), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1945] = 3,
    ACTIONS(357), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(121), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [1957] = 3,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1969] = 5,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_EQ,
    STATE(156), 1,
      sym_parameter_list,
  [1985] = 3,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1997] = 3,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(301), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [2009] = 3,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2021] = 3,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2033] = 3,
    ACTIONS(373), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(148), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2045] = 3,
    ACTIONS(375), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(158), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2057] = 3,
    ACTIONS(377), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(133), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2069] = 3,
    ACTIONS(379), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(168), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2081] = 3,
    ACTIONS(381), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(102), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2093] = 3,
    ACTIONS(383), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(150), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2105] = 3,
    ACTIONS(385), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(137), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2117] = 1,
    ACTIONS(387), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [2125] = 2,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2135] = 5,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_EQ,
    STATE(163), 1,
      sym_parameter_list,
  [2151] = 1,
    ACTIONS(395), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [2159] = 1,
    ACTIONS(397), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [2167] = 5,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(403), 1,
      anon_sym_EQ,
    STATE(169), 1,
      sym_parameter_list,
  [2183] = 3,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2195] = 3,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(339), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(341), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2207] = 3,
    ACTIONS(409), 1,
      sym_uppercased_identifier,
    ACTIONS(23), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(162), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [2219] = 4,
    ACTIONS(411), 1,
      sym_escape_sequence,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      aux_sym_string_literal_token1,
    STATE(130), 1,
      aux_sym_string_literal_repeat1,
  [2232] = 4,
    ACTIONS(417), 1,
      sym_escape_sequence,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      aux_sym_string_literal_token1,
    STATE(129), 1,
      aux_sym_string_literal_repeat1,
  [2245] = 4,
    ACTIONS(425), 1,
      sym_escape_sequence,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      aux_sym_string_literal_token1,
    STATE(129), 1,
      aux_sym_string_literal_repeat1,
  [2258] = 2,
    STATE(143), 1,
      sym_property_parameter,
    ACTIONS(260), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [2267] = 3,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_block,
  [2277] = 3,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
  [2287] = 1,
    ACTIONS(435), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [2293] = 3,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [2303] = 3,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    STATE(39), 1,
      sym_block,
  [2313] = 3,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(403), 1,
      anon_sym_EQ,
  [2323] = 1,
    ACTIONS(443), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [2329] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_parameter_list_repeat1,
  [2339] = 2,
    ACTIONS(449), 1,
      anon_sym_COLON,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2347] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_parameter_list_repeat1,
  [2357] = 2,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2365] = 3,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_block,
  [2375] = 1,
    ACTIONS(222), 3,
      anon_sym_get,
      anon_sym_set,
      anon_sym_construct,
  [2381] = 3,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_EQ,
  [2391] = 3,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [2401] = 3,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    STATE(20), 1,
      sym_block,
  [2411] = 3,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_EQ,
  [2421] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_parameter_list_repeat1,
  [2431] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [2438] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
  [2445] = 1,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2450] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [2457] = 1,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2462] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [2469] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [2476] = 2,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_parameter_list,
  [2483] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [2490] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [2497] = 1,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2502] = 1,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2507] = 2,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [2514] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [2521] = 1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2526] = 1,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2531] = 2,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_namespaced_identifier_repeat1,
  [2538] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [2545] = 1,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2550] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
  [2557] = 1,
    ACTIONS(480), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [2562] = 2,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_parameter_list,
  [2569] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [2576] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [2580] = 1,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
  [2584] = 1,
    ACTIONS(482), 1,
      sym_camel_cased_identifier,
  [2588] = 1,
    ACTIONS(484), 1,
      sym_camel_cased_identifier,
  [2592] = 1,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
  [2596] = 1,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
  [2600] = 1,
    ACTIONS(488), 1,
      anon_sym_EQ,
  [2604] = 1,
    ACTIONS(490), 1,
      sym_camel_cased_identifier,
  [2608] = 1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
  [2612] = 1,
    ACTIONS(492), 1,
      anon_sym_EQ,
  [2616] = 1,
    ACTIONS(494), 1,
      sym_camel_cased_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(48)] = 0,
  [SMALL_STATE(49)] = 74,
  [SMALL_STATE(50)] = 148,
  [SMALL_STATE(51)] = 210,
  [SMALL_STATE(52)] = 271,
  [SMALL_STATE(53)] = 327,
  [SMALL_STATE(54)] = 382,
  [SMALL_STATE(55)] = 443,
  [SMALL_STATE(56)] = 504,
  [SMALL_STATE(57)] = 565,
  [SMALL_STATE(58)] = 626,
  [SMALL_STATE(59)] = 687,
  [SMALL_STATE(60)] = 748,
  [SMALL_STATE(61)] = 809,
  [SMALL_STATE(62)] = 870,
  [SMALL_STATE(63)] = 931,
  [SMALL_STATE(64)] = 992,
  [SMALL_STATE(65)] = 1053,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1140,
  [SMALL_STATE(68)] = 1184,
  [SMALL_STATE(69)] = 1228,
  [SMALL_STATE(70)] = 1268,
  [SMALL_STATE(71)] = 1312,
  [SMALL_STATE(72)] = 1356,
  [SMALL_STATE(73)] = 1400,
  [SMALL_STATE(74)] = 1434,
  [SMALL_STATE(75)] = 1465,
  [SMALL_STATE(76)] = 1496,
  [SMALL_STATE(77)] = 1527,
  [SMALL_STATE(78)] = 1558,
  [SMALL_STATE(79)] = 1586,
  [SMALL_STATE(80)] = 1611,
  [SMALL_STATE(81)] = 1636,
  [SMALL_STATE(82)] = 1656,
  [SMALL_STATE(83)] = 1676,
  [SMALL_STATE(84)] = 1694,
  [SMALL_STATE(85)] = 1713,
  [SMALL_STATE(86)] = 1732,
  [SMALL_STATE(87)] = 1744,
  [SMALL_STATE(88)] = 1754,
  [SMALL_STATE(89)] = 1764,
  [SMALL_STATE(90)] = 1778,
  [SMALL_STATE(91)] = 1787,
  [SMALL_STATE(92)] = 1796,
  [SMALL_STATE(93)] = 1805,
  [SMALL_STATE(94)] = 1817,
  [SMALL_STATE(95)] = 1829,
  [SMALL_STATE(96)] = 1837,
  [SMALL_STATE(97)] = 1849,
  [SMALL_STATE(98)] = 1861,
  [SMALL_STATE(99)] = 1873,
  [SMALL_STATE(100)] = 1885,
  [SMALL_STATE(101)] = 1897,
  [SMALL_STATE(102)] = 1909,
  [SMALL_STATE(103)] = 1925,
  [SMALL_STATE(104)] = 1933,
  [SMALL_STATE(105)] = 1945,
  [SMALL_STATE(106)] = 1957,
  [SMALL_STATE(107)] = 1969,
  [SMALL_STATE(108)] = 1985,
  [SMALL_STATE(109)] = 1997,
  [SMALL_STATE(110)] = 2009,
  [SMALL_STATE(111)] = 2021,
  [SMALL_STATE(112)] = 2033,
  [SMALL_STATE(113)] = 2045,
  [SMALL_STATE(114)] = 2057,
  [SMALL_STATE(115)] = 2069,
  [SMALL_STATE(116)] = 2081,
  [SMALL_STATE(117)] = 2093,
  [SMALL_STATE(118)] = 2105,
  [SMALL_STATE(119)] = 2117,
  [SMALL_STATE(120)] = 2125,
  [SMALL_STATE(121)] = 2135,
  [SMALL_STATE(122)] = 2151,
  [SMALL_STATE(123)] = 2159,
  [SMALL_STATE(124)] = 2167,
  [SMALL_STATE(125)] = 2183,
  [SMALL_STATE(126)] = 2195,
  [SMALL_STATE(127)] = 2207,
  [SMALL_STATE(128)] = 2219,
  [SMALL_STATE(129)] = 2232,
  [SMALL_STATE(130)] = 2245,
  [SMALL_STATE(131)] = 2258,
  [SMALL_STATE(132)] = 2267,
  [SMALL_STATE(133)] = 2277,
  [SMALL_STATE(134)] = 2287,
  [SMALL_STATE(135)] = 2293,
  [SMALL_STATE(136)] = 2303,
  [SMALL_STATE(137)] = 2313,
  [SMALL_STATE(138)] = 2323,
  [SMALL_STATE(139)] = 2329,
  [SMALL_STATE(140)] = 2339,
  [SMALL_STATE(141)] = 2347,
  [SMALL_STATE(142)] = 2357,
  [SMALL_STATE(143)] = 2365,
  [SMALL_STATE(144)] = 2375,
  [SMALL_STATE(145)] = 2381,
  [SMALL_STATE(146)] = 2391,
  [SMALL_STATE(147)] = 2401,
  [SMALL_STATE(148)] = 2411,
  [SMALL_STATE(149)] = 2421,
  [SMALL_STATE(150)] = 2431,
  [SMALL_STATE(151)] = 2438,
  [SMALL_STATE(152)] = 2445,
  [SMALL_STATE(153)] = 2450,
  [SMALL_STATE(154)] = 2457,
  [SMALL_STATE(155)] = 2462,
  [SMALL_STATE(156)] = 2469,
  [SMALL_STATE(157)] = 2476,
  [SMALL_STATE(158)] = 2483,
  [SMALL_STATE(159)] = 2490,
  [SMALL_STATE(160)] = 2497,
  [SMALL_STATE(161)] = 2502,
  [SMALL_STATE(162)] = 2507,
  [SMALL_STATE(163)] = 2514,
  [SMALL_STATE(164)] = 2521,
  [SMALL_STATE(165)] = 2526,
  [SMALL_STATE(166)] = 2531,
  [SMALL_STATE(167)] = 2538,
  [SMALL_STATE(168)] = 2545,
  [SMALL_STATE(169)] = 2550,
  [SMALL_STATE(170)] = 2557,
  [SMALL_STATE(171)] = 2562,
  [SMALL_STATE(172)] = 2569,
  [SMALL_STATE(173)] = 2576,
  [SMALL_STATE(174)] = 2580,
  [SMALL_STATE(175)] = 2584,
  [SMALL_STATE(176)] = 2588,
  [SMALL_STATE(177)] = 2592,
  [SMALL_STATE(178)] = 2596,
  [SMALL_STATE(179)] = 2600,
  [SMALL_STATE(180)] = 2604,
  [SMALL_STATE(181)] = 2608,
  [SMALL_STATE(182)] = 2612,
  [SMALL_STATE(183)] = 2616,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gobject_contruct, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gobject_contruct, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(52),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(53),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gobject_property_acces, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2), SHIFT_REPEAT(144),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2), SHIFT_REPEAT(144),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2), SHIFT_REPEAT(170),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(78),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gobject_property_acces_repeat1, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(138),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifiers, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_instance, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(129),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(129),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instanciation_parameter, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instanciation_parameter, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(12),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instanciation_parameter, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instanciation_parameter, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_parameter, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_parameter, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_parameter, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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
