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
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
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
  anon_sym_namespace = 60,
  anon_sym_DASH = 61,
  anon_sym_BANG = 62,
  anon_sym_STAR = 63,
  anon_sym_SLASH = 64,
  anon_sym_PLUS = 65,
  sym_identifier = 66,
  sym_camel_cased_identifier = 67,
  sym_uppercased_identifier = 68,
  anon_sym_DOT = 69,
  sym_number = 70,
  sym_source_file = 71,
  sym__top_level = 72,
  sym_function_definition = 73,
  sym_class_declaration = 74,
  sym_modifier = 75,
  sym__type = 76,
  sym_primitive_type = 77,
  sym_comment = 78,
  sym_parameter_list = 79,
  sym_parameter = 80,
  sym_block = 81,
  sym__statement = 82,
  sym_return_statement = 83,
  sym_assignment = 84,
  sym_declaration = 85,
  sym_namespace = 86,
  sym__expression = 87,
  sym_unary_expression = 88,
  sym_binary_expression = 89,
  sym__identifiers = 90,
  sym_namespaced_identifier = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_function_definition_repeat1 = 93,
  aux_sym_parameter_list_repeat1 = 94,
  aux_sym_block_repeat1 = 95,
  aux_sym_namespaced_identifier_repeat1 = 96,
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
  [anon_sym_namespace] = "namespace",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
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
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_assignment] = "assignment",
  [sym_declaration] = "declaration",
  [sym_namespace] = "namespace",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__identifiers] = "_identifiers",
  [sym_namespaced_identifier] = "namespaced_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_assignment] = sym_assignment,
  [sym_declaration] = sym_declaration,
  [sym_namespace] = sym_namespace,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__identifiers] = sym__identifiers,
  [sym_namespaced_identifier] = sym_namespaced_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_namespace] = {
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
  [sym_parameter] = {
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
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
      if (eof) ADVANCE(169);
      if (lookahead == '!') ADVANCE(271);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '+') ADVANCE(275);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '=') ADVANCE(266);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 'u') ADVANCE(299);
      if (lookahead == 'v') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(323);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(443);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(271);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(443);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '+') ADVANCE(275);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '=') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(51);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(239);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(251);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(240);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(252);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(238);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(250);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'q') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'z') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(205);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 160:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 163:
      if (lookahead == 'z') ADVANCE(59);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(166);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(258);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(166);
      if (lookahead == '*') ADVANCE(164);
      END_STATE();
    case 167:
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 168:
      if (eof) ADVANCE(169);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 'u') ADVANCE(299);
      if (lookahead == 'v') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(323);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(443);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_signal);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_signal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_async);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_owned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_unowned);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_unowned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_unichar);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_unichar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_uchar);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_uchar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(166);
      if (lookahead == '*') ADVANCE(164);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(165);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(445);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(422);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(360);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 'l') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'q') ADVANCE(433);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(230);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(376);
      if (lookahead == 'z') ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(442);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(389);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead == 'v') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(374);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(295);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(379);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(372);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(331);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (lookahead == '_') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(443);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(444);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_uppercased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 168},
  [2] = {.lex_state = 168},
  [3] = {.lex_state = 168},
  [4] = {.lex_state = 168},
  [5] = {.lex_state = 168},
  [6] = {.lex_state = 168},
  [7] = {.lex_state = 168},
  [8] = {.lex_state = 168},
  [9] = {.lex_state = 168},
  [10] = {.lex_state = 168},
  [11] = {.lex_state = 168},
  [12] = {.lex_state = 168},
  [13] = {.lex_state = 168},
  [14] = {.lex_state = 168},
  [15] = {.lex_state = 168},
  [16] = {.lex_state = 168},
  [17] = {.lex_state = 168},
  [18] = {.lex_state = 168},
  [19] = {.lex_state = 168},
  [20] = {.lex_state = 168},
  [21] = {.lex_state = 168},
  [22] = {.lex_state = 168},
  [23] = {.lex_state = 168},
  [24] = {.lex_state = 168},
  [25] = {.lex_state = 168},
  [26] = {.lex_state = 168},
  [27] = {.lex_state = 168},
  [28] = {.lex_state = 168},
  [29] = {.lex_state = 168},
  [30] = {.lex_state = 168},
  [31] = {.lex_state = 168},
  [32] = {.lex_state = 168},
  [33] = {.lex_state = 168},
  [34] = {.lex_state = 168},
  [35] = {.lex_state = 168},
  [36] = {.lex_state = 168},
  [37] = {.lex_state = 168},
  [38] = {.lex_state = 168},
  [39] = {.lex_state = 168},
  [40] = {.lex_state = 168},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
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
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_camel_cased_identifier] = ACTIONS(1),
    [sym_uppercased_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(127),
    [sym__top_level] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_modifier] = STATE(43),
    [sym__type] = STATE(69),
    [sym_primitive_type] = STATE(69),
    [sym_comment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym__identifiers] = STATE(120),
    [sym_namespaced_identifier] = STATE(120),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(43),
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
    [sym_camel_cased_identifier] = ACTIONS(21),
    [sym_uppercased_identifier] = ACTIONS(23),
  },
  [2] = {
    [sym__top_level] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_class_declaration] = STATE(7),
    [sym_modifier] = STATE(43),
    [sym__type] = STATE(69),
    [sym_primitive_type] = STATE(69),
    [sym_comment] = STATE(7),
    [sym__statement] = STATE(7),
    [sym_return_statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_declaration] = STATE(7),
    [sym_namespace] = STATE(7),
    [sym__identifiers] = STATE(120),
    [sym_namespaced_identifier] = STATE(120),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_function_definition_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [sym_camel_cased_identifier] = ACTIONS(21),
    [sym_uppercased_identifier] = ACTIONS(23),
  },
  [3] = {
    [sym__top_level] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_class_declaration] = STATE(5),
    [sym_modifier] = STATE(42),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym__identifiers] = STATE(128),
    [sym_namespaced_identifier] = STATE(128),
    [aux_sym_function_definition_repeat1] = STATE(42),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_class] = ACTIONS(27),
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
    [aux_sym_comment_token1] = ACTIONS(29),
    [aux_sym_comment_token2] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_var] = ACTIONS(35),
    [anon_sym_namespace] = ACTIONS(37),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(21),
    [sym_uppercased_identifier] = ACTIONS(39),
  },
  [4] = {
    [sym__top_level] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_modifier] = STATE(42),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym__identifiers] = STATE(128),
    [sym_namespaced_identifier] = STATE(128),
    [aux_sym_function_definition_repeat1] = STATE(42),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_class] = ACTIONS(27),
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
    [aux_sym_comment_token1] = ACTIONS(29),
    [aux_sym_comment_token2] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_var] = ACTIONS(35),
    [anon_sym_namespace] = ACTIONS(37),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(21),
    [sym_uppercased_identifier] = ACTIONS(39),
  },
  [5] = {
    [sym__top_level] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_class_declaration] = STATE(5),
    [sym_modifier] = STATE(42),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym__identifiers] = STATE(128),
    [sym_namespaced_identifier] = STATE(128),
    [aux_sym_function_definition_repeat1] = STATE(42),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_class] = ACTIONS(43),
    [anon_sym_abstract] = ACTIONS(46),
    [anon_sym_const] = ACTIONS(46),
    [anon_sym_dynamic] = ACTIONS(46),
    [anon_sym_ensures] = ACTIONS(46),
    [anon_sym_extern] = ACTIONS(46),
    [anon_sym_inline] = ACTIONS(46),
    [anon_sym_internal] = ACTIONS(46),
    [anon_sym_override] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_requires] = ACTIONS(46),
    [anon_sym_signal] = ACTIONS(46),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_virtual] = ACTIONS(46),
    [anon_sym_volatile] = ACTIONS(46),
    [anon_sym_weak] = ACTIONS(46),
    [anon_sym_async] = ACTIONS(46),
    [anon_sym_owned] = ACTIONS(46),
    [anon_sym_unowned] = ACTIONS(46),
    [anon_sym_ref] = ACTIONS(46),
    [anon_sym_out] = ACTIONS(46),
    [anon_sym_bool] = ACTIONS(49),
    [anon_sym_char] = ACTIONS(49),
    [anon_sym_double] = ACTIONS(49),
    [anon_sym_float] = ACTIONS(49),
    [anon_sym_size_t] = ACTIONS(49),
    [anon_sym_ssize_t] = ACTIONS(49),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_unichar] = ACTIONS(49),
    [anon_sym_void] = ACTIONS(49),
    [anon_sym_int] = ACTIONS(49),
    [anon_sym_int8] = ACTIONS(52),
    [anon_sym_int16] = ACTIONS(52),
    [anon_sym_int32] = ACTIONS(52),
    [anon_sym_int64] = ACTIONS(52),
    [anon_sym_long] = ACTIONS(49),
    [anon_sym_short] = ACTIONS(49),
    [anon_sym_uchar] = ACTIONS(49),
    [anon_sym_uint] = ACTIONS(49),
    [anon_sym_uint8] = ACTIONS(52),
    [anon_sym_uint16] = ACTIONS(52),
    [anon_sym_uint32] = ACTIONS(52),
    [anon_sym_uint64] = ACTIONS(52),
    [anon_sym_ulong] = ACTIONS(49),
    [anon_sym_ushort] = ACTIONS(49),
    [aux_sym_comment_token1] = ACTIONS(55),
    [aux_sym_comment_token2] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_return] = ACTIONS(60),
    [anon_sym_var] = ACTIONS(63),
    [anon_sym_namespace] = ACTIONS(66),
    [sym_identifier] = ACTIONS(69),
    [sym_camel_cased_identifier] = ACTIONS(69),
    [sym_uppercased_identifier] = ACTIONS(72),
  },
  [6] = {
    [sym__top_level] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_class_declaration] = STATE(8),
    [sym_modifier] = STATE(42),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(8),
    [sym__statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_assignment] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym__identifiers] = STATE(128),
    [sym_namespaced_identifier] = STATE(128),
    [aux_sym_function_definition_repeat1] = STATE(42),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_class] = ACTIONS(27),
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
    [aux_sym_comment_token1] = ACTIONS(29),
    [aux_sym_comment_token2] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_var] = ACTIONS(35),
    [anon_sym_namespace] = ACTIONS(37),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(21),
    [sym_uppercased_identifier] = ACTIONS(39),
  },
  [7] = {
    [sym__top_level] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_class_declaration] = STATE(7),
    [sym_modifier] = STATE(43),
    [sym__type] = STATE(69),
    [sym_primitive_type] = STATE(69),
    [sym_comment] = STATE(7),
    [sym__statement] = STATE(7),
    [sym_return_statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_declaration] = STATE(7),
    [sym_namespace] = STATE(7),
    [sym__identifiers] = STATE(120),
    [sym_namespaced_identifier] = STATE(120),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_function_definition_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_class] = ACTIONS(79),
    [anon_sym_abstract] = ACTIONS(82),
    [anon_sym_const] = ACTIONS(82),
    [anon_sym_dynamic] = ACTIONS(82),
    [anon_sym_ensures] = ACTIONS(82),
    [anon_sym_extern] = ACTIONS(82),
    [anon_sym_inline] = ACTIONS(82),
    [anon_sym_internal] = ACTIONS(82),
    [anon_sym_override] = ACTIONS(82),
    [anon_sym_private] = ACTIONS(82),
    [anon_sym_protected] = ACTIONS(82),
    [anon_sym_public] = ACTIONS(82),
    [anon_sym_requires] = ACTIONS(82),
    [anon_sym_signal] = ACTIONS(82),
    [anon_sym_static] = ACTIONS(82),
    [anon_sym_virtual] = ACTIONS(82),
    [anon_sym_volatile] = ACTIONS(82),
    [anon_sym_weak] = ACTIONS(82),
    [anon_sym_async] = ACTIONS(82),
    [anon_sym_owned] = ACTIONS(82),
    [anon_sym_unowned] = ACTIONS(82),
    [anon_sym_ref] = ACTIONS(82),
    [anon_sym_out] = ACTIONS(82),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_char] = ACTIONS(85),
    [anon_sym_double] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(85),
    [anon_sym_size_t] = ACTIONS(85),
    [anon_sym_ssize_t] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(85),
    [anon_sym_unichar] = ACTIONS(85),
    [anon_sym_void] = ACTIONS(85),
    [anon_sym_int] = ACTIONS(85),
    [anon_sym_int8] = ACTIONS(88),
    [anon_sym_int16] = ACTIONS(88),
    [anon_sym_int32] = ACTIONS(88),
    [anon_sym_int64] = ACTIONS(88),
    [anon_sym_long] = ACTIONS(85),
    [anon_sym_short] = ACTIONS(85),
    [anon_sym_uchar] = ACTIONS(85),
    [anon_sym_uint] = ACTIONS(85),
    [anon_sym_uint8] = ACTIONS(88),
    [anon_sym_uint16] = ACTIONS(88),
    [anon_sym_uint32] = ACTIONS(88),
    [anon_sym_uint64] = ACTIONS(88),
    [anon_sym_ulong] = ACTIONS(85),
    [anon_sym_ushort] = ACTIONS(85),
    [aux_sym_comment_token1] = ACTIONS(91),
    [aux_sym_comment_token2] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_var] = ACTIONS(97),
    [anon_sym_namespace] = ACTIONS(100),
    [sym_identifier] = ACTIONS(103),
    [sym_camel_cased_identifier] = ACTIONS(103),
    [sym_uppercased_identifier] = ACTIONS(106),
  },
  [8] = {
    [sym__top_level] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_class_declaration] = STATE(5),
    [sym_modifier] = STATE(42),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym__identifiers] = STATE(128),
    [sym_namespaced_identifier] = STATE(128),
    [aux_sym_function_definition_repeat1] = STATE(42),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_class] = ACTIONS(27),
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
    [aux_sym_comment_token1] = ACTIONS(29),
    [aux_sym_comment_token2] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_var] = ACTIONS(35),
    [anon_sym_namespace] = ACTIONS(37),
    [sym_identifier] = ACTIONS(21),
    [sym_camel_cased_identifier] = ACTIONS(21),
    [sym_uppercased_identifier] = ACTIONS(39),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_class] = ACTIONS(113),
    [anon_sym_abstract] = ACTIONS(113),
    [anon_sym_const] = ACTIONS(113),
    [anon_sym_dynamic] = ACTIONS(113),
    [anon_sym_ensures] = ACTIONS(113),
    [anon_sym_extern] = ACTIONS(113),
    [anon_sym_inline] = ACTIONS(113),
    [anon_sym_internal] = ACTIONS(113),
    [anon_sym_override] = ACTIONS(113),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_public] = ACTIONS(113),
    [anon_sym_requires] = ACTIONS(113),
    [anon_sym_signal] = ACTIONS(113),
    [anon_sym_static] = ACTIONS(113),
    [anon_sym_virtual] = ACTIONS(113),
    [anon_sym_volatile] = ACTIONS(113),
    [anon_sym_weak] = ACTIONS(113),
    [anon_sym_async] = ACTIONS(113),
    [anon_sym_owned] = ACTIONS(113),
    [anon_sym_unowned] = ACTIONS(113),
    [anon_sym_ref] = ACTIONS(113),
    [anon_sym_out] = ACTIONS(113),
    [anon_sym_bool] = ACTIONS(113),
    [anon_sym_char] = ACTIONS(113),
    [anon_sym_double] = ACTIONS(113),
    [anon_sym_float] = ACTIONS(113),
    [anon_sym_size_t] = ACTIONS(113),
    [anon_sym_ssize_t] = ACTIONS(113),
    [anon_sym_string] = ACTIONS(113),
    [anon_sym_unichar] = ACTIONS(113),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_int] = ACTIONS(113),
    [anon_sym_int8] = ACTIONS(111),
    [anon_sym_int16] = ACTIONS(111),
    [anon_sym_int32] = ACTIONS(111),
    [anon_sym_int64] = ACTIONS(111),
    [anon_sym_long] = ACTIONS(113),
    [anon_sym_short] = ACTIONS(113),
    [anon_sym_uchar] = ACTIONS(113),
    [anon_sym_uint] = ACTIONS(113),
    [anon_sym_uint8] = ACTIONS(111),
    [anon_sym_uint16] = ACTIONS(111),
    [anon_sym_uint32] = ACTIONS(111),
    [anon_sym_uint64] = ACTIONS(111),
    [anon_sym_ulong] = ACTIONS(113),
    [anon_sym_ushort] = ACTIONS(113),
    [aux_sym_comment_token1] = ACTIONS(111),
    [aux_sym_comment_token2] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_var] = ACTIONS(113),
    [anon_sym_namespace] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [sym_camel_cased_identifier] = ACTIONS(113),
    [sym_uppercased_identifier] = ACTIONS(113),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_class] = ACTIONS(117),
    [anon_sym_abstract] = ACTIONS(117),
    [anon_sym_const] = ACTIONS(117),
    [anon_sym_dynamic] = ACTIONS(117),
    [anon_sym_ensures] = ACTIONS(117),
    [anon_sym_extern] = ACTIONS(117),
    [anon_sym_inline] = ACTIONS(117),
    [anon_sym_internal] = ACTIONS(117),
    [anon_sym_override] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_protected] = ACTIONS(117),
    [anon_sym_public] = ACTIONS(117),
    [anon_sym_requires] = ACTIONS(117),
    [anon_sym_signal] = ACTIONS(117),
    [anon_sym_static] = ACTIONS(117),
    [anon_sym_virtual] = ACTIONS(117),
    [anon_sym_volatile] = ACTIONS(117),
    [anon_sym_weak] = ACTIONS(117),
    [anon_sym_async] = ACTIONS(117),
    [anon_sym_owned] = ACTIONS(117),
    [anon_sym_unowned] = ACTIONS(117),
    [anon_sym_ref] = ACTIONS(117),
    [anon_sym_out] = ACTIONS(117),
    [anon_sym_bool] = ACTIONS(117),
    [anon_sym_char] = ACTIONS(117),
    [anon_sym_double] = ACTIONS(117),
    [anon_sym_float] = ACTIONS(117),
    [anon_sym_size_t] = ACTIONS(117),
    [anon_sym_ssize_t] = ACTIONS(117),
    [anon_sym_string] = ACTIONS(117),
    [anon_sym_unichar] = ACTIONS(117),
    [anon_sym_void] = ACTIONS(117),
    [anon_sym_int] = ACTIONS(117),
    [anon_sym_int8] = ACTIONS(115),
    [anon_sym_int16] = ACTIONS(115),
    [anon_sym_int32] = ACTIONS(115),
    [anon_sym_int64] = ACTIONS(115),
    [anon_sym_long] = ACTIONS(117),
    [anon_sym_short] = ACTIONS(117),
    [anon_sym_uchar] = ACTIONS(117),
    [anon_sym_uint] = ACTIONS(117),
    [anon_sym_uint8] = ACTIONS(115),
    [anon_sym_uint16] = ACTIONS(115),
    [anon_sym_uint32] = ACTIONS(115),
    [anon_sym_uint64] = ACTIONS(115),
    [anon_sym_ulong] = ACTIONS(117),
    [anon_sym_ushort] = ACTIONS(117),
    [aux_sym_comment_token1] = ACTIONS(115),
    [aux_sym_comment_token2] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_var] = ACTIONS(117),
    [anon_sym_namespace] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [sym_camel_cased_identifier] = ACTIONS(117),
    [sym_uppercased_identifier] = ACTIONS(117),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_class] = ACTIONS(121),
    [anon_sym_abstract] = ACTIONS(121),
    [anon_sym_const] = ACTIONS(121),
    [anon_sym_dynamic] = ACTIONS(121),
    [anon_sym_ensures] = ACTIONS(121),
    [anon_sym_extern] = ACTIONS(121),
    [anon_sym_inline] = ACTIONS(121),
    [anon_sym_internal] = ACTIONS(121),
    [anon_sym_override] = ACTIONS(121),
    [anon_sym_private] = ACTIONS(121),
    [anon_sym_protected] = ACTIONS(121),
    [anon_sym_public] = ACTIONS(121),
    [anon_sym_requires] = ACTIONS(121),
    [anon_sym_signal] = ACTIONS(121),
    [anon_sym_static] = ACTIONS(121),
    [anon_sym_virtual] = ACTIONS(121),
    [anon_sym_volatile] = ACTIONS(121),
    [anon_sym_weak] = ACTIONS(121),
    [anon_sym_async] = ACTIONS(121),
    [anon_sym_owned] = ACTIONS(121),
    [anon_sym_unowned] = ACTIONS(121),
    [anon_sym_ref] = ACTIONS(121),
    [anon_sym_out] = ACTIONS(121),
    [anon_sym_bool] = ACTIONS(121),
    [anon_sym_char] = ACTIONS(121),
    [anon_sym_double] = ACTIONS(121),
    [anon_sym_float] = ACTIONS(121),
    [anon_sym_size_t] = ACTIONS(121),
    [anon_sym_ssize_t] = ACTIONS(121),
    [anon_sym_string] = ACTIONS(121),
    [anon_sym_unichar] = ACTIONS(121),
    [anon_sym_void] = ACTIONS(121),
    [anon_sym_int] = ACTIONS(121),
    [anon_sym_int8] = ACTIONS(119),
    [anon_sym_int16] = ACTIONS(119),
    [anon_sym_int32] = ACTIONS(119),
    [anon_sym_int64] = ACTIONS(119),
    [anon_sym_long] = ACTIONS(121),
    [anon_sym_short] = ACTIONS(121),
    [anon_sym_uchar] = ACTIONS(121),
    [anon_sym_uint] = ACTIONS(121),
    [anon_sym_uint8] = ACTIONS(119),
    [anon_sym_uint16] = ACTIONS(119),
    [anon_sym_uint32] = ACTIONS(119),
    [anon_sym_uint64] = ACTIONS(119),
    [anon_sym_ulong] = ACTIONS(121),
    [anon_sym_ushort] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(119),
    [aux_sym_comment_token2] = ACTIONS(119),
    [anon_sym_return] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_namespace] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_camel_cased_identifier] = ACTIONS(121),
    [sym_uppercased_identifier] = ACTIONS(121),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_class] = ACTIONS(125),
    [anon_sym_abstract] = ACTIONS(125),
    [anon_sym_const] = ACTIONS(125),
    [anon_sym_dynamic] = ACTIONS(125),
    [anon_sym_ensures] = ACTIONS(125),
    [anon_sym_extern] = ACTIONS(125),
    [anon_sym_inline] = ACTIONS(125),
    [anon_sym_internal] = ACTIONS(125),
    [anon_sym_override] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_protected] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_requires] = ACTIONS(125),
    [anon_sym_signal] = ACTIONS(125),
    [anon_sym_static] = ACTIONS(125),
    [anon_sym_virtual] = ACTIONS(125),
    [anon_sym_volatile] = ACTIONS(125),
    [anon_sym_weak] = ACTIONS(125),
    [anon_sym_async] = ACTIONS(125),
    [anon_sym_owned] = ACTIONS(125),
    [anon_sym_unowned] = ACTIONS(125),
    [anon_sym_ref] = ACTIONS(125),
    [anon_sym_out] = ACTIONS(125),
    [anon_sym_bool] = ACTIONS(125),
    [anon_sym_char] = ACTIONS(125),
    [anon_sym_double] = ACTIONS(125),
    [anon_sym_float] = ACTIONS(125),
    [anon_sym_size_t] = ACTIONS(125),
    [anon_sym_ssize_t] = ACTIONS(125),
    [anon_sym_string] = ACTIONS(125),
    [anon_sym_unichar] = ACTIONS(125),
    [anon_sym_void] = ACTIONS(125),
    [anon_sym_int] = ACTIONS(125),
    [anon_sym_int8] = ACTIONS(123),
    [anon_sym_int16] = ACTIONS(123),
    [anon_sym_int32] = ACTIONS(123),
    [anon_sym_int64] = ACTIONS(123),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_short] = ACTIONS(125),
    [anon_sym_uchar] = ACTIONS(125),
    [anon_sym_uint] = ACTIONS(125),
    [anon_sym_uint8] = ACTIONS(123),
    [anon_sym_uint16] = ACTIONS(123),
    [anon_sym_uint32] = ACTIONS(123),
    [anon_sym_uint64] = ACTIONS(123),
    [anon_sym_ulong] = ACTIONS(125),
    [anon_sym_ushort] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(123),
    [aux_sym_comment_token2] = ACTIONS(123),
    [anon_sym_return] = ACTIONS(125),
    [anon_sym_var] = ACTIONS(125),
    [anon_sym_namespace] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_camel_cased_identifier] = ACTIONS(125),
    [sym_uppercased_identifier] = ACTIONS(125),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(129),
    [anon_sym_abstract] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_dynamic] = ACTIONS(129),
    [anon_sym_ensures] = ACTIONS(129),
    [anon_sym_extern] = ACTIONS(129),
    [anon_sym_inline] = ACTIONS(129),
    [anon_sym_internal] = ACTIONS(129),
    [anon_sym_override] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_protected] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_requires] = ACTIONS(129),
    [anon_sym_signal] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(129),
    [anon_sym_virtual] = ACTIONS(129),
    [anon_sym_volatile] = ACTIONS(129),
    [anon_sym_weak] = ACTIONS(129),
    [anon_sym_async] = ACTIONS(129),
    [anon_sym_owned] = ACTIONS(129),
    [anon_sym_unowned] = ACTIONS(129),
    [anon_sym_ref] = ACTIONS(129),
    [anon_sym_out] = ACTIONS(129),
    [anon_sym_bool] = ACTIONS(129),
    [anon_sym_char] = ACTIONS(129),
    [anon_sym_double] = ACTIONS(129),
    [anon_sym_float] = ACTIONS(129),
    [anon_sym_size_t] = ACTIONS(129),
    [anon_sym_ssize_t] = ACTIONS(129),
    [anon_sym_string] = ACTIONS(129),
    [anon_sym_unichar] = ACTIONS(129),
    [anon_sym_void] = ACTIONS(129),
    [anon_sym_int] = ACTIONS(129),
    [anon_sym_int8] = ACTIONS(127),
    [anon_sym_int16] = ACTIONS(127),
    [anon_sym_int32] = ACTIONS(127),
    [anon_sym_int64] = ACTIONS(127),
    [anon_sym_long] = ACTIONS(129),
    [anon_sym_short] = ACTIONS(129),
    [anon_sym_uchar] = ACTIONS(129),
    [anon_sym_uint] = ACTIONS(129),
    [anon_sym_uint8] = ACTIONS(127),
    [anon_sym_uint16] = ACTIONS(127),
    [anon_sym_uint32] = ACTIONS(127),
    [anon_sym_uint64] = ACTIONS(127),
    [anon_sym_ulong] = ACTIONS(129),
    [anon_sym_ushort] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(127),
    [aux_sym_comment_token2] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_namespace] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_camel_cased_identifier] = ACTIONS(129),
    [sym_uppercased_identifier] = ACTIONS(129),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_class] = ACTIONS(133),
    [anon_sym_abstract] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_dynamic] = ACTIONS(133),
    [anon_sym_ensures] = ACTIONS(133),
    [anon_sym_extern] = ACTIONS(133),
    [anon_sym_inline] = ACTIONS(133),
    [anon_sym_internal] = ACTIONS(133),
    [anon_sym_override] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_protected] = ACTIONS(133),
    [anon_sym_public] = ACTIONS(133),
    [anon_sym_requires] = ACTIONS(133),
    [anon_sym_signal] = ACTIONS(133),
    [anon_sym_static] = ACTIONS(133),
    [anon_sym_virtual] = ACTIONS(133),
    [anon_sym_volatile] = ACTIONS(133),
    [anon_sym_weak] = ACTIONS(133),
    [anon_sym_async] = ACTIONS(133),
    [anon_sym_owned] = ACTIONS(133),
    [anon_sym_unowned] = ACTIONS(133),
    [anon_sym_ref] = ACTIONS(133),
    [anon_sym_out] = ACTIONS(133),
    [anon_sym_bool] = ACTIONS(133),
    [anon_sym_char] = ACTIONS(133),
    [anon_sym_double] = ACTIONS(133),
    [anon_sym_float] = ACTIONS(133),
    [anon_sym_size_t] = ACTIONS(133),
    [anon_sym_ssize_t] = ACTIONS(133),
    [anon_sym_string] = ACTIONS(133),
    [anon_sym_unichar] = ACTIONS(133),
    [anon_sym_void] = ACTIONS(133),
    [anon_sym_int] = ACTIONS(133),
    [anon_sym_int8] = ACTIONS(131),
    [anon_sym_int16] = ACTIONS(131),
    [anon_sym_int32] = ACTIONS(131),
    [anon_sym_int64] = ACTIONS(131),
    [anon_sym_long] = ACTIONS(133),
    [anon_sym_short] = ACTIONS(133),
    [anon_sym_uchar] = ACTIONS(133),
    [anon_sym_uint] = ACTIONS(133),
    [anon_sym_uint8] = ACTIONS(131),
    [anon_sym_uint16] = ACTIONS(131),
    [anon_sym_uint32] = ACTIONS(131),
    [anon_sym_uint64] = ACTIONS(131),
    [anon_sym_ulong] = ACTIONS(133),
    [anon_sym_ushort] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(131),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_namespace] = ACTIONS(133),
    [sym_identifier] = ACTIONS(133),
    [sym_camel_cased_identifier] = ACTIONS(133),
    [sym_uppercased_identifier] = ACTIONS(133),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_abstract] = ACTIONS(137),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_dynamic] = ACTIONS(137),
    [anon_sym_ensures] = ACTIONS(137),
    [anon_sym_extern] = ACTIONS(137),
    [anon_sym_inline] = ACTIONS(137),
    [anon_sym_internal] = ACTIONS(137),
    [anon_sym_override] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_protected] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_requires] = ACTIONS(137),
    [anon_sym_signal] = ACTIONS(137),
    [anon_sym_static] = ACTIONS(137),
    [anon_sym_virtual] = ACTIONS(137),
    [anon_sym_volatile] = ACTIONS(137),
    [anon_sym_weak] = ACTIONS(137),
    [anon_sym_async] = ACTIONS(137),
    [anon_sym_owned] = ACTIONS(137),
    [anon_sym_unowned] = ACTIONS(137),
    [anon_sym_ref] = ACTIONS(137),
    [anon_sym_out] = ACTIONS(137),
    [anon_sym_bool] = ACTIONS(137),
    [anon_sym_char] = ACTIONS(137),
    [anon_sym_double] = ACTIONS(137),
    [anon_sym_float] = ACTIONS(137),
    [anon_sym_size_t] = ACTIONS(137),
    [anon_sym_ssize_t] = ACTIONS(137),
    [anon_sym_string] = ACTIONS(137),
    [anon_sym_unichar] = ACTIONS(137),
    [anon_sym_void] = ACTIONS(137),
    [anon_sym_int] = ACTIONS(137),
    [anon_sym_int8] = ACTIONS(135),
    [anon_sym_int16] = ACTIONS(135),
    [anon_sym_int32] = ACTIONS(135),
    [anon_sym_int64] = ACTIONS(135),
    [anon_sym_long] = ACTIONS(137),
    [anon_sym_short] = ACTIONS(137),
    [anon_sym_uchar] = ACTIONS(137),
    [anon_sym_uint] = ACTIONS(137),
    [anon_sym_uint8] = ACTIONS(135),
    [anon_sym_uint16] = ACTIONS(135),
    [anon_sym_uint32] = ACTIONS(135),
    [anon_sym_uint64] = ACTIONS(135),
    [anon_sym_ulong] = ACTIONS(137),
    [anon_sym_ushort] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(135),
    [aux_sym_comment_token2] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(137),
    [anon_sym_var] = ACTIONS(137),
    [anon_sym_namespace] = ACTIONS(137),
    [sym_identifier] = ACTIONS(137),
    [sym_camel_cased_identifier] = ACTIONS(137),
    [sym_uppercased_identifier] = ACTIONS(137),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_class] = ACTIONS(141),
    [anon_sym_abstract] = ACTIONS(141),
    [anon_sym_const] = ACTIONS(141),
    [anon_sym_dynamic] = ACTIONS(141),
    [anon_sym_ensures] = ACTIONS(141),
    [anon_sym_extern] = ACTIONS(141),
    [anon_sym_inline] = ACTIONS(141),
    [anon_sym_internal] = ACTIONS(141),
    [anon_sym_override] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_protected] = ACTIONS(141),
    [anon_sym_public] = ACTIONS(141),
    [anon_sym_requires] = ACTIONS(141),
    [anon_sym_signal] = ACTIONS(141),
    [anon_sym_static] = ACTIONS(141),
    [anon_sym_virtual] = ACTIONS(141),
    [anon_sym_volatile] = ACTIONS(141),
    [anon_sym_weak] = ACTIONS(141),
    [anon_sym_async] = ACTIONS(141),
    [anon_sym_owned] = ACTIONS(141),
    [anon_sym_unowned] = ACTIONS(141),
    [anon_sym_ref] = ACTIONS(141),
    [anon_sym_out] = ACTIONS(141),
    [anon_sym_bool] = ACTIONS(141),
    [anon_sym_char] = ACTIONS(141),
    [anon_sym_double] = ACTIONS(141),
    [anon_sym_float] = ACTIONS(141),
    [anon_sym_size_t] = ACTIONS(141),
    [anon_sym_ssize_t] = ACTIONS(141),
    [anon_sym_string] = ACTIONS(141),
    [anon_sym_unichar] = ACTIONS(141),
    [anon_sym_void] = ACTIONS(141),
    [anon_sym_int] = ACTIONS(141),
    [anon_sym_int8] = ACTIONS(139),
    [anon_sym_int16] = ACTIONS(139),
    [anon_sym_int32] = ACTIONS(139),
    [anon_sym_int64] = ACTIONS(139),
    [anon_sym_long] = ACTIONS(141),
    [anon_sym_short] = ACTIONS(141),
    [anon_sym_uchar] = ACTIONS(141),
    [anon_sym_uint] = ACTIONS(141),
    [anon_sym_uint8] = ACTIONS(139),
    [anon_sym_uint16] = ACTIONS(139),
    [anon_sym_uint32] = ACTIONS(139),
    [anon_sym_uint64] = ACTIONS(139),
    [anon_sym_ulong] = ACTIONS(141),
    [anon_sym_ushort] = ACTIONS(141),
    [aux_sym_comment_token1] = ACTIONS(139),
    [aux_sym_comment_token2] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(141),
    [anon_sym_var] = ACTIONS(141),
    [anon_sym_namespace] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [sym_camel_cased_identifier] = ACTIONS(141),
    [sym_uppercased_identifier] = ACTIONS(141),
  },
  [17] = {
    [anon_sym_class] = ACTIONS(143),
    [anon_sym_abstract] = ACTIONS(143),
    [anon_sym_const] = ACTIONS(143),
    [anon_sym_dynamic] = ACTIONS(143),
    [anon_sym_ensures] = ACTIONS(143),
    [anon_sym_extern] = ACTIONS(143),
    [anon_sym_inline] = ACTIONS(143),
    [anon_sym_internal] = ACTIONS(143),
    [anon_sym_override] = ACTIONS(143),
    [anon_sym_private] = ACTIONS(143),
    [anon_sym_protected] = ACTIONS(143),
    [anon_sym_public] = ACTIONS(143),
    [anon_sym_requires] = ACTIONS(143),
    [anon_sym_signal] = ACTIONS(143),
    [anon_sym_static] = ACTIONS(143),
    [anon_sym_virtual] = ACTIONS(143),
    [anon_sym_volatile] = ACTIONS(143),
    [anon_sym_weak] = ACTIONS(143),
    [anon_sym_async] = ACTIONS(143),
    [anon_sym_owned] = ACTIONS(143),
    [anon_sym_unowned] = ACTIONS(143),
    [anon_sym_ref] = ACTIONS(143),
    [anon_sym_out] = ACTIONS(143),
    [anon_sym_bool] = ACTIONS(143),
    [anon_sym_char] = ACTIONS(143),
    [anon_sym_double] = ACTIONS(143),
    [anon_sym_float] = ACTIONS(143),
    [anon_sym_size_t] = ACTIONS(143),
    [anon_sym_ssize_t] = ACTIONS(143),
    [anon_sym_string] = ACTIONS(143),
    [anon_sym_unichar] = ACTIONS(143),
    [anon_sym_void] = ACTIONS(143),
    [anon_sym_int] = ACTIONS(143),
    [anon_sym_int8] = ACTIONS(145),
    [anon_sym_int16] = ACTIONS(145),
    [anon_sym_int32] = ACTIONS(145),
    [anon_sym_int64] = ACTIONS(145),
    [anon_sym_long] = ACTIONS(143),
    [anon_sym_short] = ACTIONS(143),
    [anon_sym_uchar] = ACTIONS(143),
    [anon_sym_uint] = ACTIONS(143),
    [anon_sym_uint8] = ACTIONS(145),
    [anon_sym_uint16] = ACTIONS(145),
    [anon_sym_uint32] = ACTIONS(145),
    [anon_sym_uint64] = ACTIONS(145),
    [anon_sym_ulong] = ACTIONS(143),
    [anon_sym_ushort] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(145),
    [aux_sym_comment_token2] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(143),
    [anon_sym_var] = ACTIONS(143),
    [anon_sym_namespace] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [sym_camel_cased_identifier] = ACTIONS(143),
    [sym_uppercased_identifier] = ACTIONS(143),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_class] = ACTIONS(143),
    [anon_sym_abstract] = ACTIONS(143),
    [anon_sym_const] = ACTIONS(143),
    [anon_sym_dynamic] = ACTIONS(143),
    [anon_sym_ensures] = ACTIONS(143),
    [anon_sym_extern] = ACTIONS(143),
    [anon_sym_inline] = ACTIONS(143),
    [anon_sym_internal] = ACTIONS(143),
    [anon_sym_override] = ACTIONS(143),
    [anon_sym_private] = ACTIONS(143),
    [anon_sym_protected] = ACTIONS(143),
    [anon_sym_public] = ACTIONS(143),
    [anon_sym_requires] = ACTIONS(143),
    [anon_sym_signal] = ACTIONS(143),
    [anon_sym_static] = ACTIONS(143),
    [anon_sym_virtual] = ACTIONS(143),
    [anon_sym_volatile] = ACTIONS(143),
    [anon_sym_weak] = ACTIONS(143),
    [anon_sym_async] = ACTIONS(143),
    [anon_sym_owned] = ACTIONS(143),
    [anon_sym_unowned] = ACTIONS(143),
    [anon_sym_ref] = ACTIONS(143),
    [anon_sym_out] = ACTIONS(143),
    [anon_sym_bool] = ACTIONS(143),
    [anon_sym_char] = ACTIONS(143),
    [anon_sym_double] = ACTIONS(143),
    [anon_sym_float] = ACTIONS(143),
    [anon_sym_size_t] = ACTIONS(143),
    [anon_sym_ssize_t] = ACTIONS(143),
    [anon_sym_string] = ACTIONS(143),
    [anon_sym_unichar] = ACTIONS(143),
    [anon_sym_void] = ACTIONS(143),
    [anon_sym_int] = ACTIONS(143),
    [anon_sym_int8] = ACTIONS(145),
    [anon_sym_int16] = ACTIONS(145),
    [anon_sym_int32] = ACTIONS(145),
    [anon_sym_int64] = ACTIONS(145),
    [anon_sym_long] = ACTIONS(143),
    [anon_sym_short] = ACTIONS(143),
    [anon_sym_uchar] = ACTIONS(143),
    [anon_sym_uint] = ACTIONS(143),
    [anon_sym_uint8] = ACTIONS(145),
    [anon_sym_uint16] = ACTIONS(145),
    [anon_sym_uint32] = ACTIONS(145),
    [anon_sym_uint64] = ACTIONS(145),
    [anon_sym_ulong] = ACTIONS(143),
    [anon_sym_ushort] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(145),
    [aux_sym_comment_token2] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(143),
    [anon_sym_var] = ACTIONS(143),
    [anon_sym_namespace] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [sym_camel_cased_identifier] = ACTIONS(143),
    [sym_uppercased_identifier] = ACTIONS(143),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(149),
    [anon_sym_abstract] = ACTIONS(149),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_dynamic] = ACTIONS(149),
    [anon_sym_ensures] = ACTIONS(149),
    [anon_sym_extern] = ACTIONS(149),
    [anon_sym_inline] = ACTIONS(149),
    [anon_sym_internal] = ACTIONS(149),
    [anon_sym_override] = ACTIONS(149),
    [anon_sym_private] = ACTIONS(149),
    [anon_sym_protected] = ACTIONS(149),
    [anon_sym_public] = ACTIONS(149),
    [anon_sym_requires] = ACTIONS(149),
    [anon_sym_signal] = ACTIONS(149),
    [anon_sym_static] = ACTIONS(149),
    [anon_sym_virtual] = ACTIONS(149),
    [anon_sym_volatile] = ACTIONS(149),
    [anon_sym_weak] = ACTIONS(149),
    [anon_sym_async] = ACTIONS(149),
    [anon_sym_owned] = ACTIONS(149),
    [anon_sym_unowned] = ACTIONS(149),
    [anon_sym_ref] = ACTIONS(149),
    [anon_sym_out] = ACTIONS(149),
    [anon_sym_bool] = ACTIONS(149),
    [anon_sym_char] = ACTIONS(149),
    [anon_sym_double] = ACTIONS(149),
    [anon_sym_float] = ACTIONS(149),
    [anon_sym_size_t] = ACTIONS(149),
    [anon_sym_ssize_t] = ACTIONS(149),
    [anon_sym_string] = ACTIONS(149),
    [anon_sym_unichar] = ACTIONS(149),
    [anon_sym_void] = ACTIONS(149),
    [anon_sym_int] = ACTIONS(149),
    [anon_sym_int8] = ACTIONS(147),
    [anon_sym_int16] = ACTIONS(147),
    [anon_sym_int32] = ACTIONS(147),
    [anon_sym_int64] = ACTIONS(147),
    [anon_sym_long] = ACTIONS(149),
    [anon_sym_short] = ACTIONS(149),
    [anon_sym_uchar] = ACTIONS(149),
    [anon_sym_uint] = ACTIONS(149),
    [anon_sym_uint8] = ACTIONS(147),
    [anon_sym_uint16] = ACTIONS(147),
    [anon_sym_uint32] = ACTIONS(147),
    [anon_sym_uint64] = ACTIONS(147),
    [anon_sym_ulong] = ACTIONS(149),
    [anon_sym_ushort] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(147),
    [aux_sym_comment_token2] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(149),
    [anon_sym_namespace] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [sym_camel_cased_identifier] = ACTIONS(149),
    [sym_uppercased_identifier] = ACTIONS(149),
  },
  [20] = {
    [anon_sym_class] = ACTIONS(151),
    [anon_sym_abstract] = ACTIONS(151),
    [anon_sym_const] = ACTIONS(151),
    [anon_sym_dynamic] = ACTIONS(151),
    [anon_sym_ensures] = ACTIONS(151),
    [anon_sym_extern] = ACTIONS(151),
    [anon_sym_inline] = ACTIONS(151),
    [anon_sym_internal] = ACTIONS(151),
    [anon_sym_override] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_protected] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_requires] = ACTIONS(151),
    [anon_sym_signal] = ACTIONS(151),
    [anon_sym_static] = ACTIONS(151),
    [anon_sym_virtual] = ACTIONS(151),
    [anon_sym_volatile] = ACTIONS(151),
    [anon_sym_weak] = ACTIONS(151),
    [anon_sym_async] = ACTIONS(151),
    [anon_sym_owned] = ACTIONS(151),
    [anon_sym_unowned] = ACTIONS(151),
    [anon_sym_ref] = ACTIONS(151),
    [anon_sym_out] = ACTIONS(151),
    [anon_sym_bool] = ACTIONS(151),
    [anon_sym_char] = ACTIONS(151),
    [anon_sym_double] = ACTIONS(151),
    [anon_sym_float] = ACTIONS(151),
    [anon_sym_size_t] = ACTIONS(151),
    [anon_sym_ssize_t] = ACTIONS(151),
    [anon_sym_string] = ACTIONS(151),
    [anon_sym_unichar] = ACTIONS(151),
    [anon_sym_void] = ACTIONS(151),
    [anon_sym_int] = ACTIONS(151),
    [anon_sym_int8] = ACTIONS(153),
    [anon_sym_int16] = ACTIONS(153),
    [anon_sym_int32] = ACTIONS(153),
    [anon_sym_int64] = ACTIONS(153),
    [anon_sym_long] = ACTIONS(151),
    [anon_sym_short] = ACTIONS(151),
    [anon_sym_uchar] = ACTIONS(151),
    [anon_sym_uint] = ACTIONS(151),
    [anon_sym_uint8] = ACTIONS(153),
    [anon_sym_uint16] = ACTIONS(153),
    [anon_sym_uint32] = ACTIONS(153),
    [anon_sym_uint64] = ACTIONS(153),
    [anon_sym_ulong] = ACTIONS(151),
    [anon_sym_ushort] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(153),
    [aux_sym_comment_token2] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(151),
    [anon_sym_var] = ACTIONS(151),
    [anon_sym_namespace] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
    [sym_camel_cased_identifier] = ACTIONS(151),
    [sym_uppercased_identifier] = ACTIONS(151),
  },
  [21] = {
    [anon_sym_class] = ACTIONS(149),
    [anon_sym_abstract] = ACTIONS(149),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_dynamic] = ACTIONS(149),
    [anon_sym_ensures] = ACTIONS(149),
    [anon_sym_extern] = ACTIONS(149),
    [anon_sym_inline] = ACTIONS(149),
    [anon_sym_internal] = ACTIONS(149),
    [anon_sym_override] = ACTIONS(149),
    [anon_sym_private] = ACTIONS(149),
    [anon_sym_protected] = ACTIONS(149),
    [anon_sym_public] = ACTIONS(149),
    [anon_sym_requires] = ACTIONS(149),
    [anon_sym_signal] = ACTIONS(149),
    [anon_sym_static] = ACTIONS(149),
    [anon_sym_virtual] = ACTIONS(149),
    [anon_sym_volatile] = ACTIONS(149),
    [anon_sym_weak] = ACTIONS(149),
    [anon_sym_async] = ACTIONS(149),
    [anon_sym_owned] = ACTIONS(149),
    [anon_sym_unowned] = ACTIONS(149),
    [anon_sym_ref] = ACTIONS(149),
    [anon_sym_out] = ACTIONS(149),
    [anon_sym_bool] = ACTIONS(149),
    [anon_sym_char] = ACTIONS(149),
    [anon_sym_double] = ACTIONS(149),
    [anon_sym_float] = ACTIONS(149),
    [anon_sym_size_t] = ACTIONS(149),
    [anon_sym_ssize_t] = ACTIONS(149),
    [anon_sym_string] = ACTIONS(149),
    [anon_sym_unichar] = ACTIONS(149),
    [anon_sym_void] = ACTIONS(149),
    [anon_sym_int] = ACTIONS(149),
    [anon_sym_int8] = ACTIONS(147),
    [anon_sym_int16] = ACTIONS(147),
    [anon_sym_int32] = ACTIONS(147),
    [anon_sym_int64] = ACTIONS(147),
    [anon_sym_long] = ACTIONS(149),
    [anon_sym_short] = ACTIONS(149),
    [anon_sym_uchar] = ACTIONS(149),
    [anon_sym_uint] = ACTIONS(149),
    [anon_sym_uint8] = ACTIONS(147),
    [anon_sym_uint16] = ACTIONS(147),
    [anon_sym_uint32] = ACTIONS(147),
    [anon_sym_uint64] = ACTIONS(147),
    [anon_sym_ulong] = ACTIONS(149),
    [anon_sym_ushort] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(147),
    [aux_sym_comment_token2] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(149),
    [anon_sym_namespace] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [sym_camel_cased_identifier] = ACTIONS(149),
    [sym_uppercased_identifier] = ACTIONS(149),
  },
  [22] = {
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_abstract] = ACTIONS(155),
    [anon_sym_const] = ACTIONS(155),
    [anon_sym_dynamic] = ACTIONS(155),
    [anon_sym_ensures] = ACTIONS(155),
    [anon_sym_extern] = ACTIONS(155),
    [anon_sym_inline] = ACTIONS(155),
    [anon_sym_internal] = ACTIONS(155),
    [anon_sym_override] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_protected] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_requires] = ACTIONS(155),
    [anon_sym_signal] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(155),
    [anon_sym_virtual] = ACTIONS(155),
    [anon_sym_volatile] = ACTIONS(155),
    [anon_sym_weak] = ACTIONS(155),
    [anon_sym_async] = ACTIONS(155),
    [anon_sym_owned] = ACTIONS(155),
    [anon_sym_unowned] = ACTIONS(155),
    [anon_sym_ref] = ACTIONS(155),
    [anon_sym_out] = ACTIONS(155),
    [anon_sym_bool] = ACTIONS(155),
    [anon_sym_char] = ACTIONS(155),
    [anon_sym_double] = ACTIONS(155),
    [anon_sym_float] = ACTIONS(155),
    [anon_sym_size_t] = ACTIONS(155),
    [anon_sym_ssize_t] = ACTIONS(155),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_unichar] = ACTIONS(155),
    [anon_sym_void] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(155),
    [anon_sym_int8] = ACTIONS(157),
    [anon_sym_int16] = ACTIONS(157),
    [anon_sym_int32] = ACTIONS(157),
    [anon_sym_int64] = ACTIONS(157),
    [anon_sym_long] = ACTIONS(155),
    [anon_sym_short] = ACTIONS(155),
    [anon_sym_uchar] = ACTIONS(155),
    [anon_sym_uint] = ACTIONS(155),
    [anon_sym_uint8] = ACTIONS(157),
    [anon_sym_uint16] = ACTIONS(157),
    [anon_sym_uint32] = ACTIONS(157),
    [anon_sym_uint64] = ACTIONS(157),
    [anon_sym_ulong] = ACTIONS(155),
    [anon_sym_ushort] = ACTIONS(155),
    [aux_sym_comment_token1] = ACTIONS(157),
    [aux_sym_comment_token2] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(155),
    [anon_sym_var] = ACTIONS(155),
    [anon_sym_namespace] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
    [sym_camel_cased_identifier] = ACTIONS(155),
    [sym_uppercased_identifier] = ACTIONS(155),
  },
  [23] = {
    [anon_sym_class] = ACTIONS(113),
    [anon_sym_abstract] = ACTIONS(113),
    [anon_sym_const] = ACTIONS(113),
    [anon_sym_dynamic] = ACTIONS(113),
    [anon_sym_ensures] = ACTIONS(113),
    [anon_sym_extern] = ACTIONS(113),
    [anon_sym_inline] = ACTIONS(113),
    [anon_sym_internal] = ACTIONS(113),
    [anon_sym_override] = ACTIONS(113),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_public] = ACTIONS(113),
    [anon_sym_requires] = ACTIONS(113),
    [anon_sym_signal] = ACTIONS(113),
    [anon_sym_static] = ACTIONS(113),
    [anon_sym_virtual] = ACTIONS(113),
    [anon_sym_volatile] = ACTIONS(113),
    [anon_sym_weak] = ACTIONS(113),
    [anon_sym_async] = ACTIONS(113),
    [anon_sym_owned] = ACTIONS(113),
    [anon_sym_unowned] = ACTIONS(113),
    [anon_sym_ref] = ACTIONS(113),
    [anon_sym_out] = ACTIONS(113),
    [anon_sym_bool] = ACTIONS(113),
    [anon_sym_char] = ACTIONS(113),
    [anon_sym_double] = ACTIONS(113),
    [anon_sym_float] = ACTIONS(113),
    [anon_sym_size_t] = ACTIONS(113),
    [anon_sym_ssize_t] = ACTIONS(113),
    [anon_sym_string] = ACTIONS(113),
    [anon_sym_unichar] = ACTIONS(113),
    [anon_sym_void] = ACTIONS(113),
    [anon_sym_int] = ACTIONS(113),
    [anon_sym_int8] = ACTIONS(111),
    [anon_sym_int16] = ACTIONS(111),
    [anon_sym_int32] = ACTIONS(111),
    [anon_sym_int64] = ACTIONS(111),
    [anon_sym_long] = ACTIONS(113),
    [anon_sym_short] = ACTIONS(113),
    [anon_sym_uchar] = ACTIONS(113),
    [anon_sym_uint] = ACTIONS(113),
    [anon_sym_uint8] = ACTIONS(111),
    [anon_sym_uint16] = ACTIONS(111),
    [anon_sym_uint32] = ACTIONS(111),
    [anon_sym_uint64] = ACTIONS(111),
    [anon_sym_ulong] = ACTIONS(113),
    [anon_sym_ushort] = ACTIONS(113),
    [aux_sym_comment_token1] = ACTIONS(111),
    [aux_sym_comment_token2] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_var] = ACTIONS(113),
    [anon_sym_namespace] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [sym_camel_cased_identifier] = ACTIONS(113),
    [sym_uppercased_identifier] = ACTIONS(113),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_abstract] = ACTIONS(155),
    [anon_sym_const] = ACTIONS(155),
    [anon_sym_dynamic] = ACTIONS(155),
    [anon_sym_ensures] = ACTIONS(155),
    [anon_sym_extern] = ACTIONS(155),
    [anon_sym_inline] = ACTIONS(155),
    [anon_sym_internal] = ACTIONS(155),
    [anon_sym_override] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_protected] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_requires] = ACTIONS(155),
    [anon_sym_signal] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(155),
    [anon_sym_virtual] = ACTIONS(155),
    [anon_sym_volatile] = ACTIONS(155),
    [anon_sym_weak] = ACTIONS(155),
    [anon_sym_async] = ACTIONS(155),
    [anon_sym_owned] = ACTIONS(155),
    [anon_sym_unowned] = ACTIONS(155),
    [anon_sym_ref] = ACTIONS(155),
    [anon_sym_out] = ACTIONS(155),
    [anon_sym_bool] = ACTIONS(155),
    [anon_sym_char] = ACTIONS(155),
    [anon_sym_double] = ACTIONS(155),
    [anon_sym_float] = ACTIONS(155),
    [anon_sym_size_t] = ACTIONS(155),
    [anon_sym_ssize_t] = ACTIONS(155),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_unichar] = ACTIONS(155),
    [anon_sym_void] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(155),
    [anon_sym_int8] = ACTIONS(157),
    [anon_sym_int16] = ACTIONS(157),
    [anon_sym_int32] = ACTIONS(157),
    [anon_sym_int64] = ACTIONS(157),
    [anon_sym_long] = ACTIONS(155),
    [anon_sym_short] = ACTIONS(155),
    [anon_sym_uchar] = ACTIONS(155),
    [anon_sym_uint] = ACTIONS(155),
    [anon_sym_uint8] = ACTIONS(157),
    [anon_sym_uint16] = ACTIONS(157),
    [anon_sym_uint32] = ACTIONS(157),
    [anon_sym_uint64] = ACTIONS(157),
    [anon_sym_ulong] = ACTIONS(155),
    [anon_sym_ushort] = ACTIONS(155),
    [aux_sym_comment_token1] = ACTIONS(157),
    [aux_sym_comment_token2] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(155),
    [anon_sym_var] = ACTIONS(155),
    [anon_sym_namespace] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
    [sym_camel_cased_identifier] = ACTIONS(155),
    [sym_uppercased_identifier] = ACTIONS(155),
  },
  [25] = {
    [anon_sym_class] = ACTIONS(141),
    [anon_sym_abstract] = ACTIONS(141),
    [anon_sym_const] = ACTIONS(141),
    [anon_sym_dynamic] = ACTIONS(141),
    [anon_sym_ensures] = ACTIONS(141),
    [anon_sym_extern] = ACTIONS(141),
    [anon_sym_inline] = ACTIONS(141),
    [anon_sym_internal] = ACTIONS(141),
    [anon_sym_override] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_protected] = ACTIONS(141),
    [anon_sym_public] = ACTIONS(141),
    [anon_sym_requires] = ACTIONS(141),
    [anon_sym_signal] = ACTIONS(141),
    [anon_sym_static] = ACTIONS(141),
    [anon_sym_virtual] = ACTIONS(141),
    [anon_sym_volatile] = ACTIONS(141),
    [anon_sym_weak] = ACTIONS(141),
    [anon_sym_async] = ACTIONS(141),
    [anon_sym_owned] = ACTIONS(141),
    [anon_sym_unowned] = ACTIONS(141),
    [anon_sym_ref] = ACTIONS(141),
    [anon_sym_out] = ACTIONS(141),
    [anon_sym_bool] = ACTIONS(141),
    [anon_sym_char] = ACTIONS(141),
    [anon_sym_double] = ACTIONS(141),
    [anon_sym_float] = ACTIONS(141),
    [anon_sym_size_t] = ACTIONS(141),
    [anon_sym_ssize_t] = ACTIONS(141),
    [anon_sym_string] = ACTIONS(141),
    [anon_sym_unichar] = ACTIONS(141),
    [anon_sym_void] = ACTIONS(141),
    [anon_sym_int] = ACTIONS(141),
    [anon_sym_int8] = ACTIONS(139),
    [anon_sym_int16] = ACTIONS(139),
    [anon_sym_int32] = ACTIONS(139),
    [anon_sym_int64] = ACTIONS(139),
    [anon_sym_long] = ACTIONS(141),
    [anon_sym_short] = ACTIONS(141),
    [anon_sym_uchar] = ACTIONS(141),
    [anon_sym_uint] = ACTIONS(141),
    [anon_sym_uint8] = ACTIONS(139),
    [anon_sym_uint16] = ACTIONS(139),
    [anon_sym_uint32] = ACTIONS(139),
    [anon_sym_uint64] = ACTIONS(139),
    [anon_sym_ulong] = ACTIONS(141),
    [anon_sym_ushort] = ACTIONS(141),
    [aux_sym_comment_token1] = ACTIONS(139),
    [aux_sym_comment_token2] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(141),
    [anon_sym_var] = ACTIONS(141),
    [anon_sym_namespace] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [sym_camel_cased_identifier] = ACTIONS(141),
    [sym_uppercased_identifier] = ACTIONS(141),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_class] = ACTIONS(151),
    [anon_sym_abstract] = ACTIONS(151),
    [anon_sym_const] = ACTIONS(151),
    [anon_sym_dynamic] = ACTIONS(151),
    [anon_sym_ensures] = ACTIONS(151),
    [anon_sym_extern] = ACTIONS(151),
    [anon_sym_inline] = ACTIONS(151),
    [anon_sym_internal] = ACTIONS(151),
    [anon_sym_override] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_protected] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_requires] = ACTIONS(151),
    [anon_sym_signal] = ACTIONS(151),
    [anon_sym_static] = ACTIONS(151),
    [anon_sym_virtual] = ACTIONS(151),
    [anon_sym_volatile] = ACTIONS(151),
    [anon_sym_weak] = ACTIONS(151),
    [anon_sym_async] = ACTIONS(151),
    [anon_sym_owned] = ACTIONS(151),
    [anon_sym_unowned] = ACTIONS(151),
    [anon_sym_ref] = ACTIONS(151),
    [anon_sym_out] = ACTIONS(151),
    [anon_sym_bool] = ACTIONS(151),
    [anon_sym_char] = ACTIONS(151),
    [anon_sym_double] = ACTIONS(151),
    [anon_sym_float] = ACTIONS(151),
    [anon_sym_size_t] = ACTIONS(151),
    [anon_sym_ssize_t] = ACTIONS(151),
    [anon_sym_string] = ACTIONS(151),
    [anon_sym_unichar] = ACTIONS(151),
    [anon_sym_void] = ACTIONS(151),
    [anon_sym_int] = ACTIONS(151),
    [anon_sym_int8] = ACTIONS(153),
    [anon_sym_int16] = ACTIONS(153),
    [anon_sym_int32] = ACTIONS(153),
    [anon_sym_int64] = ACTIONS(153),
    [anon_sym_long] = ACTIONS(151),
    [anon_sym_short] = ACTIONS(151),
    [anon_sym_uchar] = ACTIONS(151),
    [anon_sym_uint] = ACTIONS(151),
    [anon_sym_uint8] = ACTIONS(153),
    [anon_sym_uint16] = ACTIONS(153),
    [anon_sym_uint32] = ACTIONS(153),
    [anon_sym_uint64] = ACTIONS(153),
    [anon_sym_ulong] = ACTIONS(151),
    [anon_sym_ushort] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(153),
    [aux_sym_comment_token2] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(151),
    [anon_sym_var] = ACTIONS(151),
    [anon_sym_namespace] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
    [sym_camel_cased_identifier] = ACTIONS(151),
    [sym_uppercased_identifier] = ACTIONS(151),
  },
  [27] = {
    [anon_sym_class] = ACTIONS(121),
    [anon_sym_abstract] = ACTIONS(121),
    [anon_sym_const] = ACTIONS(121),
    [anon_sym_dynamic] = ACTIONS(121),
    [anon_sym_ensures] = ACTIONS(121),
    [anon_sym_extern] = ACTIONS(121),
    [anon_sym_inline] = ACTIONS(121),
    [anon_sym_internal] = ACTIONS(121),
    [anon_sym_override] = ACTIONS(121),
    [anon_sym_private] = ACTIONS(121),
    [anon_sym_protected] = ACTIONS(121),
    [anon_sym_public] = ACTIONS(121),
    [anon_sym_requires] = ACTIONS(121),
    [anon_sym_signal] = ACTIONS(121),
    [anon_sym_static] = ACTIONS(121),
    [anon_sym_virtual] = ACTIONS(121),
    [anon_sym_volatile] = ACTIONS(121),
    [anon_sym_weak] = ACTIONS(121),
    [anon_sym_async] = ACTIONS(121),
    [anon_sym_owned] = ACTIONS(121),
    [anon_sym_unowned] = ACTIONS(121),
    [anon_sym_ref] = ACTIONS(121),
    [anon_sym_out] = ACTIONS(121),
    [anon_sym_bool] = ACTIONS(121),
    [anon_sym_char] = ACTIONS(121),
    [anon_sym_double] = ACTIONS(121),
    [anon_sym_float] = ACTIONS(121),
    [anon_sym_size_t] = ACTIONS(121),
    [anon_sym_ssize_t] = ACTIONS(121),
    [anon_sym_string] = ACTIONS(121),
    [anon_sym_unichar] = ACTIONS(121),
    [anon_sym_void] = ACTIONS(121),
    [anon_sym_int] = ACTIONS(121),
    [anon_sym_int8] = ACTIONS(119),
    [anon_sym_int16] = ACTIONS(119),
    [anon_sym_int32] = ACTIONS(119),
    [anon_sym_int64] = ACTIONS(119),
    [anon_sym_long] = ACTIONS(121),
    [anon_sym_short] = ACTIONS(121),
    [anon_sym_uchar] = ACTIONS(121),
    [anon_sym_uint] = ACTIONS(121),
    [anon_sym_uint8] = ACTIONS(119),
    [anon_sym_uint16] = ACTIONS(119),
    [anon_sym_uint32] = ACTIONS(119),
    [anon_sym_uint64] = ACTIONS(119),
    [anon_sym_ulong] = ACTIONS(121),
    [anon_sym_ushort] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(119),
    [aux_sym_comment_token2] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_return] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_namespace] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_camel_cased_identifier] = ACTIONS(121),
    [sym_uppercased_identifier] = ACTIONS(121),
  },
  [28] = {
    [anon_sym_class] = ACTIONS(125),
    [anon_sym_abstract] = ACTIONS(125),
    [anon_sym_const] = ACTIONS(125),
    [anon_sym_dynamic] = ACTIONS(125),
    [anon_sym_ensures] = ACTIONS(125),
    [anon_sym_extern] = ACTIONS(125),
    [anon_sym_inline] = ACTIONS(125),
    [anon_sym_internal] = ACTIONS(125),
    [anon_sym_override] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_protected] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_requires] = ACTIONS(125),
    [anon_sym_signal] = ACTIONS(125),
    [anon_sym_static] = ACTIONS(125),
    [anon_sym_virtual] = ACTIONS(125),
    [anon_sym_volatile] = ACTIONS(125),
    [anon_sym_weak] = ACTIONS(125),
    [anon_sym_async] = ACTIONS(125),
    [anon_sym_owned] = ACTIONS(125),
    [anon_sym_unowned] = ACTIONS(125),
    [anon_sym_ref] = ACTIONS(125),
    [anon_sym_out] = ACTIONS(125),
    [anon_sym_bool] = ACTIONS(125),
    [anon_sym_char] = ACTIONS(125),
    [anon_sym_double] = ACTIONS(125),
    [anon_sym_float] = ACTIONS(125),
    [anon_sym_size_t] = ACTIONS(125),
    [anon_sym_ssize_t] = ACTIONS(125),
    [anon_sym_string] = ACTIONS(125),
    [anon_sym_unichar] = ACTIONS(125),
    [anon_sym_void] = ACTIONS(125),
    [anon_sym_int] = ACTIONS(125),
    [anon_sym_int8] = ACTIONS(123),
    [anon_sym_int16] = ACTIONS(123),
    [anon_sym_int32] = ACTIONS(123),
    [anon_sym_int64] = ACTIONS(123),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_short] = ACTIONS(125),
    [anon_sym_uchar] = ACTIONS(125),
    [anon_sym_uint] = ACTIONS(125),
    [anon_sym_uint8] = ACTIONS(123),
    [anon_sym_uint16] = ACTIONS(123),
    [anon_sym_uint32] = ACTIONS(123),
    [anon_sym_uint64] = ACTIONS(123),
    [anon_sym_ulong] = ACTIONS(125),
    [anon_sym_ushort] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(123),
    [aux_sym_comment_token2] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_return] = ACTIONS(125),
    [anon_sym_var] = ACTIONS(125),
    [anon_sym_namespace] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_camel_cased_identifier] = ACTIONS(125),
    [sym_uppercased_identifier] = ACTIONS(125),
  },
  [29] = {
    [anon_sym_class] = ACTIONS(129),
    [anon_sym_abstract] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_dynamic] = ACTIONS(129),
    [anon_sym_ensures] = ACTIONS(129),
    [anon_sym_extern] = ACTIONS(129),
    [anon_sym_inline] = ACTIONS(129),
    [anon_sym_internal] = ACTIONS(129),
    [anon_sym_override] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_protected] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_requires] = ACTIONS(129),
    [anon_sym_signal] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(129),
    [anon_sym_virtual] = ACTIONS(129),
    [anon_sym_volatile] = ACTIONS(129),
    [anon_sym_weak] = ACTIONS(129),
    [anon_sym_async] = ACTIONS(129),
    [anon_sym_owned] = ACTIONS(129),
    [anon_sym_unowned] = ACTIONS(129),
    [anon_sym_ref] = ACTIONS(129),
    [anon_sym_out] = ACTIONS(129),
    [anon_sym_bool] = ACTIONS(129),
    [anon_sym_char] = ACTIONS(129),
    [anon_sym_double] = ACTIONS(129),
    [anon_sym_float] = ACTIONS(129),
    [anon_sym_size_t] = ACTIONS(129),
    [anon_sym_ssize_t] = ACTIONS(129),
    [anon_sym_string] = ACTIONS(129),
    [anon_sym_unichar] = ACTIONS(129),
    [anon_sym_void] = ACTIONS(129),
    [anon_sym_int] = ACTIONS(129),
    [anon_sym_int8] = ACTIONS(127),
    [anon_sym_int16] = ACTIONS(127),
    [anon_sym_int32] = ACTIONS(127),
    [anon_sym_int64] = ACTIONS(127),
    [anon_sym_long] = ACTIONS(129),
    [anon_sym_short] = ACTIONS(129),
    [anon_sym_uchar] = ACTIONS(129),
    [anon_sym_uint] = ACTIONS(129),
    [anon_sym_uint8] = ACTIONS(127),
    [anon_sym_uint16] = ACTIONS(127),
    [anon_sym_uint32] = ACTIONS(127),
    [anon_sym_uint64] = ACTIONS(127),
    [anon_sym_ulong] = ACTIONS(129),
    [anon_sym_ushort] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(127),
    [aux_sym_comment_token2] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_namespace] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_camel_cased_identifier] = ACTIONS(129),
    [sym_uppercased_identifier] = ACTIONS(129),
  },
  [30] = {
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_abstract] = ACTIONS(137),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_dynamic] = ACTIONS(137),
    [anon_sym_ensures] = ACTIONS(137),
    [anon_sym_extern] = ACTIONS(137),
    [anon_sym_inline] = ACTIONS(137),
    [anon_sym_internal] = ACTIONS(137),
    [anon_sym_override] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_protected] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_requires] = ACTIONS(137),
    [anon_sym_signal] = ACTIONS(137),
    [anon_sym_static] = ACTIONS(137),
    [anon_sym_virtual] = ACTIONS(137),
    [anon_sym_volatile] = ACTIONS(137),
    [anon_sym_weak] = ACTIONS(137),
    [anon_sym_async] = ACTIONS(137),
    [anon_sym_owned] = ACTIONS(137),
    [anon_sym_unowned] = ACTIONS(137),
    [anon_sym_ref] = ACTIONS(137),
    [anon_sym_out] = ACTIONS(137),
    [anon_sym_bool] = ACTIONS(137),
    [anon_sym_char] = ACTIONS(137),
    [anon_sym_double] = ACTIONS(137),
    [anon_sym_float] = ACTIONS(137),
    [anon_sym_size_t] = ACTIONS(137),
    [anon_sym_ssize_t] = ACTIONS(137),
    [anon_sym_string] = ACTIONS(137),
    [anon_sym_unichar] = ACTIONS(137),
    [anon_sym_void] = ACTIONS(137),
    [anon_sym_int] = ACTIONS(137),
    [anon_sym_int8] = ACTIONS(135),
    [anon_sym_int16] = ACTIONS(135),
    [anon_sym_int32] = ACTIONS(135),
    [anon_sym_int64] = ACTIONS(135),
    [anon_sym_long] = ACTIONS(137),
    [anon_sym_short] = ACTIONS(137),
    [anon_sym_uchar] = ACTIONS(137),
    [anon_sym_uint] = ACTIONS(137),
    [anon_sym_uint8] = ACTIONS(135),
    [anon_sym_uint16] = ACTIONS(135),
    [anon_sym_uint32] = ACTIONS(135),
    [anon_sym_uint64] = ACTIONS(135),
    [anon_sym_ulong] = ACTIONS(137),
    [anon_sym_ushort] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(135),
    [aux_sym_comment_token2] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(137),
    [anon_sym_var] = ACTIONS(137),
    [anon_sym_namespace] = ACTIONS(137),
    [sym_identifier] = ACTIONS(137),
    [sym_camel_cased_identifier] = ACTIONS(137),
    [sym_uppercased_identifier] = ACTIONS(137),
  },
  [31] = {
    [anon_sym_class] = ACTIONS(133),
    [anon_sym_abstract] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_dynamic] = ACTIONS(133),
    [anon_sym_ensures] = ACTIONS(133),
    [anon_sym_extern] = ACTIONS(133),
    [anon_sym_inline] = ACTIONS(133),
    [anon_sym_internal] = ACTIONS(133),
    [anon_sym_override] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_protected] = ACTIONS(133),
    [anon_sym_public] = ACTIONS(133),
    [anon_sym_requires] = ACTIONS(133),
    [anon_sym_signal] = ACTIONS(133),
    [anon_sym_static] = ACTIONS(133),
    [anon_sym_virtual] = ACTIONS(133),
    [anon_sym_volatile] = ACTIONS(133),
    [anon_sym_weak] = ACTIONS(133),
    [anon_sym_async] = ACTIONS(133),
    [anon_sym_owned] = ACTIONS(133),
    [anon_sym_unowned] = ACTIONS(133),
    [anon_sym_ref] = ACTIONS(133),
    [anon_sym_out] = ACTIONS(133),
    [anon_sym_bool] = ACTIONS(133),
    [anon_sym_char] = ACTIONS(133),
    [anon_sym_double] = ACTIONS(133),
    [anon_sym_float] = ACTIONS(133),
    [anon_sym_size_t] = ACTIONS(133),
    [anon_sym_ssize_t] = ACTIONS(133),
    [anon_sym_string] = ACTIONS(133),
    [anon_sym_unichar] = ACTIONS(133),
    [anon_sym_void] = ACTIONS(133),
    [anon_sym_int] = ACTIONS(133),
    [anon_sym_int8] = ACTIONS(131),
    [anon_sym_int16] = ACTIONS(131),
    [anon_sym_int32] = ACTIONS(131),
    [anon_sym_int64] = ACTIONS(131),
    [anon_sym_long] = ACTIONS(133),
    [anon_sym_short] = ACTIONS(133),
    [anon_sym_uchar] = ACTIONS(133),
    [anon_sym_uint] = ACTIONS(133),
    [anon_sym_uint8] = ACTIONS(131),
    [anon_sym_uint16] = ACTIONS(131),
    [anon_sym_uint32] = ACTIONS(131),
    [anon_sym_uint64] = ACTIONS(131),
    [anon_sym_ulong] = ACTIONS(133),
    [anon_sym_ushort] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(131),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_namespace] = ACTIONS(133),
    [sym_identifier] = ACTIONS(133),
    [sym_camel_cased_identifier] = ACTIONS(133),
    [sym_uppercased_identifier] = ACTIONS(133),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_class] = ACTIONS(161),
    [anon_sym_abstract] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(161),
    [anon_sym_dynamic] = ACTIONS(161),
    [anon_sym_ensures] = ACTIONS(161),
    [anon_sym_extern] = ACTIONS(161),
    [anon_sym_inline] = ACTIONS(161),
    [anon_sym_internal] = ACTIONS(161),
    [anon_sym_override] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(161),
    [anon_sym_public] = ACTIONS(161),
    [anon_sym_requires] = ACTIONS(161),
    [anon_sym_signal] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(161),
    [anon_sym_virtual] = ACTIONS(161),
    [anon_sym_volatile] = ACTIONS(161),
    [anon_sym_weak] = ACTIONS(161),
    [anon_sym_async] = ACTIONS(161),
    [anon_sym_owned] = ACTIONS(161),
    [anon_sym_unowned] = ACTIONS(161),
    [anon_sym_ref] = ACTIONS(161),
    [anon_sym_out] = ACTIONS(161),
    [anon_sym_bool] = ACTIONS(161),
    [anon_sym_char] = ACTIONS(161),
    [anon_sym_double] = ACTIONS(161),
    [anon_sym_float] = ACTIONS(161),
    [anon_sym_size_t] = ACTIONS(161),
    [anon_sym_ssize_t] = ACTIONS(161),
    [anon_sym_string] = ACTIONS(161),
    [anon_sym_unichar] = ACTIONS(161),
    [anon_sym_void] = ACTIONS(161),
    [anon_sym_int] = ACTIONS(161),
    [anon_sym_int8] = ACTIONS(159),
    [anon_sym_int16] = ACTIONS(159),
    [anon_sym_int32] = ACTIONS(159),
    [anon_sym_int64] = ACTIONS(159),
    [anon_sym_long] = ACTIONS(161),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_uchar] = ACTIONS(161),
    [anon_sym_uint] = ACTIONS(161),
    [anon_sym_uint8] = ACTIONS(159),
    [anon_sym_uint16] = ACTIONS(159),
    [anon_sym_uint32] = ACTIONS(159),
    [anon_sym_uint64] = ACTIONS(159),
    [anon_sym_ulong] = ACTIONS(161),
    [anon_sym_ushort] = ACTIONS(161),
    [aux_sym_comment_token1] = ACTIONS(159),
    [aux_sym_comment_token2] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(161),
    [anon_sym_var] = ACTIONS(161),
    [anon_sym_namespace] = ACTIONS(161),
    [sym_identifier] = ACTIONS(161),
    [sym_camel_cased_identifier] = ACTIONS(161),
    [sym_uppercased_identifier] = ACTIONS(161),
  },
  [33] = {
    [anon_sym_class] = ACTIONS(117),
    [anon_sym_abstract] = ACTIONS(117),
    [anon_sym_const] = ACTIONS(117),
    [anon_sym_dynamic] = ACTIONS(117),
    [anon_sym_ensures] = ACTIONS(117),
    [anon_sym_extern] = ACTIONS(117),
    [anon_sym_inline] = ACTIONS(117),
    [anon_sym_internal] = ACTIONS(117),
    [anon_sym_override] = ACTIONS(117),
    [anon_sym_private] = ACTIONS(117),
    [anon_sym_protected] = ACTIONS(117),
    [anon_sym_public] = ACTIONS(117),
    [anon_sym_requires] = ACTIONS(117),
    [anon_sym_signal] = ACTIONS(117),
    [anon_sym_static] = ACTIONS(117),
    [anon_sym_virtual] = ACTIONS(117),
    [anon_sym_volatile] = ACTIONS(117),
    [anon_sym_weak] = ACTIONS(117),
    [anon_sym_async] = ACTIONS(117),
    [anon_sym_owned] = ACTIONS(117),
    [anon_sym_unowned] = ACTIONS(117),
    [anon_sym_ref] = ACTIONS(117),
    [anon_sym_out] = ACTIONS(117),
    [anon_sym_bool] = ACTIONS(117),
    [anon_sym_char] = ACTIONS(117),
    [anon_sym_double] = ACTIONS(117),
    [anon_sym_float] = ACTIONS(117),
    [anon_sym_size_t] = ACTIONS(117),
    [anon_sym_ssize_t] = ACTIONS(117),
    [anon_sym_string] = ACTIONS(117),
    [anon_sym_unichar] = ACTIONS(117),
    [anon_sym_void] = ACTIONS(117),
    [anon_sym_int] = ACTIONS(117),
    [anon_sym_int8] = ACTIONS(115),
    [anon_sym_int16] = ACTIONS(115),
    [anon_sym_int32] = ACTIONS(115),
    [anon_sym_int64] = ACTIONS(115),
    [anon_sym_long] = ACTIONS(117),
    [anon_sym_short] = ACTIONS(117),
    [anon_sym_uchar] = ACTIONS(117),
    [anon_sym_uint] = ACTIONS(117),
    [anon_sym_uint8] = ACTIONS(115),
    [anon_sym_uint16] = ACTIONS(115),
    [anon_sym_uint32] = ACTIONS(115),
    [anon_sym_uint64] = ACTIONS(115),
    [anon_sym_ulong] = ACTIONS(117),
    [anon_sym_ushort] = ACTIONS(117),
    [aux_sym_comment_token1] = ACTIONS(115),
    [aux_sym_comment_token2] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_var] = ACTIONS(117),
    [anon_sym_namespace] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [sym_camel_cased_identifier] = ACTIONS(117),
    [sym_uppercased_identifier] = ACTIONS(117),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_const] = ACTIONS(165),
    [anon_sym_dynamic] = ACTIONS(165),
    [anon_sym_ensures] = ACTIONS(165),
    [anon_sym_extern] = ACTIONS(165),
    [anon_sym_inline] = ACTIONS(165),
    [anon_sym_internal] = ACTIONS(165),
    [anon_sym_override] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_requires] = ACTIONS(165),
    [anon_sym_signal] = ACTIONS(165),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_virtual] = ACTIONS(165),
    [anon_sym_volatile] = ACTIONS(165),
    [anon_sym_weak] = ACTIONS(165),
    [anon_sym_async] = ACTIONS(165),
    [anon_sym_owned] = ACTIONS(165),
    [anon_sym_unowned] = ACTIONS(165),
    [anon_sym_ref] = ACTIONS(165),
    [anon_sym_out] = ACTIONS(165),
    [anon_sym_bool] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_size_t] = ACTIONS(165),
    [anon_sym_ssize_t] = ACTIONS(165),
    [anon_sym_string] = ACTIONS(165),
    [anon_sym_unichar] = ACTIONS(165),
    [anon_sym_void] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_int8] = ACTIONS(163),
    [anon_sym_int16] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_int64] = ACTIONS(163),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_uchar] = ACTIONS(165),
    [anon_sym_uint] = ACTIONS(165),
    [anon_sym_uint8] = ACTIONS(163),
    [anon_sym_uint16] = ACTIONS(163),
    [anon_sym_uint32] = ACTIONS(163),
    [anon_sym_uint64] = ACTIONS(163),
    [anon_sym_ulong] = ACTIONS(165),
    [anon_sym_ushort] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(163),
    [aux_sym_comment_token2] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_var] = ACTIONS(165),
    [anon_sym_namespace] = ACTIONS(165),
    [sym_identifier] = ACTIONS(165),
    [sym_camel_cased_identifier] = ACTIONS(165),
    [sym_uppercased_identifier] = ACTIONS(165),
  },
  [35] = {
    [anon_sym_class] = ACTIONS(161),
    [anon_sym_abstract] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(161),
    [anon_sym_dynamic] = ACTIONS(161),
    [anon_sym_ensures] = ACTIONS(161),
    [anon_sym_extern] = ACTIONS(161),
    [anon_sym_inline] = ACTIONS(161),
    [anon_sym_internal] = ACTIONS(161),
    [anon_sym_override] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(161),
    [anon_sym_public] = ACTIONS(161),
    [anon_sym_requires] = ACTIONS(161),
    [anon_sym_signal] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(161),
    [anon_sym_virtual] = ACTIONS(161),
    [anon_sym_volatile] = ACTIONS(161),
    [anon_sym_weak] = ACTIONS(161),
    [anon_sym_async] = ACTIONS(161),
    [anon_sym_owned] = ACTIONS(161),
    [anon_sym_unowned] = ACTIONS(161),
    [anon_sym_ref] = ACTIONS(161),
    [anon_sym_out] = ACTIONS(161),
    [anon_sym_bool] = ACTIONS(161),
    [anon_sym_char] = ACTIONS(161),
    [anon_sym_double] = ACTIONS(161),
    [anon_sym_float] = ACTIONS(161),
    [anon_sym_size_t] = ACTIONS(161),
    [anon_sym_ssize_t] = ACTIONS(161),
    [anon_sym_string] = ACTIONS(161),
    [anon_sym_unichar] = ACTIONS(161),
    [anon_sym_void] = ACTIONS(161),
    [anon_sym_int] = ACTIONS(161),
    [anon_sym_int8] = ACTIONS(159),
    [anon_sym_int16] = ACTIONS(159),
    [anon_sym_int32] = ACTIONS(159),
    [anon_sym_int64] = ACTIONS(159),
    [anon_sym_long] = ACTIONS(161),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_uchar] = ACTIONS(161),
    [anon_sym_uint] = ACTIONS(161),
    [anon_sym_uint8] = ACTIONS(159),
    [anon_sym_uint16] = ACTIONS(159),
    [anon_sym_uint32] = ACTIONS(159),
    [anon_sym_uint64] = ACTIONS(159),
    [anon_sym_ulong] = ACTIONS(161),
    [anon_sym_ushort] = ACTIONS(161),
    [aux_sym_comment_token1] = ACTIONS(159),
    [aux_sym_comment_token2] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(161),
    [anon_sym_var] = ACTIONS(161),
    [anon_sym_namespace] = ACTIONS(161),
    [sym_identifier] = ACTIONS(161),
    [sym_camel_cased_identifier] = ACTIONS(161),
    [sym_uppercased_identifier] = ACTIONS(161),
  },
  [36] = {
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_const] = ACTIONS(165),
    [anon_sym_dynamic] = ACTIONS(165),
    [anon_sym_ensures] = ACTIONS(165),
    [anon_sym_extern] = ACTIONS(165),
    [anon_sym_inline] = ACTIONS(165),
    [anon_sym_internal] = ACTIONS(165),
    [anon_sym_override] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_requires] = ACTIONS(165),
    [anon_sym_signal] = ACTIONS(165),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_virtual] = ACTIONS(165),
    [anon_sym_volatile] = ACTIONS(165),
    [anon_sym_weak] = ACTIONS(165),
    [anon_sym_async] = ACTIONS(165),
    [anon_sym_owned] = ACTIONS(165),
    [anon_sym_unowned] = ACTIONS(165),
    [anon_sym_ref] = ACTIONS(165),
    [anon_sym_out] = ACTIONS(165),
    [anon_sym_bool] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_size_t] = ACTIONS(165),
    [anon_sym_ssize_t] = ACTIONS(165),
    [anon_sym_string] = ACTIONS(165),
    [anon_sym_unichar] = ACTIONS(165),
    [anon_sym_void] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_int8] = ACTIONS(163),
    [anon_sym_int16] = ACTIONS(163),
    [anon_sym_int32] = ACTIONS(163),
    [anon_sym_int64] = ACTIONS(163),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_uchar] = ACTIONS(165),
    [anon_sym_uint] = ACTIONS(165),
    [anon_sym_uint8] = ACTIONS(163),
    [anon_sym_uint16] = ACTIONS(163),
    [anon_sym_uint32] = ACTIONS(163),
    [anon_sym_uint64] = ACTIONS(163),
    [anon_sym_ulong] = ACTIONS(165),
    [anon_sym_ushort] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(163),
    [aux_sym_comment_token2] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_var] = ACTIONS(165),
    [anon_sym_namespace] = ACTIONS(165),
    [sym_identifier] = ACTIONS(165),
    [sym_camel_cased_identifier] = ACTIONS(165),
    [sym_uppercased_identifier] = ACTIONS(165),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(169),
    [anon_sym_abstract] = ACTIONS(169),
    [anon_sym_const] = ACTIONS(169),
    [anon_sym_dynamic] = ACTIONS(169),
    [anon_sym_ensures] = ACTIONS(169),
    [anon_sym_extern] = ACTIONS(169),
    [anon_sym_inline] = ACTIONS(169),
    [anon_sym_internal] = ACTIONS(169),
    [anon_sym_override] = ACTIONS(169),
    [anon_sym_private] = ACTIONS(169),
    [anon_sym_protected] = ACTIONS(169),
    [anon_sym_public] = ACTIONS(169),
    [anon_sym_requires] = ACTIONS(169),
    [anon_sym_signal] = ACTIONS(169),
    [anon_sym_static] = ACTIONS(169),
    [anon_sym_virtual] = ACTIONS(169),
    [anon_sym_volatile] = ACTIONS(169),
    [anon_sym_weak] = ACTIONS(169),
    [anon_sym_async] = ACTIONS(169),
    [anon_sym_owned] = ACTIONS(169),
    [anon_sym_unowned] = ACTIONS(169),
    [anon_sym_ref] = ACTIONS(169),
    [anon_sym_out] = ACTIONS(169),
    [anon_sym_bool] = ACTIONS(169),
    [anon_sym_char] = ACTIONS(169),
    [anon_sym_double] = ACTIONS(169),
    [anon_sym_float] = ACTIONS(169),
    [anon_sym_size_t] = ACTIONS(169),
    [anon_sym_ssize_t] = ACTIONS(169),
    [anon_sym_string] = ACTIONS(169),
    [anon_sym_unichar] = ACTIONS(169),
    [anon_sym_void] = ACTIONS(169),
    [anon_sym_int] = ACTIONS(169),
    [anon_sym_int8] = ACTIONS(167),
    [anon_sym_int16] = ACTIONS(167),
    [anon_sym_int32] = ACTIONS(167),
    [anon_sym_int64] = ACTIONS(167),
    [anon_sym_long] = ACTIONS(169),
    [anon_sym_short] = ACTIONS(169),
    [anon_sym_uchar] = ACTIONS(169),
    [anon_sym_uint] = ACTIONS(169),
    [anon_sym_uint8] = ACTIONS(167),
    [anon_sym_uint16] = ACTIONS(167),
    [anon_sym_uint32] = ACTIONS(167),
    [anon_sym_uint64] = ACTIONS(167),
    [anon_sym_ulong] = ACTIONS(169),
    [anon_sym_ushort] = ACTIONS(169),
    [aux_sym_comment_token1] = ACTIONS(167),
    [aux_sym_comment_token2] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(169),
    [anon_sym_var] = ACTIONS(169),
    [anon_sym_namespace] = ACTIONS(169),
    [sym_identifier] = ACTIONS(169),
    [sym_camel_cased_identifier] = ACTIONS(169),
    [sym_uppercased_identifier] = ACTIONS(169),
  },
  [38] = {
    [anon_sym_class] = ACTIONS(169),
    [anon_sym_abstract] = ACTIONS(169),
    [anon_sym_const] = ACTIONS(169),
    [anon_sym_dynamic] = ACTIONS(169),
    [anon_sym_ensures] = ACTIONS(169),
    [anon_sym_extern] = ACTIONS(169),
    [anon_sym_inline] = ACTIONS(169),
    [anon_sym_internal] = ACTIONS(169),
    [anon_sym_override] = ACTIONS(169),
    [anon_sym_private] = ACTIONS(169),
    [anon_sym_protected] = ACTIONS(169),
    [anon_sym_public] = ACTIONS(169),
    [anon_sym_requires] = ACTIONS(169),
    [anon_sym_signal] = ACTIONS(169),
    [anon_sym_static] = ACTIONS(169),
    [anon_sym_virtual] = ACTIONS(169),
    [anon_sym_volatile] = ACTIONS(169),
    [anon_sym_weak] = ACTIONS(169),
    [anon_sym_async] = ACTIONS(169),
    [anon_sym_owned] = ACTIONS(169),
    [anon_sym_unowned] = ACTIONS(169),
    [anon_sym_ref] = ACTIONS(169),
    [anon_sym_out] = ACTIONS(169),
    [anon_sym_bool] = ACTIONS(169),
    [anon_sym_char] = ACTIONS(169),
    [anon_sym_double] = ACTIONS(169),
    [anon_sym_float] = ACTIONS(169),
    [anon_sym_size_t] = ACTIONS(169),
    [anon_sym_ssize_t] = ACTIONS(169),
    [anon_sym_string] = ACTIONS(169),
    [anon_sym_unichar] = ACTIONS(169),
    [anon_sym_void] = ACTIONS(169),
    [anon_sym_int] = ACTIONS(169),
    [anon_sym_int8] = ACTIONS(167),
    [anon_sym_int16] = ACTIONS(167),
    [anon_sym_int32] = ACTIONS(167),
    [anon_sym_int64] = ACTIONS(167),
    [anon_sym_long] = ACTIONS(169),
    [anon_sym_short] = ACTIONS(169),
    [anon_sym_uchar] = ACTIONS(169),
    [anon_sym_uint] = ACTIONS(169),
    [anon_sym_uint8] = ACTIONS(167),
    [anon_sym_uint16] = ACTIONS(167),
    [anon_sym_uint32] = ACTIONS(167),
    [anon_sym_uint64] = ACTIONS(167),
    [anon_sym_ulong] = ACTIONS(169),
    [anon_sym_ushort] = ACTIONS(169),
    [aux_sym_comment_token1] = ACTIONS(167),
    [aux_sym_comment_token2] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(169),
    [anon_sym_var] = ACTIONS(169),
    [anon_sym_namespace] = ACTIONS(169),
    [sym_identifier] = ACTIONS(169),
    [sym_camel_cased_identifier] = ACTIONS(169),
    [sym_uppercased_identifier] = ACTIONS(169),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_abstract] = ACTIONS(173),
    [anon_sym_const] = ACTIONS(173),
    [anon_sym_dynamic] = ACTIONS(173),
    [anon_sym_ensures] = ACTIONS(173),
    [anon_sym_extern] = ACTIONS(173),
    [anon_sym_inline] = ACTIONS(173),
    [anon_sym_internal] = ACTIONS(173),
    [anon_sym_override] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(173),
    [anon_sym_protected] = ACTIONS(173),
    [anon_sym_public] = ACTIONS(173),
    [anon_sym_requires] = ACTIONS(173),
    [anon_sym_signal] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(173),
    [anon_sym_virtual] = ACTIONS(173),
    [anon_sym_volatile] = ACTIONS(173),
    [anon_sym_weak] = ACTIONS(173),
    [anon_sym_async] = ACTIONS(173),
    [anon_sym_owned] = ACTIONS(173),
    [anon_sym_unowned] = ACTIONS(173),
    [anon_sym_ref] = ACTIONS(173),
    [anon_sym_out] = ACTIONS(173),
    [anon_sym_bool] = ACTIONS(173),
    [anon_sym_char] = ACTIONS(173),
    [anon_sym_double] = ACTIONS(173),
    [anon_sym_float] = ACTIONS(173),
    [anon_sym_size_t] = ACTIONS(173),
    [anon_sym_ssize_t] = ACTIONS(173),
    [anon_sym_string] = ACTIONS(173),
    [anon_sym_unichar] = ACTIONS(173),
    [anon_sym_void] = ACTIONS(173),
    [anon_sym_int] = ACTIONS(173),
    [anon_sym_int8] = ACTIONS(171),
    [anon_sym_int16] = ACTIONS(171),
    [anon_sym_int32] = ACTIONS(171),
    [anon_sym_int64] = ACTIONS(171),
    [anon_sym_long] = ACTIONS(173),
    [anon_sym_short] = ACTIONS(173),
    [anon_sym_uchar] = ACTIONS(173),
    [anon_sym_uint] = ACTIONS(173),
    [anon_sym_uint8] = ACTIONS(171),
    [anon_sym_uint16] = ACTIONS(171),
    [anon_sym_uint32] = ACTIONS(171),
    [anon_sym_uint64] = ACTIONS(171),
    [anon_sym_ulong] = ACTIONS(173),
    [anon_sym_ushort] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(171),
    [aux_sym_comment_token2] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(173),
    [anon_sym_var] = ACTIONS(173),
    [anon_sym_namespace] = ACTIONS(173),
    [sym_identifier] = ACTIONS(173),
    [sym_camel_cased_identifier] = ACTIONS(173),
    [sym_uppercased_identifier] = ACTIONS(173),
  },
  [40] = {
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_abstract] = ACTIONS(173),
    [anon_sym_const] = ACTIONS(173),
    [anon_sym_dynamic] = ACTIONS(173),
    [anon_sym_ensures] = ACTIONS(173),
    [anon_sym_extern] = ACTIONS(173),
    [anon_sym_inline] = ACTIONS(173),
    [anon_sym_internal] = ACTIONS(173),
    [anon_sym_override] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(173),
    [anon_sym_protected] = ACTIONS(173),
    [anon_sym_public] = ACTIONS(173),
    [anon_sym_requires] = ACTIONS(173),
    [anon_sym_signal] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(173),
    [anon_sym_virtual] = ACTIONS(173),
    [anon_sym_volatile] = ACTIONS(173),
    [anon_sym_weak] = ACTIONS(173),
    [anon_sym_async] = ACTIONS(173),
    [anon_sym_owned] = ACTIONS(173),
    [anon_sym_unowned] = ACTIONS(173),
    [anon_sym_ref] = ACTIONS(173),
    [anon_sym_out] = ACTIONS(173),
    [anon_sym_bool] = ACTIONS(173),
    [anon_sym_char] = ACTIONS(173),
    [anon_sym_double] = ACTIONS(173),
    [anon_sym_float] = ACTIONS(173),
    [anon_sym_size_t] = ACTIONS(173),
    [anon_sym_ssize_t] = ACTIONS(173),
    [anon_sym_string] = ACTIONS(173),
    [anon_sym_unichar] = ACTIONS(173),
    [anon_sym_void] = ACTIONS(173),
    [anon_sym_int] = ACTIONS(173),
    [anon_sym_int8] = ACTIONS(171),
    [anon_sym_int16] = ACTIONS(171),
    [anon_sym_int32] = ACTIONS(171),
    [anon_sym_int64] = ACTIONS(171),
    [anon_sym_long] = ACTIONS(173),
    [anon_sym_short] = ACTIONS(173),
    [anon_sym_uchar] = ACTIONS(173),
    [anon_sym_uint] = ACTIONS(173),
    [anon_sym_uint8] = ACTIONS(171),
    [anon_sym_uint16] = ACTIONS(171),
    [anon_sym_uint32] = ACTIONS(171),
    [anon_sym_uint64] = ACTIONS(171),
    [anon_sym_ulong] = ACTIONS(173),
    [anon_sym_ushort] = ACTIONS(173),
    [aux_sym_comment_token1] = ACTIONS(171),
    [aux_sym_comment_token2] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(173),
    [anon_sym_var] = ACTIONS(173),
    [anon_sym_namespace] = ACTIONS(173),
    [sym_identifier] = ACTIONS(173),
    [sym_camel_cased_identifier] = ACTIONS(173),
    [sym_uppercased_identifier] = ACTIONS(173),
  },
  [41] = {
    [sym_modifier] = STATE(46),
    [sym__type] = STATE(65),
    [sym_primitive_type] = STATE(65),
    [sym_parameter] = STATE(102),
    [aux_sym_function_definition_repeat1] = STATE(46),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(175),
    [anon_sym_dynamic] = ACTIONS(175),
    [anon_sym_ensures] = ACTIONS(175),
    [anon_sym_extern] = ACTIONS(175),
    [anon_sym_inline] = ACTIONS(175),
    [anon_sym_internal] = ACTIONS(175),
    [anon_sym_override] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_requires] = ACTIONS(175),
    [anon_sym_signal] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_virtual] = ACTIONS(175),
    [anon_sym_volatile] = ACTIONS(175),
    [anon_sym_weak] = ACTIONS(175),
    [anon_sym_async] = ACTIONS(175),
    [anon_sym_owned] = ACTIONS(175),
    [anon_sym_unowned] = ACTIONS(175),
    [anon_sym_ref] = ACTIONS(175),
    [anon_sym_out] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_size_t] = ACTIONS(11),
    [anon_sym_ssize_t] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_unichar] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(11),
    [anon_sym_short] = ACTIONS(11),
    [anon_sym_uchar] = ACTIONS(11),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(11),
    [anon_sym_ushort] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(177),
  },
  [42] = {
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(73),
    [sym_primitive_type] = STATE(73),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [anon_sym_class] = ACTIONS(179),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(175),
    [anon_sym_dynamic] = ACTIONS(175),
    [anon_sym_ensures] = ACTIONS(175),
    [anon_sym_extern] = ACTIONS(175),
    [anon_sym_inline] = ACTIONS(175),
    [anon_sym_internal] = ACTIONS(175),
    [anon_sym_override] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_requires] = ACTIONS(175),
    [anon_sym_signal] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_virtual] = ACTIONS(175),
    [anon_sym_volatile] = ACTIONS(175),
    [anon_sym_weak] = ACTIONS(175),
    [anon_sym_async] = ACTIONS(175),
    [anon_sym_owned] = ACTIONS(175),
    [anon_sym_unowned] = ACTIONS(175),
    [anon_sym_ref] = ACTIONS(175),
    [anon_sym_out] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_size_t] = ACTIONS(11),
    [anon_sym_ssize_t] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_unichar] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(11),
    [anon_sym_short] = ACTIONS(11),
    [anon_sym_uchar] = ACTIONS(11),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(11),
    [anon_sym_ushort] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(181),
  },
  [43] = {
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(85),
    [sym_primitive_type] = STATE(85),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [anon_sym_class] = ACTIONS(183),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(175),
    [anon_sym_dynamic] = ACTIONS(175),
    [anon_sym_ensures] = ACTIONS(175),
    [anon_sym_extern] = ACTIONS(175),
    [anon_sym_inline] = ACTIONS(175),
    [anon_sym_internal] = ACTIONS(175),
    [anon_sym_override] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_requires] = ACTIONS(175),
    [anon_sym_signal] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_virtual] = ACTIONS(175),
    [anon_sym_volatile] = ACTIONS(175),
    [anon_sym_weak] = ACTIONS(175),
    [anon_sym_async] = ACTIONS(175),
    [anon_sym_owned] = ACTIONS(175),
    [anon_sym_unowned] = ACTIONS(175),
    [anon_sym_ref] = ACTIONS(175),
    [anon_sym_out] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_size_t] = ACTIONS(11),
    [anon_sym_ssize_t] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_unichar] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(11),
    [anon_sym_short] = ACTIONS(11),
    [anon_sym_uchar] = ACTIONS(11),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(11),
    [anon_sym_ushort] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(185),
  },
  [44] = {
    [sym_modifier] = STATE(46),
    [sym__type] = STATE(65),
    [sym_primitive_type] = STATE(65),
    [sym_parameter] = STATE(115),
    [aux_sym_function_definition_repeat1] = STATE(46),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(175),
    [anon_sym_dynamic] = ACTIONS(175),
    [anon_sym_ensures] = ACTIONS(175),
    [anon_sym_extern] = ACTIONS(175),
    [anon_sym_inline] = ACTIONS(175),
    [anon_sym_internal] = ACTIONS(175),
    [anon_sym_override] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_requires] = ACTIONS(175),
    [anon_sym_signal] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_virtual] = ACTIONS(175),
    [anon_sym_volatile] = ACTIONS(175),
    [anon_sym_weak] = ACTIONS(175),
    [anon_sym_async] = ACTIONS(175),
    [anon_sym_owned] = ACTIONS(175),
    [anon_sym_unowned] = ACTIONS(175),
    [anon_sym_ref] = ACTIONS(175),
    [anon_sym_out] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_size_t] = ACTIONS(11),
    [anon_sym_ssize_t] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_unichar] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(11),
    [anon_sym_short] = ACTIONS(11),
    [anon_sym_uchar] = ACTIONS(11),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(11),
    [anon_sym_ushort] = ACTIONS(11),
  },
  [45] = {
    [sym_modifier] = STATE(45),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [anon_sym_class] = ACTIONS(187),
    [anon_sym_abstract] = ACTIONS(189),
    [anon_sym_const] = ACTIONS(189),
    [anon_sym_dynamic] = ACTIONS(189),
    [anon_sym_ensures] = ACTIONS(189),
    [anon_sym_extern] = ACTIONS(189),
    [anon_sym_inline] = ACTIONS(189),
    [anon_sym_internal] = ACTIONS(189),
    [anon_sym_override] = ACTIONS(189),
    [anon_sym_private] = ACTIONS(189),
    [anon_sym_protected] = ACTIONS(189),
    [anon_sym_public] = ACTIONS(189),
    [anon_sym_requires] = ACTIONS(189),
    [anon_sym_signal] = ACTIONS(189),
    [anon_sym_static] = ACTIONS(189),
    [anon_sym_virtual] = ACTIONS(189),
    [anon_sym_volatile] = ACTIONS(189),
    [anon_sym_weak] = ACTIONS(189),
    [anon_sym_async] = ACTIONS(189),
    [anon_sym_owned] = ACTIONS(189),
    [anon_sym_unowned] = ACTIONS(189),
    [anon_sym_ref] = ACTIONS(189),
    [anon_sym_out] = ACTIONS(189),
    [anon_sym_bool] = ACTIONS(187),
    [anon_sym_char] = ACTIONS(187),
    [anon_sym_double] = ACTIONS(187),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_size_t] = ACTIONS(187),
    [anon_sym_ssize_t] = ACTIONS(187),
    [anon_sym_string] = ACTIONS(187),
    [anon_sym_unichar] = ACTIONS(187),
    [anon_sym_void] = ACTIONS(187),
    [anon_sym_int] = ACTIONS(192),
    [anon_sym_int8] = ACTIONS(187),
    [anon_sym_int16] = ACTIONS(187),
    [anon_sym_int32] = ACTIONS(187),
    [anon_sym_int64] = ACTIONS(187),
    [anon_sym_long] = ACTIONS(187),
    [anon_sym_short] = ACTIONS(187),
    [anon_sym_uchar] = ACTIONS(187),
    [anon_sym_uint] = ACTIONS(192),
    [anon_sym_uint8] = ACTIONS(187),
    [anon_sym_uint16] = ACTIONS(187),
    [anon_sym_uint32] = ACTIONS(187),
    [anon_sym_uint64] = ACTIONS(187),
    [anon_sym_ulong] = ACTIONS(187),
    [anon_sym_ushort] = ACTIONS(187),
    [anon_sym_var] = ACTIONS(187),
  },
  [46] = {
    [sym_modifier] = STATE(45),
    [sym__type] = STATE(72),
    [sym_primitive_type] = STATE(72),
    [aux_sym_function_definition_repeat1] = STATE(45),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(175),
    [anon_sym_dynamic] = ACTIONS(175),
    [anon_sym_ensures] = ACTIONS(175),
    [anon_sym_extern] = ACTIONS(175),
    [anon_sym_inline] = ACTIONS(175),
    [anon_sym_internal] = ACTIONS(175),
    [anon_sym_override] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_requires] = ACTIONS(175),
    [anon_sym_signal] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_virtual] = ACTIONS(175),
    [anon_sym_volatile] = ACTIONS(175),
    [anon_sym_weak] = ACTIONS(175),
    [anon_sym_async] = ACTIONS(175),
    [anon_sym_owned] = ACTIONS(175),
    [anon_sym_unowned] = ACTIONS(175),
    [anon_sym_ref] = ACTIONS(175),
    [anon_sym_out] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(11),
    [anon_sym_double] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_size_t] = ACTIONS(11),
    [anon_sym_ssize_t] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_unichar] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(11),
    [anon_sym_int16] = ACTIONS(11),
    [anon_sym_int32] = ACTIONS(11),
    [anon_sym_int64] = ACTIONS(11),
    [anon_sym_long] = ACTIONS(11),
    [anon_sym_short] = ACTIONS(11),
    [anon_sym_uchar] = ACTIONS(11),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(11),
    [anon_sym_uint16] = ACTIONS(11),
    [anon_sym_uint32] = ACTIONS(11),
    [anon_sym_uint64] = ACTIONS(11),
    [anon_sym_ulong] = ACTIONS(11),
    [anon_sym_ushort] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(196), 2,
      anon_sym_int,
      anon_sym_uint,
    ACTIONS(194), 46,
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
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_long,
      anon_sym_short,
      anon_sym_uchar,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_ulong,
      anon_sym_ushort,
      anon_sym_var,
  [53] = 3,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(198), 10,
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
  [72] = 3,
    ACTIONS(204), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(202), 10,
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
  [91] = 3,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_namespaced_identifier_repeat1,
    ACTIONS(207), 10,
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
  [110] = 5,
    ACTIONS(211), 1,
      sym_uppercased_identifier,
    ACTIONS(213), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(86), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [132] = 5,
    ACTIONS(215), 1,
      sym_uppercased_identifier,
    ACTIONS(217), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(88), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [154] = 1,
    ACTIONS(202), 11,
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
  [168] = 5,
    ACTIONS(219), 1,
      sym_uppercased_identifier,
    ACTIONS(221), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(78), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [190] = 5,
    ACTIONS(223), 1,
      sym_uppercased_identifier,
    ACTIONS(225), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(82), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [212] = 5,
    ACTIONS(227), 1,
      sym_uppercased_identifier,
    ACTIONS(229), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(66), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [234] = 5,
    ACTIONS(231), 1,
      sym_uppercased_identifier,
    ACTIONS(233), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(81), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [256] = 5,
    ACTIONS(235), 1,
      sym_uppercased_identifier,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(83), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [278] = 5,
    ACTIONS(239), 1,
      sym_uppercased_identifier,
    ACTIONS(241), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(80), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [300] = 5,
    ACTIONS(243), 1,
      sym_uppercased_identifier,
    ACTIONS(245), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(87), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [322] = 5,
    ACTIONS(247), 1,
      sym_uppercased_identifier,
    ACTIONS(249), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(75), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [344] = 5,
    ACTIONS(251), 1,
      sym_uppercased_identifier,
    ACTIONS(253), 1,
      sym_number,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    ACTIONS(209), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(74), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
      sym_namespaced_identifier,
  [366] = 3,
    ACTIONS(255), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(114), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [378] = 3,
    ACTIONS(257), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(105), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [390] = 3,
    ACTIONS(259), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(111), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [402] = 3,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [414] = 3,
    ACTIONS(267), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(103), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [426] = 3,
    ACTIONS(269), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(113), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [438] = 3,
    ACTIONS(271), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(91), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [450] = 3,
    ACTIONS(273), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(110), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [462] = 3,
    ACTIONS(275), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(109), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [474] = 3,
    ACTIONS(277), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(119), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [486] = 3,
    ACTIONS(279), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(92), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [498] = 3,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [510] = 3,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [522] = 3,
    ACTIONS(285), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(107), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [534] = 3,
    ACTIONS(287), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(93), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [546] = 3,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [558] = 3,
    ACTIONS(291), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(106), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [570] = 1,
    ACTIONS(293), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [578] = 2,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
  [588] = 3,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [600] = 3,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [612] = 3,
    ACTIONS(299), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(117), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [624] = 3,
    ACTIONS(301), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(90), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [636] = 3,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [648] = 3,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [660] = 1,
    ACTIONS(307), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [668] = 3,
    ACTIONS(309), 1,
      sym_uppercased_identifier,
    ACTIONS(21), 2,
      sym_identifier,
      sym_camel_cased_identifier,
    STATE(118), 2,
      sym__identifiers,
      sym_namespaced_identifier,
  [680] = 4,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    STATE(108), 1,
      sym_parameter_list,
  [693] = 4,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_EQ,
    STATE(104), 1,
      sym_parameter_list,
  [706] = 4,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(323), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym_parameter_list,
  [719] = 4,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      anon_sym_EQ,
    STATE(116), 1,
      sym_parameter_list,
  [732] = 3,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [742] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_block,
  [752] = 1,
    ACTIONS(335), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [758] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_parameter_list_repeat1,
  [768] = 3,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [778] = 3,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_COLON,
    STATE(35), 1,
      sym_block,
  [788] = 3,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_parameter_list_repeat1,
  [798] = 1,
    ACTIONS(352), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [804] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_parameter_list_repeat1,
  [814] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
  [821] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [828] = 2,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [835] = 2,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [842] = 2,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(323), 1,
      anon_sym_EQ,
  [849] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [856] = 2,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [863] = 2,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_EQ,
  [870] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [875] = 2,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [882] = 2,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [889] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [896] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [901] = 2,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [908] = 2,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
  [915] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [922] = 1,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [927] = 1,
    ACTIONS(360), 1,
      anon_sym_EQ,
  [931] = 1,
    ACTIONS(362), 1,
      sym_camel_cased_identifier,
  [935] = 1,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
  [939] = 1,
    ACTIONS(366), 1,
      sym_camel_cased_identifier,
  [943] = 1,
    ACTIONS(368), 1,
      sym_camel_cased_identifier,
  [947] = 1,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
  [951] = 1,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
  [955] = 1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
  [959] = 1,
    ACTIONS(376), 1,
      anon_sym_EQ,
  [963] = 1,
    ACTIONS(378), 1,
      sym_camel_cased_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(47)] = 0,
  [SMALL_STATE(48)] = 53,
  [SMALL_STATE(49)] = 72,
  [SMALL_STATE(50)] = 91,
  [SMALL_STATE(51)] = 110,
  [SMALL_STATE(52)] = 132,
  [SMALL_STATE(53)] = 154,
  [SMALL_STATE(54)] = 168,
  [SMALL_STATE(55)] = 190,
  [SMALL_STATE(56)] = 212,
  [SMALL_STATE(57)] = 234,
  [SMALL_STATE(58)] = 256,
  [SMALL_STATE(59)] = 278,
  [SMALL_STATE(60)] = 300,
  [SMALL_STATE(61)] = 322,
  [SMALL_STATE(62)] = 344,
  [SMALL_STATE(63)] = 366,
  [SMALL_STATE(64)] = 378,
  [SMALL_STATE(65)] = 390,
  [SMALL_STATE(66)] = 402,
  [SMALL_STATE(67)] = 414,
  [SMALL_STATE(68)] = 426,
  [SMALL_STATE(69)] = 438,
  [SMALL_STATE(70)] = 450,
  [SMALL_STATE(71)] = 462,
  [SMALL_STATE(72)] = 474,
  [SMALL_STATE(73)] = 486,
  [SMALL_STATE(74)] = 498,
  [SMALL_STATE(75)] = 510,
  [SMALL_STATE(76)] = 522,
  [SMALL_STATE(77)] = 534,
  [SMALL_STATE(78)] = 546,
  [SMALL_STATE(79)] = 558,
  [SMALL_STATE(80)] = 570,
  [SMALL_STATE(81)] = 578,
  [SMALL_STATE(82)] = 588,
  [SMALL_STATE(83)] = 600,
  [SMALL_STATE(84)] = 612,
  [SMALL_STATE(85)] = 624,
  [SMALL_STATE(86)] = 636,
  [SMALL_STATE(87)] = 648,
  [SMALL_STATE(88)] = 660,
  [SMALL_STATE(89)] = 668,
  [SMALL_STATE(90)] = 680,
  [SMALL_STATE(91)] = 693,
  [SMALL_STATE(92)] = 706,
  [SMALL_STATE(93)] = 719,
  [SMALL_STATE(94)] = 732,
  [SMALL_STATE(95)] = 742,
  [SMALL_STATE(96)] = 752,
  [SMALL_STATE(97)] = 758,
  [SMALL_STATE(98)] = 768,
  [SMALL_STATE(99)] = 778,
  [SMALL_STATE(100)] = 788,
  [SMALL_STATE(101)] = 798,
  [SMALL_STATE(102)] = 804,
  [SMALL_STATE(103)] = 814,
  [SMALL_STATE(104)] = 821,
  [SMALL_STATE(105)] = 828,
  [SMALL_STATE(106)] = 835,
  [SMALL_STATE(107)] = 842,
  [SMALL_STATE(108)] = 849,
  [SMALL_STATE(109)] = 856,
  [SMALL_STATE(110)] = 863,
  [SMALL_STATE(111)] = 870,
  [SMALL_STATE(112)] = 875,
  [SMALL_STATE(113)] = 882,
  [SMALL_STATE(114)] = 889,
  [SMALL_STATE(115)] = 896,
  [SMALL_STATE(116)] = 901,
  [SMALL_STATE(117)] = 908,
  [SMALL_STATE(118)] = 915,
  [SMALL_STATE(119)] = 922,
  [SMALL_STATE(120)] = 927,
  [SMALL_STATE(121)] = 931,
  [SMALL_STATE(122)] = 935,
  [SMALL_STATE(123)] = 939,
  [SMALL_STATE(124)] = 943,
  [SMALL_STATE(125)] = 947,
  [SMALL_STATE(126)] = 951,
  [SMALL_STATE(127)] = 955,
  [SMALL_STATE(128)] = 959,
  [SMALL_STATE(129)] = 963,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(123),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(47),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(101),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(101),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(50),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(128),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(47),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespaced_identifier_repeat1, 2), SHIFT_REPEAT(96),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifiers, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(44),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [374] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
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
