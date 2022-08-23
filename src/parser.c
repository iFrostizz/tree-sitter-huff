#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUNDdefinemacro = 1,
  anon_sym_POUNDdefinefn = 2,
  sym_takes_parameters = 3,
  sym_returns_parameters = 4,
  sym_block = 5,
  sym_identifier = 6,
  sym_source_file = 7,
  sym_definition = 8,
  sym__def = 9,
  sym_macro_definition = 10,
  sym_function_definition = 11,
  aux_sym_source_file_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDdefinemacro] = "#define macro ",
  [anon_sym_POUNDdefinefn] = "#define fn ",
  [sym_takes_parameters] = "takes_parameters",
  [sym_returns_parameters] = "returns_parameters",
  [sym_block] = "block",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym__def] = "_def",
  [sym_macro_definition] = "macro_definition",
  [sym_function_definition] = "function_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDdefinemacro] = anon_sym_POUNDdefinemacro,
  [anon_sym_POUNDdefinefn] = anon_sym_POUNDdefinefn,
  [sym_takes_parameters] = sym_takes_parameters,
  [sym_returns_parameters] = sym_returns_parameters,
  [sym_block] = sym_block,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym__def] = sym__def,
  [sym_macro_definition] = sym_macro_definition,
  [sym_function_definition] = sym_function_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDdefinemacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefinefn] = {
    .visible = true,
    .named = false,
  },
  [sym_takes_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_returns_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__def] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(42);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 'k') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 's') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 's') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 't') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(1);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUNDdefinemacro);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUNDdefinefn);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_takes_parameters);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_returns_parameters);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_block);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDdefinemacro] = ACTIONS(1),
    [anon_sym_POUNDdefinefn] = ACTIONS(1),
    [sym_takes_parameters] = ACTIONS(1),
    [sym_returns_parameters] = ACTIONS(1),
    [sym_block] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_definition] = STATE(2),
    [sym_macro_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUNDdefinemacro] = ACTIONS(5),
    [anon_sym_POUNDdefinefn] = ACTIONS(7),
  },
  [2] = {
    [sym_definition] = STATE(3),
    [sym_macro_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_POUNDdefinemacro] = ACTIONS(5),
    [anon_sym_POUNDdefinefn] = ACTIONS(7),
  },
  [3] = {
    [sym_definition] = STATE(3),
    [sym_macro_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUNDdefinemacro] = ACTIONS(13),
    [anon_sym_POUNDdefinefn] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
  [6] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
  [12] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
  [18] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
  [24] = 2,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(5), 1,
      sym__def,
  [31] = 2,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(6), 1,
      sym__def,
  [38] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [42] = 1,
    ACTIONS(31), 1,
      sym_takes_parameters,
  [46] = 1,
    ACTIONS(33), 1,
      sym_returns_parameters,
  [50] = 1,
    ACTIONS(35), 1,
      sym_block,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 6,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 24,
  [SMALL_STATE(9)] = 31,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 42,
  [SMALL_STATE(12)] = 46,
  [SMALL_STATE(13)] = 50,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_huff(void) {
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
