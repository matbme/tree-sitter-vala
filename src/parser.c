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
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 40
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_var = 57,
  anon_sym_namespace = 58,
  anon_sym_DASH = 59,
  anon_sym_BANG = 60,
  anon_sym_STAR = 61,
  anon_sym_SLASH = 62,
  anon_sym_PLUS = 63,
  sym_identifier = 64,
  sym_camel_cased_identifier = 65,
  sym_uppercased_identifier = 66,
  sym_number = 67,
  sym_source_file = 68,
  sym__top_level = 69,
  sym_function_definition = 70,
  sym_modifier = 71,
  sym__type = 72,
  sym_primitive_type = 73,
  sym_comment = 74,
  sym_parameter_list = 75,
  sym_parameter = 76,
  sym_block = 77,
  sym__statement = 78,
  sym_return_statement = 79,
  sym_assignment = 80,
  sym_declaration = 81,
  sym_namespace = 82,
  sym__expression = 83,
  sym_unary_expression = 84,
  sym_binary_expression = 85,
  sym__identifiers = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_function_definition_repeat1 = 88,
  aux_sym_parameter_list_repeat1 = 89,
  aux_sym_block_repeat1 = 90,
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
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
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
  [sym_declaration] = "declaration",
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
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
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
  [sym_declaration] = sym_declaration,
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
      if (eof) ADVANCE(166);
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '(') ADVANCE(253);
      if (lookahead == ')') ADVANCE(255);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '_') ADVANCE(270);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(274);
      if (lookahead == 'w') ADVANCE(315);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(265);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '_') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(255);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == ';') ADVANCE(259);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(233);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(245);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(234);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(246);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(232);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(244);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'q') ADVANCE(153);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(102);
      if (lookahead == 'z') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 157:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 158:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 160:
      if (lookahead == 'z') ADVANCE(58);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(163);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(252);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(163);
      if (lookahead == '*') ADVANCE(161);
      END_STATE();
    case 164:
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '_') ADVANCE(270);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(274);
      if (lookahead == 'w') ADVANCE(315);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ensures);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_override);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_requires);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_signal);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_signal);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_weak);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_async);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_owned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_unowned);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_unowned);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_unichar);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_unichar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_uchar);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_uchar);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(163);
      if (lookahead == '*') ADVANCE(161);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(436);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(411);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(413);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == 's') ADVANCE(431);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(353);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(355);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'q') ADVANCE(424);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(369);
      if (lookahead == 'z') ADVANCE(307);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(433);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(382);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(200);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == 'x') ADVANCE(421);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 'y') ADVANCE(373);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(319);
      if (lookahead == 'w') ADVANCE(367);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(288);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(372);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(365);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(324);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (lookahead == '_') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(434);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_camel_cased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(435);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_uppercased_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(437);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 165},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 165},
  [11] = {.lex_state = 165},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 165},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 165},
  [19] = {.lex_state = 165},
  [20] = {.lex_state = 165},
  [21] = {.lex_state = 165},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 165},
  [24] = {.lex_state = 165},
  [25] = {.lex_state = 165},
  [26] = {.lex_state = 165},
  [27] = {.lex_state = 165},
  [28] = {.lex_state = 165},
  [29] = {.lex_state = 165},
  [30] = {.lex_state = 165},
  [31] = {.lex_state = 165},
  [32] = {.lex_state = 165},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(100),
    [sym__top_level] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_modifier] = STATE(35),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(7),
    [sym__statement] = STATE(7),
    [sym_return_statement] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_declaration] = STATE(7),
    [sym_namespace] = STATE(7),
    [sym__identifiers] = STATE(97),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_function_definition_repeat1] = STATE(35),
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
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(11),
    [aux_sym_comment_token2] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_namespace] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_camel_cased_identifier] = ACTIONS(19),
    [sym_uppercased_identifier] = ACTIONS(19),
  },
  [2] = {
    [sym__top_level] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_modifier] = STATE(35),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym__identifiers] = STATE(97),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_abstract] = ACTIONS(23),
    [anon_sym_const] = ACTIONS(23),
    [anon_sym_dynamic] = ACTIONS(23),
    [anon_sym_ensures] = ACTIONS(23),
    [anon_sym_extern] = ACTIONS(23),
    [anon_sym_inline] = ACTIONS(23),
    [anon_sym_internal] = ACTIONS(23),
    [anon_sym_override] = ACTIONS(23),
    [anon_sym_private] = ACTIONS(23),
    [anon_sym_protected] = ACTIONS(23),
    [anon_sym_public] = ACTIONS(23),
    [anon_sym_requires] = ACTIONS(23),
    [anon_sym_signal] = ACTIONS(23),
    [anon_sym_static] = ACTIONS(23),
    [anon_sym_virtual] = ACTIONS(23),
    [anon_sym_volatile] = ACTIONS(23),
    [anon_sym_weak] = ACTIONS(23),
    [anon_sym_async] = ACTIONS(23),
    [anon_sym_owned] = ACTIONS(23),
    [anon_sym_unowned] = ACTIONS(23),
    [anon_sym_ref] = ACTIONS(23),
    [anon_sym_out] = ACTIONS(23),
    [anon_sym_bool] = ACTIONS(26),
    [anon_sym_char] = ACTIONS(26),
    [anon_sym_double] = ACTIONS(26),
    [anon_sym_float] = ACTIONS(26),
    [anon_sym_size_t] = ACTIONS(26),
    [anon_sym_ssize_t] = ACTIONS(26),
    [anon_sym_string] = ACTIONS(26),
    [anon_sym_unichar] = ACTIONS(26),
    [anon_sym_void] = ACTIONS(26),
    [anon_sym_int] = ACTIONS(26),
    [anon_sym_int8] = ACTIONS(29),
    [anon_sym_int16] = ACTIONS(29),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_long] = ACTIONS(26),
    [anon_sym_short] = ACTIONS(26),
    [anon_sym_uchar] = ACTIONS(26),
    [anon_sym_uint] = ACTIONS(26),
    [anon_sym_uint8] = ACTIONS(29),
    [anon_sym_uint16] = ACTIONS(29),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_ulong] = ACTIONS(26),
    [anon_sym_ushort] = ACTIONS(26),
    [aux_sym_comment_token1] = ACTIONS(32),
    [aux_sym_comment_token2] = ACTIONS(32),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_var] = ACTIONS(38),
    [anon_sym_namespace] = ACTIONS(41),
    [sym_identifier] = ACTIONS(44),
    [sym_camel_cased_identifier] = ACTIONS(44),
    [sym_uppercased_identifier] = ACTIONS(44),
  },
  [3] = {
    [sym__top_level] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_modifier] = STATE(36),
    [sym__type] = STATE(70),
    [sym_primitive_type] = STATE(70),
    [sym_comment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym__identifiers] = STATE(99),
    [aux_sym_function_definition_repeat1] = STATE(36),
    [aux_sym_block_repeat1] = STATE(5),
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
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(47),
    [aux_sym_comment_token2] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_namespace] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_camel_cased_identifier] = ACTIONS(57),
    [sym_uppercased_identifier] = ACTIONS(57),
  },
  [4] = {
    [sym__top_level] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_modifier] = STATE(36),
    [sym__type] = STATE(70),
    [sym_primitive_type] = STATE(70),
    [sym_comment] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym__identifiers] = STATE(99),
    [aux_sym_function_definition_repeat1] = STATE(36),
    [aux_sym_block_repeat1] = STATE(3),
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
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(47),
    [aux_sym_comment_token2] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_namespace] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_camel_cased_identifier] = ACTIONS(57),
    [sym_uppercased_identifier] = ACTIONS(57),
  },
  [5] = {
    [sym__top_level] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_modifier] = STATE(36),
    [sym__type] = STATE(70),
    [sym_primitive_type] = STATE(70),
    [sym_comment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym__identifiers] = STATE(99),
    [aux_sym_function_definition_repeat1] = STATE(36),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_abstract] = ACTIONS(61),
    [anon_sym_const] = ACTIONS(61),
    [anon_sym_dynamic] = ACTIONS(61),
    [anon_sym_ensures] = ACTIONS(61),
    [anon_sym_extern] = ACTIONS(61),
    [anon_sym_inline] = ACTIONS(61),
    [anon_sym_internal] = ACTIONS(61),
    [anon_sym_override] = ACTIONS(61),
    [anon_sym_private] = ACTIONS(61),
    [anon_sym_protected] = ACTIONS(61),
    [anon_sym_public] = ACTIONS(61),
    [anon_sym_requires] = ACTIONS(61),
    [anon_sym_signal] = ACTIONS(61),
    [anon_sym_static] = ACTIONS(61),
    [anon_sym_virtual] = ACTIONS(61),
    [anon_sym_volatile] = ACTIONS(61),
    [anon_sym_weak] = ACTIONS(61),
    [anon_sym_async] = ACTIONS(61),
    [anon_sym_owned] = ACTIONS(61),
    [anon_sym_unowned] = ACTIONS(61),
    [anon_sym_ref] = ACTIONS(61),
    [anon_sym_out] = ACTIONS(61),
    [anon_sym_bool] = ACTIONS(64),
    [anon_sym_char] = ACTIONS(64),
    [anon_sym_double] = ACTIONS(64),
    [anon_sym_float] = ACTIONS(64),
    [anon_sym_size_t] = ACTIONS(64),
    [anon_sym_ssize_t] = ACTIONS(64),
    [anon_sym_string] = ACTIONS(64),
    [anon_sym_unichar] = ACTIONS(64),
    [anon_sym_void] = ACTIONS(64),
    [anon_sym_int] = ACTIONS(64),
    [anon_sym_int8] = ACTIONS(67),
    [anon_sym_int16] = ACTIONS(67),
    [anon_sym_int32] = ACTIONS(67),
    [anon_sym_int64] = ACTIONS(67),
    [anon_sym_long] = ACTIONS(64),
    [anon_sym_short] = ACTIONS(64),
    [anon_sym_uchar] = ACTIONS(64),
    [anon_sym_uint] = ACTIONS(64),
    [anon_sym_uint8] = ACTIONS(67),
    [anon_sym_uint16] = ACTIONS(67),
    [anon_sym_uint32] = ACTIONS(67),
    [anon_sym_uint64] = ACTIONS(67),
    [anon_sym_ulong] = ACTIONS(64),
    [anon_sym_ushort] = ACTIONS(64),
    [aux_sym_comment_token1] = ACTIONS(70),
    [aux_sym_comment_token2] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_var] = ACTIONS(78),
    [anon_sym_namespace] = ACTIONS(81),
    [sym_identifier] = ACTIONS(84),
    [sym_camel_cased_identifier] = ACTIONS(84),
    [sym_uppercased_identifier] = ACTIONS(84),
  },
  [6] = {
    [sym__top_level] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_modifier] = STATE(36),
    [sym__type] = STATE(70),
    [sym_primitive_type] = STATE(70),
    [sym_comment] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_declaration] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym__identifiers] = STATE(99),
    [aux_sym_function_definition_repeat1] = STATE(36),
    [aux_sym_block_repeat1] = STATE(5),
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
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(47),
    [aux_sym_comment_token2] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_namespace] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_camel_cased_identifier] = ACTIONS(57),
    [sym_uppercased_identifier] = ACTIONS(57),
  },
  [7] = {
    [sym__top_level] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_modifier] = STATE(35),
    [sym__type] = STATE(77),
    [sym_primitive_type] = STATE(77),
    [sym_comment] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym__identifiers] = STATE(97),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(89),
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
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(11),
    [aux_sym_comment_token2] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_namespace] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_camel_cased_identifier] = ACTIONS(19),
    [sym_uppercased_identifier] = ACTIONS(19),
  },
  [8] = {
    [sym__top_level] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_modifier] = STATE(36),
    [sym__type] = STATE(70),
    [sym_primitive_type] = STATE(70),
    [sym_comment] = STATE(6),
    [sym__statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_declaration] = STATE(6),
    [sym_namespace] = STATE(6),
    [sym__identifiers] = STATE(99),
    [aux_sym_function_definition_repeat1] = STATE(36),
    [aux_sym_block_repeat1] = STATE(6),
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
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_uchar] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(47),
    [aux_sym_comment_token2] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_var] = ACTIONS(53),
    [anon_sym_namespace] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_camel_cased_identifier] = ACTIONS(57),
    [sym_uppercased_identifier] = ACTIONS(57),
  },
  [9] = {
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
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_int8] = ACTIONS(95),
    [anon_sym_int16] = ACTIONS(95),
    [anon_sym_int32] = ACTIONS(95),
    [anon_sym_int64] = ACTIONS(95),
    [anon_sym_long] = ACTIONS(93),
    [anon_sym_short] = ACTIONS(93),
    [anon_sym_uchar] = ACTIONS(93),
    [anon_sym_uint] = ACTIONS(93),
    [anon_sym_uint8] = ACTIONS(95),
    [anon_sym_uint16] = ACTIONS(95),
    [anon_sym_uint32] = ACTIONS(95),
    [anon_sym_uint64] = ACTIONS(95),
    [anon_sym_ulong] = ACTIONS(93),
    [anon_sym_ushort] = ACTIONS(93),
    [aux_sym_comment_token1] = ACTIONS(95),
    [aux_sym_comment_token2] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_return] = ACTIONS(93),
    [anon_sym_var] = ACTIONS(93),
    [anon_sym_namespace] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [sym_camel_cased_identifier] = ACTIONS(93),
    [sym_uppercased_identifier] = ACTIONS(93),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(97),
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
    [anon_sym_int8] = ACTIONS(97),
    [anon_sym_int16] = ACTIONS(97),
    [anon_sym_int32] = ACTIONS(97),
    [anon_sym_int64] = ACTIONS(97),
    [anon_sym_long] = ACTIONS(99),
    [anon_sym_short] = ACTIONS(99),
    [anon_sym_uchar] = ACTIONS(99),
    [anon_sym_uint] = ACTIONS(99),
    [anon_sym_uint8] = ACTIONS(97),
    [anon_sym_uint16] = ACTIONS(97),
    [anon_sym_uint32] = ACTIONS(97),
    [anon_sym_uint64] = ACTIONS(97),
    [anon_sym_ulong] = ACTIONS(99),
    [anon_sym_ushort] = ACTIONS(99),
    [aux_sym_comment_token1] = ACTIONS(97),
    [aux_sym_comment_token2] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_var] = ACTIONS(99),
    [anon_sym_namespace] = ACTIONS(99),
    [sym_identifier] = ACTIONS(99),
    [sym_camel_cased_identifier] = ACTIONS(99),
    [sym_uppercased_identifier] = ACTIONS(99),
  },
  [11] = {
    [anon_sym_abstract] = ACTIONS(101),
    [anon_sym_const] = ACTIONS(101),
    [anon_sym_dynamic] = ACTIONS(101),
    [anon_sym_ensures] = ACTIONS(101),
    [anon_sym_extern] = ACTIONS(101),
    [anon_sym_inline] = ACTIONS(101),
    [anon_sym_internal] = ACTIONS(101),
    [anon_sym_override] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_protected] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_requires] = ACTIONS(101),
    [anon_sym_signal] = ACTIONS(101),
    [anon_sym_static] = ACTIONS(101),
    [anon_sym_virtual] = ACTIONS(101),
    [anon_sym_volatile] = ACTIONS(101),
    [anon_sym_weak] = ACTIONS(101),
    [anon_sym_async] = ACTIONS(101),
    [anon_sym_owned] = ACTIONS(101),
    [anon_sym_unowned] = ACTIONS(101),
    [anon_sym_ref] = ACTIONS(101),
    [anon_sym_out] = ACTIONS(101),
    [anon_sym_bool] = ACTIONS(101),
    [anon_sym_char] = ACTIONS(101),
    [anon_sym_double] = ACTIONS(101),
    [anon_sym_float] = ACTIONS(101),
    [anon_sym_size_t] = ACTIONS(101),
    [anon_sym_ssize_t] = ACTIONS(101),
    [anon_sym_string] = ACTIONS(101),
    [anon_sym_unichar] = ACTIONS(101),
    [anon_sym_void] = ACTIONS(101),
    [anon_sym_int] = ACTIONS(101),
    [anon_sym_int8] = ACTIONS(103),
    [anon_sym_int16] = ACTIONS(103),
    [anon_sym_int32] = ACTIONS(103),
    [anon_sym_int64] = ACTIONS(103),
    [anon_sym_long] = ACTIONS(101),
    [anon_sym_short] = ACTIONS(101),
    [anon_sym_uchar] = ACTIONS(101),
    [anon_sym_uint] = ACTIONS(101),
    [anon_sym_uint8] = ACTIONS(103),
    [anon_sym_uint16] = ACTIONS(103),
    [anon_sym_uint32] = ACTIONS(103),
    [anon_sym_uint64] = ACTIONS(103),
    [anon_sym_ulong] = ACTIONS(101),
    [anon_sym_ushort] = ACTIONS(101),
    [aux_sym_comment_token1] = ACTIONS(103),
    [aux_sym_comment_token2] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(101),
    [anon_sym_var] = ACTIONS(101),
    [anon_sym_namespace] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_camel_cased_identifier] = ACTIONS(101),
    [sym_uppercased_identifier] = ACTIONS(101),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_abstract] = ACTIONS(107),
    [anon_sym_const] = ACTIONS(107),
    [anon_sym_dynamic] = ACTIONS(107),
    [anon_sym_ensures] = ACTIONS(107),
    [anon_sym_extern] = ACTIONS(107),
    [anon_sym_inline] = ACTIONS(107),
    [anon_sym_internal] = ACTIONS(107),
    [anon_sym_override] = ACTIONS(107),
    [anon_sym_private] = ACTIONS(107),
    [anon_sym_protected] = ACTIONS(107),
    [anon_sym_public] = ACTIONS(107),
    [anon_sym_requires] = ACTIONS(107),
    [anon_sym_signal] = ACTIONS(107),
    [anon_sym_static] = ACTIONS(107),
    [anon_sym_virtual] = ACTIONS(107),
    [anon_sym_volatile] = ACTIONS(107),
    [anon_sym_weak] = ACTIONS(107),
    [anon_sym_async] = ACTIONS(107),
    [anon_sym_owned] = ACTIONS(107),
    [anon_sym_unowned] = ACTIONS(107),
    [anon_sym_ref] = ACTIONS(107),
    [anon_sym_out] = ACTIONS(107),
    [anon_sym_bool] = ACTIONS(107),
    [anon_sym_char] = ACTIONS(107),
    [anon_sym_double] = ACTIONS(107),
    [anon_sym_float] = ACTIONS(107),
    [anon_sym_size_t] = ACTIONS(107),
    [anon_sym_ssize_t] = ACTIONS(107),
    [anon_sym_string] = ACTIONS(107),
    [anon_sym_unichar] = ACTIONS(107),
    [anon_sym_void] = ACTIONS(107),
    [anon_sym_int] = ACTIONS(107),
    [anon_sym_int8] = ACTIONS(105),
    [anon_sym_int16] = ACTIONS(105),
    [anon_sym_int32] = ACTIONS(105),
    [anon_sym_int64] = ACTIONS(105),
    [anon_sym_long] = ACTIONS(107),
    [anon_sym_short] = ACTIONS(107),
    [anon_sym_uchar] = ACTIONS(107),
    [anon_sym_uint] = ACTIONS(107),
    [anon_sym_uint8] = ACTIONS(105),
    [anon_sym_uint16] = ACTIONS(105),
    [anon_sym_uint32] = ACTIONS(105),
    [anon_sym_uint64] = ACTIONS(105),
    [anon_sym_ulong] = ACTIONS(107),
    [anon_sym_ushort] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(105),
    [aux_sym_comment_token2] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(107),
    [anon_sym_var] = ACTIONS(107),
    [anon_sym_namespace] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_camel_cased_identifier] = ACTIONS(107),
    [sym_uppercased_identifier] = ACTIONS(107),
  },
  [13] = {
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
    [anon_sym_bool] = ACTIONS(109),
    [anon_sym_char] = ACTIONS(109),
    [anon_sym_double] = ACTIONS(109),
    [anon_sym_float] = ACTIONS(109),
    [anon_sym_size_t] = ACTIONS(109),
    [anon_sym_ssize_t] = ACTIONS(109),
    [anon_sym_string] = ACTIONS(109),
    [anon_sym_unichar] = ACTIONS(109),
    [anon_sym_void] = ACTIONS(109),
    [anon_sym_int] = ACTIONS(109),
    [anon_sym_int8] = ACTIONS(111),
    [anon_sym_int16] = ACTIONS(111),
    [anon_sym_int32] = ACTIONS(111),
    [anon_sym_int64] = ACTIONS(111),
    [anon_sym_long] = ACTIONS(109),
    [anon_sym_short] = ACTIONS(109),
    [anon_sym_uchar] = ACTIONS(109),
    [anon_sym_uint] = ACTIONS(109),
    [anon_sym_uint8] = ACTIONS(111),
    [anon_sym_uint16] = ACTIONS(111),
    [anon_sym_uint32] = ACTIONS(111),
    [anon_sym_uint64] = ACTIONS(111),
    [anon_sym_ulong] = ACTIONS(109),
    [anon_sym_ushort] = ACTIONS(109),
    [aux_sym_comment_token1] = ACTIONS(111),
    [aux_sym_comment_token2] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_var] = ACTIONS(109),
    [anon_sym_namespace] = ACTIONS(109),
    [sym_identifier] = ACTIONS(109),
    [sym_camel_cased_identifier] = ACTIONS(109),
    [sym_uppercased_identifier] = ACTIONS(109),
  },
  [14] = {
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
    [anon_sym_int8] = ACTIONS(115),
    [anon_sym_int16] = ACTIONS(115),
    [anon_sym_int32] = ACTIONS(115),
    [anon_sym_int64] = ACTIONS(115),
    [anon_sym_long] = ACTIONS(113),
    [anon_sym_short] = ACTIONS(113),
    [anon_sym_uchar] = ACTIONS(113),
    [anon_sym_uint] = ACTIONS(113),
    [anon_sym_uint8] = ACTIONS(115),
    [anon_sym_uint16] = ACTIONS(115),
    [anon_sym_uint32] = ACTIONS(115),
    [anon_sym_uint64] = ACTIONS(115),
    [anon_sym_ulong] = ACTIONS(113),
    [anon_sym_ushort] = ACTIONS(113),
    [aux_sym_comment_token1] = ACTIONS(115),
    [aux_sym_comment_token2] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_var] = ACTIONS(113),
    [anon_sym_namespace] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [sym_camel_cased_identifier] = ACTIONS(113),
    [sym_uppercased_identifier] = ACTIONS(113),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_abstract] = ACTIONS(119),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_dynamic] = ACTIONS(119),
    [anon_sym_ensures] = ACTIONS(119),
    [anon_sym_extern] = ACTIONS(119),
    [anon_sym_inline] = ACTIONS(119),
    [anon_sym_internal] = ACTIONS(119),
    [anon_sym_override] = ACTIONS(119),
    [anon_sym_private] = ACTIONS(119),
    [anon_sym_protected] = ACTIONS(119),
    [anon_sym_public] = ACTIONS(119),
    [anon_sym_requires] = ACTIONS(119),
    [anon_sym_signal] = ACTIONS(119),
    [anon_sym_static] = ACTIONS(119),
    [anon_sym_virtual] = ACTIONS(119),
    [anon_sym_volatile] = ACTIONS(119),
    [anon_sym_weak] = ACTIONS(119),
    [anon_sym_async] = ACTIONS(119),
    [anon_sym_owned] = ACTIONS(119),
    [anon_sym_unowned] = ACTIONS(119),
    [anon_sym_ref] = ACTIONS(119),
    [anon_sym_out] = ACTIONS(119),
    [anon_sym_bool] = ACTIONS(119),
    [anon_sym_char] = ACTIONS(119),
    [anon_sym_double] = ACTIONS(119),
    [anon_sym_float] = ACTIONS(119),
    [anon_sym_size_t] = ACTIONS(119),
    [anon_sym_ssize_t] = ACTIONS(119),
    [anon_sym_string] = ACTIONS(119),
    [anon_sym_unichar] = ACTIONS(119),
    [anon_sym_void] = ACTIONS(119),
    [anon_sym_int] = ACTIONS(119),
    [anon_sym_int8] = ACTIONS(117),
    [anon_sym_int16] = ACTIONS(117),
    [anon_sym_int32] = ACTIONS(117),
    [anon_sym_int64] = ACTIONS(117),
    [anon_sym_long] = ACTIONS(119),
    [anon_sym_short] = ACTIONS(119),
    [anon_sym_uchar] = ACTIONS(119),
    [anon_sym_uint] = ACTIONS(119),
    [anon_sym_uint8] = ACTIONS(117),
    [anon_sym_uint16] = ACTIONS(117),
    [anon_sym_uint32] = ACTIONS(117),
    [anon_sym_uint64] = ACTIONS(117),
    [anon_sym_ulong] = ACTIONS(119),
    [anon_sym_ushort] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(117),
    [aux_sym_comment_token2] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(119),
    [anon_sym_var] = ACTIONS(119),
    [anon_sym_namespace] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [sym_camel_cased_identifier] = ACTIONS(119),
    [sym_uppercased_identifier] = ACTIONS(119),
  },
  [16] = {
    [anon_sym_abstract] = ACTIONS(119),
    [anon_sym_const] = ACTIONS(119),
    [anon_sym_dynamic] = ACTIONS(119),
    [anon_sym_ensures] = ACTIONS(119),
    [anon_sym_extern] = ACTIONS(119),
    [anon_sym_inline] = ACTIONS(119),
    [anon_sym_internal] = ACTIONS(119),
    [anon_sym_override] = ACTIONS(119),
    [anon_sym_private] = ACTIONS(119),
    [anon_sym_protected] = ACTIONS(119),
    [anon_sym_public] = ACTIONS(119),
    [anon_sym_requires] = ACTIONS(119),
    [anon_sym_signal] = ACTIONS(119),
    [anon_sym_static] = ACTIONS(119),
    [anon_sym_virtual] = ACTIONS(119),
    [anon_sym_volatile] = ACTIONS(119),
    [anon_sym_weak] = ACTIONS(119),
    [anon_sym_async] = ACTIONS(119),
    [anon_sym_owned] = ACTIONS(119),
    [anon_sym_unowned] = ACTIONS(119),
    [anon_sym_ref] = ACTIONS(119),
    [anon_sym_out] = ACTIONS(119),
    [anon_sym_bool] = ACTIONS(119),
    [anon_sym_char] = ACTIONS(119),
    [anon_sym_double] = ACTIONS(119),
    [anon_sym_float] = ACTIONS(119),
    [anon_sym_size_t] = ACTIONS(119),
    [anon_sym_ssize_t] = ACTIONS(119),
    [anon_sym_string] = ACTIONS(119),
    [anon_sym_unichar] = ACTIONS(119),
    [anon_sym_void] = ACTIONS(119),
    [anon_sym_int] = ACTIONS(119),
    [anon_sym_int8] = ACTIONS(117),
    [anon_sym_int16] = ACTIONS(117),
    [anon_sym_int32] = ACTIONS(117),
    [anon_sym_int64] = ACTIONS(117),
    [anon_sym_long] = ACTIONS(119),
    [anon_sym_short] = ACTIONS(119),
    [anon_sym_uchar] = ACTIONS(119),
    [anon_sym_uint] = ACTIONS(119),
    [anon_sym_uint8] = ACTIONS(117),
    [anon_sym_uint16] = ACTIONS(117),
    [anon_sym_uint32] = ACTIONS(117),
    [anon_sym_uint64] = ACTIONS(117),
    [anon_sym_ulong] = ACTIONS(119),
    [anon_sym_ushort] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(117),
    [aux_sym_comment_token2] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(119),
    [anon_sym_var] = ACTIONS(119),
    [anon_sym_namespace] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [sym_camel_cased_identifier] = ACTIONS(119),
    [sym_uppercased_identifier] = ACTIONS(119),
  },
  [17] = {
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
    [anon_sym_int8] = ACTIONS(123),
    [anon_sym_int16] = ACTIONS(123),
    [anon_sym_int32] = ACTIONS(123),
    [anon_sym_int64] = ACTIONS(123),
    [anon_sym_long] = ACTIONS(121),
    [anon_sym_short] = ACTIONS(121),
    [anon_sym_uchar] = ACTIONS(121),
    [anon_sym_uint] = ACTIONS(121),
    [anon_sym_uint8] = ACTIONS(123),
    [anon_sym_uint16] = ACTIONS(123),
    [anon_sym_uint32] = ACTIONS(123),
    [anon_sym_uint64] = ACTIONS(123),
    [anon_sym_ulong] = ACTIONS(121),
    [anon_sym_ushort] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(123),
    [aux_sym_comment_token2] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_return] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_namespace] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_camel_cased_identifier] = ACTIONS(121),
    [sym_uppercased_identifier] = ACTIONS(121),
  },
  [18] = {
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
    [anon_sym_int8] = ACTIONS(127),
    [anon_sym_int16] = ACTIONS(127),
    [anon_sym_int32] = ACTIONS(127),
    [anon_sym_int64] = ACTIONS(127),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_short] = ACTIONS(125),
    [anon_sym_uchar] = ACTIONS(125),
    [anon_sym_uint] = ACTIONS(125),
    [anon_sym_uint8] = ACTIONS(127),
    [anon_sym_uint16] = ACTIONS(127),
    [anon_sym_uint32] = ACTIONS(127),
    [anon_sym_uint64] = ACTIONS(127),
    [anon_sym_ulong] = ACTIONS(125),
    [anon_sym_ushort] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(127),
    [aux_sym_comment_token2] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(125),
    [anon_sym_var] = ACTIONS(125),
    [anon_sym_namespace] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_camel_cased_identifier] = ACTIONS(125),
    [sym_uppercased_identifier] = ACTIONS(125),
  },
  [19] = {
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
    [anon_sym_int8] = ACTIONS(131),
    [anon_sym_int16] = ACTIONS(131),
    [anon_sym_int32] = ACTIONS(131),
    [anon_sym_int64] = ACTIONS(131),
    [anon_sym_long] = ACTIONS(129),
    [anon_sym_short] = ACTIONS(129),
    [anon_sym_uchar] = ACTIONS(129),
    [anon_sym_uint] = ACTIONS(129),
    [anon_sym_uint8] = ACTIONS(131),
    [anon_sym_uint16] = ACTIONS(131),
    [anon_sym_uint32] = ACTIONS(131),
    [anon_sym_uint64] = ACTIONS(131),
    [anon_sym_ulong] = ACTIONS(129),
    [anon_sym_ushort] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_namespace] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_camel_cased_identifier] = ACTIONS(129),
    [sym_uppercased_identifier] = ACTIONS(129),
  },
  [20] = {
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
    [anon_sym_int8] = ACTIONS(97),
    [anon_sym_int16] = ACTIONS(97),
    [anon_sym_int32] = ACTIONS(97),
    [anon_sym_int64] = ACTIONS(97),
    [anon_sym_long] = ACTIONS(99),
    [anon_sym_short] = ACTIONS(99),
    [anon_sym_uchar] = ACTIONS(99),
    [anon_sym_uint] = ACTIONS(99),
    [anon_sym_uint8] = ACTIONS(97),
    [anon_sym_uint16] = ACTIONS(97),
    [anon_sym_uint32] = ACTIONS(97),
    [anon_sym_uint64] = ACTIONS(97),
    [anon_sym_ulong] = ACTIONS(99),
    [anon_sym_ushort] = ACTIONS(99),
    [aux_sym_comment_token1] = ACTIONS(97),
    [aux_sym_comment_token2] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [anon_sym_var] = ACTIONS(99),
    [anon_sym_namespace] = ACTIONS(99),
    [sym_identifier] = ACTIONS(99),
    [sym_camel_cased_identifier] = ACTIONS(99),
    [sym_uppercased_identifier] = ACTIONS(99),
  },
  [21] = {
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
    [anon_sym_int8] = ACTIONS(135),
    [anon_sym_int16] = ACTIONS(135),
    [anon_sym_int32] = ACTIONS(135),
    [anon_sym_int64] = ACTIONS(135),
    [anon_sym_long] = ACTIONS(133),
    [anon_sym_short] = ACTIONS(133),
    [anon_sym_uchar] = ACTIONS(133),
    [anon_sym_uint] = ACTIONS(133),
    [anon_sym_uint8] = ACTIONS(135),
    [anon_sym_uint16] = ACTIONS(135),
    [anon_sym_uint32] = ACTIONS(135),
    [anon_sym_uint64] = ACTIONS(135),
    [anon_sym_ulong] = ACTIONS(133),
    [anon_sym_ushort] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(135),
    [aux_sym_comment_token2] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_namespace] = ACTIONS(133),
    [sym_identifier] = ACTIONS(133),
    [sym_camel_cased_identifier] = ACTIONS(133),
    [sym_uppercased_identifier] = ACTIONS(133),
  },
  [22] = {
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
    [anon_sym_int8] = ACTIONS(139),
    [anon_sym_int16] = ACTIONS(139),
    [anon_sym_int32] = ACTIONS(139),
    [anon_sym_int64] = ACTIONS(139),
    [anon_sym_long] = ACTIONS(137),
    [anon_sym_short] = ACTIONS(137),
    [anon_sym_uchar] = ACTIONS(137),
    [anon_sym_uint] = ACTIONS(137),
    [anon_sym_uint8] = ACTIONS(139),
    [anon_sym_uint16] = ACTIONS(139),
    [anon_sym_uint32] = ACTIONS(139),
    [anon_sym_uint64] = ACTIONS(139),
    [anon_sym_ulong] = ACTIONS(137),
    [anon_sym_ushort] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(139),
    [aux_sym_comment_token2] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(137),
    [anon_sym_var] = ACTIONS(137),
    [anon_sym_namespace] = ACTIONS(137),
    [sym_identifier] = ACTIONS(137),
    [sym_camel_cased_identifier] = ACTIONS(137),
    [sym_uppercased_identifier] = ACTIONS(137),
  },
  [23] = {
    [anon_sym_abstract] = ACTIONS(107),
    [anon_sym_const] = ACTIONS(107),
    [anon_sym_dynamic] = ACTIONS(107),
    [anon_sym_ensures] = ACTIONS(107),
    [anon_sym_extern] = ACTIONS(107),
    [anon_sym_inline] = ACTIONS(107),
    [anon_sym_internal] = ACTIONS(107),
    [anon_sym_override] = ACTIONS(107),
    [anon_sym_private] = ACTIONS(107),
    [anon_sym_protected] = ACTIONS(107),
    [anon_sym_public] = ACTIONS(107),
    [anon_sym_requires] = ACTIONS(107),
    [anon_sym_signal] = ACTIONS(107),
    [anon_sym_static] = ACTIONS(107),
    [anon_sym_virtual] = ACTIONS(107),
    [anon_sym_volatile] = ACTIONS(107),
    [anon_sym_weak] = ACTIONS(107),
    [anon_sym_async] = ACTIONS(107),
    [anon_sym_owned] = ACTIONS(107),
    [anon_sym_unowned] = ACTIONS(107),
    [anon_sym_ref] = ACTIONS(107),
    [anon_sym_out] = ACTIONS(107),
    [anon_sym_bool] = ACTIONS(107),
    [anon_sym_char] = ACTIONS(107),
    [anon_sym_double] = ACTIONS(107),
    [anon_sym_float] = ACTIONS(107),
    [anon_sym_size_t] = ACTIONS(107),
    [anon_sym_ssize_t] = ACTIONS(107),
    [anon_sym_string] = ACTIONS(107),
    [anon_sym_unichar] = ACTIONS(107),
    [anon_sym_void] = ACTIONS(107),
    [anon_sym_int] = ACTIONS(107),
    [anon_sym_int8] = ACTIONS(105),
    [anon_sym_int16] = ACTIONS(105),
    [anon_sym_int32] = ACTIONS(105),
    [anon_sym_int64] = ACTIONS(105),
    [anon_sym_long] = ACTIONS(107),
    [anon_sym_short] = ACTIONS(107),
    [anon_sym_uchar] = ACTIONS(107),
    [anon_sym_uint] = ACTIONS(107),
    [anon_sym_uint8] = ACTIONS(105),
    [anon_sym_uint16] = ACTIONS(105),
    [anon_sym_uint32] = ACTIONS(105),
    [anon_sym_uint64] = ACTIONS(105),
    [anon_sym_ulong] = ACTIONS(107),
    [anon_sym_ushort] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(105),
    [aux_sym_comment_token2] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(107),
    [anon_sym_var] = ACTIONS(107),
    [anon_sym_namespace] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_camel_cased_identifier] = ACTIONS(107),
    [sym_uppercased_identifier] = ACTIONS(107),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(123),
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
    [anon_sym_int8] = ACTIONS(123),
    [anon_sym_int16] = ACTIONS(123),
    [anon_sym_int32] = ACTIONS(123),
    [anon_sym_int64] = ACTIONS(123),
    [anon_sym_long] = ACTIONS(121),
    [anon_sym_short] = ACTIONS(121),
    [anon_sym_uchar] = ACTIONS(121),
    [anon_sym_uint] = ACTIONS(121),
    [anon_sym_uint8] = ACTIONS(123),
    [anon_sym_uint16] = ACTIONS(123),
    [anon_sym_uint32] = ACTIONS(123),
    [anon_sym_uint64] = ACTIONS(123),
    [anon_sym_ulong] = ACTIONS(121),
    [anon_sym_ushort] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(123),
    [aux_sym_comment_token2] = ACTIONS(123),
    [anon_sym_return] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_namespace] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [sym_camel_cased_identifier] = ACTIONS(121),
    [sym_uppercased_identifier] = ACTIONS(121),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(111),
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
    [anon_sym_bool] = ACTIONS(109),
    [anon_sym_char] = ACTIONS(109),
    [anon_sym_double] = ACTIONS(109),
    [anon_sym_float] = ACTIONS(109),
    [anon_sym_size_t] = ACTIONS(109),
    [anon_sym_ssize_t] = ACTIONS(109),
    [anon_sym_string] = ACTIONS(109),
    [anon_sym_unichar] = ACTIONS(109),
    [anon_sym_void] = ACTIONS(109),
    [anon_sym_int] = ACTIONS(109),
    [anon_sym_int8] = ACTIONS(111),
    [anon_sym_int16] = ACTIONS(111),
    [anon_sym_int32] = ACTIONS(111),
    [anon_sym_int64] = ACTIONS(111),
    [anon_sym_long] = ACTIONS(109),
    [anon_sym_short] = ACTIONS(109),
    [anon_sym_uchar] = ACTIONS(109),
    [anon_sym_uint] = ACTIONS(109),
    [anon_sym_uint8] = ACTIONS(111),
    [anon_sym_uint16] = ACTIONS(111),
    [anon_sym_uint32] = ACTIONS(111),
    [anon_sym_uint64] = ACTIONS(111),
    [anon_sym_ulong] = ACTIONS(109),
    [anon_sym_ushort] = ACTIONS(109),
    [aux_sym_comment_token1] = ACTIONS(111),
    [aux_sym_comment_token2] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_var] = ACTIONS(109),
    [anon_sym_namespace] = ACTIONS(109),
    [sym_identifier] = ACTIONS(109),
    [sym_camel_cased_identifier] = ACTIONS(109),
    [sym_uppercased_identifier] = ACTIONS(109),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(139),
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
    [anon_sym_int8] = ACTIONS(139),
    [anon_sym_int16] = ACTIONS(139),
    [anon_sym_int32] = ACTIONS(139),
    [anon_sym_int64] = ACTIONS(139),
    [anon_sym_long] = ACTIONS(137),
    [anon_sym_short] = ACTIONS(137),
    [anon_sym_uchar] = ACTIONS(137),
    [anon_sym_uint] = ACTIONS(137),
    [anon_sym_uint8] = ACTIONS(139),
    [anon_sym_uint16] = ACTIONS(139),
    [anon_sym_uint32] = ACTIONS(139),
    [anon_sym_uint64] = ACTIONS(139),
    [anon_sym_ulong] = ACTIONS(137),
    [anon_sym_ushort] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(139),
    [aux_sym_comment_token2] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(137),
    [anon_sym_var] = ACTIONS(137),
    [anon_sym_namespace] = ACTIONS(137),
    [sym_identifier] = ACTIONS(137),
    [sym_camel_cased_identifier] = ACTIONS(137),
    [sym_uppercased_identifier] = ACTIONS(137),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(95),
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
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_int8] = ACTIONS(95),
    [anon_sym_int16] = ACTIONS(95),
    [anon_sym_int32] = ACTIONS(95),
    [anon_sym_int64] = ACTIONS(95),
    [anon_sym_long] = ACTIONS(93),
    [anon_sym_short] = ACTIONS(93),
    [anon_sym_uchar] = ACTIONS(93),
    [anon_sym_uint] = ACTIONS(93),
    [anon_sym_uint8] = ACTIONS(95),
    [anon_sym_uint16] = ACTIONS(95),
    [anon_sym_uint32] = ACTIONS(95),
    [anon_sym_uint64] = ACTIONS(95),
    [anon_sym_ulong] = ACTIONS(93),
    [anon_sym_ushort] = ACTIONS(93),
    [aux_sym_comment_token1] = ACTIONS(95),
    [aux_sym_comment_token2] = ACTIONS(95),
    [anon_sym_return] = ACTIONS(93),
    [anon_sym_var] = ACTIONS(93),
    [anon_sym_namespace] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [sym_camel_cased_identifier] = ACTIONS(93),
    [sym_uppercased_identifier] = ACTIONS(93),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_abstract] = ACTIONS(101),
    [anon_sym_const] = ACTIONS(101),
    [anon_sym_dynamic] = ACTIONS(101),
    [anon_sym_ensures] = ACTIONS(101),
    [anon_sym_extern] = ACTIONS(101),
    [anon_sym_inline] = ACTIONS(101),
    [anon_sym_internal] = ACTIONS(101),
    [anon_sym_override] = ACTIONS(101),
    [anon_sym_private] = ACTIONS(101),
    [anon_sym_protected] = ACTIONS(101),
    [anon_sym_public] = ACTIONS(101),
    [anon_sym_requires] = ACTIONS(101),
    [anon_sym_signal] = ACTIONS(101),
    [anon_sym_static] = ACTIONS(101),
    [anon_sym_virtual] = ACTIONS(101),
    [anon_sym_volatile] = ACTIONS(101),
    [anon_sym_weak] = ACTIONS(101),
    [anon_sym_async] = ACTIONS(101),
    [anon_sym_owned] = ACTIONS(101),
    [anon_sym_unowned] = ACTIONS(101),
    [anon_sym_ref] = ACTIONS(101),
    [anon_sym_out] = ACTIONS(101),
    [anon_sym_bool] = ACTIONS(101),
    [anon_sym_char] = ACTIONS(101),
    [anon_sym_double] = ACTIONS(101),
    [anon_sym_float] = ACTIONS(101),
    [anon_sym_size_t] = ACTIONS(101),
    [anon_sym_ssize_t] = ACTIONS(101),
    [anon_sym_string] = ACTIONS(101),
    [anon_sym_unichar] = ACTIONS(101),
    [anon_sym_void] = ACTIONS(101),
    [anon_sym_int] = ACTIONS(101),
    [anon_sym_int8] = ACTIONS(103),
    [anon_sym_int16] = ACTIONS(103),
    [anon_sym_int32] = ACTIONS(103),
    [anon_sym_int64] = ACTIONS(103),
    [anon_sym_long] = ACTIONS(101),
    [anon_sym_short] = ACTIONS(101),
    [anon_sym_uchar] = ACTIONS(101),
    [anon_sym_uint] = ACTIONS(101),
    [anon_sym_uint8] = ACTIONS(103),
    [anon_sym_uint16] = ACTIONS(103),
    [anon_sym_uint32] = ACTIONS(103),
    [anon_sym_uint64] = ACTIONS(103),
    [anon_sym_ulong] = ACTIONS(101),
    [anon_sym_ushort] = ACTIONS(101),
    [aux_sym_comment_token1] = ACTIONS(103),
    [aux_sym_comment_token2] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(101),
    [anon_sym_var] = ACTIONS(101),
    [anon_sym_namespace] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_camel_cased_identifier] = ACTIONS(101),
    [sym_uppercased_identifier] = ACTIONS(101),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(135),
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
    [anon_sym_int8] = ACTIONS(135),
    [anon_sym_int16] = ACTIONS(135),
    [anon_sym_int32] = ACTIONS(135),
    [anon_sym_int64] = ACTIONS(135),
    [anon_sym_long] = ACTIONS(133),
    [anon_sym_short] = ACTIONS(133),
    [anon_sym_uchar] = ACTIONS(133),
    [anon_sym_uint] = ACTIONS(133),
    [anon_sym_uint8] = ACTIONS(135),
    [anon_sym_uint16] = ACTIONS(135),
    [anon_sym_uint32] = ACTIONS(135),
    [anon_sym_uint64] = ACTIONS(135),
    [anon_sym_ulong] = ACTIONS(133),
    [anon_sym_ushort] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(135),
    [aux_sym_comment_token2] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_namespace] = ACTIONS(133),
    [sym_identifier] = ACTIONS(133),
    [sym_camel_cased_identifier] = ACTIONS(133),
    [sym_uppercased_identifier] = ACTIONS(133),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(127),
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
    [anon_sym_int8] = ACTIONS(127),
    [anon_sym_int16] = ACTIONS(127),
    [anon_sym_int32] = ACTIONS(127),
    [anon_sym_int64] = ACTIONS(127),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_short] = ACTIONS(125),
    [anon_sym_uchar] = ACTIONS(125),
    [anon_sym_uint] = ACTIONS(125),
    [anon_sym_uint8] = ACTIONS(127),
    [anon_sym_uint16] = ACTIONS(127),
    [anon_sym_uint32] = ACTIONS(127),
    [anon_sym_uint64] = ACTIONS(127),
    [anon_sym_ulong] = ACTIONS(125),
    [anon_sym_ushort] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(127),
    [aux_sym_comment_token2] = ACTIONS(127),
    [anon_sym_return] = ACTIONS(125),
    [anon_sym_var] = ACTIONS(125),
    [anon_sym_namespace] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_camel_cased_identifier] = ACTIONS(125),
    [sym_uppercased_identifier] = ACTIONS(125),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(131),
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
    [anon_sym_int8] = ACTIONS(131),
    [anon_sym_int16] = ACTIONS(131),
    [anon_sym_int32] = ACTIONS(131),
    [anon_sym_int64] = ACTIONS(131),
    [anon_sym_long] = ACTIONS(129),
    [anon_sym_short] = ACTIONS(129),
    [anon_sym_uchar] = ACTIONS(129),
    [anon_sym_uint] = ACTIONS(129),
    [anon_sym_uint8] = ACTIONS(131),
    [anon_sym_uint16] = ACTIONS(131),
    [anon_sym_uint32] = ACTIONS(131),
    [anon_sym_uint64] = ACTIONS(131),
    [anon_sym_ulong] = ACTIONS(129),
    [anon_sym_ushort] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [aux_sym_comment_token2] = ACTIONS(131),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_namespace] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_camel_cased_identifier] = ACTIONS(129),
    [sym_uppercased_identifier] = ACTIONS(129),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(115),
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
    [anon_sym_int8] = ACTIONS(115),
    [anon_sym_int16] = ACTIONS(115),
    [anon_sym_int32] = ACTIONS(115),
    [anon_sym_int64] = ACTIONS(115),
    [anon_sym_long] = ACTIONS(113),
    [anon_sym_short] = ACTIONS(113),
    [anon_sym_uchar] = ACTIONS(113),
    [anon_sym_uint] = ACTIONS(113),
    [anon_sym_uint8] = ACTIONS(115),
    [anon_sym_uint16] = ACTIONS(115),
    [anon_sym_uint32] = ACTIONS(115),
    [anon_sym_uint64] = ACTIONS(115),
    [anon_sym_ulong] = ACTIONS(113),
    [anon_sym_ushort] = ACTIONS(113),
    [aux_sym_comment_token1] = ACTIONS(115),
    [aux_sym_comment_token2] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(113),
    [anon_sym_var] = ACTIONS(113),
    [anon_sym_namespace] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [sym_camel_cased_identifier] = ACTIONS(113),
    [sym_uppercased_identifier] = ACTIONS(113),
  },
  [33] = {
    [sym_modifier] = STATE(37),
    [sym__type] = STATE(63),
    [sym_primitive_type] = STATE(63),
    [sym_parameter] = STATE(79),
    [aux_sym_function_definition_repeat1] = STATE(37),
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
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(143),
  },
  [34] = {
    [sym_modifier] = STATE(37),
    [sym__type] = STATE(63),
    [sym_primitive_type] = STATE(63),
    [sym_parameter] = STATE(89),
    [aux_sym_function_definition_repeat1] = STATE(37),
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
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
  },
  [35] = {
    [sym_modifier] = STATE(38),
    [sym__type] = STATE(66),
    [sym_primitive_type] = STATE(66),
    [aux_sym_function_definition_repeat1] = STATE(38),
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
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(145),
  },
  [36] = {
    [sym_modifier] = STATE(38),
    [sym__type] = STATE(64),
    [sym_primitive_type] = STATE(64),
    [aux_sym_function_definition_repeat1] = STATE(38),
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
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(147),
  },
  [37] = {
    [sym_modifier] = STATE(38),
    [sym__type] = STATE(74),
    [sym_primitive_type] = STATE(74),
    [aux_sym_function_definition_repeat1] = STATE(38),
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
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_char] = ACTIONS(9),
    [anon_sym_double] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_size_t] = ACTIONS(9),
    [anon_sym_ssize_t] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_unichar] = ACTIONS(9),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_int8] = ACTIONS(9),
    [anon_sym_int16] = ACTIONS(9),
    [anon_sym_int32] = ACTIONS(9),
    [anon_sym_int64] = ACTIONS(9),
    [anon_sym_long] = ACTIONS(9),
    [anon_sym_short] = ACTIONS(9),
    [anon_sym_uchar] = ACTIONS(9),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_uint8] = ACTIONS(9),
    [anon_sym_uint16] = ACTIONS(9),
    [anon_sym_uint32] = ACTIONS(9),
    [anon_sym_uint64] = ACTIONS(9),
    [anon_sym_ulong] = ACTIONS(9),
    [anon_sym_ushort] = ACTIONS(9),
  },
  [38] = {
    [sym_modifier] = STATE(38),
    [aux_sym_function_definition_repeat1] = STATE(38),
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
    [anon_sym_bool] = ACTIONS(152),
    [anon_sym_char] = ACTIONS(152),
    [anon_sym_double] = ACTIONS(152),
    [anon_sym_float] = ACTIONS(152),
    [anon_sym_size_t] = ACTIONS(152),
    [anon_sym_ssize_t] = ACTIONS(152),
    [anon_sym_string] = ACTIONS(152),
    [anon_sym_unichar] = ACTIONS(152),
    [anon_sym_void] = ACTIONS(152),
    [anon_sym_int] = ACTIONS(154),
    [anon_sym_int8] = ACTIONS(152),
    [anon_sym_int16] = ACTIONS(152),
    [anon_sym_int32] = ACTIONS(152),
    [anon_sym_int64] = ACTIONS(152),
    [anon_sym_long] = ACTIONS(152),
    [anon_sym_short] = ACTIONS(152),
    [anon_sym_uchar] = ACTIONS(152),
    [anon_sym_uint] = ACTIONS(154),
    [anon_sym_uint8] = ACTIONS(152),
    [anon_sym_uint16] = ACTIONS(152),
    [anon_sym_uint32] = ACTIONS(152),
    [anon_sym_uint64] = ACTIONS(152),
    [anon_sym_ulong] = ACTIONS(152),
    [anon_sym_ushort] = ACTIONS(152),
    [anon_sym_var] = ACTIONS(152),
  },
  [39] = {
    [anon_sym_abstract] = ACTIONS(156),
    [anon_sym_const] = ACTIONS(156),
    [anon_sym_dynamic] = ACTIONS(156),
    [anon_sym_ensures] = ACTIONS(156),
    [anon_sym_extern] = ACTIONS(156),
    [anon_sym_inline] = ACTIONS(156),
    [anon_sym_internal] = ACTIONS(156),
    [anon_sym_override] = ACTIONS(156),
    [anon_sym_private] = ACTIONS(156),
    [anon_sym_protected] = ACTIONS(156),
    [anon_sym_public] = ACTIONS(156),
    [anon_sym_requires] = ACTIONS(156),
    [anon_sym_signal] = ACTIONS(156),
    [anon_sym_static] = ACTIONS(156),
    [anon_sym_virtual] = ACTIONS(156),
    [anon_sym_volatile] = ACTIONS(156),
    [anon_sym_weak] = ACTIONS(156),
    [anon_sym_async] = ACTIONS(156),
    [anon_sym_owned] = ACTIONS(156),
    [anon_sym_unowned] = ACTIONS(156),
    [anon_sym_ref] = ACTIONS(156),
    [anon_sym_out] = ACTIONS(156),
    [anon_sym_bool] = ACTIONS(156),
    [anon_sym_char] = ACTIONS(156),
    [anon_sym_double] = ACTIONS(156),
    [anon_sym_float] = ACTIONS(156),
    [anon_sym_size_t] = ACTIONS(156),
    [anon_sym_ssize_t] = ACTIONS(156),
    [anon_sym_string] = ACTIONS(156),
    [anon_sym_unichar] = ACTIONS(156),
    [anon_sym_void] = ACTIONS(156),
    [anon_sym_int] = ACTIONS(158),
    [anon_sym_int8] = ACTIONS(156),
    [anon_sym_int16] = ACTIONS(156),
    [anon_sym_int32] = ACTIONS(156),
    [anon_sym_int64] = ACTIONS(156),
    [anon_sym_long] = ACTIONS(156),
    [anon_sym_short] = ACTIONS(156),
    [anon_sym_uchar] = ACTIONS(156),
    [anon_sym_uint] = ACTIONS(158),
    [anon_sym_uint8] = ACTIONS(156),
    [anon_sym_uint16] = ACTIONS(156),
    [anon_sym_uint32] = ACTIONS(156),
    [anon_sym_uint64] = ACTIONS(156),
    [anon_sym_ulong] = ACTIONS(156),
    [anon_sym_ushort] = ACTIONS(156),
    [anon_sym_var] = ACTIONS(156),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(164), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(162), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(53), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [19] = 4,
    ACTIONS(168), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(166), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(59), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [38] = 4,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(170), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(52), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [57] = 4,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(174), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(51), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [76] = 4,
    ACTIONS(180), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(178), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(60), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [95] = 4,
    ACTIONS(184), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(182), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(54), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [114] = 4,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(186), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(55), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [133] = 4,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(190), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(61), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [152] = 4,
    ACTIONS(196), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(194), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(56), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [171] = 4,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(198), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(57), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [190] = 4,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(160), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(202), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
    STATE(58), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__identifiers,
  [209] = 3,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [221] = 3,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [233] = 3,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [245] = 3,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [257] = 3,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [269] = 1,
    ACTIONS(220), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [277] = 1,
    ACTIONS(222), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [285] = 3,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [297] = 3,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [309] = 2,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
  [319] = 3,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    ACTIONS(208), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [331] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(234), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym_parameter_list,
  [344] = 2,
    STATE(82), 1,
      sym__identifiers,
    ACTIONS(236), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [353] = 2,
    STATE(62), 1,
      sym__identifiers,
    ACTIONS(238), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [362] = 2,
    STATE(84), 1,
      sym__identifiers,
    ACTIONS(240), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [371] = 2,
    STATE(69), 1,
      sym__identifiers,
    ACTIONS(242), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [380] = 2,
    STATE(93), 1,
      sym__identifiers,
    ACTIONS(244), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [389] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym_parameter_list,
  [402] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_EQ,
    STATE(85), 1,
      sym_parameter_list,
  [415] = 2,
    STATE(76), 1,
      sym__identifiers,
    ACTIONS(254), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [424] = 2,
    STATE(86), 1,
      sym__identifiers,
    ACTIONS(256), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [433] = 2,
    STATE(88), 1,
      sym__identifiers,
    ACTIONS(258), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [442] = 2,
    STATE(91), 1,
      sym__identifiers,
    ACTIONS(260), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [451] = 2,
    STATE(92), 1,
      sym__identifiers,
    ACTIONS(262), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [460] = 2,
    STATE(90), 1,
      sym__identifiers,
    ACTIONS(264), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [469] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      anon_sym_EQ,
    STATE(83), 1,
      sym_parameter_list,
  [482] = 2,
    STATE(68), 1,
      sym__identifiers,
    ACTIONS(270), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [491] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_parameter_list_repeat1,
  [501] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
  [511] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_parameter_list_repeat1,
  [521] = 1,
    ACTIONS(283), 3,
      sym_identifier,
      sym_camel_cased_identifier,
      sym_uppercased_identifier,
  [527] = 1,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [532] = 2,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [539] = 2,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(234), 1,
      anon_sym_EQ,
  [546] = 2,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [553] = 2,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
  [560] = 2,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
  [567] = 2,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      anon_sym_EQ,
  [574] = 1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [579] = 2,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      anon_sym_EQ,
  [586] = 2,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [593] = 1,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [598] = 2,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_EQ,
  [605] = 2,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [612] = 1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
  [616] = 1,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
  [620] = 1,
    ACTIONS(297), 1,
      anon_sym_EQ,
  [624] = 1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
  [628] = 1,
    ACTIONS(301), 1,
      anon_sym_EQ,
  [632] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(40)] = 0,
  [SMALL_STATE(41)] = 19,
  [SMALL_STATE(42)] = 38,
  [SMALL_STATE(43)] = 57,
  [SMALL_STATE(44)] = 76,
  [SMALL_STATE(45)] = 95,
  [SMALL_STATE(46)] = 114,
  [SMALL_STATE(47)] = 133,
  [SMALL_STATE(48)] = 152,
  [SMALL_STATE(49)] = 171,
  [SMALL_STATE(50)] = 190,
  [SMALL_STATE(51)] = 209,
  [SMALL_STATE(52)] = 221,
  [SMALL_STATE(53)] = 233,
  [SMALL_STATE(54)] = 245,
  [SMALL_STATE(55)] = 257,
  [SMALL_STATE(56)] = 269,
  [SMALL_STATE(57)] = 277,
  [SMALL_STATE(58)] = 285,
  [SMALL_STATE(59)] = 297,
  [SMALL_STATE(60)] = 309,
  [SMALL_STATE(61)] = 319,
  [SMALL_STATE(62)] = 331,
  [SMALL_STATE(63)] = 344,
  [SMALL_STATE(64)] = 353,
  [SMALL_STATE(65)] = 362,
  [SMALL_STATE(66)] = 371,
  [SMALL_STATE(67)] = 380,
  [SMALL_STATE(68)] = 389,
  [SMALL_STATE(69)] = 402,
  [SMALL_STATE(70)] = 415,
  [SMALL_STATE(71)] = 424,
  [SMALL_STATE(72)] = 433,
  [SMALL_STATE(73)] = 442,
  [SMALL_STATE(74)] = 451,
  [SMALL_STATE(75)] = 460,
  [SMALL_STATE(76)] = 469,
  [SMALL_STATE(77)] = 482,
  [SMALL_STATE(78)] = 491,
  [SMALL_STATE(79)] = 501,
  [SMALL_STATE(80)] = 511,
  [SMALL_STATE(81)] = 521,
  [SMALL_STATE(82)] = 527,
  [SMALL_STATE(83)] = 532,
  [SMALL_STATE(84)] = 539,
  [SMALL_STATE(85)] = 546,
  [SMALL_STATE(86)] = 553,
  [SMALL_STATE(87)] = 560,
  [SMALL_STATE(88)] = 567,
  [SMALL_STATE(89)] = 574,
  [SMALL_STATE(90)] = 579,
  [SMALL_STATE(91)] = 586,
  [SMALL_STATE(92)] = 593,
  [SMALL_STATE(93)] = 598,
  [SMALL_STATE(94)] = 605,
  [SMALL_STATE(95)] = 612,
  [SMALL_STATE(96)] = 616,
  [SMALL_STATE(97)] = 620,
  [SMALL_STATE(98)] = 624,
  [SMALL_STATE(99)] = 628,
  [SMALL_STATE(100)] = 632,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(99),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(34),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
