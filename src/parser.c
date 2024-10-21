#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  sym_non_delimiter_text_no_digits = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_AT = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_PIPE = 17,
  sym_ingredient_identifier = 18,
  anon_sym_SLASH = 19,
  sym_natural_number = 20,
  sym__hwhitespace = 21,
  sym_source_file = 22,
  sym_recipe = 23,
  sym__block = 24,
  sym_paragraph = 25,
  sym_inline = 26,
  sym_ingredient_def = 27,
  sym_ingredient_ref = 28,
  sym_quantity = 29,
  sym_temperature = 30,
  sym_time = 31,
  sym_quantity_unit = 32,
  sym_exact_value = 33,
  sym_mixed = 34,
  sym_fraction = 35,
  aux_sym_recipe_repeat1 = 36,
  aux_sym_paragraph_repeat1 = 37,
  aux_sym_inline_repeat1 = 38,
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
  [sym_non_delimiter_text_no_digits] = "non_delimiter_text_no_digits",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE] = "|",
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
  [sym_temperature] = "temperature",
  [sym_time] = "time",
  [sym_quantity_unit] = "quantity_unit",
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
  [sym_non_delimiter_text_no_digits] = sym_non_delimiter_text_no_digits,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym_temperature] = sym_temperature,
  [sym_time] = sym_time,
  [sym_quantity_unit] = sym_quantity_unit,
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
  [sym_non_delimiter_text_no_digits] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
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
  [sym_temperature] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity_unit] = {
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
  [12] = 12,
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
  [31] = 11,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 54,
  [61] = 61,
  [62] = 53,
  [63] = 32,
  [64] = 33,
  [65] = 34,
  [66] = 36,
  [67] = 35,
  [68] = 37,
  [69] = 38,
  [70] = 56,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 81,
  [91] = 91,
  [92] = 75,
  [93] = 93,
  [94] = 77,
};

static TSCharacterRange sym_non_delimiter_text_no_digits_character_set_1[] = {
  {0, '\t'}, {0x0b, '/'}, {':', ';'}, {'=', '='}, {'?', '?'}, {'A', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '/' || '9' < lookahead) &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '[' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(81);
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
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(4);
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
      if (lookahead == 'N') ADVANCE(2);
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
      if (lookahead == 'R') ADVANCE(5);
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
      ADVANCE_MAP(
        '\n', 62,
        '\r', 65,
        '<', 77,
        '@', 74,
        '[', 75,
        '{', 72,
        '|', 79,
        '~', 57,
      );
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(67);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead != 0 &&
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
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead)) ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
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
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead)) ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_non_delimiter_text);
      if (lookahead == '\r') ADVANCE(66);
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead)) ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_non_delimiter_text);
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead)) ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_non_delimiter_text_no_digits);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead))) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_non_delimiter_text_no_digits);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead))) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_non_delimiter_text_no_digits);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead))) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_non_delimiter_text_no_digits);
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead))) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ingredient_identifier);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ingredient_identifier);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if ((!eof && set_contains(sym_non_delimiter_text_no_digits_character_set_1, 9, lookahead))) ADVANCE(71);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__hwhitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
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
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_natural_number] = ACTIONS(1),
    [sym__hwhitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_recipe] = STATE(82),
    [sym__block] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_inline] = STATE(86),
    [sym_ingredient_def] = STATE(6),
    [sym_ingredient_ref] = STATE(6),
    [sym_quantity] = STATE(6),
    [sym_temperature] = STATE(6),
    [sym_time] = STATE(6),
    [aux_sym_recipe_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [aux_sym_inline_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_non_delimiter_text] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      sym_non_delimiter_text,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(86), 1,
      sym_inline,
    STATE(3), 3,
      sym__block,
      sym_paragraph,
      aux_sym_recipe_repeat1,
    STATE(6), 6,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      sym_temperature,
      sym_time,
      aux_sym_inline_repeat1,
  [44] = 12,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      sym_non_delimiter_text,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(86), 1,
      sym_inline,
    STATE(3), 3,
      sym__block,
      sym_paragraph,
      aux_sym_recipe_repeat1,
    STATE(6), 6,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      sym_temperature,
      sym_time,
      aux_sym_inline_repeat1,
  [88] = 10,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(25), 1,
      sym_non_delimiter_text,
    ACTIONS(50), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(86), 1,
      sym_inline,
    STATE(6), 6,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      sym_temperature,
      sym_time,
      aux_sym_inline_repeat1,
  [124] = 10,
    ACTIONS(52), 1,
      anon_sym_LF,
    ACTIONS(54), 1,
      sym_non_delimiter_text,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(86), 1,
      sym_inline,
    STATE(6), 6,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      sym_temperature,
      sym_time,
      aux_sym_inline_repeat1,
  [160] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      sym_non_delimiter_text,
    STATE(7), 6,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      sym_temperature,
      sym_time,
      aux_sym_inline_repeat1,
  [190] = 8,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      sym_non_delimiter_text,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_AT,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    STATE(7), 6,
      sym_ingredient_def,
      sym_ingredient_ref,
      sym_quantity,
      sym_temperature,
      sym_time,
      aux_sym_inline_repeat1,
  [220] = 8,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(98), 1,
      anon_sym_GT,
    ACTIONS(100), 1,
      sym_natural_number,
    ACTIONS(102), 1,
      sym__hwhitespace,
    STATE(32), 1,
      sym_mixed,
    STATE(33), 1,
      sym_fraction,
    STATE(40), 1,
      sym_exact_value,
    STATE(84), 1,
      sym_quantity_unit,
  [245] = 8,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(100), 1,
      sym_natural_number,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      sym__hwhitespace,
    STATE(32), 1,
      sym_mixed,
    STATE(33), 1,
      sym_fraction,
    STATE(43), 1,
      sym_exact_value,
    STATE(71), 1,
      sym_quantity_unit,
  [270] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_non_delimiter_text,
    ACTIONS(110), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [283] = 4,
    ACTIONS(114), 1,
      anon_sym_SLASH,
    ACTIONS(116), 1,
      sym_natural_number,
    STATE(34), 1,
      sym_fraction,
    ACTIONS(112), 5,
      sym_non_delimiter_text_no_digits,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [300] = 8,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(100), 1,
      sym_natural_number,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(120), 1,
      sym__hwhitespace,
    STATE(32), 1,
      sym_mixed,
    STATE(33), 1,
      sym_fraction,
    STATE(42), 1,
      sym_exact_value,
    STATE(76), 1,
      sym_quantity_unit,
  [325] = 2,
    ACTIONS(124), 1,
      sym_non_delimiter_text,
    ACTIONS(122), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [337] = 2,
    ACTIONS(128), 1,
      sym_non_delimiter_text,
    ACTIONS(126), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [349] = 2,
    ACTIONS(132), 1,
      sym_non_delimiter_text,
    ACTIONS(130), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [361] = 2,
    ACTIONS(136), 1,
      sym_non_delimiter_text,
    ACTIONS(134), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [373] = 2,
    ACTIONS(140), 1,
      sym_non_delimiter_text,
    ACTIONS(138), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [385] = 2,
    ACTIONS(144), 1,
      sym_non_delimiter_text,
    ACTIONS(142), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [397] = 2,
    ACTIONS(146), 1,
      sym_non_delimiter_text,
    ACTIONS(52), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [409] = 2,
    ACTIONS(150), 1,
      sym_non_delimiter_text,
    ACTIONS(148), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [421] = 2,
    ACTIONS(154), 1,
      sym_non_delimiter_text,
    ACTIONS(152), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [433] = 2,
    ACTIONS(158), 1,
      sym_non_delimiter_text,
    ACTIONS(156), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [445] = 2,
    ACTIONS(162), 1,
      sym_non_delimiter_text,
    ACTIONS(160), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [457] = 2,
    ACTIONS(166), 1,
      sym_non_delimiter_text,
    ACTIONS(164), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [469] = 2,
    ACTIONS(170), 1,
      sym_non_delimiter_text,
    ACTIONS(168), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [481] = 2,
    ACTIONS(174), 1,
      sym_non_delimiter_text,
    ACTIONS(172), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [493] = 2,
    ACTIONS(178), 1,
      sym_non_delimiter_text,
    ACTIONS(176), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [505] = 2,
    ACTIONS(182), 1,
      sym_non_delimiter_text,
    ACTIONS(180), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [517] = 2,
    ACTIONS(186), 1,
      sym_non_delimiter_text,
    ACTIONS(184), 6,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_PIPE,
  [529] = 5,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    ACTIONS(192), 1,
      sym_natural_number,
    ACTIONS(194), 1,
      sym__hwhitespace,
    STATE(65), 1,
      sym_fraction,
    ACTIONS(188), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [546] = 5,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    ACTIONS(192), 1,
      sym_natural_number,
    ACTIONS(194), 1,
      sym__hwhitespace,
    STATE(65), 1,
      sym_fraction,
    ACTIONS(188), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [563] = 2,
    ACTIONS(188), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(112), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [573] = 2,
    ACTIONS(188), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(112), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [583] = 2,
    ACTIONS(196), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(198), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [593] = 2,
    ACTIONS(200), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(202), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [603] = 2,
    ACTIONS(204), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(206), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [613] = 2,
    ACTIONS(208), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(210), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [623] = 2,
    ACTIONS(212), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(214), 4,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      sym__hwhitespace,
  [633] = 4,
    ACTIONS(216), 1,
      anon_sym_TEST_PRECEDENCE_LF,
    ACTIONS(218), 1,
      anon_sym_TEST_EXACT_VALUE_LF,
    ACTIONS(220), 1,
      anon_sym_TEST_NATURAL_NUMBER_LF,
    ACTIONS(222), 1,
      anon_sym_TEST_FRACTION_LF,
  [646] = 4,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(224), 1,
      anon_sym_GT,
    ACTIONS(226), 1,
      sym__hwhitespace,
    STATE(72), 1,
      sym_quantity_unit,
  [659] = 4,
    ACTIONS(228), 1,
      sym_natural_number,
    STATE(58), 1,
      sym_exact_value,
    STATE(63), 1,
      sym_mixed,
    STATE(64), 1,
      sym_fraction,
  [672] = 4,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    ACTIONS(232), 1,
      sym__hwhitespace,
    STATE(88), 1,
      sym_quantity_unit,
  [685] = 4,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    ACTIONS(236), 1,
      sym__hwhitespace,
    STATE(83), 1,
      sym_quantity_unit,
  [698] = 4,
    ACTIONS(238), 1,
      sym_natural_number,
    STATE(58), 1,
      sym_exact_value,
    STATE(59), 1,
      sym_fraction,
    STATE(63), 1,
      sym_mixed,
  [711] = 3,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(224), 1,
      anon_sym_GT,
    STATE(72), 1,
      sym_quantity_unit,
  [721] = 3,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_quantity_unit,
  [731] = 3,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_quantity_unit,
  [741] = 3,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(242), 1,
      anon_sym_GT,
    STATE(87), 1,
      sym_quantity_unit,
  [751] = 3,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      sym_quantity_unit,
  [761] = 3,
    ACTIONS(96), 1,
      sym_non_delimiter_text_no_digits,
    ACTIONS(244), 1,
      anon_sym_PIPE,
    STATE(93), 1,
      sym_quantity_unit,
  [771] = 1,
    ACTIONS(246), 3,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
  [777] = 3,
    ACTIONS(192), 1,
      sym_natural_number,
    ACTIONS(248), 1,
      anon_sym_SLASH,
    STATE(67), 1,
      sym_fraction,
  [787] = 2,
    ACTIONS(250), 1,
      sym_natural_number,
    ACTIONS(252), 1,
      sym__hwhitespace,
  [794] = 2,
    ACTIONS(254), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      sym__hwhitespace,
  [801] = 2,
    ACTIONS(192), 1,
      sym_natural_number,
    STATE(58), 1,
      sym_fraction,
  [808] = 2,
    ACTIONS(258), 1,
      sym_natural_number,
    ACTIONS(260), 1,
      sym__hwhitespace,
  [815] = 2,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 1,
      sym_ingredient_identifier,
  [822] = 2,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      aux_sym_source_file_token2,
  [829] = 1,
    ACTIONS(188), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [834] = 2,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    ACTIONS(270), 1,
      sym__hwhitespace,
  [841] = 2,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      sym_ingredient_identifier,
  [848] = 2,
    ACTIONS(276), 1,
      sym_natural_number,
    ACTIONS(278), 1,
      sym__hwhitespace,
  [855] = 1,
    ACTIONS(188), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [860] = 1,
    ACTIONS(188), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [865] = 1,
    ACTIONS(196), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [870] = 1,
    ACTIONS(204), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [875] = 1,
    ACTIONS(200), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [880] = 1,
    ACTIONS(208), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [885] = 1,
    ACTIONS(212), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [890] = 2,
    ACTIONS(280), 1,
      sym_natural_number,
    ACTIONS(282), 1,
      sym__hwhitespace,
  [897] = 1,
    ACTIONS(284), 1,
      anon_sym_PIPE,
  [901] = 1,
    ACTIONS(286), 1,
      anon_sym_GT,
  [905] = 1,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [909] = 1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
  [913] = 1,
    ACTIONS(292), 1,
      sym_natural_number,
  [917] = 1,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
  [921] = 1,
    ACTIONS(248), 1,
      anon_sym_SLASH,
  [925] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
  [929] = 1,
    ACTIONS(298), 1,
      anon_sym_AT,
  [933] = 1,
    ACTIONS(300), 1,
      sym_natural_number,
  [937] = 1,
    ACTIONS(258), 1,
      sym_natural_number,
  [941] = 1,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
  [945] = 1,
    ACTIONS(304), 1,
      anon_sym_PIPE,
  [949] = 1,
    ACTIONS(306), 1,
      anon_sym_GT,
  [953] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
  [957] = 1,
    ACTIONS(310), 1,
      anon_sym_LF,
  [961] = 1,
    ACTIONS(312), 1,
      anon_sym_GT,
  [965] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
  [969] = 1,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
  [973] = 1,
    ACTIONS(280), 1,
      sym_natural_number,
  [977] = 1,
    ACTIONS(318), 1,
      aux_sym_source_file_token2,
  [981] = 1,
    ACTIONS(320), 1,
      sym_natural_number,
  [985] = 1,
    ACTIONS(322), 1,
      anon_sym_PIPE,
  [989] = 1,
    ACTIONS(324), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 325,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 421,
  [SMALL_STATE(22)] = 433,
  [SMALL_STATE(23)] = 445,
  [SMALL_STATE(24)] = 457,
  [SMALL_STATE(25)] = 469,
  [SMALL_STATE(26)] = 481,
  [SMALL_STATE(27)] = 493,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 529,
  [SMALL_STATE(31)] = 546,
  [SMALL_STATE(32)] = 563,
  [SMALL_STATE(33)] = 573,
  [SMALL_STATE(34)] = 583,
  [SMALL_STATE(35)] = 593,
  [SMALL_STATE(36)] = 603,
  [SMALL_STATE(37)] = 613,
  [SMALL_STATE(38)] = 623,
  [SMALL_STATE(39)] = 633,
  [SMALL_STATE(40)] = 646,
  [SMALL_STATE(41)] = 659,
  [SMALL_STATE(42)] = 672,
  [SMALL_STATE(43)] = 685,
  [SMALL_STATE(44)] = 698,
  [SMALL_STATE(45)] = 711,
  [SMALL_STATE(46)] = 721,
  [SMALL_STATE(47)] = 731,
  [SMALL_STATE(48)] = 741,
  [SMALL_STATE(49)] = 751,
  [SMALL_STATE(50)] = 761,
  [SMALL_STATE(51)] = 771,
  [SMALL_STATE(52)] = 777,
  [SMALL_STATE(53)] = 787,
  [SMALL_STATE(54)] = 794,
  [SMALL_STATE(55)] = 801,
  [SMALL_STATE(56)] = 808,
  [SMALL_STATE(57)] = 815,
  [SMALL_STATE(58)] = 822,
  [SMALL_STATE(59)] = 829,
  [SMALL_STATE(60)] = 834,
  [SMALL_STATE(61)] = 841,
  [SMALL_STATE(62)] = 848,
  [SMALL_STATE(63)] = 855,
  [SMALL_STATE(64)] = 860,
  [SMALL_STATE(65)] = 865,
  [SMALL_STATE(66)] = 870,
  [SMALL_STATE(67)] = 875,
  [SMALL_STATE(68)] = 880,
  [SMALL_STATE(69)] = 885,
  [SMALL_STATE(70)] = 890,
  [SMALL_STATE(71)] = 897,
  [SMALL_STATE(72)] = 901,
  [SMALL_STATE(73)] = 905,
  [SMALL_STATE(74)] = 909,
  [SMALL_STATE(75)] = 913,
  [SMALL_STATE(76)] = 917,
  [SMALL_STATE(77)] = 921,
  [SMALL_STATE(78)] = 925,
  [SMALL_STATE(79)] = 929,
  [SMALL_STATE(80)] = 933,
  [SMALL_STATE(81)] = 937,
  [SMALL_STATE(82)] = 941,
  [SMALL_STATE(83)] = 945,
  [SMALL_STATE(84)] = 949,
  [SMALL_STATE(85)] = 953,
  [SMALL_STATE(86)] = 957,
  [SMALL_STATE(87)] = 961,
  [SMALL_STATE(88)] = 965,
  [SMALL_STATE(89)] = 969,
  [SMALL_STATE(90)] = 973,
  [SMALL_STATE(91)] = 977,
  [SMALL_STATE(92)] = 981,
  [SMALL_STATE(93)] = 985,
  [SMALL_STATE(94)] = 989,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_value, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_def, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_def, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_ref, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_ref, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temperature, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temperature, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient_def, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient_def, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temperature, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temperature, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temperature, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temperature, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temperature, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temperature, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 5, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 5, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 5, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 5, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixed, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mixed, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3, 0, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 3, 0, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 4, 0, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 4, 0, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 5, 0, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 5, 0, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_unit, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
