#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_standard_directive = 2,
  sym_doc_comment = 3,
  sym_custom_directive = 4,
  sym_comment = 5,
  anon_sym_EQ = 6,
  anon_sym_LT = 7,
  anon_sym_COMMA = 8,
  anon_sym_GT = 9,
  anon_sym_SLASH = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_COLON = 17,
  anon_sym_POUND = 18,
  sym_ctlop = 19,
  anon_sym_DOT = 20,
  sym_number = 21,
  sym_string = 22,
  sym_byte_string = 23,
  sym_simple_value = 24,
  sym_keyword = 25,
  sym_source_file = 26,
  sym_doc_comment_block = 27,
  sym_rule = 28,
  sym_rule_name = 29,
  sym_generic_params = 30,
  sym_expression = 31,
  sym_choice_expression = 32,
  sym_sequence_expression = 33,
  sym_ctlop_expression = 34,
  sym_primary = 35,
  sym_paren_expression = 36,
  sym_group = 37,
  sym_array_group = 38,
  sym_map_group = 39,
  sym_map_entry = 40,
  sym_member_key = 41,
  sym_tag_expression = 42,
  sym_reference = 43,
  sym_dotted_identifier = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_doc_comment_block_repeat1 = 46,
  aux_sym_generic_params_repeat1 = 47,
  aux_sym_choice_expression_repeat1 = 48,
  aux_sym_sequence_expression_repeat1 = 49,
  aux_sym_array_group_repeat1 = 50,
  aux_sym_map_group_repeat1 = 51,
  aux_sym_dotted_identifier_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_standard_directive] = "standard_directive",
  [sym_doc_comment] = "doc_comment",
  [sym_custom_directive] = "custom_directive",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [sym_ctlop] = "ctlop",
  [anon_sym_DOT] = ".",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_simple_value] = "simple_value",
  [sym_keyword] = "keyword",
  [sym_source_file] = "source_file",
  [sym_doc_comment_block] = "doc_comment_block",
  [sym_rule] = "rule",
  [sym_rule_name] = "rule_name",
  [sym_generic_params] = "generic_params",
  [sym_expression] = "expression",
  [sym_choice_expression] = "choice_expression",
  [sym_sequence_expression] = "sequence_expression",
  [sym_ctlop_expression] = "ctlop_expression",
  [sym_primary] = "primary",
  [sym_paren_expression] = "paren_expression",
  [sym_group] = "group",
  [sym_array_group] = "array_group",
  [sym_map_group] = "map_group",
  [sym_map_entry] = "map_entry",
  [sym_member_key] = "member_key",
  [sym_tag_expression] = "tag_expression",
  [sym_reference] = "reference",
  [sym_dotted_identifier] = "dotted_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_doc_comment_block_repeat1] = "doc_comment_block_repeat1",
  [aux_sym_generic_params_repeat1] = "generic_params_repeat1",
  [aux_sym_choice_expression_repeat1] = "choice_expression_repeat1",
  [aux_sym_sequence_expression_repeat1] = "sequence_expression_repeat1",
  [aux_sym_array_group_repeat1] = "array_group_repeat1",
  [aux_sym_map_group_repeat1] = "map_group_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_standard_directive] = sym_standard_directive,
  [sym_doc_comment] = sym_doc_comment,
  [sym_custom_directive] = sym_custom_directive,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_ctlop] = sym_ctlop,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_simple_value] = sym_simple_value,
  [sym_keyword] = sym_keyword,
  [sym_source_file] = sym_source_file,
  [sym_doc_comment_block] = sym_doc_comment_block,
  [sym_rule] = sym_rule,
  [sym_rule_name] = sym_rule_name,
  [sym_generic_params] = sym_generic_params,
  [sym_expression] = sym_expression,
  [sym_choice_expression] = sym_choice_expression,
  [sym_sequence_expression] = sym_sequence_expression,
  [sym_ctlop_expression] = sym_ctlop_expression,
  [sym_primary] = sym_primary,
  [sym_paren_expression] = sym_paren_expression,
  [sym_group] = sym_group,
  [sym_array_group] = sym_array_group,
  [sym_map_group] = sym_map_group,
  [sym_map_entry] = sym_map_entry,
  [sym_member_key] = sym_member_key,
  [sym_tag_expression] = sym_tag_expression,
  [sym_reference] = sym_reference,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_doc_comment_block_repeat1] = aux_sym_doc_comment_block_repeat1,
  [aux_sym_generic_params_repeat1] = aux_sym_generic_params_repeat1,
  [aux_sym_choice_expression_repeat1] = aux_sym_choice_expression_repeat1,
  [aux_sym_sequence_expression_repeat1] = aux_sym_sequence_expression_repeat1,
  [aux_sym_array_group_repeat1] = aux_sym_array_group_repeat1,
  [aux_sym_map_group_repeat1] = aux_sym_map_group_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_ctlop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_string] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_params] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ctlop_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_array_group] = {
    .visible = true,
    .named = true,
  },
  [sym_map_group] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_member_key] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doc_comment_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_params = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_params] = "params",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_name, 0},
    {field_params, 1},
    {field_value, 3},
  [5] =
    {field_key, 0},
    {field_value, 2},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 4,
  [10] = 5,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 16,
  [22] = 22,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 24,
  [31] = 31,
  [32] = 29,
  [33] = 25,
  [34] = 25,
  [35] = 24,
  [36] = 31,
  [37] = 26,
  [38] = 31,
  [39] = 26,
  [40] = 25,
  [41] = 31,
  [42] = 24,
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
  [55] = 47,
  [56] = 49,
  [57] = 50,
  [58] = 51,
  [59] = 52,
  [60] = 54,
  [61] = 43,
  [62] = 48,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 44,
  [67] = 45,
  [68] = 46,
  [69] = 64,
  [70] = 63,
  [71] = 65,
  [72] = 26,
  [73] = 53,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 78,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 85,
  [88] = 82,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 84,
  [93] = 93,
  [94] = 90,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 95,
  [100] = 97,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 106,
  [112] = 109,
  [113] = 107,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 132,
  [134] = 121,
  [135] = 135,
  [136] = 136,
  [137] = 130,
  [138] = 127,
  [139] = 122,
  [140] = 127,
  [141] = 127,
  [142] = 131,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      ADVANCE_MAP(
        '"', 2,
        '#', 108,
        '(', 101,
        ')', 102,
        ',', 98,
        '-', 5,
        '.', 116,
        '/', 100,
        '0', 157,
        ':', 107,
        ';', 93,
        '<', 97,
        '=', 96,
        '>', 99,
        '[', 103,
        ']', 104,
        'a', 136,
        'b', 139,
        'f', 118,
        'g', 146,
        'h', 117,
        'i', 137,
        'n', 130,
        't', 124,
        'u', 129,
        'v', 120,
        '{', 105,
        '}', 106,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '#', 108,
        '(', 101,
        ')', 102,
        ',', 98,
        '-', 5,
        '.', 115,
        '/', 100,
        '0', 157,
        ':', 107,
        ';', 94,
        '<', 97,
        '=', 96,
        '[', 103,
        ']', 104,
        'a', 136,
        'b', 139,
        'f', 118,
        'g', 146,
        'h', 117,
        'i', 137,
        'n', 130,
        't', 124,
        'u', 129,
        'v', 120,
        '{', 105,
        '}', 106,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(157);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '4') ADVANCE(12);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '5') ADVANCE(109);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'q') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == 'z') ADVANCE(27);
      END_STATE();
    case 82:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(160);
      END_STATE();
    case 83:
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(159);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(160);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      ADVANCE_MAP(
        '"', 2,
        '#', 108,
        '(', 101,
        ')', 102,
        ',', 98,
        '-', 5,
        '.', 116,
        '/', 100,
        '0', 157,
        ':', 107,
        ';', 94,
        '<', 97,
        '=', 96,
        '>', 99,
        '[', 103,
        ']', 104,
        'a', 136,
        'b', 139,
        'f', 118,
        'g', 146,
        'h', 117,
        'i', 137,
        'n', 130,
        't', 124,
        'u', 129,
        'v', 120,
        '{', 105,
        '}', 106,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      ADVANCE_MAP(
        '"', 2,
        '#', 108,
        '(', 101,
        '-', 5,
        '.', 115,
        '/', 100,
        '0', 157,
        ';', 93,
        '[', 103,
        'a', 136,
        'b', 139,
        'f', 118,
        'g', 146,
        'h', 117,
        'i', 137,
        'n', 130,
        't', 124,
        'u', 129,
        'v', 120,
        '{', 105,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_standard_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_custom_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ctlop);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ctlop);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ctlop);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ctlop);
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ctlop);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ctlop);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      ADVANCE_MAP(
        'a', 19,
        'b', 9,
        'c', 14,
        'd', 26,
        'e', 61,
        'f', 28,
        'g', 83,
        'h', 10,
        'j', 54,
        'l', 83,
        'n', 27,
        'o', 41,
        'p', 44,
        'r', 29,
        's', 24,
        'w', 43,
        'x', 4,
      );
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_byte_string);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 87},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 87},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 87},
  [58] = {.lex_state = 87},
  [59] = {.lex_state = 87},
  [60] = {.lex_state = 87},
  [61] = {.lex_state = 87},
  [62] = {.lex_state = 87},
  [63] = {.lex_state = 87},
  [64] = {.lex_state = 87},
  [65] = {.lex_state = 87},
  [66] = {.lex_state = 87},
  [67] = {.lex_state = 87},
  [68] = {.lex_state = 87},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 88},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 87},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 87},
  [80] = {.lex_state = 87},
  [81] = {.lex_state = 87},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 87},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 87},
  [88] = {.lex_state = 87},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 87},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 87},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 87},
  [100] = {.lex_state = 87},
  [101] = {.lex_state = 87},
  [102] = {.lex_state = 87},
  [103] = {.lex_state = 87},
  [104] = {.lex_state = 87},
  [105] = {.lex_state = 87},
  [106] = {.lex_state = 87},
  [107] = {.lex_state = 87},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 87},
  [110] = {.lex_state = 87},
  [111] = {.lex_state = 87},
  [112] = {.lex_state = 87},
  [113] = {.lex_state = 87},
  [114] = {.lex_state = 87},
  [115] = {.lex_state = 87},
  [116] = {.lex_state = 87},
  [117] = {.lex_state = 87},
  [118] = {.lex_state = 87},
  [119] = {.lex_state = 87},
  [120] = {.lex_state = 87},
  [121] = {.lex_state = 87},
  [122] = {.lex_state = 87},
  [123] = {.lex_state = 87},
  [124] = {.lex_state = 87},
  [125] = {.lex_state = 87},
  [126] = {.lex_state = 87},
  [127] = {.lex_state = 87},
  [128] = {.lex_state = 87},
  [129] = {.lex_state = 87},
  [130] = {.lex_state = 87},
  [131] = {.lex_state = 87},
  [132] = {.lex_state = 87},
  [133] = {.lex_state = 87},
  [134] = {.lex_state = 87},
  [135] = {.lex_state = 87},
  [136] = {.lex_state = 87},
  [137] = {.lex_state = 87},
  [138] = {.lex_state = 87},
  [139] = {.lex_state = 87},
  [140] = {.lex_state = 87},
  [141] = {.lex_state = 87},
  [142] = {.lex_state = 87},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_standard_directive] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(1),
    [sym_custom_directive] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_ctlop] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_byte_string] = ACTIONS(1),
    [sym_simple_value] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(129),
    [sym_doc_comment_block] = STATE(75),
    [sym_rule] = STATE(75),
    [sym_rule_name] = STATE(110),
    [sym_dotted_identifier] = STATE(120),
    [aux_sym_source_file_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_standard_directive] = ACTIONS(9),
    [sym_doc_comment] = ACTIONS(11),
    [sym_custom_directive] = ACTIONS(9),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(18), 1,
      sym_identifier,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SLASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym_ctlop,
    STATE(50), 1,
      sym_dotted_identifier,
    ACTIONS(39), 2,
      sym_simple_value,
      sym_keyword,
    STATE(5), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
    STATE(73), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
  [57] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym_ctlop,
    STATE(57), 1,
      sym_dotted_identifier,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(10), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    ACTIONS(15), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(53), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
  [114] = 13,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_dotted_identifier,
    ACTIONS(79), 2,
      sym_simple_value,
      sym_keyword,
    STATE(4), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(76), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(53), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
    ACTIONS(62), 5,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [166] = 12,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_dotted_identifier,
    ACTIONS(39), 2,
      sym_simple_value,
      sym_keyword,
    ACTIONS(84), 2,
      sym_comment,
      sym_identifier,
    STATE(9), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(73), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
  [216] = 12,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_dotted_identifier,
    ACTIONS(39), 2,
      sym_simple_value,
      sym_keyword,
    ACTIONS(86), 2,
      sym_comment,
      sym_identifier,
    STATE(5), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(73), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
  [266] = 18,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(106), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [328] = 13,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_dotted_identifier,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(10), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(53), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
    ACTIONS(25), 5,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [380] = 13,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_dotted_identifier,
    ACTIONS(114), 2,
      sym_simple_value,
      sym_keyword,
    STATE(9), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(111), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(73), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
  [432] = 13,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_dotted_identifier,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(4), 2,
      sym_primary,
      aux_sym_sequence_expression_repeat1,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(53), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
    ACTIONS(82), 5,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [484] = 18,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(111), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [546] = 17,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(117), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [605] = 17,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(117), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [664] = 17,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(117), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [723] = 17,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(117), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [782] = 16,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(139), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [838] = 16,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(117), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [894] = 16,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(2), 1,
      sym_primary,
    STATE(50), 1,
      sym_dotted_identifier,
    STATE(73), 1,
      sym_reference,
    STATE(85), 1,
      sym_sequence_expression,
    STATE(93), 1,
      sym_expression,
    ACTIONS(39), 2,
      sym_simple_value,
      sym_keyword,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    STATE(95), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(47), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [950] = 16,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(142), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [1006] = 16,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(2), 1,
      sym_primary,
    STATE(50), 1,
      sym_dotted_identifier,
    STATE(73), 1,
      sym_reference,
    STATE(85), 1,
      sym_sequence_expression,
    STATE(96), 1,
      sym_expression,
    ACTIONS(39), 2,
      sym_simple_value,
      sym_keyword,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    STATE(95), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(47), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [1062] = 16,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(122), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [1118] = 16,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(116), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [1174] = 16,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(3), 1,
      sym_primary,
    STATE(53), 1,
      sym_reference,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_sequence_expression,
    STATE(131), 1,
      sym_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    STATE(99), 2,
      sym_choice_expression,
      sym_ctlop_expression,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(55), 3,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
  [1230] = 5,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(131), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(133), 15,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_number,
      sym_string,
      sym_byte_string,
  [1262] = 5,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(137), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 15,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_POUND,
      sym_number,
      sym_string,
      sym_byte_string,
  [1294] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(137), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 16,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_DOT,
      sym_number,
      sym_string,
      sym_byte_string,
  [1321] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(6), 1,
      sym_primary,
    STATE(50), 1,
      sym_dotted_identifier,
    STATE(90), 1,
      sym_sequence_expression,
    ACTIONS(39), 2,
      sym_simple_value,
      sym_keyword,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(73), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
  [1368] = 13,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_primary,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(94), 1,
      sym_sequence_expression,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(53), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
  [1415] = 12,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(50), 1,
      sym_dotted_identifier,
    STATE(97), 1,
      sym_primary,
    ACTIONS(39), 2,
      sym_simple_value,
      sym_keyword,
    STATE(49), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(37), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(73), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
  [1459] = 4,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(131), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(133), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1487] = 5,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(148), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(150), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1517] = 12,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(100), 1,
      sym_primary,
    ACTIONS(57), 2,
      sym_simple_value,
      sym_keyword,
    STATE(56), 2,
      sym_array_group,
      sym_map_group,
    ACTIONS(55), 3,
      sym_number,
      sym_string,
      sym_byte_string,
    STATE(53), 4,
      sym_paren_expression,
      sym_group,
      sym_tag_expression,
      sym_reference,
  [1561] = 4,
    ACTIONS(154), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(137), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1589] = 5,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(137), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1619] = 5,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(131), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(133), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1649] = 4,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(148), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1677] = 2,
    ACTIONS(137), 5,
      sym_comment,
      anon_sym_DOT,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1700] = 4,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(148), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(150), 12,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_number,
      sym_string,
      sym_byte_string,
  [1727] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_DOT,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1752] = 4,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(137), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 12,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_number,
      sym_string,
      sym_byte_string,
  [1779] = 5,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(148), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(150), 12,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_number,
      sym_string,
      sym_byte_string,
  [1808] = 4,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(131), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(133), 12,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_number,
      sym_string,
      sym_byte_string,
  [1835] = 2,
    ACTIONS(167), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(165), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1857] = 2,
    ACTIONS(171), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(169), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1879] = 2,
    ACTIONS(175), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(173), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1901] = 2,
    ACTIONS(179), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(177), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1923] = 4,
    ACTIONS(184), 2,
      sym_comment,
      sym_identifier,
    ACTIONS(189), 2,
      sym_simple_value,
      sym_keyword,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
    ACTIONS(187), 9,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1949] = 2,
    ACTIONS(193), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(191), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1971] = 2,
    ACTIONS(197), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [1993] = 2,
    ACTIONS(148), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2015] = 2,
    ACTIONS(201), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(199), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2037] = 2,
    ACTIONS(205), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(203), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2059] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(189), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(187), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2083] = 3,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(207), 12,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2107] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(189), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(181), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(187), 9,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2133] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(197), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(195), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2157] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(148), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(150), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2181] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(201), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(199), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2205] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(205), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(203), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2229] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(207), 12,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2255] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(167), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(165), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2279] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(193), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(191), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2303] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(215), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(217), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2327] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(219), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(221), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2351] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(223), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(225), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2375] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(171), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(169), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2399] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(175), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(173), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2423] = 3,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(179), 3,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(177), 13,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2447] = 2,
    ACTIONS(219), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(221), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2469] = 2,
    ACTIONS(215), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(217), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2491] = 2,
    ACTIONS(223), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2513] = 2,
    ACTIONS(137), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_DOT,
      sym_number,
      sym_string,
      sym_byte_string,
  [2535] = 2,
    ACTIONS(189), 4,
      sym_comment,
      sym_identifier,
      sym_simple_value,
      sym_keyword,
    ACTIONS(187), 13,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym_ctlop,
      sym_number,
      sym_string,
      sym_byte_string,
  [2557] = 8,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_doc_comment,
    ACTIONS(238), 1,
      sym_comment,
    STATE(110), 1,
      sym_rule_name,
    STATE(120), 1,
      sym_dotted_identifier,
    ACTIONS(232), 2,
      sym_standard_directive,
      sym_custom_directive,
    STATE(74), 3,
      sym_doc_comment_block,
      sym_rule,
      aux_sym_source_file_repeat1,
  [2585] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_doc_comment,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      sym_comment,
    STATE(110), 1,
      sym_rule_name,
    STATE(120), 1,
      sym_dotted_identifier,
    ACTIONS(243), 2,
      sym_standard_directive,
      sym_custom_directive,
    STATE(74), 3,
      sym_doc_comment_block,
      sym_rule,
      aux_sym_source_file_repeat1,
  [2613] = 8,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_map_entry,
    STATE(125), 1,
      sym_dotted_identifier,
    STATE(128), 1,
      sym_member_key,
    ACTIONS(253), 3,
      sym_number,
      sym_string,
      sym_byte_string,
  [2640] = 8,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_map_entry,
    STATE(125), 1,
      sym_dotted_identifier,
    STATE(128), 1,
      sym_member_key,
    ACTIONS(253), 3,
      sym_number,
      sym_string,
      sym_byte_string,
  [2667] = 7,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_map_entry,
    STATE(125), 1,
      sym_dotted_identifier,
    STATE(128), 1,
      sym_member_key,
    ACTIONS(253), 3,
      sym_number,
      sym_string,
      sym_byte_string,
  [2691] = 7,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_map_entry,
    STATE(125), 1,
      sym_dotted_identifier,
    STATE(128), 1,
      sym_member_key,
    ACTIONS(253), 3,
      sym_number,
      sym_string,
      sym_byte_string,
  [2715] = 7,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_map_entry,
    STATE(125), 1,
      sym_dotted_identifier,
    STATE(128), 1,
      sym_member_key,
    ACTIONS(253), 3,
      sym_number,
      sym_string,
      sym_byte_string,
  [2739] = 7,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_map_entry,
    STATE(125), 1,
      sym_dotted_identifier,
    STATE(128), 1,
      sym_member_key,
    ACTIONS(253), 3,
      sym_number,
      sym_string,
      sym_byte_string,
  [2763] = 4,
    ACTIONS(269), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SLASH,
    STATE(84), 1,
      aux_sym_choice_expression_repeat1,
    ACTIONS(267), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2780] = 6,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(118), 1,
      sym_map_entry,
    STATE(125), 1,
      sym_dotted_identifier,
    STATE(128), 1,
      sym_member_key,
    ACTIONS(253), 3,
      sym_number,
      sym_string,
      sym_byte_string,
  [2801] = 4,
    ACTIONS(275), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_SLASH,
    STATE(84), 1,
      aux_sym_choice_expression_repeat1,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2818] = 4,
    ACTIONS(271), 1,
      anon_sym_SLASH,
    ACTIONS(282), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_choice_expression_repeat1,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2835] = 3,
    ACTIONS(286), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_doc_comment_block_repeat1,
    ACTIONS(284), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2849] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_choice_expression_repeat1,
    ACTIONS(280), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2865] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      aux_sym_choice_expression_repeat1,
    ACTIONS(267), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2881] = 4,
    ACTIONS(292), 1,
      sym_doc_comment,
    ACTIONS(295), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_doc_comment_block_repeat1,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_custom_directive,
      sym_identifier,
  [2897] = 2,
    ACTIONS(275), 1,
      sym_comment,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      anon_sym_SLASH,
      sym_identifier,
  [2909] = 3,
    ACTIONS(299), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_doc_comment_block_repeat1,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2923] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_SLASH,
    STATE(92), 1,
      aux_sym_choice_expression_repeat1,
    ACTIONS(273), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2939] = 2,
    ACTIONS(306), 1,
      sym_comment,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2950] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2961] = 2,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2972] = 2,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2983] = 2,
    ACTIONS(314), 1,
      sym_comment,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      sym_standard_directive,
      sym_doc_comment,
      sym_custom_directive,
      sym_identifier,
  [2994] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [3008] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3018] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(312), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3028] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_array_group_repeat1,
  [3041] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_GT,
    STATE(104), 1,
      aux_sym_generic_params_repeat1,
  [3054] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_map_group_repeat1,
  [3067] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_GT,
    STATE(114), 1,
      aux_sym_generic_params_repeat1,
  [3080] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_array_group_repeat1,
  [3093] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_array_group_repeat1,
  [3106] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_map_group_repeat1,
  [3119] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_dotted_identifier_repeat1,
  [3132] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_map_group_repeat1,
  [3145] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_EQ,
    ACTIONS(347), 1,
      anon_sym_LT,
    STATE(123), 1,
      sym_generic_params,
  [3158] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_array_group_repeat1,
  [3171] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_map_group_repeat1,
  [3184] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_map_group_repeat1,
  [3197] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_GT,
    STATE(114), 1,
      aux_sym_generic_params_repeat1,
  [3210] = 4,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_array_group_repeat1,
  [3223] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3231] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3239] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3247] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3255] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_EQ,
      anon_sym_LT,
  [3263] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
  [3270] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [3277] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_EQ,
  [3284] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_EQ,
  [3291] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [3298] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [3305] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [3312] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [3319] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [3326] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_number,
  [3333] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [3340] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [3347] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
  [3354] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
  [3361] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [3368] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
  [3375] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_number,
  [3382] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [3389] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
  [3396] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [3403] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_identifier,
  [3410] = 2,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 380,
  [SMALL_STATE(10)] = 432,
  [SMALL_STATE(11)] = 484,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 605,
  [SMALL_STATE(14)] = 664,
  [SMALL_STATE(15)] = 723,
  [SMALL_STATE(16)] = 782,
  [SMALL_STATE(17)] = 838,
  [SMALL_STATE(18)] = 894,
  [SMALL_STATE(19)] = 950,
  [SMALL_STATE(20)] = 1006,
  [SMALL_STATE(21)] = 1062,
  [SMALL_STATE(22)] = 1118,
  [SMALL_STATE(23)] = 1174,
  [SMALL_STATE(24)] = 1230,
  [SMALL_STATE(25)] = 1262,
  [SMALL_STATE(26)] = 1294,
  [SMALL_STATE(27)] = 1321,
  [SMALL_STATE(28)] = 1368,
  [SMALL_STATE(29)] = 1415,
  [SMALL_STATE(30)] = 1459,
  [SMALL_STATE(31)] = 1487,
  [SMALL_STATE(32)] = 1517,
  [SMALL_STATE(33)] = 1561,
  [SMALL_STATE(34)] = 1589,
  [SMALL_STATE(35)] = 1619,
  [SMALL_STATE(36)] = 1649,
  [SMALL_STATE(37)] = 1677,
  [SMALL_STATE(38)] = 1700,
  [SMALL_STATE(39)] = 1727,
  [SMALL_STATE(40)] = 1752,
  [SMALL_STATE(41)] = 1779,
  [SMALL_STATE(42)] = 1808,
  [SMALL_STATE(43)] = 1835,
  [SMALL_STATE(44)] = 1857,
  [SMALL_STATE(45)] = 1879,
  [SMALL_STATE(46)] = 1901,
  [SMALL_STATE(47)] = 1923,
  [SMALL_STATE(48)] = 1949,
  [SMALL_STATE(49)] = 1971,
  [SMALL_STATE(50)] = 1993,
  [SMALL_STATE(51)] = 2015,
  [SMALL_STATE(52)] = 2037,
  [SMALL_STATE(53)] = 2059,
  [SMALL_STATE(54)] = 2083,
  [SMALL_STATE(55)] = 2107,
  [SMALL_STATE(56)] = 2133,
  [SMALL_STATE(57)] = 2157,
  [SMALL_STATE(58)] = 2181,
  [SMALL_STATE(59)] = 2205,
  [SMALL_STATE(60)] = 2229,
  [SMALL_STATE(61)] = 2255,
  [SMALL_STATE(62)] = 2279,
  [SMALL_STATE(63)] = 2303,
  [SMALL_STATE(64)] = 2327,
  [SMALL_STATE(65)] = 2351,
  [SMALL_STATE(66)] = 2375,
  [SMALL_STATE(67)] = 2399,
  [SMALL_STATE(68)] = 2423,
  [SMALL_STATE(69)] = 2447,
  [SMALL_STATE(70)] = 2469,
  [SMALL_STATE(71)] = 2491,
  [SMALL_STATE(72)] = 2513,
  [SMALL_STATE(73)] = 2535,
  [SMALL_STATE(74)] = 2557,
  [SMALL_STATE(75)] = 2585,
  [SMALL_STATE(76)] = 2613,
  [SMALL_STATE(77)] = 2640,
  [SMALL_STATE(78)] = 2667,
  [SMALL_STATE(79)] = 2691,
  [SMALL_STATE(80)] = 2715,
  [SMALL_STATE(81)] = 2739,
  [SMALL_STATE(82)] = 2763,
  [SMALL_STATE(83)] = 2780,
  [SMALL_STATE(84)] = 2801,
  [SMALL_STATE(85)] = 2818,
  [SMALL_STATE(86)] = 2835,
  [SMALL_STATE(87)] = 2849,
  [SMALL_STATE(88)] = 2865,
  [SMALL_STATE(89)] = 2881,
  [SMALL_STATE(90)] = 2897,
  [SMALL_STATE(91)] = 2909,
  [SMALL_STATE(92)] = 2923,
  [SMALL_STATE(93)] = 2939,
  [SMALL_STATE(94)] = 2950,
  [SMALL_STATE(95)] = 2961,
  [SMALL_STATE(96)] = 2972,
  [SMALL_STATE(97)] = 2983,
  [SMALL_STATE(98)] = 2994,
  [SMALL_STATE(99)] = 3008,
  [SMALL_STATE(100)] = 3018,
  [SMALL_STATE(101)] = 3028,
  [SMALL_STATE(102)] = 3041,
  [SMALL_STATE(103)] = 3054,
  [SMALL_STATE(104)] = 3067,
  [SMALL_STATE(105)] = 3080,
  [SMALL_STATE(106)] = 3093,
  [SMALL_STATE(107)] = 3106,
  [SMALL_STATE(108)] = 3119,
  [SMALL_STATE(109)] = 3132,
  [SMALL_STATE(110)] = 3145,
  [SMALL_STATE(111)] = 3158,
  [SMALL_STATE(112)] = 3171,
  [SMALL_STATE(113)] = 3184,
  [SMALL_STATE(114)] = 3197,
  [SMALL_STATE(115)] = 3210,
  [SMALL_STATE(116)] = 3223,
  [SMALL_STATE(117)] = 3231,
  [SMALL_STATE(118)] = 3239,
  [SMALL_STATE(119)] = 3247,
  [SMALL_STATE(120)] = 3255,
  [SMALL_STATE(121)] = 3263,
  [SMALL_STATE(122)] = 3270,
  [SMALL_STATE(123)] = 3277,
  [SMALL_STATE(124)] = 3284,
  [SMALL_STATE(125)] = 3291,
  [SMALL_STATE(126)] = 3298,
  [SMALL_STATE(127)] = 3305,
  [SMALL_STATE(128)] = 3312,
  [SMALL_STATE(129)] = 3319,
  [SMALL_STATE(130)] = 3326,
  [SMALL_STATE(131)] = 3333,
  [SMALL_STATE(132)] = 3340,
  [SMALL_STATE(133)] = 3347,
  [SMALL_STATE(134)] = 3354,
  [SMALL_STATE(135)] = 3361,
  [SMALL_STATE(136)] = 3368,
  [SMALL_STATE(137)] = 3375,
  [SMALL_STATE(138)] = 3382,
  [SMALL_STATE(139)] = 3389,
  [SMALL_STATE(140)] = 3396,
  [SMALL_STATE(141)] = 3403,
  [SMALL_STATE(142)] = 3410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_sequence_expression, 1, 0, 0),
  [18] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_sequence_expression, 1, 0, 0), SHIFT(38),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_sequence_expression, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_expression, 5, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_expression, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_group, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_group, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_group, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_group, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_group, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_group, 5, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_primary, 1, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0), REDUCE(sym_primary, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_group, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_group, 5, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_group, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_group, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_group, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_group, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_expression, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_expression, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_group, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_group, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_group, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_group, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_expression, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_expression, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_expression_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_expression_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment_block, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment_block, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_comment_block_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_doc_comment_block_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment_block, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment_block, 1, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, 0, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, 0, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3, 0, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctlop_expression, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctlop_expression, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_group_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_group_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_key, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_params_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_params_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_group_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_group_repeat1, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3, 0, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_params, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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

TS_PUBLIC const TSLanguage *tree_sitter_cddl(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
