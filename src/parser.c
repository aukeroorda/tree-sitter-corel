#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  aux_sym_source_file_token2 = 2,
  anon_sym_TEST_RANGE = 3,
  anon_sym_TEST_EXACT_VALUE = 4,
  anon_sym_TEST_NATURAL_NUMBER = 5,
  anon_sym_TEST_FRACTION = 6,
  aux_sym_source_file_token3 = 7,
  anon_sym_DASH = 8,
  anon_sym_SLASH = 9,
  sym_natural_number = 10,
  sym_source_file = 11,
  sym_range = 12,
  sym_exact_value = 13,
  sym_fraction = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_source_file_token2] = "source_file_token2",
  [anon_sym_TEST_RANGE] = "TEST_RANGE",
  [anon_sym_TEST_EXACT_VALUE] = "TEST_EXACT_VALUE",
  [anon_sym_TEST_NATURAL_NUMBER] = "TEST_NATURAL_NUMBER",
  [anon_sym_TEST_FRACTION] = "TEST_FRACTION",
  [aux_sym_source_file_token3] = "source_file_token3",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_natural_number] = "natural_number",
  [sym_source_file] = "source_file",
  [sym_range] = "range",
  [sym_exact_value] = "exact_value",
  [sym_fraction] = "fraction",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_source_file_token2] = aux_sym_source_file_token2,
  [anon_sym_TEST_RANGE] = anon_sym_TEST_RANGE,
  [anon_sym_TEST_EXACT_VALUE] = anon_sym_TEST_EXACT_VALUE,
  [anon_sym_TEST_NATURAL_NUMBER] = anon_sym_TEST_NATURAL_NUMBER,
  [anon_sym_TEST_FRACTION] = anon_sym_TEST_FRACTION,
  [aux_sym_source_file_token3] = aux_sym_source_file_token3,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_natural_number] = sym_natural_number,
  [sym_source_file] = sym_source_file,
  [sym_range] = sym_range,
  [sym_exact_value] = sym_exact_value,
  [sym_fraction] = sym_fraction,
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
  [aux_sym_source_file_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TEST_RANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST_EXACT_VALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST_NATURAL_NUMBER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST_FRACTION] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_file_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_natural_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_exact_value] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_denominator = 1,
  field_lower = 2,
  field_mixed = 3,
  field_numerator = 4,
  field_sole_fraction = 5,
  field_sole_integral = 6,
  field_upper = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_denominator] = "denominator",
  [field_lower] = "lower",
  [field_mixed] = "mixed",
  [field_numerator] = "numerator",
  [field_sole_fraction] = "sole_fraction",
  [field_sole_integral] = "sole_integral",
  [field_upper] = "upper",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_sole_integral, 0},
  [1] =
    {field_sole_fraction, 0},
  [2] =
    {field_mixed, 0},
    {field_mixed, 1},
  [4] =
    {field_denominator, 2},
    {field_numerator, 0},
  [6] =
    {field_lower, 0},
    {field_upper, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == '~') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '~') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(7);
      END_STATE();
    case 37:
      if (lookahead == 'X') ADVANCE(3);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'R') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'X') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_TEST_RANGE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TEST_RANGE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TEST_EXACT_VALUE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_TEST_EXACT_VALUE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TEST_NATURAL_NUMBER);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TEST_NATURAL_NUMBER);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TEST_FRACTION);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_TEST_FRACTION);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_source_file_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_natural_number);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_TEST_RANGE] = ACTIONS(1),
    [anon_sym_TEST_EXACT_VALUE] = ACTIONS(1),
    [anon_sym_TEST_NATURAL_NUMBER] = ACTIONS(1),
    [anon_sym_TEST_FRACTION] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_natural_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      aux_sym_source_file_token2,
    ACTIONS(9), 1,
      anon_sym_TEST_RANGE,
    ACTIONS(11), 1,
      anon_sym_TEST_EXACT_VALUE,
    ACTIONS(13), 1,
      anon_sym_TEST_NATURAL_NUMBER,
    ACTIONS(15), 1,
      anon_sym_TEST_FRACTION,
  [16] = 4,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_natural_number,
    STATE(11), 1,
      sym_fraction,
    ACTIONS(17), 2,
      aux_sym_source_file_token3,
      anon_sym_DASH,
  [30] = 4,
    ACTIONS(23), 1,
      sym_natural_number,
    STATE(10), 1,
      sym_fraction,
    STATE(15), 1,
      sym_range,
    STATE(16), 1,
      sym_exact_value,
  [43] = 4,
    ACTIONS(17), 1,
      aux_sym_source_file_token3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym_natural_number,
    STATE(11), 1,
      sym_fraction,
  [56] = 3,
    ACTIONS(23), 1,
      sym_natural_number,
    STATE(10), 1,
      sym_fraction,
    STATE(15), 1,
      sym_exact_value,
  [66] = 3,
    ACTIONS(25), 1,
      sym_natural_number,
    STATE(15), 1,
      sym_exact_value,
    STATE(17), 1,
      sym_fraction,
  [76] = 3,
    ACTIONS(23), 1,
      sym_natural_number,
    STATE(10), 1,
      sym_fraction,
    STATE(21), 1,
      sym_exact_value,
  [86] = 2,
    ACTIONS(21), 1,
      sym_natural_number,
    STATE(15), 1,
      sym_fraction,
  [93] = 1,
    ACTIONS(27), 2,
      aux_sym_source_file_token3,
      anon_sym_DASH,
  [98] = 1,
    ACTIONS(29), 2,
      aux_sym_source_file_token3,
      anon_sym_DASH,
  [103] = 1,
    ACTIONS(31), 2,
      aux_sym_source_file_token3,
      anon_sym_DASH,
  [108] = 1,
    ACTIONS(33), 1,
      sym_natural_number,
  [112] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [116] = 1,
    ACTIONS(37), 1,
      aux_sym_source_file_token3,
  [120] = 1,
    ACTIONS(39), 1,
      anon_sym_DASH,
  [124] = 1,
    ACTIONS(27), 1,
      aux_sym_source_file_token3,
  [128] = 1,
    ACTIONS(41), 1,
      sym_natural_number,
  [132] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(19), 1,
      anon_sym_SLASH,
  [140] = 1,
    ACTIONS(45), 1,
      aux_sym_source_file_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 93,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 108,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 120,
  [SMALL_STATE(17)] = 124,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 136,
  [SMALL_STATE(21)] = 140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 1, 0, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 1, 0, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 2, 0, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3, 0, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 5),
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
