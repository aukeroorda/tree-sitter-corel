#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  anon_sym_SLASH = 8,
  sym_natural_number = 9,
  sym__hwhitespace = 10,
  sym_source_file = 11,
  sym_exact_value = 12,
  sym_mixed = 13,
  sym_fraction = 14,
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
  [anon_sym_SLASH] = "/",
  [sym_natural_number] = "natural_number",
  [sym__hwhitespace] = "_hwhitespace",
  [sym_source_file] = "source_file",
  [sym_exact_value] = "exact_value",
  [sym_mixed] = "mixed",
  [sym_fraction] = "fraction",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_natural_number] = sym_natural_number,
  [sym__hwhitespace] = sym__hwhitespace,
  [sym_source_file] = sym_source_file,
  [sym_exact_value] = sym_exact_value,
  [sym_mixed] = sym_mixed,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '~') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(2);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(5);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'U') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'U') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'V') ADVANCE(10);
      END_STATE();
    case 46:
      if (lookahead == 'X') ADVANCE(6);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TEST_PRECEDENCE_LF);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TEST_EXACT_VALUE_LF);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_TEST_NATURAL_NUMBER_LF);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_TEST_FRACTION_LF);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_natural_number);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__hwhitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
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
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_natural_number] = ACTIONS(1),
    [sym__hwhitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      sym_natural_number,
    ACTIONS(13), 1,
      sym__hwhitespace,
    STATE(13), 1,
      sym_fraction,
    ACTIONS(7), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [17] = 5,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(11), 1,
      sym_natural_number,
    ACTIONS(13), 1,
      sym__hwhitespace,
    STATE(13), 1,
      sym_fraction,
    ACTIONS(7), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [34] = 4,
    ACTIONS(15), 1,
      anon_sym_TEST_PRECEDENCE_LF,
    ACTIONS(17), 1,
      anon_sym_TEST_EXACT_VALUE_LF,
    ACTIONS(19), 1,
      anon_sym_TEST_NATURAL_NUMBER_LF,
    ACTIONS(21), 1,
      anon_sym_TEST_FRACTION_LF,
  [47] = 4,
    ACTIONS(23), 1,
      sym_natural_number,
    STATE(9), 1,
      sym_exact_value,
    STATE(10), 1,
      sym_fraction,
    STATE(11), 1,
      sym_mixed,
  [60] = 3,
    ACTIONS(25), 1,
      sym_natural_number,
    STATE(9), 1,
      sym_exact_value,
    STATE(11), 2,
      sym_mixed,
      sym_fraction,
  [71] = 3,
    ACTIONS(11), 1,
      sym_natural_number,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      sym_fraction,
  [81] = 2,
    ACTIONS(11), 1,
      sym_natural_number,
    STATE(9), 1,
      sym_fraction,
  [88] = 2,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      aux_sym_source_file_token2,
  [95] = 1,
    ACTIONS(7), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [100] = 1,
    ACTIONS(7), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [105] = 2,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      sym__hwhitespace,
  [112] = 1,
    ACTIONS(35), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [117] = 1,
    ACTIONS(37), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [122] = 2,
    ACTIONS(39), 1,
      sym_natural_number,
    ACTIONS(41), 1,
      sym__hwhitespace,
  [129] = 1,
    ACTIONS(43), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [134] = 1,
    ACTIONS(45), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [139] = 2,
    ACTIONS(47), 1,
      sym_natural_number,
    ACTIONS(49), 1,
      sym__hwhitespace,
  [146] = 1,
    ACTIONS(51), 2,
      anon_sym_LF,
      aux_sym_source_file_token2,
  [151] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [155] = 1,
    ACTIONS(55), 1,
      sym_natural_number,
  [159] = 1,
    ACTIONS(57), 1,
      aux_sym_source_file_token2,
  [163] = 1,
    ACTIONS(47), 1,
      sym_natural_number,
  [167] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [171] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [175] = 1,
    ACTIONS(27), 1,
      anon_sym_SLASH,
  [179] = 1,
    ACTIONS(63), 1,
      sym_natural_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 81,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 117,
  [SMALL_STATE(15)] = 122,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 134,
  [SMALL_STATE(18)] = 139,
  [SMALL_STATE(19)] = 146,
  [SMALL_STATE(20)] = 151,
  [SMALL_STATE(21)] = 155,
  [SMALL_STATE(22)] = 159,
  [SMALL_STATE(23)] = 163,
  [SMALL_STATE(24)] = 167,
  [SMALL_STATE(25)] = 171,
  [SMALL_STATE(26)] = 175,
  [SMALL_STATE(27)] = 179,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_value, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mixed, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 3, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 4, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 5, 0, 3),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
