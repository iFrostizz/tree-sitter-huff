#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  sym_def_val = 2,
  anon_sym_POUNDdefinemacro = 3,
  anon_sym_POUNDdefinefn = 4,
  anon_sym_POUNDdefinefunction = 5,
  anon_sym_returns = 6,
  sym_takes_parameters = 7,
  sym_returns_parameters = 8,
  sym_block = 9,
  sym_identifier = 10,
  sym_parameters = 11,
  sym_visibility = 12,
  sym_comment = 13,
  sym_source_file = 14,
  sym_definition = 15,
  sym__declaration = 16,
  sym__def = 17,
  sym__def_params = 18,
  sym_macro_definition = 19,
  sym_function_definition = 20,
  sym_interface_definition = 21,
  sym_return_parameters = 22,
  aux_sym_source_file_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = " = ",
  [sym_def_val] = "def_val",
  [anon_sym_POUNDdefinemacro] = "#define macro ",
  [anon_sym_POUNDdefinefn] = "#define fn ",
  [anon_sym_POUNDdefinefunction] = "#define function ",
  [anon_sym_returns] = " returns ",
  [sym_takes_parameters] = "takes_parameters",
  [sym_returns_parameters] = "returns_parameters",
  [sym_block] = "block",
  [sym_identifier] = "identifier",
  [sym_parameters] = "parameters",
  [sym_visibility] = "visibility",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym__declaration] = "_declaration",
  [sym__def] = "_def",
  [sym__def_params] = "_def_params",
  [sym_macro_definition] = "macro_definition",
  [sym_function_definition] = "function_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_return_parameters] = "return_parameters",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_def_val] = sym_def_val,
  [anon_sym_POUNDdefinemacro] = anon_sym_POUNDdefinemacro,
  [anon_sym_POUNDdefinefn] = anon_sym_POUNDdefinefn,
  [anon_sym_POUNDdefinefunction] = anon_sym_POUNDdefinefunction,
  [anon_sym_returns] = anon_sym_returns,
  [sym_takes_parameters] = sym_takes_parameters,
  [sym_returns_parameters] = sym_returns_parameters,
  [sym_block] = sym_block,
  [sym_identifier] = sym_identifier,
  [sym_parameters] = sym_parameters,
  [sym_visibility] = sym_visibility,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym__declaration] = sym__declaration,
  [sym__def] = sym__def,
  [sym__def_params] = sym__def_params,
  [sym_macro_definition] = sym_macro_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_return_parameters] = sym_return_parameters,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_def_val] = {
    .visible = true,
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
  [anon_sym_POUNDdefinefunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
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
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__def] = {
    .visible = false,
    .named = true,
  },
  [sym__def_params] = {
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
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_parameters] = {
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
      if (eof) ADVANCE(69);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(78);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(68)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_def_val);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUNDdefinemacro);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_POUNDdefinefn);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_POUNDdefinefunction);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_takes_parameters);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_returns_parameters);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_block);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_parameters);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_visibility);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_visibility);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 68},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_def_val] = ACTIONS(1),
    [sym_block] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_parameters] = ACTIONS(1),
    [sym_visibility] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_definition] = STATE(2),
    [sym_macro_definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_interface_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDdefinemacro] = ACTIONS(7),
    [anon_sym_POUNDdefinefn] = ACTIONS(9),
    [anon_sym_POUNDdefinefunction] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDdefinemacro,
    ACTIONS(9), 1,
      anon_sym_POUNDdefinefn,
    ACTIONS(11), 1,
      anon_sym_POUNDdefinefunction,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(5), 3,
      sym_macro_definition,
      sym_function_definition,
      sym_interface_definition,
  [25] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_POUNDdefinemacro,
    ACTIONS(20), 1,
      anon_sym_POUNDdefinefn,
    ACTIONS(23), 1,
      anon_sym_POUNDdefinefunction,
    STATE(3), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(5), 3,
      sym_macro_definition,
      sym_function_definition,
      sym_interface_definition,
  [50] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
  [60] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
  [70] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
  [80] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
  [90] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
  [100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
  [110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
  [120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(8), 1,
      sym__def,
    STATE(22), 1,
      sym__declaration,
  [133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(9), 1,
      sym__def,
    STATE(22), 1,
      sym__declaration,
  [146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(10), 1,
      sym__def_params,
    STATE(16), 1,
      sym__declaration,
  [159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_returns,
    STATE(7), 1,
      sym_return_parameters,
  [169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_EQ,
      sym_visibility,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_visibility,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_takes_parameters,
  [191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_returns_parameters,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_parameters,
  [205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_block,
  [219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_EQ,
  [226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_parameters,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 198,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 219,
  [SMALL_STATE(23)] = 226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_parameters, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_params, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
