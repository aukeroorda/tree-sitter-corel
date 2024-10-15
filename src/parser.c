#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  anon_sym_TEST_PRECEDENCE_LF = 2,
  anon_sym_TEST_EXACT_VALUE_LF = 3,
  anon_sym_TEST_NATURAL_NUMBER_LF = 4,
  anon_sym_TEST_FRACTION_LF = 5,
  anon_sym_LF = 6,
  aux_sym_source_file_token2 = 7,
  sym_non_delimiter_text = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_AT = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  sym_quantity_unit = 14,
  sym_ingredient_identifier = 15,
  anon_sym_SLASH = 16,
  sym_natural_number = 17,
  sym__hwhitespace = 18,
  sym_source_file = 19,
  sym_recipe = 20,
  sym__block = 21,
  sym_paragraph = 22,
  sym_inline = 23,
  sym_ingredient_def = 24,
  sym_ingredient_ref = 25,
  sym_quantity = 26,
  sym_exact_value = 27,
  sym_mixed = 28,
  sym_fraction = 29,
  aux_sym_recipe_repeat1 = 30,
  aux_sym_paragraph_repeat1 = 31,
  aux_sym_inline_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_TEST_PRECEDENCE_LF] = "TEST_PRECEDENCE\n",
  [anon_sym_TEST_EXACT_VALUE_LF] = "TEST_EXACT_VALUE\n",
  [anon_sym_TEST_NATURAL_NUMBER_LF] = "TEST_NATURAL_NUMBER\n",
  [anon_sym_TEST_FRACTION_LF] = "TEST_FRACTION\n",
  [anon_sym_LF] = "\n",
  [aux_sym_source_file_token2] = "source_file_token2",
  [sym_non_delimiter_text] = "non_delimiter_text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_quantity_unit] = "quantity_unit",
  [sym_ingredient_identifier] = "ingredient_identifier",
  [anon_sym_SLASH] = "/",
  [sym_natural_number] = "natural_number",
  [sym__hwhitespace] = "_hwhitespace",
  [sym_source_file] = "source_file",
  [sym_recipe] = "recipe",
  [sym__block] = "_block",
  [sym_paragraph] = "paragraph",
  [sym_inline] = "inline",
  [sym_ingredient_def] = "ingredient_def",
  [sym_ingredient_ref] = "ingredient_ref",
  [sym_quantity] = "quantity",
  [sym_exact_value] = "exact_value",
  [sym_mixed] = "mixed",
  [sym_fraction] = "fraction",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_inline_repeat1] = "inline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_TEST_PRECEDENCE_LF] = anon_sym_TEST_PRECEDENCE_LF,
  [anon_sym_TEST_EXACT_VALUE_LF] = anon_sym_TEST_EXACT_VALUE_LF,
  [anon_sym_TEST_NATURAL_NUMBER_LF] = anon_sym_TEST_NATURAL_NUMBER_LF,
  [anon_sym_TEST_FRACTION_LF] = anon_sym_TEST_FRACTION_LF,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_source_file_token2] = aux_sym_source_file_token2,
  [sym_non_delimiter_text] = sym_non_delimiter_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_quantity_unit] = sym_quantity_unit,
  [sym_ingredient_identifier] = sym_ingredient_identifier,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_natural_number] = sym_natural_number,
  [sym__hwhitespace] = sym__hwhitespace,
  [sym_source_file] = sym_source_file,
  [sym_recipe] = sym_recipe,
  [sym__block] = sym__block,
  [sym_paragraph] = sym_paragraph,
  [sym_inline] = sym_inline,
  [sym_ingredient_def] = sym_ingredient_def,
  [sym_ingredient_ref] = sym_ingredient_ref,
  [sym_quantity] = sym_quantity,
  [sym_exact_value] = sym_exact_value,
  [sym_mixed] = sym_mixed,
  [sym_fraction] = sym_fraction,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TEST_PRECEDENCE_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST_EXACT_VALUE_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST_NATURAL_NUMBER_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST_FRACTION_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_file_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_non_delimiter_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_quantity_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_natural_number] = {
    .visible = true,
    .named = true,
  },
  [sym__hwhitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient_def] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_exact_value] = {
    .visible = true,
    .named = true,
  },
  [sym_mixed] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_denominator = 1,
  field_numerator = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_denominator] = "denominator",
  [field_numerator] = "numerator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_denominator, 2},
    {field_numerator, 0},
  [2] =
    {field_denominator, 3},
    {field_numerator, 0},
  [4] =
    {field_denominator, 4},
    {field_numerator, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 26,
  [44] = 27,
  [45] = 28,
  [46] = 29,
  [47] = 31,
  [48] = 48,
  [49] = 32,
  [50] = 37,
  [51] = 51,
  [52] = 40,
  [53] = 35,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 61,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ']') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ']') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'P') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(4);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'X') ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(67);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_TEST_PRECEDENCE_LF);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_TEST_EXACT_VALUE_LF);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_TEST_NATURAL_NUMBER_LF);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_TEST_FRACTION_LF);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_non_delimiter_text);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_non_delimiter_text);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_non_delimiter_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_quantity_unit);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_quantity_unit);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '/' || '9' < lookahead) &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_quantity_unit);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_quantity_unit);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ingredient_identifier);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ingredient_identifier);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_natural_number);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__hwhitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
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
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_TEST_PRECEDENCE_LF] = ACTIONS(1),
    [anon_sym_TEST_EXACT_VALUE_LF] = ACTIONS(1),
    [anon_sym_TEST_NATURAL_NUMBER_LF] = ACTIONS(1),
    [anon_sym_TEST_FRACTION_LF] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_natural_number] = ACTIONS(1),
    [sym__hwhitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym_recipe] = STATE(54),
    [sym__block] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_inline] = STATE(63),
    [sym_ingredient_def] = STATE(6),
    [sym_ingredient_ref] = STATE(6),
    [sym_quantity] = STATE(6),
    [aux_sym_recipe_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [aux_sym_inline_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_non_delimiter_text] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(22), 1,
      sym_non_delimiter_text,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(63), 1,
      sym_inline,
    STATE(2), 3,
      sym__block,
      sym_paragraph,
      aux_sym_recipe_repeat1,
    STATE(6), 4,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      aux_sym_inline_repeat1,
  [36] = 10,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_LF,
    ACTIONS(38), 1,
      sym_non_delimiter_text,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(63), 1,
      sym_inline,
    STATE(2), 3,
      sym__block,
      sym_paragraph,
      aux_sym_recipe_repeat1,
    STATE(6), 4,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      aux_sym_inline_repeat1,
  [72] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym_non_delimiter_text,
    ACTIONS(40), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(63), 1,
      sym_inline,
    STATE(6), 4,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      aux_sym_inline_repeat1,
  [100] = 8,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      sym_non_delimiter_text,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(63), 1,
      sym_inline,
    STATE(6), 4,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      aux_sym_inline_repeat1,
  [128] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      sym_non_delimiter_text,
    STATE(7), 4,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      aux_sym_inline_repeat1,
  [150] = 6,
    ACTIONS(60), 1,
      anon_sym_LF,
    ACTIONS(62), 1,
      sym_non_delimiter_text,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    STATE(7), 4,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      aux_sym_inline_repeat1,
  [172] = 7,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(76), 1,
      sym_quantity_unit,
    ACTIONS(78), 1,
      sym_natural_number,
    ACTIONS(80), 1,
      sym__hwhitespace,
    STATE(25), 1,
      sym_exact_value,
    STATE(26), 1,
      sym_mixed,
    STATE(27), 1,
      sym_fraction,
  [194] = 4,
    ACTIONS(84), 1,
      anon_sym_SLASH,
    ACTIONS(86), 1,
      sym_natural_number,
    STATE(28), 1,
      sym_fraction,
    ACTIONS(82), 3,
      anon_sym_RBRACK,
      sym_quantity_unit,
      sym__hwhitespace,
  [209] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_non_delimiter_text,
    ACTIONS(90), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [220] = 5,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(96), 1,
      sym_natural_number,
    ACTIONS(98), 1,
      sym__hwhitespace,
    STATE(45), 1,
      sym_fraction,
    ACTIONS(92), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [237] = 5,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(96), 1,
      sym_natural_number,
    ACTIONS(98), 1,
      sym__hwhitespace,
    STATE(45), 1,
      sym_fraction,
    ACTIONS(92), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [254] = 2,
    ACTIONS(100), 1,
      sym_non_delimiter_text,
    ACTIONS(42), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [264] = 2,
    ACTIONS(104), 1,
      sym_non_delimiter_text,
    ACTIONS(102), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [274] = 2,
    ACTIONS(108), 1,
      sym_non_delimiter_text,
    ACTIONS(106), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [284] = 2,
    ACTIONS(112), 1,
      sym_non_delimiter_text,
    ACTIONS(110), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [294] = 2,
    ACTIONS(116), 1,
      sym_non_delimiter_text,
    ACTIONS(114), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [304] = 2,
    ACTIONS(120), 1,
      sym_non_delimiter_text,
    ACTIONS(118), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [314] = 2,
    ACTIONS(124), 1,
      sym_non_delimiter_text,
    ACTIONS(122), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [324] = 2,
    ACTIONS(128), 1,
      sym_non_delimiter_text,
    ACTIONS(126), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [334] = 2,
    ACTIONS(132), 1,
      sym_non_delimiter_text,
    ACTIONS(130), 4,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [344] = 4,
    ACTIONS(134), 1,
      sym_natural_number,
    STATE(43), 1,
      sym_mixed,
    STATE(44), 1,
      sym_fraction,
    STATE(48), 1,
      sym_exact_value,
  [357] = 4,
    ACTIONS(136), 1,
      sym_natural_number,
    STATE(43), 1,
      sym_mixed,
    STATE(48), 1,
      sym_exact_value,
    STATE(51), 1,
      sym_fraction,
  [370] = 4,
    ACTIONS(138), 1,
      anon_sym_TEST_PRECEDENCE_LF,
    ACTIONS(140), 1,
      anon_sym_TEST_EXACT_VALUE_LF,
    ACTIONS(142), 1,
      anon_sym_TEST_NATURAL_NUMBER_LF,
    ACTIONS(144), 1,
      anon_sym_TEST_FRACTION_LF,
  [383] = 3,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    ACTIONS(148), 1,
      sym_quantity_unit,
    ACTIONS(150), 1,
      sym__hwhitespace,
  [393] = 2,
    ACTIONS(92), 1,
      sym_quantity_unit,
    ACTIONS(82), 2,
      anon_sym_RBRACK,
      sym__hwhitespace,
  [401] = 2,
    ACTIONS(92), 1,
      sym_quantity_unit,
    ACTIONS(82), 2,
      anon_sym_RBRACK,
      sym__hwhitespace,
  [409] = 2,
    ACTIONS(154), 1,
      sym_quantity_unit,
    ACTIONS(152), 2,
      anon_sym_RBRACK,
      sym__hwhitespace,
  [417] = 2,
    ACTIONS(158), 1,
      sym_quantity_unit,
    ACTIONS(156), 2,
      anon_sym_RBRACK,
      sym__hwhitespace,
  [425] = 2,
    ACTIONS(162), 1,
      sym_quantity_unit,
    ACTIONS(160), 2,
      anon_sym_RBRACK,
      sym__hwhitespace,
  [433] = 2,
    ACTIONS(166), 1,
      sym_quantity_unit,
    ACTIONS(164), 2,
      anon_sym_RBRACK,
      sym__hwhitespace,
  [441] = 2,
    ACTIONS(170), 1,
      sym_quantity_unit,
    ACTIONS(168), 2,
      anon_sym_RBRACK,
      sym__hwhitespace,
  [449] = 3,
    ACTIONS(96), 1,
      sym_natural_number,
    ACTIONS(172), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_fraction,
  [459] = 1,
    ACTIONS(162), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [464] = 2,
    ACTIONS(174), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      sym__hwhitespace,
  [471] = 2,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    ACTIONS(148), 1,
      sym_quantity_unit,
  [478] = 2,
    ACTIONS(178), 1,
      sym_natural_number,
    ACTIONS(180), 1,
      sym__hwhitespace,
  [485] = 2,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(184), 1,
      sym_quantity_unit,
  [492] = 2,
    ACTIONS(96), 1,
      sym_natural_number,
    STATE(48), 1,
      sym_fraction,
  [499] = 2,
    ACTIONS(186), 1,
      sym_natural_number,
    ACTIONS(188), 1,
      sym__hwhitespace,
  [506] = 2,
    ACTIONS(190), 1,
      anon_sym_AT,
    ACTIONS(192), 1,
      sym_ingredient_identifier,
  [513] = 2,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym_ingredient_identifier,
  [520] = 1,
    ACTIONS(92), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [525] = 1,
    ACTIONS(92), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [530] = 1,
    ACTIONS(154), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [535] = 1,
    ACTIONS(158), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [540] = 1,
    ACTIONS(166), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [545] = 2,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 1,
      aux_sym_source_file_token2,
  [552] = 1,
    ACTIONS(170), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [557] = 2,
    ACTIONS(202), 1,
      sym_natural_number,
    ACTIONS(204), 1,
      sym__hwhitespace,
  [564] = 1,
    ACTIONS(92), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [569] = 2,
    ACTIONS(206), 1,
      sym_natural_number,
    ACTIONS(208), 1,
      sym__hwhitespace,
  [576] = 2,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(210), 1,
      sym__hwhitespace,
  [583] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [587] = 1,
    ACTIONS(214), 1,
      anon_sym_AT,
  [591] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [595] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
  [599] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [603] = 1,
    ACTIONS(172), 1,
      anon_sym_SLASH,
  [607] = 1,
    ACTIONS(222), 1,
      sym_natural_number,
  [611] = 1,
    ACTIONS(186), 1,
      sym_natural_number,
  [615] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
  [619] = 1,
    ACTIONS(226), 1,
      anon_sym_LF,
  [623] = 1,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
  [627] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
  [631] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [635] = 1,
    ACTIONS(206), 1,
      sym_natural_number,
  [639] = 1,
    ACTIONS(234), 1,
      aux_sym_source_file_token2,
  [643] = 1,
    ACTIONS(236), 1,
      sym_natural_number,
  [647] = 1,
    ACTIONS(238), 1,
      sym_natural_number,
  [651] = 1,
    ACTIONS(240), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 237,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 264,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 294,
  [SMALL_STATE(18)] = 304,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 334,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 383,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 401,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 417,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 433,
  [SMALL_STATE(32)] = 441,
  [SMALL_STATE(33)] = 449,
  [SMALL_STATE(34)] = 459,
  [SMALL_STATE(35)] = 464,
  [SMALL_STATE(36)] = 471,
  [SMALL_STATE(37)] = 478,
  [SMALL_STATE(38)] = 485,
  [SMALL_STATE(39)] = 492,
  [SMALL_STATE(40)] = 499,
  [SMALL_STATE(41)] = 506,
  [SMALL_STATE(42)] = 513,
  [SMALL_STATE(43)] = 520,
  [SMALL_STATE(44)] = 525,
  [SMALL_STATE(45)] = 530,
  [SMALL_STATE(46)] = 535,
  [SMALL_STATE(47)] = 540,
  [SMALL_STATE(48)] = 545,
  [SMALL_STATE(49)] = 552,
  [SMALL_STATE(50)] = 557,
  [SMALL_STATE(51)] = 564,
  [SMALL_STATE(52)] = 569,
  [SMALL_STATE(53)] = 576,
  [SMALL_STATE(54)] = 583,
  [SMALL_STATE(55)] = 587,
  [SMALL_STATE(56)] = 591,
  [SMALL_STATE(57)] = 595,
  [SMALL_STATE(58)] = 599,
  [SMALL_STATE(59)] = 603,
  [SMALL_STATE(60)] = 607,
  [SMALL_STATE(61)] = 611,
  [SMALL_STATE(62)] = 615,
  [SMALL_STATE(63)] = 619,
  [SMALL_STATE(64)] = 623,
  [SMALL_STATE(65)] = 627,
  [SMALL_STATE(66)] = 631,
  [SMALL_STATE(67)] = 635,
  [SMALL_STATE(68)] = 639,
  [SMALL_STATE(69)] = 643,
  [SMALL_STATE(70)] = 647,
  [SMALL_STATE(71)] = 651,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_value, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_def, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_def, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_def, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_def, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixed, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 3, 0, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3, 0, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 4, 0, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 4, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixed, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 5, 0, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 5, 0, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_corel(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
