#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_Name = 1,
  sym_TypeName = 2,
  anon_sym_enum = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_extern = 6,
  anon_sym_from = 7,
  anon_sym_include = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_StringLiteral_token1 = 10,
  sym_Comment = 11,
  sym_Comma = 12,
  sym_File = 13,
  sym_Document = 14,
  sym_Definition = 15,
  sym_TypeDefinition = 16,
  sym_DependencyDefinition = 17,
  sym_EnumTypeDefinition = 18,
  sym_EnumValuesDefinition = 19,
  sym_EnumValueDefinition = 20,
  sym_EnumValue = 21,
  sym_ExternTypeDefinition = 22,
  sym_ExternNamespace = 23,
  sym_ExternValuesDefinition = 24,
  sym_ExternValueDefinition = 25,
  sym_ExternValue = 26,
  sym_ExternUri = 27,
  sym_IncludeTypeDefinition = 28,
  sym_IncludeValuesDefinition = 29,
  sym_IncludeValueDefinition = 30,
  sym_IncludeValue = 31,
  sym_IncludePath = 32,
  sym_StringLiteral = 33,
  aux_sym_Document_repeat1 = 34,
  aux_sym_EnumValuesDefinition_repeat1 = 35,
  aux_sym_ExternValuesDefinition_repeat1 = 36,
  aux_sym_IncludeValuesDefinition_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
  [sym_TypeName] = "TypeName",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_extern] = "extern",
  [anon_sym_from] = "from",
  [anon_sym_include] = "include",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_StringLiteral_token1] = "StringLiteral_token1",
  [sym_Comment] = "Comment",
  [sym_Comma] = "Comma",
  [sym_File] = "File",
  [sym_Document] = "Document",
  [sym_Definition] = "Definition",
  [sym_TypeDefinition] = "TypeDefinition",
  [sym_DependencyDefinition] = "DependencyDefinition",
  [sym_EnumTypeDefinition] = "EnumTypeDefinition",
  [sym_EnumValuesDefinition] = "EnumValuesDefinition",
  [sym_EnumValueDefinition] = "EnumValueDefinition",
  [sym_EnumValue] = "EnumValue",
  [sym_ExternTypeDefinition] = "ExternTypeDefinition",
  [sym_ExternNamespace] = "ExternNamespace",
  [sym_ExternValuesDefinition] = "ExternValuesDefinition",
  [sym_ExternValueDefinition] = "ExternValueDefinition",
  [sym_ExternValue] = "ExternValue",
  [sym_ExternUri] = "ExternUri",
  [sym_IncludeTypeDefinition] = "IncludeTypeDefinition",
  [sym_IncludeValuesDefinition] = "IncludeValuesDefinition",
  [sym_IncludeValueDefinition] = "IncludeValueDefinition",
  [sym_IncludeValue] = "IncludeValue",
  [sym_IncludePath] = "IncludePath",
  [sym_StringLiteral] = "StringLiteral",
  [aux_sym_Document_repeat1] = "Document_repeat1",
  [aux_sym_EnumValuesDefinition_repeat1] = "EnumValuesDefinition_repeat1",
  [aux_sym_ExternValuesDefinition_repeat1] = "ExternValuesDefinition_repeat1",
  [aux_sym_IncludeValuesDefinition_repeat1] = "IncludeValuesDefinition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_Name] = sym_Name,
  [sym_TypeName] = sym_TypeName,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_StringLiteral_token1] = aux_sym_StringLiteral_token1,
  [sym_Comment] = sym_Comment,
  [sym_Comma] = sym_Comma,
  [sym_File] = sym_File,
  [sym_Document] = sym_Document,
  [sym_Definition] = sym_Definition,
  [sym_TypeDefinition] = sym_TypeDefinition,
  [sym_DependencyDefinition] = sym_DependencyDefinition,
  [sym_EnumTypeDefinition] = sym_EnumTypeDefinition,
  [sym_EnumValuesDefinition] = sym_EnumValuesDefinition,
  [sym_EnumValueDefinition] = sym_EnumValueDefinition,
  [sym_EnumValue] = sym_EnumValue,
  [sym_ExternTypeDefinition] = sym_ExternTypeDefinition,
  [sym_ExternNamespace] = sym_ExternNamespace,
  [sym_ExternValuesDefinition] = sym_ExternValuesDefinition,
  [sym_ExternValueDefinition] = sym_ExternValueDefinition,
  [sym_ExternValue] = sym_ExternValue,
  [sym_ExternUri] = sym_ExternUri,
  [sym_IncludeTypeDefinition] = sym_IncludeTypeDefinition,
  [sym_IncludeValuesDefinition] = sym_IncludeValuesDefinition,
  [sym_IncludeValueDefinition] = sym_IncludeValueDefinition,
  [sym_IncludeValue] = sym_IncludeValue,
  [sym_IncludePath] = sym_IncludePath,
  [sym_StringLiteral] = sym_StringLiteral,
  [aux_sym_Document_repeat1] = aux_sym_Document_repeat1,
  [aux_sym_EnumValuesDefinition_repeat1] = aux_sym_EnumValuesDefinition_repeat1,
  [aux_sym_ExternValuesDefinition_repeat1] = aux_sym_ExternValuesDefinition_repeat1,
  [aux_sym_IncludeValuesDefinition_repeat1] = aux_sym_IncludeValuesDefinition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_Name] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeName] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enum] = {
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
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_StringLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [sym_Comma] = {
    .visible = true,
    .named = true,
  },
  [sym_File] = {
    .visible = true,
    .named = true,
  },
  [sym_Document] = {
    .visible = true,
    .named = true,
  },
  [sym_Definition] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_DependencyDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumValuesDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumValueDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternNamespace] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternValuesDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternValueDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternUri] = {
    .visible = true,
    .named = true,
  },
  [sym_IncludeTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_IncludeValuesDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_IncludeValueDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_IncludeValue] = {
    .visible = true,
    .named = true,
  },
  [sym_IncludePath] = {
    .visible = true,
    .named = true,
  },
  [sym_StringLiteral] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_Document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EnumValuesDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ExternValuesDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IncludeValuesDefinition_repeat1] = {
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
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_Comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_Comma);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_Comma);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_TypeName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_include);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
    [sym_TypeName] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_Comment] = ACTIONS(3),
    [sym_Comma] = ACTIONS(3),
  },
  [1] = {
    [sym_File] = STATE(47),
    [sym_Document] = STATE(45),
    [sym_Definition] = STATE(3),
    [sym_TypeDefinition] = STATE(23),
    [sym_DependencyDefinition] = STATE(23),
    [sym_EnumTypeDefinition] = STATE(22),
    [sym_ExternTypeDefinition] = STATE(21),
    [sym_IncludeTypeDefinition] = STATE(21),
    [aux_sym_Document_repeat1] = STATE(3),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(9),
    [sym_Comment] = ACTIONS(3),
    [sym_Comma] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(16), 1,
      anon_sym_extern,
    ACTIONS(19), 1,
      anon_sym_include,
    STATE(22), 1,
      sym_EnumTypeDefinition,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(2), 2,
      sym_Definition,
      aux_sym_Document_repeat1,
    STATE(21), 2,
      sym_ExternTypeDefinition,
      sym_IncludeTypeDefinition,
    STATE(23), 2,
      sym_TypeDefinition,
      sym_DependencyDefinition,
  [32] = 9,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_extern,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_EnumTypeDefinition,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(2), 2,
      sym_Definition,
      aux_sym_Document_repeat1,
    STATE(21), 2,
      sym_ExternTypeDefinition,
      sym_IncludeTypeDefinition,
    STATE(23), 2,
      sym_TypeDefinition,
      sym_DependencyDefinition,
  [64] = 4,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_EnumValuesDefinition,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [81] = 5,
    ACTIONS(28), 1,
      sym_TypeName,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_ExternValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(6), 2,
      sym_ExternValueDefinition,
      aux_sym_ExternValuesDefinition_repeat1,
  [99] = 5,
    ACTIONS(32), 1,
      sym_TypeName,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_ExternValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(6), 2,
      sym_ExternValueDefinition,
      aux_sym_ExternValuesDefinition_repeat1,
  [117] = 6,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_IncludePath,
    STATE(16), 1,
      sym_StringLiteral,
    STATE(43), 1,
      sym_IncludeValuesDefinition,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [137] = 5,
    ACTIONS(41), 1,
      sym_Name,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_EnumValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(8), 2,
      sym_EnumValueDefinition,
      aux_sym_EnumValuesDefinition_repeat1,
  [155] = 5,
    ACTIONS(46), 1,
      sym_Name,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_EnumValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(8), 2,
      sym_EnumValueDefinition,
      aux_sym_EnumValuesDefinition_repeat1,
  [173] = 5,
    ACTIONS(50), 1,
      sym_TypeName,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_IncludeValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(11), 2,
      sym_IncludeValueDefinition,
      aux_sym_IncludeValuesDefinition_repeat1,
  [191] = 5,
    ACTIONS(54), 1,
      sym_TypeName,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_IncludeValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(11), 2,
      sym_IncludeValueDefinition,
      aux_sym_IncludeValuesDefinition_repeat1,
  [209] = 4,
    ACTIONS(50), 1,
      sym_TypeName,
    STATE(35), 1,
      sym_IncludeValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(10), 2,
      sym_IncludeValueDefinition,
      aux_sym_IncludeValuesDefinition_repeat1,
  [224] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [235] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [246] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [257] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [268] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [279] = 4,
    ACTIONS(46), 1,
      sym_Name,
    STATE(37), 1,
      sym_EnumValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(9), 2,
      sym_EnumValueDefinition,
      aux_sym_EnumValuesDefinition_repeat1,
  [294] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [305] = 4,
    ACTIONS(28), 1,
      sym_TypeName,
    STATE(34), 1,
      sym_ExternValue,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    STATE(5), 2,
      sym_ExternValueDefinition,
      aux_sym_ExternValuesDefinition_repeat1,
  [320] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [331] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [342] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [353] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [364] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [375] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
  [386] = 4,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_from,
    STATE(42), 1,
      sym_ExternValuesDefinition,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [400] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_ExternUri,
    STATE(26), 1,
      sym_StringLiteral,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [414] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_ExternUri,
    STATE(26), 1,
      sym_StringLiteral,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [428] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_IncludePath,
    STATE(16), 1,
      sym_StringLiteral,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [442] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_from,
  [451] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(89), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [460] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(91), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [469] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(93), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [478] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(95), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [487] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      sym_Name,
  [496] = 2,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
    ACTIONS(99), 2,
      anon_sym_RBRACE,
      sym_Name,
  [505] = 3,
    ACTIONS(101), 1,
      sym_TypeName,
    STATE(27), 1,
      sym_ExternNamespace,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [516] = 2,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [524] = 2,
    ACTIONS(105), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [532] = 2,
    ACTIONS(107), 1,
      sym_TypeName,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [540] = 2,
    ACTIONS(109), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [548] = 2,
    ACTIONS(111), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [556] = 2,
    ACTIONS(113), 1,
      aux_sym_StringLiteral_token1,
    ACTIONS(115), 2,
      sym_Comment,
      sym_Comma,
  [564] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [572] = 2,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
  [580] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_Comment,
      sym_Comma,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 279,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 305,
  [SMALL_STATE(21)] = 320,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 353,
  [SMALL_STATE(25)] = 364,
  [SMALL_STATE(26)] = 375,
  [SMALL_STATE(27)] = 386,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 414,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 442,
  [SMALL_STATE(32)] = 451,
  [SMALL_STATE(33)] = 460,
  [SMALL_STATE(34)] = 469,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 496,
  [SMALL_STATE(38)] = 505,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 524,
  [SMALL_STATE(41)] = 532,
  [SMALL_STATE(42)] = 540,
  [SMALL_STATE(43)] = 548,
  [SMALL_STATE(44)] = 556,
  [SMALL_STATE(45)] = 564,
  [SMALL_STATE(46)] = 572,
  [SMALL_STATE(47)] = 580,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(41),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(38),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Document, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumTypeDefinition, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ExternValuesDefinition_repeat1, 2), SHIFT_REPEAT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ExternValuesDefinition_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(36),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_IncludeValuesDefinition_repeat1, 2), SHIFT_REPEAT(32),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_IncludeValuesDefinition_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeTypeDefinition, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringLiteral, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeTypeDefinition, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludePath, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternTypeDefinition, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumTypeDefinition, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DependencyDefinition, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TypeDefinition, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Definition, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumValuesDefinition, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternTypeDefinition, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternUri, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternNamespace, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeValue, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternValue, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternValueDefinition, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeValueDefinition, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumValue, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumValueDefinition, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeValuesDefinition, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_File, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternValuesDefinition, 3),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wrap(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_Name,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
