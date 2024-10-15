#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  anon_sym_TEST_PRECEDENCE_LF = 2,
  anon_sym_TEST_RANGE_LF = 3,
  anon_sym_TEST_EXACT_VALUE_LF = 4,
  anon_sym_TEST_NATURAL_NUMBER_LF = 5,
  anon_sym_TEST_FRACTION_LF = 6,
  anon_sym_LF = 7,
  aux_sym_source_file_token2 = 8,
  anon_sym_DASH = 9,
  anon_sym_SLASH = 10,
  sym_natural_number = 11,
  sym__hwhitespace = 12,
  sym_source_file = 13,
  sym_range = 14,
  sym_exact_value = 15,
  sym_fraction = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_TEST_PRECEDENCE_LF] = "TEST_PRECEDENCE\n",
  [anon_sym_TEST_RANGE_LF] = "TEST_RANGE\n",
  [anon_sym_TEST_EXACT_VALUE_LF] = "TEST_EXACT_VALUE\n",
  [anon_sym_TEST_NATURAL_NUMBER_LF] = "TEST_NATURAL_NUMBER\n",
  [anon_sym_TEST_FRACTION_LF] = "TEST_FRACTION\n",
  [anon_sym_LF] = "\n",
  [aux_sym_source_file_token2] = "source_file_token2",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_natural_number] = "natural_number",
  [sym__hwhitespace] = "_hwhitespace",
  [sym_source_file] = "source_file",
  [sym_range] = "range",
  [sym_exact_value] = "exact_value",
  [sym_fraction] = "fraction",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_TEST_PRECEDENCE_LF] = anon_sym_TEST_PRECEDENCE_LF,
  [anon_sym_TEST_RANGE_LF] = anon_sym_TEST_RANGE_LF,
  [anon_sym_TEST_EXACT_VALUE_LF] = anon_sym_TEST_EXACT_VALUE_LF,
  [anon_sym_TEST_NATURAL_NUMBER_LF] = anon_sym_TEST_NATURAL_NUMBER_LF,
  [anon_sym_TEST_FRACTION_LF] = anon_sym_TEST_FRACTION_LF,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_source_file_token2] = aux_sym_source_file_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_natural_number] = sym_natural_number,
  [sym__hwhitespace] = sym__hwhitespace,
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
  [anon_sym_TEST_PRECEDENCE_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST_RANGE_LF] = {
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
  [sym__hwhitespace] = {
    .visible = false,
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
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_sole_integral, 0},
  [1] =
    {field_sole_fraction, 0},
  [2] =
    {field_denominator, 2},
    {field_numerator, 0},
  [4] =
    {field_mixed, 0},
    {field_mixed, 1},
    {field_mixed, 2},
  [7] =
    {field_lower, 0},
    {field_upper, 2},
  [9] =
    {field_denominator, 3},
    {field_numerator, 0},
  [11] =
    {field_lower, 0},
    {field_upper, 3},
  [13] =
    {field_denominator, 4},
    {field_numerator, 0},
  [15] =
    {field_lower, 0},
    {field_upper, 4},
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == 'G') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(3);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(6);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 49:
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'V') ADVANCE(12);
      END_STATE();
    case 51:
      if (lookahead == 'X') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_TEST_PRECEDENCE_LF);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_TEST_RANGE_LF);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_natural_number);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__hwhitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_TEST_PRECEDENCE_LF] = ACTIONS(1),
    [anon_sym_TEST_RANGE_LF] = ACTIONS(1),
    [anon_sym_TEST_EXACT_VALUE_LF] = ACTIONS(1),
    [anon_sym_TEST_NATURAL_NUMBER_LF] = ACTIONS(1),
    [anon_sym_TEST_FRACTION_LF] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_natural_number] = ACTIONS(1),
    [sym__hwhitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_TEST_PRECEDENCE_LF,
    ACTIONS(9), 1,
      anon_sym_TEST_RANGE_LF,
    ACTIONS(11), 1,
      anon_sym_TEST_EXACT_VALUE_LF,
    ACTIONS(13), 1,
      anon_sym_TEST_NATURAL_NUMBER_LF,
    ACTIONS(15), 1,
      anon_sym_TEST_FRACTION_LF,
  [16] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym__hwhitespace,
    ACTIONS(17), 3,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
  [28] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      sym__hwhitespace,
    ACTIONS(17), 3,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
  [40] = 1,
    ACTIONS(23), 4,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
      sym__hwhitespace,
  [47] = 4,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_source_file_token2,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym__hwhitespace,
  [60] = 1,
    ACTIONS(33), 4,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
      sym__hwhitespace,
  [67] = 1,
    ACTIONS(33), 4,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
      sym__hwhitespace,
  [74] = 4,
    ACTIONS(35), 1,
      sym_natural_number,
    STATE(6), 1,
      sym_exact_value,
    STATE(7), 1,
      sym_fraction,
    STATE(20), 1,
      sym_range,
  [87] = 4,
    ACTIONS(37), 1,
      sym_natural_number,
    ACTIONS(39), 1,
      sym__hwhitespace,
    STATE(8), 1,
      sym_fraction,
    STATE(26), 1,
      sym_exact_value,
  [100] = 1,
    ACTIONS(41), 4,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
      sym__hwhitespace,
  [107] = 1,
    ACTIONS(43), 4,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
      sym__hwhitespace,
  [114] = 4,
    ACTIONS(37), 1,
      sym_natural_number,
    ACTIONS(45), 1,
      sym__hwhitespace,
    STATE(8), 1,
      sym_fraction,
    STATE(25), 1,
      sym_exact_value,
  [127] = 4,
    ACTIONS(37), 1,
      sym_natural_number,
    STATE(8), 1,
      sym_fraction,
    STATE(20), 1,
      sym_range,
    STATE(23), 1,
      sym_exact_value,
  [140] = 1,
    ACTIONS(47), 4,
      anon_sym_LF,
      aux_sym_source_file_token2,
      anon_sym_DASH,
      sym__hwhitespace,
  [147] = 3,
    ACTIONS(37), 1,
      sym_natural_number,
    STATE(8), 1,
      sym_fraction,
    STATE(20), 1,
      sym_exact_value,
  [157] = 3,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      sym_natural_number,
    STATE(5), 1,
      sym_fraction,
  [167] = 3,
    ACTIONS(37), 1,
      sym_natural_number,
    STATE(8), 1,
      sym_fraction,
    STATE(25), 1,
      sym_exact_value,
  [177] = 3,
    ACTIONS(37), 1,
      sym_natural_number,
    STATE(8), 1,
      sym_fraction,
    STATE(28), 1,
      sym_exact_value,
  [187] = 2,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_source_file_token2,
  [194] = 2,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(53), 1,
      sym__hwhitespace,
  [201] = 2,
    ACTIONS(51), 1,
      sym_natural_number,
    STATE(20), 1,
      sym_fraction,
  [208] = 2,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym__hwhitespace,
  [215] = 2,
    ACTIONS(55), 1,
      sym_natural_number,
    ACTIONS(57), 1,
      sym__hwhitespace,
  [222] = 1,
    ACTIONS(59), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [227] = 1,
    ACTIONS(61), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [232] = 2,
    ACTIONS(63), 1,
      sym_natural_number,
    ACTIONS(65), 1,
      sym__hwhitespace,
  [239] = 1,
    ACTIONS(67), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [244] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [248] = 1,
    ACTIONS(71), 1,
      sym_natural_number,
  [252] = 1,
    ACTIONS(73), 1,
      aux_sym_source_file_token2,
  [256] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [260] = 1,
    ACTIONS(63), 1,
      sym_natural_number,
  [264] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [268] = 1,
    ACTIONS(49), 1,
      anon_sym_SLASH,
  [272] = 1,
    ACTIONS(79), 1,
      sym_natural_number,
  [276] = 1,
    ACTIONS(81), 1,
      anon_sym_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 67,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 114,
  [SMALL_STATE(14)] = 127,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 147,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 167,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 187,
  [SMALL_STATE(21)] = 194,
  [SMALL_STATE(22)] = 201,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 222,
  [SMALL_STATE(26)] = 227,
  [SMALL_STATE(27)] = 232,
  [SMALL_STATE(28)] = 239,
  [SMALL_STATE(29)] = 244,
  [SMALL_STATE(30)] = 248,
  [SMALL_STATE(31)] = 252,
  [SMALL_STATE(32)] = 256,
  [SMALL_STATE(33)] = 260,
  [SMALL_STATE(34)] = 264,
  [SMALL_STATE(35)] = 268,
  [SMALL_STATE(36)] = 272,
  [SMALL_STATE(37)] = 276,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 1, 0, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 3, 0, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 1, 0, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 4, 0, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3, 0, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 5, 0, 8),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4, 0, 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 9),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
