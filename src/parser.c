#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_header = 1,
  aux_sym_ingredients_block_token1 = 2,
  anon_sym_DASH = 3,
  anon_sym_aha = 4,
  sym_source_file = 5,
  sym_ingredients_block = 6,
  sym_ingredients_list = 7,
  sym_ingredient = 8,
  sym_word = 9,
  aux_sym_ingredients_list_repeat1 = 10,
  aux_sym_ingredient_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_header] = "header",
  [aux_sym_ingredients_block_token1] = "ingredients_block_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_aha] = "aha",
  [sym_source_file] = "source_file",
  [sym_ingredients_block] = "ingredients_block",
  [sym_ingredients_list] = "ingredients_list",
  [sym_ingredient] = "ingredient",
  [sym_word] = "word",
  [aux_sym_ingredients_list_repeat1] = "ingredients_list_repeat1",
  [aux_sym_ingredient_repeat1] = "ingredient_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_header] = sym_header,
  [aux_sym_ingredients_block_token1] = aux_sym_ingredients_block_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_aha] = anon_sym_aha,
  [sym_source_file] = sym_source_file,
  [sym_ingredients_block] = sym_ingredients_block,
  [sym_ingredients_list] = sym_ingredients_list,
  [sym_ingredient] = sym_ingredient,
  [sym_word] = sym_word,
  [aux_sym_ingredients_list_repeat1] = aux_sym_ingredients_list_repeat1,
  [aux_sym_ingredient_repeat1] = aux_sym_ingredient_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ingredients_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aha] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredients_block] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredients_list] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ingredients_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ingredient_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_header);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_header);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_ingredients_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_aha);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_header] = ACTIONS(1),
    [aux_sym_ingredients_block_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_aha] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_header] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym_ingredients_list,
    STATE(5), 2,
      sym_ingredient,
      aux_sym_ingredients_list_repeat1,
  [14] = 3,
    ACTIONS(13), 1,
      anon_sym_aha,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    STATE(4), 2,
      sym_word,
      aux_sym_ingredient_repeat1,
  [26] = 3,
    ACTIONS(17), 1,
      anon_sym_aha,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
    STATE(4), 2,
      sym_word,
      aux_sym_ingredient_repeat1,
  [38] = 3,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_ingredient,
      aux_sym_ingredients_list_repeat1,
  [49] = 3,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_DASH,
    STATE(6), 2,
      sym_ingredient,
      aux_sym_ingredients_list_repeat1,
  [60] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_ingredients_block_token1,
    STATE(11), 1,
      sym_ingredients_block,
  [70] = 2,
    ACTIONS(13), 1,
      anon_sym_aha,
    STATE(3), 2,
      sym_word,
      aux_sym_ingredient_repeat1,
  [78] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_aha,
  [84] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [88] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 92,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredients_block, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredients_list, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredients_list_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ingredients_list_repeat1, 2), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredients_block, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_corel(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
