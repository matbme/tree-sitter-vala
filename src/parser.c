#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_LPAREN = 47,
  anon_sym_COMMA = 48,
  anon_sym_RPAREN = 49,
  anon_sym_LBRACE = 50,
  anon_sym_RBRACE = 51,
  anon_sym_return = 52,
  anon_sym_SEMI = 53,
  anon_sym_EQ = 54,
  anon_sym_DASH = 55,
  anon_sym_BANG = 56,
  anon_sym_STAR = 57,
  anon_sym_SLASH = 58,
  anon_sym_PLUS = 59,
  sym_identifier = 60,
  sym_number = 61,
  sym_source_file = 62,
  sym__definition = 63,
  sym_function_definition = 64,
  sym_modifier = 65,
  sym__type = 66,
  sym_primitive_type = 67,
  sym_parameter_list = 68,
  sym_parameter = 69,
  sym_block = 70,
  sym__statement = 71,
  sym_return_statement = 72,
  sym_assignment = 73,
  sym__expression = 74,
  sym_unary_expression = 75,
  sym_binary_expression = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_function_definition_repeat1 = 78,
  aux_sym_parameter_list_repeat1 = 79,
  aux_sym_block_repeat1 = 80,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_modifier] = "modifier",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_modifier] = sym_modifier,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_assignment] = sym_assignment,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
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
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(219);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(220);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(219);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(205);
      END_STATE();
    case 4:
      if (lookahead == '4') ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(196);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == 'z') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(179);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(174);
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
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 159:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 161:
      if (lookahead == 'z') ADVANCE(55);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ensures);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_signal);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_owned);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_unowned);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ssize_t);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_unichar);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '3') ADVANCE(2);
      if (lookahead == '6') ADVANCE(4);
      if (lookahead == '8') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_uchar);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 117},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 117},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 117},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_modifier] = STATE(7),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(7),
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
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_modifier] = STATE(7),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(11),
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
  [3] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_modifier] = STATE(7),
    [sym__type] = STATE(41),
    [sym_primitive_type] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(13),
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
    [anon_sym_bool] = ACTIONS(18),
    [anon_sym_char] = ACTIONS(18),
    [anon_sym_double] = ACTIONS(18),
    [anon_sym_float] = ACTIONS(18),
    [anon_sym_size_t] = ACTIONS(18),
    [anon_sym_ssize_t] = ACTIONS(18),
    [anon_sym_string] = ACTIONS(18),
    [anon_sym_unichar] = ACTIONS(18),
    [anon_sym_void] = ACTIONS(18),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_int8] = ACTIONS(18),
    [anon_sym_int16] = ACTIONS(18),
    [anon_sym_int32] = ACTIONS(18),
    [anon_sym_int64] = ACTIONS(18),
    [anon_sym_long] = ACTIONS(18),
    [anon_sym_short] = ACTIONS(18),
    [anon_sym_uchar] = ACTIONS(18),
    [anon_sym_uint] = ACTIONS(21),
    [anon_sym_uint8] = ACTIONS(18),
    [anon_sym_uint16] = ACTIONS(18),
    [anon_sym_uint32] = ACTIONS(18),
    [anon_sym_uint64] = ACTIONS(18),
    [anon_sym_ulong] = ACTIONS(18),
    [anon_sym_ushort] = ACTIONS(18),
  },
  [4] = {
    [sym_modifier] = STATE(6),
    [sym__type] = STATE(48),
    [sym_primitive_type] = STATE(48),
    [sym_parameter] = STATE(30),
    [aux_sym_function_definition_repeat1] = STATE(6),
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
    [anon_sym_RPAREN] = ACTIONS(24),
  },
  [5] = {
    [sym_modifier] = STATE(6),
    [sym__type] = STATE(48),
    [sym_primitive_type] = STATE(48),
    [sym_parameter] = STATE(35),
    [aux_sym_function_definition_repeat1] = STATE(6),
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
  [6] = {
    [sym_modifier] = STATE(8),
    [sym__type] = STATE(46),
    [sym_primitive_type] = STATE(46),
    [aux_sym_function_definition_repeat1] = STATE(8),
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
  [7] = {
    [sym_modifier] = STATE(8),
    [sym__type] = STATE(45),
    [sym_primitive_type] = STATE(45),
    [aux_sym_function_definition_repeat1] = STATE(8),
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
  [8] = {
    [sym_modifier] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(8),
    [anon_sym_abstract] = ACTIONS(26),
    [anon_sym_const] = ACTIONS(26),
    [anon_sym_dynamic] = ACTIONS(26),
    [anon_sym_ensures] = ACTIONS(26),
    [anon_sym_extern] = ACTIONS(26),
    [anon_sym_inline] = ACTIONS(26),
    [anon_sym_internal] = ACTIONS(26),
    [anon_sym_override] = ACTIONS(26),
    [anon_sym_private] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(26),
    [anon_sym_requires] = ACTIONS(26),
    [anon_sym_signal] = ACTIONS(26),
    [anon_sym_static] = ACTIONS(26),
    [anon_sym_virtual] = ACTIONS(26),
    [anon_sym_volatile] = ACTIONS(26),
    [anon_sym_weak] = ACTIONS(26),
    [anon_sym_async] = ACTIONS(26),
    [anon_sym_owned] = ACTIONS(26),
    [anon_sym_unowned] = ACTIONS(26),
    [anon_sym_ref] = ACTIONS(26),
    [anon_sym_out] = ACTIONS(26),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_char] = ACTIONS(29),
    [anon_sym_double] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_size_t] = ACTIONS(29),
    [anon_sym_ssize_t] = ACTIONS(29),
    [anon_sym_string] = ACTIONS(29),
    [anon_sym_unichar] = ACTIONS(29),
    [anon_sym_void] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_int8] = ACTIONS(29),
    [anon_sym_int16] = ACTIONS(29),
    [anon_sym_int32] = ACTIONS(29),
    [anon_sym_int64] = ACTIONS(29),
    [anon_sym_long] = ACTIONS(29),
    [anon_sym_short] = ACTIONS(29),
    [anon_sym_uchar] = ACTIONS(29),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_uint8] = ACTIONS(29),
    [anon_sym_uint16] = ACTIONS(29),
    [anon_sym_uint32] = ACTIONS(29),
    [anon_sym_uint64] = ACTIONS(29),
    [anon_sym_ulong] = ACTIONS(29),
    [anon_sym_ushort] = ACTIONS(29),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(33),
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
    [anon_sym_bool] = ACTIONS(33),
    [anon_sym_char] = ACTIONS(33),
    [anon_sym_double] = ACTIONS(33),
    [anon_sym_float] = ACTIONS(33),
    [anon_sym_size_t] = ACTIONS(33),
    [anon_sym_ssize_t] = ACTIONS(33),
    [anon_sym_string] = ACTIONS(33),
    [anon_sym_unichar] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(33),
    [anon_sym_int] = ACTIONS(35),
    [anon_sym_int8] = ACTIONS(33),
    [anon_sym_int16] = ACTIONS(33),
    [anon_sym_int32] = ACTIONS(33),
    [anon_sym_int64] = ACTIONS(33),
    [anon_sym_long] = ACTIONS(33),
    [anon_sym_short] = ACTIONS(33),
    [anon_sym_uchar] = ACTIONS(33),
    [anon_sym_uint] = ACTIONS(35),
    [anon_sym_uint8] = ACTIONS(33),
    [anon_sym_uint16] = ACTIONS(33),
    [anon_sym_uint32] = ACTIONS(33),
    [anon_sym_uint64] = ACTIONS(33),
    [anon_sym_ulong] = ACTIONS(33),
    [anon_sym_ushort] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_abstract] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_dynamic] = ACTIONS(37),
    [anon_sym_ensures] = ACTIONS(37),
    [anon_sym_extern] = ACTIONS(37),
    [anon_sym_inline] = ACTIONS(37),
    [anon_sym_internal] = ACTIONS(37),
    [anon_sym_override] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(37),
    [anon_sym_protected] = ACTIONS(37),
    [anon_sym_public] = ACTIONS(37),
    [anon_sym_requires] = ACTIONS(37),
    [anon_sym_signal] = ACTIONS(37),
    [anon_sym_static] = ACTIONS(37),
    [anon_sym_virtual] = ACTIONS(37),
    [anon_sym_volatile] = ACTIONS(37),
    [anon_sym_weak] = ACTIONS(37),
    [anon_sym_async] = ACTIONS(37),
    [anon_sym_owned] = ACTIONS(37),
    [anon_sym_unowned] = ACTIONS(37),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_out] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_double] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(37),
    [anon_sym_size_t] = ACTIONS(37),
    [anon_sym_ssize_t] = ACTIONS(37),
    [anon_sym_string] = ACTIONS(37),
    [anon_sym_unichar] = ACTIONS(37),
    [anon_sym_void] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(39),
    [anon_sym_int8] = ACTIONS(37),
    [anon_sym_int16] = ACTIONS(37),
    [anon_sym_int32] = ACTIONS(37),
    [anon_sym_int64] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_uchar] = ACTIONS(37),
    [anon_sym_uint] = ACTIONS(39),
    [anon_sym_uint8] = ACTIONS(37),
    [anon_sym_uint16] = ACTIONS(37),
    [anon_sym_uint32] = ACTIONS(37),
    [anon_sym_uint64] = ACTIONS(37),
    [anon_sym_ulong] = ACTIONS(37),
    [anon_sym_ushort] = ACTIONS(37),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_abstract] = ACTIONS(41),
    [anon_sym_const] = ACTIONS(41),
    [anon_sym_dynamic] = ACTIONS(41),
    [anon_sym_ensures] = ACTIONS(41),
    [anon_sym_extern] = ACTIONS(41),
    [anon_sym_inline] = ACTIONS(41),
    [anon_sym_internal] = ACTIONS(41),
    [anon_sym_override] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_protected] = ACTIONS(41),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_requires] = ACTIONS(41),
    [anon_sym_signal] = ACTIONS(41),
    [anon_sym_static] = ACTIONS(41),
    [anon_sym_virtual] = ACTIONS(41),
    [anon_sym_volatile] = ACTIONS(41),
    [anon_sym_weak] = ACTIONS(41),
    [anon_sym_async] = ACTIONS(41),
    [anon_sym_owned] = ACTIONS(41),
    [anon_sym_unowned] = ACTIONS(41),
    [anon_sym_ref] = ACTIONS(41),
    [anon_sym_out] = ACTIONS(41),
    [anon_sym_bool] = ACTIONS(41),
    [anon_sym_char] = ACTIONS(41),
    [anon_sym_double] = ACTIONS(41),
    [anon_sym_float] = ACTIONS(41),
    [anon_sym_size_t] = ACTIONS(41),
    [anon_sym_ssize_t] = ACTIONS(41),
    [anon_sym_string] = ACTIONS(41),
    [anon_sym_unichar] = ACTIONS(41),
    [anon_sym_void] = ACTIONS(41),
    [anon_sym_int] = ACTIONS(43),
    [anon_sym_int8] = ACTIONS(41),
    [anon_sym_int16] = ACTIONS(41),
    [anon_sym_int32] = ACTIONS(41),
    [anon_sym_int64] = ACTIONS(41),
    [anon_sym_long] = ACTIONS(41),
    [anon_sym_short] = ACTIONS(41),
    [anon_sym_uchar] = ACTIONS(41),
    [anon_sym_uint] = ACTIONS(43),
    [anon_sym_uint8] = ACTIONS(41),
    [anon_sym_uint16] = ACTIONS(41),
    [anon_sym_uint32] = ACTIONS(41),
    [anon_sym_uint64] = ACTIONS(41),
    [anon_sym_ulong] = ACTIONS(41),
    [anon_sym_ushort] = ACTIONS(41),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_abstract] = ACTIONS(45),
    [anon_sym_const] = ACTIONS(45),
    [anon_sym_dynamic] = ACTIONS(45),
    [anon_sym_ensures] = ACTIONS(45),
    [anon_sym_extern] = ACTIONS(45),
    [anon_sym_inline] = ACTIONS(45),
    [anon_sym_internal] = ACTIONS(45),
    [anon_sym_override] = ACTIONS(45),
    [anon_sym_private] = ACTIONS(45),
    [anon_sym_protected] = ACTIONS(45),
    [anon_sym_public] = ACTIONS(45),
    [anon_sym_requires] = ACTIONS(45),
    [anon_sym_signal] = ACTIONS(45),
    [anon_sym_static] = ACTIONS(45),
    [anon_sym_virtual] = ACTIONS(45),
    [anon_sym_volatile] = ACTIONS(45),
    [anon_sym_weak] = ACTIONS(45),
    [anon_sym_async] = ACTIONS(45),
    [anon_sym_owned] = ACTIONS(45),
    [anon_sym_unowned] = ACTIONS(45),
    [anon_sym_ref] = ACTIONS(45),
    [anon_sym_out] = ACTIONS(45),
    [anon_sym_bool] = ACTIONS(45),
    [anon_sym_char] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_size_t] = ACTIONS(45),
    [anon_sym_ssize_t] = ACTIONS(45),
    [anon_sym_string] = ACTIONS(45),
    [anon_sym_unichar] = ACTIONS(45),
    [anon_sym_void] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(47),
    [anon_sym_int8] = ACTIONS(45),
    [anon_sym_int16] = ACTIONS(45),
    [anon_sym_int32] = ACTIONS(45),
    [anon_sym_int64] = ACTIONS(45),
    [anon_sym_long] = ACTIONS(45),
    [anon_sym_short] = ACTIONS(45),
    [anon_sym_uchar] = ACTIONS(45),
    [anon_sym_uint] = ACTIONS(47),
    [anon_sym_uint8] = ACTIONS(45),
    [anon_sym_uint16] = ACTIONS(45),
    [anon_sym_uint32] = ACTIONS(45),
    [anon_sym_uint64] = ACTIONS(45),
    [anon_sym_ulong] = ACTIONS(45),
    [anon_sym_ushort] = ACTIONS(45),
  },
  [13] = {
    [anon_sym_abstract] = ACTIONS(49),
    [anon_sym_const] = ACTIONS(49),
    [anon_sym_dynamic] = ACTIONS(49),
    [anon_sym_ensures] = ACTIONS(49),
    [anon_sym_extern] = ACTIONS(49),
    [anon_sym_inline] = ACTIONS(49),
    [anon_sym_internal] = ACTIONS(49),
    [anon_sym_override] = ACTIONS(49),
    [anon_sym_private] = ACTIONS(49),
    [anon_sym_protected] = ACTIONS(49),
    [anon_sym_public] = ACTIONS(49),
    [anon_sym_requires] = ACTIONS(49),
    [anon_sym_signal] = ACTIONS(49),
    [anon_sym_static] = ACTIONS(49),
    [anon_sym_virtual] = ACTIONS(49),
    [anon_sym_volatile] = ACTIONS(49),
    [anon_sym_weak] = ACTIONS(49),
    [anon_sym_async] = ACTIONS(49),
    [anon_sym_owned] = ACTIONS(49),
    [anon_sym_unowned] = ACTIONS(49),
    [anon_sym_ref] = ACTIONS(49),
    [anon_sym_out] = ACTIONS(49),
    [anon_sym_bool] = ACTIONS(49),
    [anon_sym_char] = ACTIONS(49),
    [anon_sym_double] = ACTIONS(49),
    [anon_sym_float] = ACTIONS(49),
    [anon_sym_size_t] = ACTIONS(49),
    [anon_sym_ssize_t] = ACTIONS(49),
    [anon_sym_string] = ACTIONS(49),
    [anon_sym_unichar] = ACTIONS(49),
    [anon_sym_void] = ACTIONS(49),
    [anon_sym_int] = ACTIONS(51),
    [anon_sym_int8] = ACTIONS(49),
    [anon_sym_int16] = ACTIONS(49),
    [anon_sym_int32] = ACTIONS(49),
    [anon_sym_int64] = ACTIONS(49),
    [anon_sym_long] = ACTIONS(49),
    [anon_sym_short] = ACTIONS(49),
    [anon_sym_uchar] = ACTIONS(49),
    [anon_sym_uint] = ACTIONS(51),
    [anon_sym_uint8] = ACTIONS(49),
    [anon_sym_uint16] = ACTIONS(49),
    [anon_sym_uint32] = ACTIONS(49),
    [anon_sym_uint64] = ACTIONS(49),
    [anon_sym_ulong] = ACTIONS(49),
    [anon_sym_ushort] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(55), 2,
      sym_identifier,
      sym_number,
    STATE(22), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [14] = 3,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(57), 2,
      sym_identifier,
      sym_number,
    STATE(23), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [28] = 4,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(16), 4,
      sym__statement,
      sym_return_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [44] = 3,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(67), 2,
      sym_identifier,
      sym_number,
    STATE(26), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [58] = 4,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(19), 4,
      sym__statement,
      sym_return_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [74] = 4,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(16), 4,
      sym__statement,
      sym_return_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [90] = 3,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(77), 2,
      sym_identifier,
      sym_number,
    STATE(25), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [104] = 3,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(79), 2,
      sym_identifier,
      sym_number,
    STATE(24), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [118] = 1,
    ACTIONS(81), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [126] = 1,
    ACTIONS(83), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [134] = 3,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [146] = 2,
    ACTIONS(89), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(83), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
  [156] = 3,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [168] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_parameter_list_repeat1,
  [178] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_parameter_list_repeat1,
  [188] = 2,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 2,
      anon_sym_return,
      sym_identifier,
  [196] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parameter_list_repeat1,
  [206] = 2,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 2,
      anon_sym_return,
      sym_identifier,
  [214] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_parameter_list,
  [221] = 2,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [228] = 2,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
  [235] = 1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [240] = 1,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [245] = 1,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [250] = 2,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [257] = 1,
    ACTIONS(120), 1,
      sym_identifier,
  [261] = 1,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
  [265] = 1,
    ACTIONS(124), 1,
      sym_identifier,
  [269] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [273] = 1,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
  [277] = 1,
    ACTIONS(130), 1,
      anon_sym_EQ,
  [281] = 1,
    ACTIONS(132), 1,
      sym_identifier,
  [285] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [289] = 1,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
  [293] = 1,
    ACTIONS(138), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 14,
  [SMALL_STATE(16)] = 28,
  [SMALL_STATE(17)] = 44,
  [SMALL_STATE(18)] = 58,
  [SMALL_STATE(19)] = 74,
  [SMALL_STATE(20)] = 90,
  [SMALL_STATE(21)] = 104,
  [SMALL_STATE(22)] = 118,
  [SMALL_STATE(23)] = 126,
  [SMALL_STATE(24)] = 134,
  [SMALL_STATE(25)] = 146,
  [SMALL_STATE(26)] = 156,
  [SMALL_STATE(27)] = 168,
  [SMALL_STATE(28)] = 178,
  [SMALL_STATE(29)] = 188,
  [SMALL_STATE(30)] = 196,
  [SMALL_STATE(31)] = 206,
  [SMALL_STATE(32)] = 214,
  [SMALL_STATE(33)] = 221,
  [SMALL_STATE(34)] = 228,
  [SMALL_STATE(35)] = 235,
  [SMALL_STATE(36)] = 240,
  [SMALL_STATE(37)] = 245,
  [SMALL_STATE(38)] = 250,
  [SMALL_STATE(39)] = 257,
  [SMALL_STATE(40)] = 261,
  [SMALL_STATE(41)] = 265,
  [SMALL_STATE(42)] = 269,
  [SMALL_STATE(43)] = 273,
  [SMALL_STATE(44)] = 277,
  [SMALL_STATE(45)] = 281,
  [SMALL_STATE(46)] = 285,
  [SMALL_STATE(47)] = 289,
  [SMALL_STATE(48)] = 293,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
