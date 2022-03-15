#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  anon_sym_SLASH_STAR = 11,
  aux_sym_MultiLineCommentLiteral_token1 = 12,
  anon_sym_STAR_SLASH = 13,
  anon_sym_SLASH_SLASH = 14,
  anon_sym_POUND = 15,
  aux_sym_SingleLineCommentLiteral_token1 = 16,
  anon_sym_LF = 17,
  sym_Comma = 18,
  sym_SemiColon = 19,
  sym_File = 20,
  sym_Document = 21,
  sym_Definition = 22,
  sym_TypeDefinition = 23,
  sym_DependencyDefinition = 24,
  sym_CommentDefinition = 25,
  sym_EnumTypeDefinition = 26,
  sym_EnumValuesDefinition = 27,
  sym_EnumValueDefinition = 28,
  sym_EnumValue = 29,
  sym_ExternTypeDefinition = 30,
  sym_ExternNamespace = 31,
  sym_ExternValuesDefinition = 32,
  sym_ExternValueDefinition = 33,
  sym_ExternValue = 34,
  sym_ExternUri = 35,
  sym_IncludeTypeDefinition = 36,
  sym_IncludeValuesDefinition = 37,
  sym_IncludeValueDefinition = 38,
  sym_IncludeValue = 39,
  sym_IncludePath = 40,
  sym_StringLiteral = 41,
  sym_MultiLineCommentLiteral = 42,
  sym_SingleLineCommentLiteral = 43,
  aux_sym_Document_repeat1 = 44,
  aux_sym_EnumValuesDefinition_repeat1 = 45,
  aux_sym_ExternValuesDefinition_repeat1 = 46,
  aux_sym_IncludeValuesDefinition_repeat1 = 47,
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
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_MultiLineCommentLiteral_token1] = "MultiLineCommentLiteral_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_POUND] = "#",
  [aux_sym_SingleLineCommentLiteral_token1] = "SingleLineCommentLiteral_token1",
  [anon_sym_LF] = "\n",
  [sym_Comma] = "Comma",
  [sym_SemiColon] = "SemiColon",
  [sym_File] = "File",
  [sym_Document] = "Document",
  [sym_Definition] = "Definition",
  [sym_TypeDefinition] = "TypeDefinition",
  [sym_DependencyDefinition] = "DependencyDefinition",
  [sym_CommentDefinition] = "CommentDefinition",
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
  [sym_MultiLineCommentLiteral] = "MultiLineCommentLiteral",
  [sym_SingleLineCommentLiteral] = "SingleLineCommentLiteral",
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
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_MultiLineCommentLiteral_token1] = aux_sym_MultiLineCommentLiteral_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_SingleLineCommentLiteral_token1] = aux_sym_SingleLineCommentLiteral_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_Comma] = sym_Comma,
  [sym_SemiColon] = sym_SemiColon,
  [sym_File] = sym_File,
  [sym_Document] = sym_Document,
  [sym_Definition] = sym_Definition,
  [sym_TypeDefinition] = sym_TypeDefinition,
  [sym_DependencyDefinition] = sym_DependencyDefinition,
  [sym_CommentDefinition] = sym_CommentDefinition,
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
  [sym_MultiLineCommentLiteral] = sym_MultiLineCommentLiteral,
  [sym_SingleLineCommentLiteral] = sym_SingleLineCommentLiteral,
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_MultiLineCommentLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SingleLineCommentLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_Comma] = {
    .visible = true,
    .named = true,
  },
  [sym_SemiColon] = {
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
  [sym_CommentDefinition] = {
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
  [sym_MultiLineCommentLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_SingleLineCommentLiteral] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(6);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_MultiLineCommentLiteral_token1);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_MultiLineCommentLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SingleLineCommentLiteral_token1);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SingleLineCommentLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_Comma);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_Comma);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_Comma);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_Comma);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_SemiColon);
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
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11},
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
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_Comma] = ACTIONS(3),
    [sym_SemiColon] = ACTIONS(1),
  },
  [1] = {
    [sym_File] = STATE(51),
    [sym_Document] = STATE(50),
    [sym_Definition] = STATE(2),
    [sym_TypeDefinition] = STATE(10),
    [sym_DependencyDefinition] = STATE(10),
    [sym_CommentDefinition] = STATE(10),
    [sym_EnumTypeDefinition] = STATE(11),
    [sym_ExternTypeDefinition] = STATE(12),
    [sym_IncludeTypeDefinition] = STATE(12),
    [sym_MultiLineCommentLiteral] = STATE(5),
    [sym_SingleLineCommentLiteral] = STATE(5),
    [aux_sym_Document_repeat1] = STATE(2),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_Comma] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_extern,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_EnumTypeDefinition,
    ACTIONS(13), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
    STATE(3), 2,
      sym_Definition,
      aux_sym_Document_repeat1,
    STATE(5), 2,
      sym_MultiLineCommentLiteral,
      sym_SingleLineCommentLiteral,
    STATE(12), 2,
      sym_ExternTypeDefinition,
      sym_IncludeTypeDefinition,
    STATE(10), 3,
      sym_TypeDefinition,
      sym_DependencyDefinition,
      sym_CommentDefinition,
  [43] = 12,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(22), 1,
      anon_sym_extern,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(28), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_EnumTypeDefinition,
    ACTIONS(31), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
    STATE(3), 2,
      sym_Definition,
      aux_sym_Document_repeat1,
    STATE(5), 2,
      sym_MultiLineCommentLiteral,
      sym_SingleLineCommentLiteral,
    STATE(12), 2,
      sym_ExternTypeDefinition,
      sym_IncludeTypeDefinition,
    STATE(10), 3,
      sym_TypeDefinition,
      sym_DependencyDefinition,
      sym_CommentDefinition,
  [86] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_EnumValuesDefinition,
    ACTIONS(34), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [105] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(38), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [118] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(40), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [131] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(42), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [144] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [157] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [170] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [183] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [196] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [209] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [222] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [235] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [248] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [261] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [274] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [287] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_include,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [300] = 5,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(68), 1,
      sym_Name,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_EnumValue,
    STATE(22), 2,
      sym_EnumValueDefinition,
      aux_sym_EnumValuesDefinition_repeat1,
  [317] = 5,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(72), 1,
      sym_TypeName,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_ExternValue,
    STATE(25), 2,
      sym_ExternValueDefinition,
      aux_sym_ExternValuesDefinition_repeat1,
  [334] = 5,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(76), 1,
      sym_Name,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_EnumValue,
    STATE(22), 2,
      sym_EnumValueDefinition,
      aux_sym_EnumValuesDefinition_repeat1,
  [351] = 5,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(81), 1,
      sym_TypeName,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_IncludeValue,
    STATE(23), 2,
      sym_IncludeValueDefinition,
      aux_sym_IncludeValuesDefinition_repeat1,
  [368] = 6,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_StringLiteral,
    STATE(19), 1,
      sym_IncludePath,
    STATE(46), 1,
      sym_IncludeValuesDefinition,
  [387] = 5,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(90), 1,
      sym_TypeName,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_ExternValue,
    STATE(25), 2,
      sym_ExternValueDefinition,
      aux_sym_ExternValuesDefinition_repeat1,
  [404] = 5,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(95), 1,
      sym_TypeName,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_IncludeValue,
    STATE(23), 2,
      sym_IncludeValueDefinition,
      aux_sym_IncludeValuesDefinition_repeat1,
  [421] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(68), 1,
      sym_Name,
    STATE(36), 1,
      sym_EnumValue,
    STATE(20), 2,
      sym_EnumValueDefinition,
      aux_sym_EnumValuesDefinition_repeat1,
  [435] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(95), 1,
      sym_TypeName,
    STATE(38), 1,
      sym_IncludeValue,
    STATE(26), 2,
      sym_IncludeValueDefinition,
      aux_sym_IncludeValuesDefinition_repeat1,
  [449] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(72), 1,
      sym_TypeName,
    STATE(37), 1,
      sym_ExternValue,
    STATE(21), 2,
      sym_ExternValueDefinition,
      aux_sym_ExternValuesDefinition_repeat1,
  [463] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_IncludePath,
    STATE(18), 1,
      sym_StringLiteral,
  [476] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_from,
    STATE(45), 1,
      sym_ExternValuesDefinition,
  [489] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_StringLiteral,
    STATE(14), 1,
      sym_ExternUri,
  [502] = 4,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_StringLiteral,
    STATE(17), 1,
      sym_ExternUri,
  [515] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(103), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [523] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      sym_Name,
  [531] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(107), 2,
      anon_sym_RBRACE,
      sym_Name,
  [539] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(109), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [547] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(111), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [555] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(113), 2,
      sym_TypeName,
      anon_sym_RBRACE,
  [563] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(115), 2,
      anon_sym_LBRACE,
      anon_sym_from,
  [571] = 3,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(117), 1,
      sym_TypeName,
    STATE(31), 1,
      sym_ExternNamespace,
  [581] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
  [588] = 2,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      sym_Comma,
  [595] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(125), 1,
      anon_sym_STAR_SLASH,
  [602] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(127), 1,
      anon_sym_from,
  [609] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(129), 1,
      anon_sym_from,
  [616] = 2,
    ACTIONS(123), 1,
      sym_Comma,
    ACTIONS(131), 1,
      aux_sym_StringLiteral_token1,
  [623] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(133), 1,
      sym_TypeName,
  [630] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(135), 1,
      anon_sym_from,
  [637] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [644] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [651] = 2,
    ACTIONS(123), 1,
      sym_Comma,
    ACTIONS(141), 1,
      aux_sym_SingleLineCommentLiteral_token1,
  [658] = 2,
    ACTIONS(3), 1,
      sym_Comma,
    ACTIONS(143), 1,
      anon_sym_from,
  [665] = 2,
    ACTIONS(123), 1,
      sym_Comma,
    ACTIONS(145), 1,
      aux_sym_MultiLineCommentLiteral_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 209,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 287,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 334,
  [SMALL_STATE(23)] = 351,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 387,
  [SMALL_STATE(26)] = 404,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 435,
  [SMALL_STATE(29)] = 449,
  [SMALL_STATE(30)] = 463,
  [SMALL_STATE(31)] = 476,
  [SMALL_STATE(32)] = 489,
  [SMALL_STATE(33)] = 502,
  [SMALL_STATE(34)] = 515,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 531,
  [SMALL_STATE(37)] = 539,
  [SMALL_STATE(38)] = 547,
  [SMALL_STATE(39)] = 555,
  [SMALL_STATE(40)] = 563,
  [SMALL_STATE(41)] = 571,
  [SMALL_STATE(42)] = 581,
  [SMALL_STATE(43)] = 588,
  [SMALL_STATE(44)] = 595,
  [SMALL_STATE(45)] = 602,
  [SMALL_STATE(46)] = 609,
  [SMALL_STATE(47)] = 616,
  [SMALL_STATE(48)] = 623,
  [SMALL_STATE(49)] = 630,
  [SMALL_STATE(50)] = 637,
  [SMALL_STATE(51)] = 644,
  [SMALL_STATE(52)] = 651,
  [SMALL_STATE(53)] = 658,
  [SMALL_STATE(54)] = 665,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(48),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(41),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(24),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(54),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(52),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumTypeDefinition, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CommentDefinition, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternUri, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumValuesDefinition, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeTypeDefinition, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringLiteral, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Definition, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TypeDefinition, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DependencyDefinition, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumTypeDefinition, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternTypeDefinition, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MultiLineCommentLiteral, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SingleLineCommentLiteral, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternTypeDefinition, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludePath, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeTypeDefinition, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(35),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_IncludeValuesDefinition_repeat1, 2), SHIFT_REPEAT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_IncludeValuesDefinition_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ExternValuesDefinition_repeat1, 2), SHIFT_REPEAT(34),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ExternValuesDefinition_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternValue, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumValue, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EnumValueDefinition, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternValueDefinition, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeValueDefinition, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeValue, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternNamespace, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeValuesDefinition, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_File, 1),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternValuesDefinition, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
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
