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
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_abstract = 1,
  anon_sym_const = 2,
  anon_sym_dynamic = 3,
  anon_sym_ensures = 4,
  anon_sym_extern = 5,
  anon_sym_inline = 6,
  anon_sym_internal = 7,
  anon_sym_override = 8,
  anon_sym_private = 9,
  anon_sym_protected = 10,
  anon_sym_public = 11,
  anon_sym_requires = 12,
  anon_sym_signal = 13,
  anon_sym_static = 14,
  anon_sym_virtual = 15,
  anon_sym_volatile = 16,
  anon_sym_weak = 17,
  anon_sym_async = 18,
  anon_sym_owned = 19,
  anon_sym_unowned = 20,
  anon_sym_ref = 21,
  anon_sym_out = 22,
  anon_sym_bool = 23,
  anon_sym_char = 24,
  anon_sym_double = 25,
  anon_sym_float = 26,
  anon_sym_size_t = 27,
  anon_sym_ssize_t = 28,
  anon_sym_string = 29,
  anon_sym_unichar = 30,
  anon_sym_void = 31,
  anon_sym_int = 32,
  anon_sym_int8 = 33,
  anon_sym_int16 = 34,
  anon_sym_int32 = 35,
  anon_sym_int64 = 36,
  anon_sym_long = 37,
  anon_sym_short = 38,
  anon_sym_uchar = 39,
  anon_sym_uint = 40,
  anon_sym_uint8 = 41,
  anon_sym_uint16 = 42,
  anon_sym_uint32 = 43,
  anon_sym_uint64 = 44,
  anon_sym_ulong = 45,
  anon_sym_ushort = 46,
  aux_sym_comment_token1 = 47,
  aux_sym_comment_token2 = 48,
  anon_sym_LPAREN = 49,
  anon_sym_COMMA = 50,
  anon_sym_RPAREN = 51,
  anon_sym_LBRACE = 52,
  anon_sym_RBRACE = 53,
  anon_sym_return = 54,
  anon_sym_SEMI = 55,
  anon_sym_EQ = 56,
  anon_sym_namespace = 57,
  anon_sym_DASH = 58,
  anon_sym_BANG = 59,
  anon_sym_STAR = 60,
  anon_sym_SLASH = 61,
  anon_sym_PLUS = 62,
  sym_identifier = 63,
  sym_camel_cased_identifier = 64,
  sym_uppercased_identifier = 65,
  sym_number = 66,
  sym_source_file = 67,
  sym__definition = 68,
  sym_function_definition = 69,
  sym_modifier = 70,
  sym__type = 71,
  sym_primitive_type = 72,
  sym_comment = 73,
  sym_parameter_list = 74,
  sym_parameter = 75,
  sym_block = 76,
  sym__statement = 77,
  sym_return_statement = 78,
  sym_assignment = 79,
  sym_namespace = 80,
  sym__expression = 81,
  sym_unary_expression = 82,
  sym_binary_expression = 83,
  sym__identifiers = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_function_definition_repeat1 = 86,
  aux_sym_parameter_list_repeat1 = 87,
  aux_sym_block_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_namespace] = "namespace",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [sym_identifier] = "identifier",
  [sym_camel_cased_identifier] = "camel_cased_identifier",
  [sym_uppercased_identifier] = "uppercased_identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
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
  [sym_namespace] = "namespace",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__identifiers] = "_identifiers",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_identifier] = sym_identifier,
  [sym_camel_cased_identifier] = sym_camel_cased_identifier,
  [sym_uppercased_identifier] = sym_uppercased_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
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
  [sym_namespace] = sym_namespace,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__identifiers] = sym__identifiers,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
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
      if (eof) ADVANCE(173);
      if (lookahead == '!') ADVANCE(271);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '+') ADVANCE(275);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == 'v') ADVANCE(340);
      if (lookahead == 'w') ADVANCE(320);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(439);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(271);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '+') ADVANCE(275);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(439);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '/') ADVANCE(169);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == 'v') ADVANCE(340);
      if (lookahead == 'w') ADVANCE(320);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(439);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(240);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(252);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(241);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(253);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(239);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(251);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'q') ADVANCE(160);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == 'z') ADVANCE(45);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(206);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 164:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 165:
      if (lookahead == 'w') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 167:
      if (lookahead == 'z') ADVANCE(62);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(170);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(259);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(170);
      if (lookahead == '*') ADVANCE(168);
      END_STATE();
    case 171:
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == ')') ADVANCE(262);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_signal);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_signal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_async);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_owned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_unowned);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_unowned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_unichar);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_unichar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_uchar);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_uchar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(170);
      if (lookahead == '*') ADVANCE(168);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
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
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '/') ADVANCE(169);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(441);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(409);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(359);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == 's') ADVANCE(339);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'q') ADVANCE(429);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == 'z') ADVANCE(312);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(438);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(291);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(207);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == 'x') ADVANCE(426);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == 'y') ADVANCE(379);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == 'v') ADVANCE(322);
      if (lookahead == 'w') ADVANCE(373);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(371);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (lookahead == '_') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(439);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(440);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_uppercased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 172},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 172},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 172},
  [18] = {.lex_state = 172},
  [19] = {.lex_state = 172},
  [20] = {.lex_state = 172},
  [21] = {.lex_state = 172},
  [22] = {.lex_state = 172},
  [23] = {.lex_state = 172},
  [24] = {.lex_state = 172},
  [25] = {.lex_state = 172},
  [26] = {.lex_state = 172},
  [27] = {.lex_state = 172},
  [28] = {.lex_state = 172},
  [29] = {.lex_state = 172},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_camel_cased_identifier] = ACTIONS(1),
    [sym_uppercased_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__definition] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_modifier] = STATE(23),
    [sym__type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_comment] = STATE(7),
    [sym_namespace] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_function_definition_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_ensures] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_requires] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_virtual] = ACTIONS(5),
    [anon_sym_volatile] = ACTIONS(5),
    [anon_sym_weak] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(5),
    [anon_sym_owned] = ACTIONS(5),
    [anon_sym_unowned] = ACTIONS(5),
    [anon_sym_ref] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_size_t] = ACTIONS(7),
    [anon_sym_ssize_t] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_unichar] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(11),
    [aux_sym_comment_token2] = ACTIONS(11),
    [anon_sym_namespace] = ACTIONS(13),
  },
  [2] = {
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_modifier] = STATE(21),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [sym_comment] = STATE(6),
    [sym__statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_namespace] = STATE(6),
    [sym__identifiers] = STATE(69),
    [aux_sym_function_definition_repeat1] = STATE(21),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_dynamic] = ACTIONS(15),
    [anon_sym_ensures] = ACTIONS(15),
    [anon_sym_extern] = ACTIONS(15),
    [anon_sym_inline] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_override] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_requires] = ACTIONS(15),
    [anon_sym_signal] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_virtual] = ACTIONS(15),
    [anon_sym_volatile] = ACTIONS(15),
    [anon_sym_weak] = ACTIONS(15),
    [anon_sym_async] = ACTIONS(15),
    [anon_sym_owned] = ACTIONS(15),
    [anon_sym_unowned] = ACTIONS(15),
    [anon_sym_ref] = ACTIONS(15),
    [anon_sym_out] = ACTIONS(15),
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
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(17),
    [aux_sym_comment_token2] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_namespace] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(25),
  },
  [3] = {
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_modifier] = STATE(21),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [sym_comment] = STATE(6),
    [sym__statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_namespace] = STATE(6),
    [sym__identifiers] = STATE(69),
    [aux_sym_function_definition_repeat1] = STATE(21),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_dynamic] = ACTIONS(15),
    [anon_sym_ensures] = ACTIONS(15),
    [anon_sym_extern] = ACTIONS(15),
    [anon_sym_inline] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_override] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_requires] = ACTIONS(15),
    [anon_sym_signal] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_virtual] = ACTIONS(15),
    [anon_sym_volatile] = ACTIONS(15),
    [anon_sym_weak] = ACTIONS(15),
    [anon_sym_async] = ACTIONS(15),
    [anon_sym_owned] = ACTIONS(15),
    [anon_sym_unowned] = ACTIONS(15),
    [anon_sym_ref] = ACTIONS(15),
    [anon_sym_out] = ACTIONS(15),
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
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(17),
    [aux_sym_comment_token2] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_namespace] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(25),
  },
  [4] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_modifier] = STATE(21),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [sym_comment] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym__identifiers] = STATE(69),
    [aux_sym_function_definition_repeat1] = STATE(21),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_dynamic] = ACTIONS(15),
    [anon_sym_ensures] = ACTIONS(15),
    [anon_sym_extern] = ACTIONS(15),
    [anon_sym_inline] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_override] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_requires] = ACTIONS(15),
    [anon_sym_signal] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_virtual] = ACTIONS(15),
    [anon_sym_volatile] = ACTIONS(15),
    [anon_sym_weak] = ACTIONS(15),
    [anon_sym_async] = ACTIONS(15),
    [anon_sym_owned] = ACTIONS(15),
    [anon_sym_unowned] = ACTIONS(15),
    [anon_sym_ref] = ACTIONS(15),
    [anon_sym_out] = ACTIONS(15),
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
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(17),
    [aux_sym_comment_token2] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_namespace] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(25),
  },
  [5] = {
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_modifier] = STATE(21),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [sym_comment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym__identifiers] = STATE(69),
    [aux_sym_function_definition_repeat1] = STATE(21),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_dynamic] = ACTIONS(15),
    [anon_sym_ensures] = ACTIONS(15),
    [anon_sym_extern] = ACTIONS(15),
    [anon_sym_inline] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_override] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_requires] = ACTIONS(15),
    [anon_sym_signal] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_virtual] = ACTIONS(15),
    [anon_sym_volatile] = ACTIONS(15),
    [anon_sym_weak] = ACTIONS(15),
    [anon_sym_async] = ACTIONS(15),
    [anon_sym_owned] = ACTIONS(15),
    [anon_sym_unowned] = ACTIONS(15),
    [anon_sym_ref] = ACTIONS(15),
    [anon_sym_out] = ACTIONS(15),
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
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(17),
    [aux_sym_comment_token2] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_namespace] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_camel_cased_identifier] = ACTIONS(25),
    [sym_uppercased_identifier] = ACTIONS(25),
  },
  [6] = {
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_modifier] = STATE(21),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [sym_comment] = STATE(6),
    [sym__statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_namespace] = STATE(6),
    [sym__identifiers] = STATE(69),
    [aux_sym_function_definition_repeat1] = STATE(21),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_abstract] = ACTIONS(33),
    [anon_sym_const] = ACTIONS(33),
    [anon_sym_dynamic] = ACTIONS(33),
    [anon_sym_ensures] = ACTIONS(33),
    [anon_sym_extern] = ACTIONS(33),
    [anon_sym_inline] = ACTIONS(33),
    [anon_sym_internal] = ACTIONS(33),
    [anon_sym_override] = ACTIONS(33),
    [anon_sym_private] = ACTIONS(33),
    [anon_sym_protected] = ACTIONS(33),
    [anon_sym_public] = ACTIONS(33),
    [anon_sym_requires] = ACTIONS(33),
    [anon_sym_signal] = ACTIONS(33),
    [anon_sym_static] = ACTIONS(33),
    [anon_sym_virtual] = ACTIONS(33),
    [anon_sym_volatile] = ACTIONS(33),
    [anon_sym_weak] = ACTIONS(33),
    [anon_sym_async] = ACTIONS(33),
    [anon_sym_owned] = ACTIONS(33),
    [anon_sym_unowned] = ACTIONS(33),
    [anon_sym_ref] = ACTIONS(33),
    [anon_sym_out] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(36),
    [anon_sym_char] = ACTIONS(36),
    [anon_sym_double] = ACTIONS(36),
    [anon_sym_float] = ACTIONS(36),
    [anon_sym_size_t] = ACTIONS(36),
    [anon_sym_ssize_t] = ACTIONS(36),
    [anon_sym_string] = ACTIONS(36),
    [anon_sym_unichar] = ACTIONS(36),
    [anon_sym_void] = ACTIONS(36),
    [anon_sym_int] = ACTIONS(36),
    [anon_sym_int8] = ACTIONS(39),
    [anon_sym_int16] = ACTIONS(39),
    [anon_sym_int32] = ACTIONS(39),
    [anon_sym_int64] = ACTIONS(39),
    [anon_sym_long] = ACTIONS(36),
    [anon_sym_short] = ACTIONS(36),
    [anon_sym_uchar] = ACTIONS(36),
    [anon_sym_uint] = ACTIONS(36),
    [anon_sym_uint8] = ACTIONS(39),
    [anon_sym_uint16] = ACTIONS(39),
    [anon_sym_uint32] = ACTIONS(39),
    [anon_sym_uint64] = ACTIONS(39),
    [anon_sym_ulong] = ACTIONS(36),
    [anon_sym_ushort] = ACTIONS(36),
    [aux_sym_comment_token1] = ACTIONS(42),
    [aux_sym_comment_token2] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [anon_sym_namespace] = ACTIONS(50),
    [sym_identifier] = ACTIONS(53),
    [sym_camel_cased_identifier] = ACTIONS(53),
    [sym_uppercased_identifier] = ACTIONS(53),
  },
  [7] = {
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_modifier] = STATE(23),
    [sym__type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_comment] = STATE(8),
    [sym_namespace] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_ensures] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_requires] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_virtual] = ACTIONS(5),
    [anon_sym_volatile] = ACTIONS(5),
    [anon_sym_weak] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(5),
    [anon_sym_owned] = ACTIONS(5),
    [anon_sym_unowned] = ACTIONS(5),
    [anon_sym_ref] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_size_t] = ACTIONS(7),
    [anon_sym_ssize_t] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_unichar] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(11),
    [aux_sym_comment_token2] = ACTIONS(11),
    [anon_sym_namespace] = ACTIONS(13),
  },
  [8] = {
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_modifier] = STATE(23),
    [sym__type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_comment] = STATE(8),
    [sym_namespace] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(58),
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
    [anon_sym_int] = ACTIONS(66),
    [anon_sym_int8] = ACTIONS(63),
    [anon_sym_int16] = ACTIONS(63),
    [anon_sym_int32] = ACTIONS(63),
    [anon_sym_int64] = ACTIONS(63),
    [anon_sym_long] = ACTIONS(63),
    [anon_sym_short] = ACTIONS(63),
    [anon_sym_uchar] = ACTIONS(63),
    [anon_sym_uint] = ACTIONS(66),
    [anon_sym_uint8] = ACTIONS(63),
    [anon_sym_uint16] = ACTIONS(63),
    [anon_sym_uint32] = ACTIONS(63),
    [anon_sym_uint64] = ACTIONS(63),
    [anon_sym_ulong] = ACTIONS(63),
    [anon_sym_ushort] = ACTIONS(63),
    [aux_sym_comment_token1] = ACTIONS(69),
    [aux_sym_comment_token2] = ACTIONS(69),
    [anon_sym_namespace] = ACTIONS(72),
  },
  [9] = {
    [anon_sym_abstract] = ACTIONS(75),
    [anon_sym_const] = ACTIONS(75),
    [anon_sym_dynamic] = ACTIONS(75),
    [anon_sym_ensures] = ACTIONS(75),
    [anon_sym_extern] = ACTIONS(75),
    [anon_sym_inline] = ACTIONS(75),
    [anon_sym_internal] = ACTIONS(75),
    [anon_sym_override] = ACTIONS(75),
    [anon_sym_private] = ACTIONS(75),
    [anon_sym_protected] = ACTIONS(75),
    [anon_sym_public] = ACTIONS(75),
    [anon_sym_requires] = ACTIONS(75),
    [anon_sym_signal] = ACTIONS(75),
    [anon_sym_static] = ACTIONS(75),
    [anon_sym_virtual] = ACTIONS(75),
    [anon_sym_volatile] = ACTIONS(75),
    [anon_sym_weak] = ACTIONS(75),
    [anon_sym_async] = ACTIONS(75),
    [anon_sym_owned] = ACTIONS(75),
    [anon_sym_unowned] = ACTIONS(75),
    [anon_sym_ref] = ACTIONS(75),
    [anon_sym_out] = ACTIONS(75),
    [anon_sym_bool] = ACTIONS(75),
    [anon_sym_char] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_size_t] = ACTIONS(75),
    [anon_sym_ssize_t] = ACTIONS(75),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_unichar] = ACTIONS(75),
    [anon_sym_void] = ACTIONS(75),
    [anon_sym_int] = ACTIONS(75),
    [anon_sym_int8] = ACTIONS(77),
    [anon_sym_int16] = ACTIONS(77),
    [anon_sym_int32] = ACTIONS(77),
    [anon_sym_int64] = ACTIONS(77),
    [anon_sym_long] = ACTIONS(75),
    [anon_sym_short] = ACTIONS(75),
    [anon_sym_uchar] = ACTIONS(75),
    [anon_sym_uint] = ACTIONS(75),
    [anon_sym_uint8] = ACTIONS(77),
    [anon_sym_uint16] = ACTIONS(77),
    [anon_sym_uint32] = ACTIONS(77),
    [anon_sym_uint64] = ACTIONS(77),
    [anon_sym_ulong] = ACTIONS(75),
    [anon_sym_ushort] = ACTIONS(75),
    [aux_sym_comment_token1] = ACTIONS(77),
    [aux_sym_comment_token2] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_namespace] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [sym_camel_cased_identifier] = ACTIONS(75),
    [sym_uppercased_identifier] = ACTIONS(75),
  },
  [10] = {
    [anon_sym_abstract] = ACTIONS(79),
    [anon_sym_const] = ACTIONS(79),
    [anon_sym_dynamic] = ACTIONS(79),
    [anon_sym_ensures] = ACTIONS(79),
    [anon_sym_extern] = ACTIONS(79),
    [anon_sym_inline] = ACTIONS(79),
    [anon_sym_internal] = ACTIONS(79),
    [anon_sym_override] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_protected] = ACTIONS(79),
    [anon_sym_public] = ACTIONS(79),
    [anon_sym_requires] = ACTIONS(79),
    [anon_sym_signal] = ACTIONS(79),
    [anon_sym_static] = ACTIONS(79),
    [anon_sym_virtual] = ACTIONS(79),
    [anon_sym_volatile] = ACTIONS(79),
    [anon_sym_weak] = ACTIONS(79),
    [anon_sym_async] = ACTIONS(79),
    [anon_sym_owned] = ACTIONS(79),
    [anon_sym_unowned] = ACTIONS(79),
    [anon_sym_ref] = ACTIONS(79),
    [anon_sym_out] = ACTIONS(79),
    [anon_sym_bool] = ACTIONS(79),
    [anon_sym_char] = ACTIONS(79),
    [anon_sym_double] = ACTIONS(79),
    [anon_sym_float] = ACTIONS(79),
    [anon_sym_size_t] = ACTIONS(79),
    [anon_sym_ssize_t] = ACTIONS(79),
    [anon_sym_string] = ACTIONS(79),
    [anon_sym_unichar] = ACTIONS(79),
    [anon_sym_void] = ACTIONS(79),
    [anon_sym_int] = ACTIONS(79),
    [anon_sym_int8] = ACTIONS(81),
    [anon_sym_int16] = ACTIONS(81),
    [anon_sym_int32] = ACTIONS(81),
    [anon_sym_int64] = ACTIONS(81),
    [anon_sym_long] = ACTIONS(79),
    [anon_sym_short] = ACTIONS(79),
    [anon_sym_uchar] = ACTIONS(79),
    [anon_sym_uint] = ACTIONS(79),
    [anon_sym_uint8] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(81),
    [anon_sym_uint32] = ACTIONS(81),
    [anon_sym_uint64] = ACTIONS(81),
    [anon_sym_ulong] = ACTIONS(79),
    [anon_sym_ushort] = ACTIONS(79),
    [aux_sym_comment_token1] = ACTIONS(81),
    [aux_sym_comment_token2] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_namespace] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [sym_camel_cased_identifier] = ACTIONS(79),
    [sym_uppercased_identifier] = ACTIONS(79),
  },
  [11] = {
    [anon_sym_abstract] = ACTIONS(83),
    [anon_sym_const] = ACTIONS(83),
    [anon_sym_dynamic] = ACTIONS(83),
    [anon_sym_ensures] = ACTIONS(83),
    [anon_sym_extern] = ACTIONS(83),
    [anon_sym_inline] = ACTIONS(83),
    [anon_sym_internal] = ACTIONS(83),
    [anon_sym_override] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_protected] = ACTIONS(83),
    [anon_sym_public] = ACTIONS(83),
    [anon_sym_requires] = ACTIONS(83),
    [anon_sym_signal] = ACTIONS(83),
    [anon_sym_static] = ACTIONS(83),
    [anon_sym_virtual] = ACTIONS(83),
    [anon_sym_volatile] = ACTIONS(83),
    [anon_sym_weak] = ACTIONS(83),
    [anon_sym_async] = ACTIONS(83),
    [anon_sym_owned] = ACTIONS(83),
    [anon_sym_unowned] = ACTIONS(83),
    [anon_sym_ref] = ACTIONS(83),
    [anon_sym_out] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_char] = ACTIONS(83),
    [anon_sym_double] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_size_t] = ACTIONS(83),
    [anon_sym_ssize_t] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [anon_sym_unichar] = ACTIONS(83),
    [anon_sym_void] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_int8] = ACTIONS(85),
    [anon_sym_int16] = ACTIONS(85),
    [anon_sym_int32] = ACTIONS(85),
    [anon_sym_int64] = ACTIONS(85),
    [anon_sym_long] = ACTIONS(83),
    [anon_sym_short] = ACTIONS(83),
    [anon_sym_uchar] = ACTIONS(83),
    [anon_sym_uint] = ACTIONS(83),
    [anon_sym_uint8] = ACTIONS(85),
    [anon_sym_uint16] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_uint64] = ACTIONS(85),
    [anon_sym_ulong] = ACTIONS(83),
    [anon_sym_ushort] = ACTIONS(83),
    [aux_sym_comment_token1] = ACTIONS(85),
    [aux_sym_comment_token2] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(83),
    [anon_sym_namespace] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
    [sym_camel_cased_identifier] = ACTIONS(83),
    [sym_uppercased_identifier] = ACTIONS(83),
  },
  [12] = {
    [anon_sym_abstract] = ACTIONS(87),
    [anon_sym_const] = ACTIONS(87),
    [anon_sym_dynamic] = ACTIONS(87),
    [anon_sym_ensures] = ACTIONS(87),
    [anon_sym_extern] = ACTIONS(87),
    [anon_sym_inline] = ACTIONS(87),
    [anon_sym_internal] = ACTIONS(87),
    [anon_sym_override] = ACTIONS(87),
    [anon_sym_private] = ACTIONS(87),
    [anon_sym_protected] = ACTIONS(87),
    [anon_sym_public] = ACTIONS(87),
    [anon_sym_requires] = ACTIONS(87),
    [anon_sym_signal] = ACTIONS(87),
    [anon_sym_static] = ACTIONS(87),
    [anon_sym_virtual] = ACTIONS(87),
    [anon_sym_volatile] = ACTIONS(87),
    [anon_sym_weak] = ACTIONS(87),
    [anon_sym_async] = ACTIONS(87),
    [anon_sym_owned] = ACTIONS(87),
    [anon_sym_unowned] = ACTIONS(87),
    [anon_sym_ref] = ACTIONS(87),
    [anon_sym_out] = ACTIONS(87),
    [anon_sym_bool] = ACTIONS(87),
    [anon_sym_char] = ACTIONS(87),
    [anon_sym_double] = ACTIONS(87),
    [anon_sym_float] = ACTIONS(87),
    [anon_sym_size_t] = ACTIONS(87),
    [anon_sym_ssize_t] = ACTIONS(87),
    [anon_sym_string] = ACTIONS(87),
    [anon_sym_unichar] = ACTIONS(87),
    [anon_sym_void] = ACTIONS(87),
    [anon_sym_int] = ACTIONS(87),
    [anon_sym_int8] = ACTIONS(89),
    [anon_sym_int16] = ACTIONS(89),
    [anon_sym_int32] = ACTIONS(89),
    [anon_sym_int64] = ACTIONS(89),
    [anon_sym_long] = ACTIONS(87),
    [anon_sym_short] = ACTIONS(87),
    [anon_sym_uchar] = ACTIONS(87),
    [anon_sym_uint] = ACTIONS(87),
    [anon_sym_uint8] = ACTIONS(89),
    [anon_sym_uint16] = ACTIONS(89),
    [anon_sym_uint32] = ACTIONS(89),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_ulong] = ACTIONS(87),
    [anon_sym_ushort] = ACTIONS(87),
    [aux_sym_comment_token1] = ACTIONS(89),
    [aux_sym_comment_token2] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_namespace] = ACTIONS(87),
    [sym_identifier] = ACTIONS(87),
    [sym_camel_cased_identifier] = ACTIONS(87),
    [sym_uppercased_identifier] = ACTIONS(87),
  },
  [13] = {
    [anon_sym_abstract] = ACTIONS(91),
    [anon_sym_const] = ACTIONS(91),
    [anon_sym_dynamic] = ACTIONS(91),
    [anon_sym_ensures] = ACTIONS(91),
    [anon_sym_extern] = ACTIONS(91),
    [anon_sym_inline] = ACTIONS(91),
    [anon_sym_internal] = ACTIONS(91),
    [anon_sym_override] = ACTIONS(91),
    [anon_sym_private] = ACTIONS(91),
    [anon_sym_protected] = ACTIONS(91),
    [anon_sym_public] = ACTIONS(91),
    [anon_sym_requires] = ACTIONS(91),
    [anon_sym_signal] = ACTIONS(91),
    [anon_sym_static] = ACTIONS(91),
    [anon_sym_virtual] = ACTIONS(91),
    [anon_sym_volatile] = ACTIONS(91),
    [anon_sym_weak] = ACTIONS(91),
    [anon_sym_async] = ACTIONS(91),
    [anon_sym_owned] = ACTIONS(91),
    [anon_sym_unowned] = ACTIONS(91),
    [anon_sym_ref] = ACTIONS(91),
    [anon_sym_out] = ACTIONS(91),
    [anon_sym_bool] = ACTIONS(91),
    [anon_sym_char] = ACTIONS(91),
    [anon_sym_double] = ACTIONS(91),
    [anon_sym_float] = ACTIONS(91),
    [anon_sym_size_t] = ACTIONS(91),
    [anon_sym_ssize_t] = ACTIONS(91),
    [anon_sym_string] = ACTIONS(91),
    [anon_sym_unichar] = ACTIONS(91),
    [anon_sym_void] = ACTIONS(91),
    [anon_sym_int] = ACTIONS(91),
    [anon_sym_int8] = ACTIONS(93),
    [anon_sym_int16] = ACTIONS(93),
    [anon_sym_int32] = ACTIONS(93),
    [anon_sym_int64] = ACTIONS(93),
    [anon_sym_long] = ACTIONS(91),
    [anon_sym_short] = ACTIONS(91),
    [anon_sym_uchar] = ACTIONS(91),
    [anon_sym_uint] = ACTIONS(91),
    [anon_sym_uint8] = ACTIONS(93),
    [anon_sym_uint16] = ACTIONS(93),
    [anon_sym_uint32] = ACTIONS(93),
    [anon_sym_uint64] = ACTIONS(93),
    [anon_sym_ulong] = ACTIONS(91),
    [anon_sym_ushort] = ACTIONS(91),
    [aux_sym_comment_token1] = ACTIONS(93),
    [aux_sym_comment_token2] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_namespace] = ACTIONS(91),
    [sym_identifier] = ACTIONS(91),
    [sym_camel_cased_identifier] = ACTIONS(91),
    [sym_uppercased_identifier] = ACTIONS(91),
  },
  [14] = {
    [anon_sym_abstract] = ACTIONS(95),
    [anon_sym_const] = ACTIONS(95),
    [anon_sym_dynamic] = ACTIONS(95),
    [anon_sym_ensures] = ACTIONS(95),
    [anon_sym_extern] = ACTIONS(95),
    [anon_sym_inline] = ACTIONS(95),
    [anon_sym_internal] = ACTIONS(95),
    [anon_sym_override] = ACTIONS(95),
    [anon_sym_private] = ACTIONS(95),
    [anon_sym_protected] = ACTIONS(95),
    [anon_sym_public] = ACTIONS(95),
    [anon_sym_requires] = ACTIONS(95),
    [anon_sym_signal] = ACTIONS(95),
    [anon_sym_static] = ACTIONS(95),
    [anon_sym_virtual] = ACTIONS(95),
    [anon_sym_volatile] = ACTIONS(95),
    [anon_sym_weak] = ACTIONS(95),
    [anon_sym_async] = ACTIONS(95),
    [anon_sym_owned] = ACTIONS(95),
    [anon_sym_unowned] = ACTIONS(95),
    [anon_sym_ref] = ACTIONS(95),
    [anon_sym_out] = ACTIONS(95),
    [anon_sym_bool] = ACTIONS(95),
    [anon_sym_char] = ACTIONS(95),
    [anon_sym_double] = ACTIONS(95),
    [anon_sym_float] = ACTIONS(95),
    [anon_sym_size_t] = ACTIONS(95),
    [anon_sym_ssize_t] = ACTIONS(95),
    [anon_sym_string] = ACTIONS(95),
    [anon_sym_unichar] = ACTIONS(95),
    [anon_sym_void] = ACTIONS(95),
    [anon_sym_int] = ACTIONS(95),
    [anon_sym_int8] = ACTIONS(97),
    [anon_sym_int16] = ACTIONS(97),
    [anon_sym_int32] = ACTIONS(97),
    [anon_sym_int64] = ACTIONS(97),
    [anon_sym_long] = ACTIONS(95),
    [anon_sym_short] = ACTIONS(95),
    [anon_sym_uchar] = ACTIONS(95),
    [anon_sym_uint] = ACTIONS(95),
    [anon_sym_uint8] = ACTIONS(97),
    [anon_sym_uint16] = ACTIONS(97),
    [anon_sym_uint32] = ACTIONS(97),
    [anon_sym_uint64] = ACTIONS(97),
    [anon_sym_ulong] = ACTIONS(95),
    [anon_sym_ushort] = ACTIONS(95),
    [aux_sym_comment_token1] = ACTIONS(97),
    [aux_sym_comment_token2] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(95),
    [anon_sym_namespace] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
    [sym_camel_cased_identifier] = ACTIONS(95),
    [sym_uppercased_identifier] = ACTIONS(95),
  },
  [15] = {
    [anon_sym_abstract] = ACTIONS(99),
    [anon_sym_const] = ACTIONS(99),
    [anon_sym_dynamic] = ACTIONS(99),
    [anon_sym_ensures] = ACTIONS(99),
    [anon_sym_extern] = ACTIONS(99),
    [anon_sym_inline] = ACTIONS(99),
    [anon_sym_internal] = ACTIONS(99),
    [anon_sym_override] = ACTIONS(99),
    [anon_sym_private] = ACTIONS(99),
    [anon_sym_protected] = ACTIONS(99),
    [anon_sym_public] = ACTIONS(99),
    [anon_sym_requires] = ACTIONS(99),
    [anon_sym_signal] = ACTIONS(99),
    [anon_sym_static] = ACTIONS(99),
    [anon_sym_virtual] = ACTIONS(99),
    [anon_sym_volatile] = ACTIONS(99),
    [anon_sym_weak] = ACTIONS(99),
    [anon_sym_async] = ACTIONS(99),
    [anon_sym_owned] = ACTIONS(99),
    [anon_sym_unowned] = ACTIONS(99),
    [anon_sym_ref] = ACTIONS(99),
    [anon_sym_out] = ACTIONS(99),
    [anon_sym_bool] = ACTIONS(99),
    [anon_sym_char] = ACTIONS(99),
    [anon_sym_double] = ACTIONS(99),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_size_t] = ACTIONS(99),
    [anon_sym_ssize_t] = ACTIONS(99),
    [anon_sym_string] = ACTIONS(99),
    [anon_sym_unichar] = ACTIONS(99),
    [anon_sym_void] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(99),
    [anon_sym_int8] = ACTIONS(101),
    [anon_sym_int16] = ACTIONS(101),
    [anon_sym_int32] = ACTIONS(101),
    [anon_sym_int64] = ACTIONS(101),
    [anon_sym_long] = ACTIONS(99),
    [anon_sym_short] = ACTIONS(99),
    [anon_sym_uchar] = ACTIONS(99),
    [anon_sym_uint] = ACTIONS(99),
    [anon_sym_uint8] = ACTIONS(101),
    [anon_sym_uint16] = ACTIONS(101),
    [anon_sym_uint32] = ACTIONS(101),
    [anon_sym_uint64] = ACTIONS(101),
    [anon_sym_ulong] = ACTIONS(99),
    [anon_sym_ushort] = ACTIONS(99),
    [aux_sym_comment_token1] = ACTIONS(101),
    [aux_sym_comment_token2] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_namespace] = ACTIONS(99),
    [sym_identifier] = ACTIONS(99),
    [sym_camel_cased_identifier] = ACTIONS(99),
    [sym_uppercased_identifier] = ACTIONS(99),
  },
  [16] = {
    [anon_sym_abstract] = ACTIONS(103),
    [anon_sym_const] = ACTIONS(103),
    [anon_sym_dynamic] = ACTIONS(103),
    [anon_sym_ensures] = ACTIONS(103),
    [anon_sym_extern] = ACTIONS(103),
    [anon_sym_inline] = ACTIONS(103),
    [anon_sym_internal] = ACTIONS(103),
    [anon_sym_override] = ACTIONS(103),
    [anon_sym_private] = ACTIONS(103),
    [anon_sym_protected] = ACTIONS(103),
    [anon_sym_public] = ACTIONS(103),
    [anon_sym_requires] = ACTIONS(103),
    [anon_sym_signal] = ACTIONS(103),
    [anon_sym_static] = ACTIONS(103),
    [anon_sym_virtual] = ACTIONS(103),
    [anon_sym_volatile] = ACTIONS(103),
    [anon_sym_weak] = ACTIONS(103),
    [anon_sym_async] = ACTIONS(103),
    [anon_sym_owned] = ACTIONS(103),
    [anon_sym_unowned] = ACTIONS(103),
    [anon_sym_ref] = ACTIONS(103),
    [anon_sym_out] = ACTIONS(103),
    [anon_sym_bool] = ACTIONS(103),
    [anon_sym_char] = ACTIONS(103),
    [anon_sym_double] = ACTIONS(103),
    [anon_sym_float] = ACTIONS(103),
    [anon_sym_size_t] = ACTIONS(103),
    [anon_sym_ssize_t] = ACTIONS(103),
    [anon_sym_string] = ACTIONS(103),
    [anon_sym_unichar] = ACTIONS(103),
    [anon_sym_void] = ACTIONS(103),
    [anon_sym_int] = ACTIONS(103),
    [anon_sym_int8] = ACTIONS(105),
    [anon_sym_int16] = ACTIONS(105),
    [anon_sym_int32] = ACTIONS(105),
    [anon_sym_int64] = ACTIONS(105),
    [anon_sym_long] = ACTIONS(103),
    [anon_sym_short] = ACTIONS(103),
    [anon_sym_uchar] = ACTIONS(103),
    [anon_sym_uint] = ACTIONS(103),
    [anon_sym_uint8] = ACTIONS(105),
    [anon_sym_uint16] = ACTIONS(105),
    [anon_sym_uint32] = ACTIONS(105),
    [anon_sym_uint64] = ACTIONS(105),
    [anon_sym_ulong] = ACTIONS(103),
    [anon_sym_ushort] = ACTIONS(103),
    [aux_sym_comment_token1] = ACTIONS(105),
    [aux_sym_comment_token2] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_namespace] = ACTIONS(103),
    [sym_identifier] = ACTIONS(103),
    [sym_camel_cased_identifier] = ACTIONS(103),
    [sym_uppercased_identifier] = ACTIONS(103),
  },
  [17] = {
    [sym_modifier] = STATE(26),
    [sym__type] = STATE(45),
    [sym_primitive_type] = STATE(45),
    [sym_parameter] = STATE(50),
    [aux_sym_function_definition_repeat1] = STATE(26),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_ensures] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_requires] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_virtual] = ACTIONS(5),
    [anon_sym_volatile] = ACTIONS(5),
    [anon_sym_weak] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(5),
    [anon_sym_owned] = ACTIONS(5),
    [anon_sym_unowned] = ACTIONS(5),
    [anon_sym_ref] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_size_t] = ACTIONS(7),
    [anon_sym_ssize_t] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_unichar] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(107),
  },
  [18] = {
    [sym_modifier] = STATE(26),
    [sym__type] = STATE(45),
    [sym_primitive_type] = STATE(45),
    [sym_parameter] = STATE(55),
    [aux_sym_function_definition_repeat1] = STATE(26),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_ensures] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_requires] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_virtual] = ACTIONS(5),
    [anon_sym_volatile] = ACTIONS(5),
    [anon_sym_weak] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(5),
    [anon_sym_owned] = ACTIONS(5),
    [anon_sym_unowned] = ACTIONS(5),
    [anon_sym_ref] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_size_t] = ACTIONS(7),
    [anon_sym_ssize_t] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_unichar] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_abstract] = ACTIONS(81),
    [anon_sym_const] = ACTIONS(81),
    [anon_sym_dynamic] = ACTIONS(81),
    [anon_sym_ensures] = ACTIONS(81),
    [anon_sym_extern] = ACTIONS(81),
    [anon_sym_inline] = ACTIONS(81),
    [anon_sym_internal] = ACTIONS(81),
    [anon_sym_override] = ACTIONS(81),
    [anon_sym_private] = ACTIONS(81),
    [anon_sym_protected] = ACTIONS(81),
    [anon_sym_public] = ACTIONS(81),
    [anon_sym_requires] = ACTIONS(81),
    [anon_sym_signal] = ACTIONS(81),
    [anon_sym_static] = ACTIONS(81),
    [anon_sym_virtual] = ACTIONS(81),
    [anon_sym_volatile] = ACTIONS(81),
    [anon_sym_weak] = ACTIONS(81),
    [anon_sym_async] = ACTIONS(81),
    [anon_sym_owned] = ACTIONS(81),
    [anon_sym_unowned] = ACTIONS(81),
    [anon_sym_ref] = ACTIONS(81),
    [anon_sym_out] = ACTIONS(81),
    [anon_sym_bool] = ACTIONS(81),
    [anon_sym_char] = ACTIONS(81),
    [anon_sym_double] = ACTIONS(81),
    [anon_sym_float] = ACTIONS(81),
    [anon_sym_size_t] = ACTIONS(81),
    [anon_sym_ssize_t] = ACTIONS(81),
    [anon_sym_string] = ACTIONS(81),
    [anon_sym_unichar] = ACTIONS(81),
    [anon_sym_void] = ACTIONS(81),
    [anon_sym_int] = ACTIONS(79),
    [anon_sym_int8] = ACTIONS(81),
    [anon_sym_int16] = ACTIONS(81),
    [anon_sym_int32] = ACTIONS(81),
    [anon_sym_int64] = ACTIONS(81),
    [anon_sym_long] = ACTIONS(81),
    [anon_sym_short] = ACTIONS(81),
    [anon_sym_uchar] = ACTIONS(81),
    [anon_sym_uint] = ACTIONS(79),
    [anon_sym_uint8] = ACTIONS(81),
    [anon_sym_uint16] = ACTIONS(81),
    [anon_sym_uint32] = ACTIONS(81),
    [anon_sym_uint64] = ACTIONS(81),
    [anon_sym_ulong] = ACTIONS(81),
    [anon_sym_ushort] = ACTIONS(81),
    [aux_sym_comment_token1] = ACTIONS(81),
    [aux_sym_comment_token2] = ACTIONS(81),
    [anon_sym_namespace] = ACTIONS(81),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_abstract] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_dynamic] = ACTIONS(89),
    [anon_sym_ensures] = ACTIONS(89),
    [anon_sym_extern] = ACTIONS(89),
    [anon_sym_inline] = ACTIONS(89),
    [anon_sym_internal] = ACTIONS(89),
    [anon_sym_override] = ACTIONS(89),
    [anon_sym_private] = ACTIONS(89),
    [anon_sym_protected] = ACTIONS(89),
    [anon_sym_public] = ACTIONS(89),
    [anon_sym_requires] = ACTIONS(89),
    [anon_sym_signal] = ACTIONS(89),
    [anon_sym_static] = ACTIONS(89),
    [anon_sym_virtual] = ACTIONS(89),
    [anon_sym_volatile] = ACTIONS(89),
    [anon_sym_weak] = ACTIONS(89),
    [anon_sym_async] = ACTIONS(89),
    [anon_sym_owned] = ACTIONS(89),
    [anon_sym_unowned] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_bool] = ACTIONS(89),
    [anon_sym_char] = ACTIONS(89),
    [anon_sym_double] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(89),
    [anon_sym_size_t] = ACTIONS(89),
    [anon_sym_ssize_t] = ACTIONS(89),
    [anon_sym_string] = ACTIONS(89),
    [anon_sym_unichar] = ACTIONS(89),
    [anon_sym_void] = ACTIONS(89),
    [anon_sym_int] = ACTIONS(87),
    [anon_sym_int8] = ACTIONS(89),
    [anon_sym_int16] = ACTIONS(89),
    [anon_sym_int32] = ACTIONS(89),
    [anon_sym_int64] = ACTIONS(89),
    [anon_sym_long] = ACTIONS(89),
    [anon_sym_short] = ACTIONS(89),
    [anon_sym_uchar] = ACTIONS(89),
    [anon_sym_uint] = ACTIONS(87),
    [anon_sym_uint8] = ACTIONS(89),
    [anon_sym_uint16] = ACTIONS(89),
    [anon_sym_uint32] = ACTIONS(89),
    [anon_sym_uint64] = ACTIONS(89),
    [anon_sym_ulong] = ACTIONS(89),
    [anon_sym_ushort] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(89),
    [aux_sym_comment_token2] = ACTIONS(89),
    [anon_sym_namespace] = ACTIONS(89),
  },
  [21] = {
    [sym_modifier] = STATE(28),
    [sym__type] = STATE(40),
    [sym_primitive_type] = STATE(40),
    [aux_sym_function_definition_repeat1] = STATE(28),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_ensures] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_requires] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_virtual] = ACTIONS(5),
    [anon_sym_volatile] = ACTIONS(5),
    [anon_sym_weak] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(5),
    [anon_sym_owned] = ACTIONS(5),
    [anon_sym_unowned] = ACTIONS(5),
    [anon_sym_ref] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_size_t] = ACTIONS(7),
    [anon_sym_ssize_t] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_unichar] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_abstract] = ACTIONS(97),
    [anon_sym_const] = ACTIONS(97),
    [anon_sym_dynamic] = ACTIONS(97),
    [anon_sym_ensures] = ACTIONS(97),
    [anon_sym_extern] = ACTIONS(97),
    [anon_sym_inline] = ACTIONS(97),
    [anon_sym_internal] = ACTIONS(97),
    [anon_sym_override] = ACTIONS(97),
    [anon_sym_private] = ACTIONS(97),
    [anon_sym_protected] = ACTIONS(97),
    [anon_sym_public] = ACTIONS(97),
    [anon_sym_requires] = ACTIONS(97),
    [anon_sym_signal] = ACTIONS(97),
    [anon_sym_static] = ACTIONS(97),
    [anon_sym_virtual] = ACTIONS(97),
    [anon_sym_volatile] = ACTIONS(97),
    [anon_sym_weak] = ACTIONS(97),
    [anon_sym_async] = ACTIONS(97),
    [anon_sym_owned] = ACTIONS(97),
    [anon_sym_unowned] = ACTIONS(97),
    [anon_sym_ref] = ACTIONS(97),
    [anon_sym_out] = ACTIONS(97),
    [anon_sym_bool] = ACTIONS(97),
    [anon_sym_char] = ACTIONS(97),
    [anon_sym_double] = ACTIONS(97),
    [anon_sym_float] = ACTIONS(97),
    [anon_sym_size_t] = ACTIONS(97),
    [anon_sym_ssize_t] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(97),
    [anon_sym_unichar] = ACTIONS(97),
    [anon_sym_void] = ACTIONS(97),
    [anon_sym_int] = ACTIONS(95),
    [anon_sym_int8] = ACTIONS(97),
    [anon_sym_int16] = ACTIONS(97),
    [anon_sym_int32] = ACTIONS(97),
    [anon_sym_int64] = ACTIONS(97),
    [anon_sym_long] = ACTIONS(97),
    [anon_sym_short] = ACTIONS(97),
    [anon_sym_uchar] = ACTIONS(97),
    [anon_sym_uint] = ACTIONS(95),
    [anon_sym_uint8] = ACTIONS(97),
    [anon_sym_uint16] = ACTIONS(97),
    [anon_sym_uint32] = ACTIONS(97),
    [anon_sym_uint64] = ACTIONS(97),
    [anon_sym_ulong] = ACTIONS(97),
    [anon_sym_ushort] = ACTIONS(97),
    [aux_sym_comment_token1] = ACTIONS(97),
    [aux_sym_comment_token2] = ACTIONS(97),
    [anon_sym_namespace] = ACTIONS(97),
  },
  [23] = {
    [sym_modifier] = STATE(28),
    [sym__type] = STATE(47),
    [sym_primitive_type] = STATE(47),
    [aux_sym_function_definition_repeat1] = STATE(28),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_ensures] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_requires] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_virtual] = ACTIONS(5),
    [anon_sym_volatile] = ACTIONS(5),
    [anon_sym_weak] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(5),
    [anon_sym_owned] = ACTIONS(5),
    [anon_sym_unowned] = ACTIONS(5),
    [anon_sym_ref] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_size_t] = ACTIONS(7),
    [anon_sym_ssize_t] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_unichar] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_abstract] = ACTIONS(77),
    [anon_sym_const] = ACTIONS(77),
    [anon_sym_dynamic] = ACTIONS(77),
    [anon_sym_ensures] = ACTIONS(77),
    [anon_sym_extern] = ACTIONS(77),
    [anon_sym_inline] = ACTIONS(77),
    [anon_sym_internal] = ACTIONS(77),
    [anon_sym_override] = ACTIONS(77),
    [anon_sym_private] = ACTIONS(77),
    [anon_sym_protected] = ACTIONS(77),
    [anon_sym_public] = ACTIONS(77),
    [anon_sym_requires] = ACTIONS(77),
    [anon_sym_signal] = ACTIONS(77),
    [anon_sym_static] = ACTIONS(77),
    [anon_sym_virtual] = ACTIONS(77),
    [anon_sym_volatile] = ACTIONS(77),
    [anon_sym_weak] = ACTIONS(77),
    [anon_sym_async] = ACTIONS(77),
    [anon_sym_owned] = ACTIONS(77),
    [anon_sym_unowned] = ACTIONS(77),
    [anon_sym_ref] = ACTIONS(77),
    [anon_sym_out] = ACTIONS(77),
    [anon_sym_bool] = ACTIONS(77),
    [anon_sym_char] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_size_t] = ACTIONS(77),
    [anon_sym_ssize_t] = ACTIONS(77),
    [anon_sym_string] = ACTIONS(77),
    [anon_sym_unichar] = ACTIONS(77),
    [anon_sym_void] = ACTIONS(77),
    [anon_sym_int] = ACTIONS(75),
    [anon_sym_int8] = ACTIONS(77),
    [anon_sym_int16] = ACTIONS(77),
    [anon_sym_int32] = ACTIONS(77),
    [anon_sym_int64] = ACTIONS(77),
    [anon_sym_long] = ACTIONS(77),
    [anon_sym_short] = ACTIONS(77),
    [anon_sym_uchar] = ACTIONS(77),
    [anon_sym_uint] = ACTIONS(75),
    [anon_sym_uint8] = ACTIONS(77),
    [anon_sym_uint16] = ACTIONS(77),
    [anon_sym_uint32] = ACTIONS(77),
    [anon_sym_uint64] = ACTIONS(77),
    [anon_sym_ulong] = ACTIONS(77),
    [anon_sym_ushort] = ACTIONS(77),
    [aux_sym_comment_token1] = ACTIONS(77),
    [aux_sym_comment_token2] = ACTIONS(77),
    [anon_sym_namespace] = ACTIONS(77),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(93),
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
    [anon_sym_bool] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(93),
    [anon_sym_double] = ACTIONS(93),
    [anon_sym_float] = ACTIONS(93),
    [anon_sym_size_t] = ACTIONS(93),
    [anon_sym_ssize_t] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(93),
    [anon_sym_unichar] = ACTIONS(93),
    [anon_sym_void] = ACTIONS(93),
    [anon_sym_int] = ACTIONS(91),
    [anon_sym_int8] = ACTIONS(93),
    [anon_sym_int16] = ACTIONS(93),
    [anon_sym_int32] = ACTIONS(93),
    [anon_sym_int64] = ACTIONS(93),
    [anon_sym_long] = ACTIONS(93),
    [anon_sym_short] = ACTIONS(93),
    [anon_sym_uchar] = ACTIONS(93),
    [anon_sym_uint] = ACTIONS(91),
    [anon_sym_uint8] = ACTIONS(93),
    [anon_sym_uint16] = ACTIONS(93),
    [anon_sym_uint32] = ACTIONS(93),
    [anon_sym_uint64] = ACTIONS(93),
    [anon_sym_ulong] = ACTIONS(93),
    [anon_sym_ushort] = ACTIONS(93),
    [aux_sym_comment_token1] = ACTIONS(93),
    [aux_sym_comment_token2] = ACTIONS(93),
    [anon_sym_namespace] = ACTIONS(93),
  },
  [26] = {
    [sym_modifier] = STATE(28),
    [sym__type] = STATE(46),
    [sym_primitive_type] = STATE(46),
    [aux_sym_function_definition_repeat1] = STATE(28),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_ensures] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_requires] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(5),
    [anon_sym_static] = ACTIONS(5),
    [anon_sym_virtual] = ACTIONS(5),
    [anon_sym_volatile] = ACTIONS(5),
    [anon_sym_weak] = ACTIONS(5),
    [anon_sym_async] = ACTIONS(5),
    [anon_sym_owned] = ACTIONS(5),
    [anon_sym_unowned] = ACTIONS(5),
    [anon_sym_ref] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_char] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_float] = ACTIONS(7),
    [anon_sym_size_t] = ACTIONS(7),
    [anon_sym_ssize_t] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_unichar] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_int8] = ACTIONS(7),
    [anon_sym_int16] = ACTIONS(7),
    [anon_sym_int32] = ACTIONS(7),
    [anon_sym_int64] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(9),
    [anon_sym_uint8] = ACTIONS(7),
    [anon_sym_uint16] = ACTIONS(7),
    [anon_sym_uint32] = ACTIONS(7),
    [anon_sym_uint64] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_abstract] = ACTIONS(85),
    [anon_sym_const] = ACTIONS(85),
    [anon_sym_dynamic] = ACTIONS(85),
    [anon_sym_ensures] = ACTIONS(85),
    [anon_sym_extern] = ACTIONS(85),
    [anon_sym_inline] = ACTIONS(85),
    [anon_sym_internal] = ACTIONS(85),
    [anon_sym_override] = ACTIONS(85),
    [anon_sym_private] = ACTIONS(85),
    [anon_sym_protected] = ACTIONS(85),
    [anon_sym_public] = ACTIONS(85),
    [anon_sym_requires] = ACTIONS(85),
    [anon_sym_signal] = ACTIONS(85),
    [anon_sym_static] = ACTIONS(85),
    [anon_sym_virtual] = ACTIONS(85),
    [anon_sym_volatile] = ACTIONS(85),
    [anon_sym_weak] = ACTIONS(85),
    [anon_sym_async] = ACTIONS(85),
    [anon_sym_owned] = ACTIONS(85),
    [anon_sym_unowned] = ACTIONS(85),
    [anon_sym_ref] = ACTIONS(85),
    [anon_sym_out] = ACTIONS(85),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_char] = ACTIONS(85),
    [anon_sym_double] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(85),
    [anon_sym_size_t] = ACTIONS(85),
    [anon_sym_ssize_t] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(85),
    [anon_sym_unichar] = ACTIONS(85),
    [anon_sym_void] = ACTIONS(85),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_int8] = ACTIONS(85),
    [anon_sym_int16] = ACTIONS(85),
    [anon_sym_int32] = ACTIONS(85),
    [anon_sym_int64] = ACTIONS(85),
    [anon_sym_long] = ACTIONS(85),
    [anon_sym_short] = ACTIONS(85),
    [anon_sym_uchar] = ACTIONS(85),
    [anon_sym_uint] = ACTIONS(83),
    [anon_sym_uint8] = ACTIONS(85),
    [anon_sym_uint16] = ACTIONS(85),
    [anon_sym_uint32] = ACTIONS(85),
    [anon_sym_uint64] = ACTIONS(85),
    [anon_sym_ulong] = ACTIONS(85),
    [anon_sym_ushort] = ACTIONS(85),
    [aux_sym_comment_token1] = ACTIONS(85),
    [aux_sym_comment_token2] = ACTIONS(85),
    [anon_sym_namespace] = ACTIONS(85),
  },
  [28] = {
    [sym_modifier] = STATE(28),
    [aux_sym_function_definition_repeat1] = STATE(28),
    [anon_sym_abstract] = ACTIONS(109),
    [anon_sym_const] = ACTIONS(109),
    [anon_sym_dynamic] = ACTIONS(109),
    [anon_sym_ensures] = ACTIONS(109),
    [anon_sym_extern] = ACTIONS(109),
    [anon_sym_inline] = ACTIONS(109),
    [anon_sym_internal] = ACTIONS(109),
    [anon_sym_override] = ACTIONS(109),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_public] = ACTIONS(109),
    [anon_sym_requires] = ACTIONS(109),
    [anon_sym_signal] = ACTIONS(109),
    [anon_sym_static] = ACTIONS(109),
    [anon_sym_virtual] = ACTIONS(109),
    [anon_sym_volatile] = ACTIONS(109),
    [anon_sym_weak] = ACTIONS(109),
    [anon_sym_async] = ACTIONS(109),
    [anon_sym_owned] = ACTIONS(109),
    [anon_sym_unowned] = ACTIONS(109),
    [anon_sym_ref] = ACTIONS(109),
    [anon_sym_out] = ACTIONS(109),
    [anon_sym_bool] = ACTIONS(112),
    [anon_sym_char] = ACTIONS(112),
    [anon_sym_double] = ACTIONS(112),
    [anon_sym_float] = ACTIONS(112),
    [anon_sym_size_t] = ACTIONS(112),
    [anon_sym_ssize_t] = ACTIONS(112),
    [anon_sym_string] = ACTIONS(112),
    [anon_sym_unichar] = ACTIONS(112),
    [anon_sym_void] = ACTIONS(112),
    [anon_sym_int] = ACTIONS(114),
    [anon_sym_int8] = ACTIONS(112),
    [anon_sym_int16] = ACTIONS(112),
    [anon_sym_int32] = ACTIONS(112),
    [anon_sym_int64] = ACTIONS(112),
    [anon_sym_long] = ACTIONS(112),
    [anon_sym_short] = ACTIONS(112),
    [anon_sym_uchar] = ACTIONS(112),
    [anon_sym_uint] = ACTIONS(114),
    [anon_sym_uint8] = ACTIONS(112),
    [anon_sym_uint16] = ACTIONS(112),
    [anon_sym_uint32] = ACTIONS(112),
    [anon_sym_uint64] = ACTIONS(112),
    [anon_sym_ulong] = ACTIONS(112),
    [anon_sym_ushort] = ACTIONS(112),
  },
  [29] = {
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
    [anon_sym_bool] = ACTIONS(116),
    [anon_sym_char] = ACTIONS(116),
    [anon_sym_double] = ACTIONS(116),
    [anon_sym_float] = ACTIONS(116),
    [anon_sym_size_t] = ACTIONS(116),
    [anon_sym_ssize_t] = ACTIONS(116),
    [anon_sym_string] = ACTIONS(116),
    [anon_sym_unichar] = ACTIONS(116),
    [anon_sym_void] = ACTIONS(116),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_int8] = ACTIONS(116),
    [anon_sym_int16] = ACTIONS(116),
    [anon_sym_int32] = ACTIONS(116),
    [anon_sym_int64] = ACTIONS(116),
    [anon_sym_long] = ACTIONS(116),
    [anon_sym_short] = ACTIONS(116),
    [anon_sym_uchar] = ACTIONS(116),
    [anon_sym_uint] = ACTIONS(118),
    [anon_sym_uint8] = ACTIONS(116),
    [anon_sym_uint16] = ACTIONS(116),
    [anon_sym_uint32] = ACTIONS(116),
    [anon_sym_uint64] = ACTIONS(116),
    [anon_sym_ulong] = ACTIONS(116),
    [anon_sym_ushort] = ACTIONS(116),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(122), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(39), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [19] = 4,
    ACTIONS(128), 1,
      sym_number,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(126), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(37), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [38] = 4,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(130), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(38), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [57] = 4,
    ACTIONS(136), 1,
      sym_number,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(134), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(35), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [76] = 4,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(120), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(138), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(36), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [95] = 2,
    ACTIONS(144), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(142), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
  [105] = 3,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(144), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [117] = 1,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [125] = 3,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(144), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [137] = 1,
    ACTIONS(142), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [145] = 2,
    STATE(62), 1,
      sym__identifiers,
    ACTIONS(154), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [154] = 2,
    STATE(61), 1,
      sym__identifiers,
    ACTIONS(156), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [163] = 2,
    STATE(52), 1,
      sym__identifiers,
    ACTIONS(158), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [172] = 2,
    STATE(54), 1,
      sym__identifiers,
    ACTIONS(160), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [181] = 2,
    STATE(53), 1,
      sym__identifiers,
    ACTIONS(162), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [190] = 2,
    STATE(60), 1,
      sym__identifiers,
    ACTIONS(164), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [199] = 2,
    STATE(57), 1,
      sym__identifiers,
    ACTIONS(166), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [208] = 2,
    STATE(56), 1,
      sym__identifiers,
    ACTIONS(168), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [217] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_parameter_list_repeat1,
  [227] = 1,
    ACTIONS(174), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [233] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameter_list_repeat1,
  [243] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_parameter_list_repeat1,
  [253] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [260] = 2,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_parameter_list,
  [267] = 2,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [274] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [279] = 2,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_parameter_list,
  [286] = 1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [291] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
  [298] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
  [305] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [310] = 2,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_parameter_list,
  [317] = 2,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_parameter_list,
  [324] = 2,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [331] = 2,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [338] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [342] = 1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
  [346] = 1,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
  [350] = 1,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
  [354] = 1,
    ACTIONS(201), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 19,
  [SMALL_STATE(32)] = 38,
  [SMALL_STATE(33)] = 57,
  [SMALL_STATE(34)] = 76,
  [SMALL_STATE(35)] = 95,
  [SMALL_STATE(36)] = 105,
  [SMALL_STATE(37)] = 117,
  [SMALL_STATE(38)] = 125,
  [SMALL_STATE(39)] = 137,
  [SMALL_STATE(40)] = 145,
  [SMALL_STATE(41)] = 154,
  [SMALL_STATE(42)] = 163,
  [SMALL_STATE(43)] = 172,
  [SMALL_STATE(44)] = 181,
  [SMALL_STATE(45)] = 190,
  [SMALL_STATE(46)] = 199,
  [SMALL_STATE(47)] = 208,
  [SMALL_STATE(48)] = 217,
  [SMALL_STATE(49)] = 227,
  [SMALL_STATE(50)] = 233,
  [SMALL_STATE(51)] = 243,
  [SMALL_STATE(52)] = 253,
  [SMALL_STATE(53)] = 260,
  [SMALL_STATE(54)] = 267,
  [SMALL_STATE(55)] = 274,
  [SMALL_STATE(56)] = 279,
  [SMALL_STATE(57)] = 286,
  [SMALL_STATE(58)] = 291,
  [SMALL_STATE(59)] = 298,
  [SMALL_STATE(60)] = 305,
  [SMALL_STATE(61)] = 310,
  [SMALL_STATE(62)] = 317,
  [SMALL_STATE(63)] = 324,
  [SMALL_STATE(64)] = 331,
  [SMALL_STATE(65)] = 338,
  [SMALL_STATE(66)] = 342,
  [SMALL_STATE(67)] = 346,
  [SMALL_STATE(68)] = 350,
  [SMALL_STATE(69)] = 354,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(29),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(18),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
