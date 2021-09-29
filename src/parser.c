#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 722
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COLON_LBRACK = 1,
  anon_sym_RBRACK = 2,
  sym_shisho_ellipsis = 3,
  anon_sym_DOT_DOT_DOT = 4,
  sym_shisho_metavariable_name = 5,
  anon_sym_EQ = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_identifier = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  aux_sym_numeric_lit_token1 = 12,
  aux_sym_numeric_lit_token2 = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  sym_null_lit = 16,
  anon_sym_COMMA = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COLON = 19,
  anon_sym_DOT = 20,
  aux_sym_legacy_index_token1 = 21,
  anon_sym_DOT_STAR = 22,
  anon_sym_LBRACK_STAR_RBRACK = 23,
  anon_sym_EQ_GT = 24,
  anon_sym_for = 25,
  anon_sym_in = 26,
  anon_sym_if = 27,
  anon_sym_QMARK = 28,
  anon_sym_DASH = 29,
  anon_sym_BANG = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  anon_sym_PLUS = 34,
  anon_sym_GT = 35,
  anon_sym_GT_EQ = 36,
  anon_sym_LT = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_EQ_EQ = 39,
  anon_sym_BANG_EQ = 40,
  anon_sym_AMP_AMP = 41,
  anon_sym_PIPE_PIPE = 42,
  anon_sym_LT_LT = 43,
  anon_sym_LT_LT_DASH = 44,
  sym_strip_marker = 45,
  anon_sym_endfor = 46,
  anon_sym_else = 47,
  anon_sym_endif = 48,
  sym_comment = 49,
  sym__whitespace = 50,
  sym_quoted_template_start = 51,
  sym_quoted_template_end = 52,
  sym__template_literal_chunk = 53,
  sym_template_interpolation_start = 54,
  sym_template_interpolation_end = 55,
  sym_template_directive_start = 56,
  sym_template_directive_end = 57,
  sym_heredoc_identifier = 58,
  sym_config_file = 59,
  sym_shisho_metavariable = 60,
  sym_shisho_ellipsis_metavariable = 61,
  sym_body = 62,
  sym_attribute = 63,
  sym_block = 64,
  sym_block_start = 65,
  sym_block_end = 66,
  sym_expression = 67,
  sym__expr_term = 68,
  sym_literal_value = 69,
  sym_numeric_lit = 70,
  sym_bool_lit = 71,
  sym_string_lit = 72,
  sym_collection_value = 73,
  sym__comma = 74,
  sym_tuple = 75,
  sym_tuple_start = 76,
  sym_tuple_end = 77,
  sym__tuple_elems = 78,
  sym_object = 79,
  sym_object_start = 80,
  sym_object_end = 81,
  sym__object_elems = 82,
  sym_object_elem = 83,
  sym_index = 84,
  sym_new_index = 85,
  sym_legacy_index = 86,
  sym_get_attr = 87,
  sym_splat = 88,
  sym_attr_splat = 89,
  sym_full_splat = 90,
  sym_for_expr = 91,
  sym_for_tuple_expr = 92,
  sym_for_object_expr = 93,
  sym_for_intro = 94,
  sym_for_cond = 95,
  sym_variable_expr = 96,
  sym_function_call = 97,
  sym__function_call_start = 98,
  sym__function_call_end = 99,
  sym_function_arguments = 100,
  sym_ellipsis = 101,
  sym_conditional = 102,
  sym_operation = 103,
  sym_unary_operation = 104,
  sym_binary_operation = 105,
  sym_template_expr = 106,
  sym__template = 107,
  sym_quoted_template = 108,
  sym_heredoc_template = 109,
  sym_heredoc_start = 110,
  sym_template_literal = 111,
  sym_template_interpolation = 112,
  sym_template_directive = 113,
  sym_template_for = 114,
  sym_template_for_start = 115,
  sym_template_for_end = 116,
  sym_template_if = 117,
  sym_template_if_branch = 118,
  sym_template_if_intro = 119,
  sym_template_else_branch = 120,
  sym_template_else_intro = 121,
  sym_template_if_end = 122,
  aux_sym_body_repeat1 = 123,
  aux_sym_block_repeat1 = 124,
  aux_sym__tuple_elems_repeat1 = 125,
  aux_sym__object_elems_repeat1 = 126,
  aux_sym_attr_splat_repeat1 = 127,
  aux_sym__template_repeat1 = 128,
  aux_sym_template_literal_repeat1 = 129,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_LBRACK] = ":[",
  [anon_sym_RBRACK] = "]",
  [sym_shisho_ellipsis] = "shisho_ellipsis",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_shisho_metavariable_name] = "shisho_metavariable_name",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [aux_sym_numeric_lit_token2] = "numeric_lit_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [aux_sym_legacy_index_token1] = "legacy_index_token1",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_strip_marker] = "strip_marker",
  [anon_sym_endfor] = "endfor",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_quoted_template_start] = "quoted_template_start",
  [sym_quoted_template_end] = "quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym_template_interpolation_start] = "template_interpolation_start",
  [sym_template_interpolation_end] = "template_interpolation_end",
  [sym_template_directive_start] = "template_directive_start",
  [sym_template_directive_end] = "template_directive_end",
  [sym_heredoc_identifier] = "heredoc_identifier",
  [sym_config_file] = "config_file",
  [sym_shisho_metavariable] = "shisho_metavariable",
  [sym_shisho_ellipsis_metavariable] = "shisho_ellipsis_metavariable",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym_tuple_start] = "tuple_start",
  [sym_tuple_end] = "tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym_object_start] = "object_start",
  [sym_object_end] = "object_end",
  [sym__object_elems] = "_object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym_new_index] = "new_index",
  [sym_legacy_index] = "legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym__function_call_start] = "_function_call_start",
  [sym__function_call_end] = "_function_call_end",
  [sym_function_arguments] = "function_arguments",
  [sym_ellipsis] = "ellipsis",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym__template] = "_template",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym_heredoc_start] = "heredoc_start",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [sym_template_for] = "template_for",
  [sym_template_for_start] = "template_for_start",
  [sym_template_for_end] = "template_for_end",
  [sym_template_if] = "template_if",
  [sym_template_if_branch] = "template_if_branch",
  [sym_template_if_intro] = "template_if_intro",
  [sym_template_else_branch] = "template_else_branch",
  [sym_template_else_intro] = "template_else_intro",
  [sym_template_if_end] = "template_if_end",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym__template_repeat1] = "_template_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_LBRACK] = anon_sym_COLON_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_shisho_ellipsis] = sym_shisho_ellipsis,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_shisho_metavariable_name] = sym_shisho_metavariable_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [aux_sym_numeric_lit_token2] = aux_sym_numeric_lit_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_legacy_index_token1] = aux_sym_legacy_index_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym_strip_marker] = sym_strip_marker,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_quoted_template_start] = sym_quoted_template_start,
  [sym_quoted_template_end] = sym_quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym_template_interpolation_start] = sym_template_interpolation_start,
  [sym_template_interpolation_end] = sym_template_interpolation_end,
  [sym_template_directive_start] = sym_template_directive_start,
  [sym_template_directive_end] = sym_template_directive_end,
  [sym_heredoc_identifier] = sym_heredoc_identifier,
  [sym_config_file] = sym_config_file,
  [sym_shisho_metavariable] = sym_shisho_metavariable,
  [sym_shisho_ellipsis_metavariable] = sym_shisho_ellipsis_metavariable,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym_tuple_start] = sym_tuple_start,
  [sym_tuple_end] = sym_tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym_object_start] = sym_object_start,
  [sym_object_end] = sym_object_end,
  [sym__object_elems] = sym__object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym_new_index] = sym_new_index,
  [sym_legacy_index] = sym_legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym__function_call_start] = sym__function_call_start,
  [sym__function_call_end] = sym__function_call_end,
  [sym_function_arguments] = sym_function_arguments,
  [sym_ellipsis] = sym_ellipsis,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym__template] = sym__template,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym_heredoc_start] = sym_heredoc_start,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [sym_template_for] = sym_template_for,
  [sym_template_for_start] = sym_template_for_start,
  [sym_template_for_end] = sym_template_for_end,
  [sym_template_if] = sym_template_if,
  [sym_template_if_branch] = sym_template_if_branch,
  [sym_template_if_intro] = sym_template_if_intro,
  [sym_template_else_branch] = sym_template_else_branch,
  [sym_template_else_intro] = sym_template_else_intro,
  [sym_template_if_end] = sym_template_if_end,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym__template_repeat1] = aux_sym__template_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_shisho_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_shisho_metavariable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_legacy_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_strip_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_template_start] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_end] = {
    .visible = true,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_template_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_shisho_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_shisho_ellipsis_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_end] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_start] = {
    .visible = true,
    .named = true,
  },
  [sym_object_end] = {
    .visible = true,
    .named = true,
  },
  [sym__object_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_new_index] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_call_start] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call_end] = {
    .visible = false,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__template] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_else_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_template_else_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_val = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_val, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 42891
    ? (c < 3804
      ? (c < 2616
        ? (c < 1791
          ? (c < 895
            ? (c < 192
              ? (c < 'o'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c >= 'g' && c <= 'm')))
                : (c <= 's' || (c < 181
                  ? (c < 170
                    ? (c >= 'u' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))))
            : (c <= 895 || (c < 1376
              ? (c < 931
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2084
              ? (c < 1994
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2230
                ? (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))))))
        : (c <= 2617 || (c < 3133
          ? (c < 2877
            ? (c < 2749
              ? (c < 2703
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2749 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2877 || (c < 2974
              ? (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))
              : (c <= 2975 || (c < 3077
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))))))
          : (c <= 3133 || (c < 3450
            ? (c < 3294
              ? (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))
              : (c <= 3294 || (c < 3346
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))))))
            : (c <= 3455 || (c < 3716
              ? (c < 3520
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))))))))))
      : (c <= 3807 || (c < 7680
        ? (c < 5792
          ? (c < 4688
            ? (c < 4197
              ? (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))
              : (c <= 4198 || (c < 4295
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))))
            : (c <= 4694 || (c < 4808
              ? (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))))))
          : (c <= 5866 || (c < 6656
            ? (c < 6108
              ? (c < 5952
                ? (c < 5902
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))
              : (c <= 6108 || (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))))
            : (c <= 6678 || (c < 7258
              ? (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))
              : (c <= 7293 || (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))))))))
        : (c <= 7957 || (c < 11506
          ? (c < 8319
            ? (c < 8118
              ? (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))
              : (c <= 8124 || (c < 8150
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))))
            : (c <= 8319 || (c < 8490
              ? (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))
              : (c <= 8505 || (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))
                : (c <= 11310 || (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))))))
          : (c <= 11507 || (c < 12443
            ? (c < 11704
              ? (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))
              : (c <= 11710 || (c < 12293
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 12295 || (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12447 || (c < 42192
              ? (c < 12704
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43584
            ? (c < 43261
              ? (c < 43020
                ? (c < 43011
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))))
              : (c <= 43262 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))
                : (c <= 43471 || (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))))))
            : (c <= 43586 || (c < 43739
              ? (c < 43697
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 42946
    ? (c < 3904
      ? (c < 2654
        ? (c < 1810
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))))))))
          : (c <= 1839 || (c < 2447
            ? (c < 2112
              ? (c < 2042
                ? (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2365
                ? (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))))
            : (c <= 2448 || (c < 2556
              ? (c < 2493
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))))
              : (c <= 2556 || (c < 2610
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3168
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2984
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3090
                ? (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))))))
          : (c <= 3169 || (c < 3482
            ? (c < 3313
              ? (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3294
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3314 || (c < 3406
                ? (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))))
            : (c <= 3505 || (c < 3724
              ? (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))
              : (c <= 3747 || (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : (c <= 3807 || c == 3840))))))))))))
      : (c <= 3911 || (c < 7960
        ? (c < 5870
          ? (c < 4698
            ? (c < 4213
              ? (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4304
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))))
            : (c <= 4701 || (c < 4882
              ? (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))
              : (c <= 4885 || (c < 5121
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))
          : (c <= 5880 || (c < 6688
            ? (c < 6176
              ? (c < 5984
                ? (c < 5920
                  ? (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))
              : (c <= 6264 || (c < 6480
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))))
            : (c <= 6740 || (c < 7296
              ? (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6987 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))
              : (c <= 7304 || (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11520
          ? (c < 8336
            ? (c < 8126
              ? (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))
              : (c <= 8126 || (c < 8160
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))))
            : (c <= 8348 || (c < 8508
              ? (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))
              : (c <= 8511 || (c < 11312
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11310)))
                : (c <= 11358 || (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))))))))
          : (c <= 11557 || (c < 12449
            ? (c < 11712
              ? (c < 11648
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))
              : (c <= 11718 || (c < 12321
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c >= 12443 && c <= 12447)))))))
            : (c <= 12538 || (c < 42240
              ? (c < 12784
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 40960
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 40956)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42656
                ? (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42735 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))))))))))))))
    : (c <= 42954 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43588
            ? (c < 43274
              ? (c < 43072
                ? (c < 43015
                  ? (c < 43011
                    ? (c >= 42997 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43123 || (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))))
              : (c <= 43301 || (c < 43488
                ? (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))
                : (c <= 43492 || (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))))))
            : (c <= 43595 || (c < 43744
              ? (c < 43701
                ? (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))
              : (c <= 43754 || (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'p'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'n')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'f'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'd')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'm'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'k')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 's'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'q')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 't'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'r')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'v'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 't')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(51);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(72);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(51);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(72);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(55);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(72);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(117);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == '[') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == '[') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == '|') ADVANCE(116);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(51);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(72);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON_LBRACK);
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_shisho_ellipsis);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_shisho_metavariable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(72);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(72);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(72);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(72);
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(72);
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(72);
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(72);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(72);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(72);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(72);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(72);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(72);
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(72);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(72);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(72);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(72);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 4, .external_lex_state = 2},
  [3] = {.lex_state = 4, .external_lex_state = 2},
  [4] = {.lex_state = 4, .external_lex_state = 2},
  [5] = {.lex_state = 4, .external_lex_state = 2},
  [6] = {.lex_state = 4, .external_lex_state = 2},
  [7] = {.lex_state = 4, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 4, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 2},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 1, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 1, .external_lex_state = 2},
  [81] = {.lex_state = 1, .external_lex_state = 2},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 1, .external_lex_state = 2},
  [91] = {.lex_state = 1, .external_lex_state = 2},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 1, .external_lex_state = 2},
  [97] = {.lex_state = 1, .external_lex_state = 2},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 1, .external_lex_state = 2},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 1, .external_lex_state = 2},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 1, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 1, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 1, .external_lex_state = 2},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 1, .external_lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 1, .external_lex_state = 2},
  [130] = {.lex_state = 1, .external_lex_state = 2},
  [131] = {.lex_state = 1, .external_lex_state = 2},
  [132] = {.lex_state = 1, .external_lex_state = 2},
  [133] = {.lex_state = 1, .external_lex_state = 2},
  [134] = {.lex_state = 1, .external_lex_state = 2},
  [135] = {.lex_state = 1, .external_lex_state = 2},
  [136] = {.lex_state = 1, .external_lex_state = 2},
  [137] = {.lex_state = 1, .external_lex_state = 2},
  [138] = {.lex_state = 1, .external_lex_state = 2},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 1, .external_lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 1, .external_lex_state = 2},
  [144] = {.lex_state = 1, .external_lex_state = 2},
  [145] = {.lex_state = 1, .external_lex_state = 2},
  [146] = {.lex_state = 1, .external_lex_state = 2},
  [147] = {.lex_state = 1, .external_lex_state = 2},
  [148] = {.lex_state = 1, .external_lex_state = 2},
  [149] = {.lex_state = 1, .external_lex_state = 2},
  [150] = {.lex_state = 1, .external_lex_state = 2},
  [151] = {.lex_state = 1, .external_lex_state = 2},
  [152] = {.lex_state = 1, .external_lex_state = 2},
  [153] = {.lex_state = 1, .external_lex_state = 2},
  [154] = {.lex_state = 1, .external_lex_state = 2},
  [155] = {.lex_state = 1, .external_lex_state = 2},
  [156] = {.lex_state = 1, .external_lex_state = 2},
  [157] = {.lex_state = 1, .external_lex_state = 2},
  [158] = {.lex_state = 1, .external_lex_state = 2},
  [159] = {.lex_state = 1, .external_lex_state = 2},
  [160] = {.lex_state = 1, .external_lex_state = 2},
  [161] = {.lex_state = 1, .external_lex_state = 2},
  [162] = {.lex_state = 1, .external_lex_state = 2},
  [163] = {.lex_state = 1, .external_lex_state = 2},
  [164] = {.lex_state = 1, .external_lex_state = 2},
  [165] = {.lex_state = 1, .external_lex_state = 2},
  [166] = {.lex_state = 1, .external_lex_state = 2},
  [167] = {.lex_state = 1, .external_lex_state = 2},
  [168] = {.lex_state = 1, .external_lex_state = 2},
  [169] = {.lex_state = 1, .external_lex_state = 2},
  [170] = {.lex_state = 1, .external_lex_state = 2},
  [171] = {.lex_state = 1, .external_lex_state = 2},
  [172] = {.lex_state = 1, .external_lex_state = 2},
  [173] = {.lex_state = 1, .external_lex_state = 2},
  [174] = {.lex_state = 1, .external_lex_state = 2},
  [175] = {.lex_state = 1, .external_lex_state = 2},
  [176] = {.lex_state = 1, .external_lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 47},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 47},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 47},
  [191] = {.lex_state = 47},
  [192] = {.lex_state = 47},
  [193] = {.lex_state = 47},
  [194] = {.lex_state = 47},
  [195] = {.lex_state = 47},
  [196] = {.lex_state = 47},
  [197] = {.lex_state = 47},
  [198] = {.lex_state = 47},
  [199] = {.lex_state = 47},
  [200] = {.lex_state = 47},
  [201] = {.lex_state = 47},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 47},
  [204] = {.lex_state = 47},
  [205] = {.lex_state = 47},
  [206] = {.lex_state = 47},
  [207] = {.lex_state = 47},
  [208] = {.lex_state = 47},
  [209] = {.lex_state = 47},
  [210] = {.lex_state = 47},
  [211] = {.lex_state = 47},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 47, .external_lex_state = 4},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 47, .external_lex_state = 4},
  [224] = {.lex_state = 47, .external_lex_state = 5},
  [225] = {.lex_state = 47, .external_lex_state = 5},
  [226] = {.lex_state = 47, .external_lex_state = 5},
  [227] = {.lex_state = 47, .external_lex_state = 5},
  [228] = {.lex_state = 47, .external_lex_state = 5},
  [229] = {.lex_state = 47, .external_lex_state = 5},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 47, .external_lex_state = 4},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 47, .external_lex_state = 4},
  [236] = {.lex_state = 47, .external_lex_state = 4},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 47, .external_lex_state = 4},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 47, .external_lex_state = 5},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 47, .external_lex_state = 5},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 47, .external_lex_state = 4},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 47, .external_lex_state = 4},
  [257] = {.lex_state = 47, .external_lex_state = 4},
  [258] = {.lex_state = 47},
  [259] = {.lex_state = 47, .external_lex_state = 4},
  [260] = {.lex_state = 47, .external_lex_state = 4},
  [261] = {.lex_state = 47, .external_lex_state = 5},
  [262] = {.lex_state = 47, .external_lex_state = 5},
  [263] = {.lex_state = 47, .external_lex_state = 4},
  [264] = {.lex_state = 47, .external_lex_state = 5},
  [265] = {.lex_state = 47, .external_lex_state = 5},
  [266] = {.lex_state = 47, .external_lex_state = 5},
  [267] = {.lex_state = 47, .external_lex_state = 4},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 47},
  [273] = {.lex_state = 47},
  [274] = {.lex_state = 47},
  [275] = {.lex_state = 47},
  [276] = {.lex_state = 47},
  [277] = {.lex_state = 47},
  [278] = {.lex_state = 47},
  [279] = {.lex_state = 47},
  [280] = {.lex_state = 47},
  [281] = {.lex_state = 47},
  [282] = {.lex_state = 47},
  [283] = {.lex_state = 47},
  [284] = {.lex_state = 47},
  [285] = {.lex_state = 47},
  [286] = {.lex_state = 47},
  [287] = {.lex_state = 47},
  [288] = {.lex_state = 47},
  [289] = {.lex_state = 47},
  [290] = {.lex_state = 47},
  [291] = {.lex_state = 47},
  [292] = {.lex_state = 47},
  [293] = {.lex_state = 47},
  [294] = {.lex_state = 47},
  [295] = {.lex_state = 47},
  [296] = {.lex_state = 47},
  [297] = {.lex_state = 47},
  [298] = {.lex_state = 47},
  [299] = {.lex_state = 47},
  [300] = {.lex_state = 47},
  [301] = {.lex_state = 47, .external_lex_state = 5},
  [302] = {.lex_state = 47, .external_lex_state = 4},
  [303] = {.lex_state = 47, .external_lex_state = 4},
  [304] = {.lex_state = 47, .external_lex_state = 4},
  [305] = {.lex_state = 47, .external_lex_state = 5},
  [306] = {.lex_state = 47, .external_lex_state = 5},
  [307] = {.lex_state = 47, .external_lex_state = 4},
  [308] = {.lex_state = 47, .external_lex_state = 4},
  [309] = {.lex_state = 47, .external_lex_state = 4},
  [310] = {.lex_state = 47, .external_lex_state = 4},
  [311] = {.lex_state = 47, .external_lex_state = 4},
  [312] = {.lex_state = 47, .external_lex_state = 4},
  [313] = {.lex_state = 47, .external_lex_state = 4},
  [314] = {.lex_state = 47, .external_lex_state = 4},
  [315] = {.lex_state = 47, .external_lex_state = 4},
  [316] = {.lex_state = 47, .external_lex_state = 4},
  [317] = {.lex_state = 47, .external_lex_state = 5},
  [318] = {.lex_state = 47, .external_lex_state = 5},
  [319] = {.lex_state = 47, .external_lex_state = 4},
  [320] = {.lex_state = 47, .external_lex_state = 4},
  [321] = {.lex_state = 47, .external_lex_state = 5},
  [322] = {.lex_state = 47, .external_lex_state = 4},
  [323] = {.lex_state = 47, .external_lex_state = 4},
  [324] = {.lex_state = 47, .external_lex_state = 5},
  [325] = {.lex_state = 47, .external_lex_state = 4},
  [326] = {.lex_state = 47, .external_lex_state = 4},
  [327] = {.lex_state = 47, .external_lex_state = 4},
  [328] = {.lex_state = 47, .external_lex_state = 5},
  [329] = {.lex_state = 47, .external_lex_state = 4},
  [330] = {.lex_state = 47, .external_lex_state = 5},
  [331] = {.lex_state = 47, .external_lex_state = 4},
  [332] = {.lex_state = 47, .external_lex_state = 5},
  [333] = {.lex_state = 47, .external_lex_state = 4},
  [334] = {.lex_state = 47, .external_lex_state = 5},
  [335] = {.lex_state = 47, .external_lex_state = 5},
  [336] = {.lex_state = 47, .external_lex_state = 5},
  [337] = {.lex_state = 47, .external_lex_state = 5},
  [338] = {.lex_state = 47, .external_lex_state = 5},
  [339] = {.lex_state = 47, .external_lex_state = 4},
  [340] = {.lex_state = 47, .external_lex_state = 5},
  [341] = {.lex_state = 47, .external_lex_state = 5},
  [342] = {.lex_state = 47, .external_lex_state = 5},
  [343] = {.lex_state = 47, .external_lex_state = 5},
  [344] = {.lex_state = 47, .external_lex_state = 5},
  [345] = {.lex_state = 47, .external_lex_state = 4},
  [346] = {.lex_state = 47, .external_lex_state = 5},
  [347] = {.lex_state = 47, .external_lex_state = 5},
  [348] = {.lex_state = 47, .external_lex_state = 4},
  [349] = {.lex_state = 47, .external_lex_state = 4},
  [350] = {.lex_state = 47, .external_lex_state = 5},
  [351] = {.lex_state = 47, .external_lex_state = 4},
  [352] = {.lex_state = 47, .external_lex_state = 4},
  [353] = {.lex_state = 47, .external_lex_state = 5},
  [354] = {.lex_state = 47, .external_lex_state = 5},
  [355] = {.lex_state = 47, .external_lex_state = 5},
  [356] = {.lex_state = 47, .external_lex_state = 4},
  [357] = {.lex_state = 47, .external_lex_state = 5},
  [358] = {.lex_state = 47, .external_lex_state = 4},
  [359] = {.lex_state = 47, .external_lex_state = 4},
  [360] = {.lex_state = 47, .external_lex_state = 5},
  [361] = {.lex_state = 47, .external_lex_state = 4},
  [362] = {.lex_state = 47, .external_lex_state = 5},
  [363] = {.lex_state = 47, .external_lex_state = 5},
  [364] = {.lex_state = 47, .external_lex_state = 5},
  [365] = {.lex_state = 47, .external_lex_state = 5},
  [366] = {.lex_state = 47, .external_lex_state = 5},
  [367] = {.lex_state = 47, .external_lex_state = 4},
  [368] = {.lex_state = 47, .external_lex_state = 5},
  [369] = {.lex_state = 1, .external_lex_state = 2},
  [370] = {.lex_state = 1, .external_lex_state = 2},
  [371] = {.lex_state = 1, .external_lex_state = 2},
  [372] = {.lex_state = 4, .external_lex_state = 2},
  [373] = {.lex_state = 4, .external_lex_state = 2},
  [374] = {.lex_state = 1, .external_lex_state = 2},
  [375] = {.lex_state = 1, .external_lex_state = 2},
  [376] = {.lex_state = 0, .external_lex_state = 6},
  [377] = {.lex_state = 0, .external_lex_state = 7},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 7},
  [380] = {.lex_state = 0, .external_lex_state = 7},
  [381] = {.lex_state = 0, .external_lex_state = 7},
  [382] = {.lex_state = 0, .external_lex_state = 7},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 1, .external_lex_state = 2},
  [386] = {.lex_state = 0, .external_lex_state = 6},
  [387] = {.lex_state = 0, .external_lex_state = 6},
  [388] = {.lex_state = 1, .external_lex_state = 2},
  [389] = {.lex_state = 0, .external_lex_state = 8},
  [390] = {.lex_state = 0, .external_lex_state = 8},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 0, .external_lex_state = 8},
  [394] = {.lex_state = 0, .external_lex_state = 8},
  [395] = {.lex_state = 0, .external_lex_state = 7},
  [396] = {.lex_state = 0, .external_lex_state = 7},
  [397] = {.lex_state = 0, .external_lex_state = 8},
  [398] = {.lex_state = 0, .external_lex_state = 8},
  [399] = {.lex_state = 47},
  [400] = {.lex_state = 5, .external_lex_state = 2},
  [401] = {.lex_state = 47},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 47},
  [405] = {.lex_state = 47, .external_lex_state = 2},
  [406] = {.lex_state = 47},
  [407] = {.lex_state = 47, .external_lex_state = 2},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 47},
  [416] = {.lex_state = 47},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 47},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0, .external_lex_state = 6},
  [422] = {.lex_state = 47},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0, .external_lex_state = 6},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 47},
  [427] = {.lex_state = 47},
  [428] = {.lex_state = 47},
  [429] = {.lex_state = 47, .external_lex_state = 2},
  [430] = {.lex_state = 0, .external_lex_state = 7},
  [431] = {.lex_state = 47},
  [432] = {.lex_state = 47, .external_lex_state = 2},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0, .external_lex_state = 7},
  [438] = {.lex_state = 47, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 7},
  [440] = {.lex_state = 0, .external_lex_state = 8},
  [441] = {.lex_state = 47},
  [442] = {.lex_state = 0, .external_lex_state = 6},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0, .external_lex_state = 6},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0, .external_lex_state = 6},
  [451] = {.lex_state = 0, .external_lex_state = 6},
  [452] = {.lex_state = 0, .external_lex_state = 9},
  [453] = {.lex_state = 0, .external_lex_state = 6},
  [454] = {.lex_state = 0, .external_lex_state = 6},
  [455] = {.lex_state = 0, .external_lex_state = 9},
  [456] = {.lex_state = 0, .external_lex_state = 8},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0, .external_lex_state = 6},
  [460] = {.lex_state = 0, .external_lex_state = 6},
  [461] = {.lex_state = 0, .external_lex_state = 6},
  [462] = {.lex_state = 0, .external_lex_state = 7},
  [463] = {.lex_state = 0, .external_lex_state = 6},
  [464] = {.lex_state = 0, .external_lex_state = 6},
  [465] = {.lex_state = 0, .external_lex_state = 6},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0, .external_lex_state = 7},
  [468] = {.lex_state = 0, .external_lex_state = 6},
  [469] = {.lex_state = 0, .external_lex_state = 6},
  [470] = {.lex_state = 0, .external_lex_state = 7},
  [471] = {.lex_state = 0, .external_lex_state = 6},
  [472] = {.lex_state = 0, .external_lex_state = 6},
  [473] = {.lex_state = 0, .external_lex_state = 9},
  [474] = {.lex_state = 0, .external_lex_state = 7},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0, .external_lex_state = 7},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0, .external_lex_state = 6},
  [479] = {.lex_state = 0, .external_lex_state = 7},
  [480] = {.lex_state = 0, .external_lex_state = 7},
  [481] = {.lex_state = 0, .external_lex_state = 7},
  [482] = {.lex_state = 0, .external_lex_state = 7},
  [483] = {.lex_state = 0, .external_lex_state = 7},
  [484] = {.lex_state = 0, .external_lex_state = 6},
  [485] = {.lex_state = 0, .external_lex_state = 7},
  [486] = {.lex_state = 0, .external_lex_state = 7},
  [487] = {.lex_state = 0, .external_lex_state = 6},
  [488] = {.lex_state = 0, .external_lex_state = 7},
  [489] = {.lex_state = 0, .external_lex_state = 7},
  [490] = {.lex_state = 0, .external_lex_state = 8},
  [491] = {.lex_state = 0, .external_lex_state = 4},
  [492] = {.lex_state = 0, .external_lex_state = 8},
  [493] = {.lex_state = 0, .external_lex_state = 8},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0, .external_lex_state = 8},
  [496] = {.lex_state = 0, .external_lex_state = 10},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0, .external_lex_state = 8},
  [499] = {.lex_state = 0, .external_lex_state = 8},
  [500] = {.lex_state = 0, .external_lex_state = 8},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0, .external_lex_state = 8},
  [504] = {.lex_state = 3},
  [505] = {.lex_state = 0, .external_lex_state = 4},
  [506] = {.lex_state = 0, .external_lex_state = 8},
  [507] = {.lex_state = 0, .external_lex_state = 8},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0, .external_lex_state = 8},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0, .external_lex_state = 11},
  [513] = {.lex_state = 0, .external_lex_state = 8},
  [514] = {.lex_state = 0, .external_lex_state = 8},
  [515] = {.lex_state = 0, .external_lex_state = 4},
  [516] = {.lex_state = 0, .external_lex_state = 8},
  [517] = {.lex_state = 0, .external_lex_state = 8},
  [518] = {.lex_state = 0, .external_lex_state = 8},
  [519] = {.lex_state = 0, .external_lex_state = 4},
  [520] = {.lex_state = 0, .external_lex_state = 8},
  [521] = {.lex_state = 0, .external_lex_state = 5},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0, .external_lex_state = 8},
  [524] = {.lex_state = 0, .external_lex_state = 5},
  [525] = {.lex_state = 0, .external_lex_state = 5},
  [526] = {.lex_state = 0, .external_lex_state = 4},
  [527] = {.lex_state = 0, .external_lex_state = 5},
  [528] = {.lex_state = 0, .external_lex_state = 5},
  [529] = {.lex_state = 0, .external_lex_state = 4},
  [530] = {.lex_state = 0, .external_lex_state = 8},
  [531] = {.lex_state = 0, .external_lex_state = 8},
  [532] = {.lex_state = 0, .external_lex_state = 5},
  [533] = {.lex_state = 0, .external_lex_state = 8},
  [534] = {.lex_state = 0, .external_lex_state = 4},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0, .external_lex_state = 11},
  [537] = {.lex_state = 0, .external_lex_state = 8},
  [538] = {.lex_state = 0, .external_lex_state = 4},
  [539] = {.lex_state = 0, .external_lex_state = 8},
  [540] = {.lex_state = 0, .external_lex_state = 8},
  [541] = {.lex_state = 0, .external_lex_state = 8},
  [542] = {.lex_state = 0, .external_lex_state = 8},
  [543] = {.lex_state = 0, .external_lex_state = 5},
  [544] = {.lex_state = 0, .external_lex_state = 5},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0, .external_lex_state = 4},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 47},
  [555] = {.lex_state = 47},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 47},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0, .external_lex_state = 9},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0, .external_lex_state = 9},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 47},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0, .external_lex_state = 4},
  [573] = {.lex_state = 47},
  [574] = {.lex_state = 0, .external_lex_state = 9},
  [575] = {.lex_state = 0, .external_lex_state = 9},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0, .external_lex_state = 4},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0, .external_lex_state = 4},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0, .external_lex_state = 4},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 47},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0, .external_lex_state = 4},
  [591] = {.lex_state = 47},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0, .external_lex_state = 4},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0, .external_lex_state = 4},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 47},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0, .external_lex_state = 4},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 47},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 47},
  [619] = {.lex_state = 0, .external_lex_state = 9},
  [620] = {.lex_state = 0, .external_lex_state = 9},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0, .external_lex_state = 4},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0, .external_lex_state = 4},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0, .external_lex_state = 4},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0, .external_lex_state = 4},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0, .external_lex_state = 4},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 47},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0, .external_lex_state = 4},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0, .external_lex_state = 12},
  [646] = {.lex_state = 0, .external_lex_state = 4},
  [647] = {.lex_state = 0, .external_lex_state = 5},
  [648] = {.lex_state = 0, .external_lex_state = 13},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0, .external_lex_state = 4},
  [652] = {.lex_state = 0, .external_lex_state = 4},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0, .external_lex_state = 4},
  [656] = {.lex_state = 0, .external_lex_state = 4},
  [657] = {.lex_state = 0, .external_lex_state = 12},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0, .external_lex_state = 5},
  [660] = {.lex_state = 0, .external_lex_state = 13},
  [661] = {.lex_state = 0, .external_lex_state = 5},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 47},
  [664] = {.lex_state = 0, .external_lex_state = 12},
  [665] = {.lex_state = 0, .external_lex_state = 13},
  [666] = {.lex_state = 0, .external_lex_state = 4},
  [667] = {.lex_state = 0, .external_lex_state = 4},
  [668] = {.lex_state = 47},
  [669] = {.lex_state = 0, .external_lex_state = 5},
  [670] = {.lex_state = 0, .external_lex_state = 13},
  [671] = {.lex_state = 0, .external_lex_state = 4},
  [672] = {.lex_state = 47},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 0, .external_lex_state = 12},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0, .external_lex_state = 4},
  [680] = {.lex_state = 0, .external_lex_state = 13},
  [681] = {.lex_state = 0, .external_lex_state = 12},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0, .external_lex_state = 4},
  [684] = {.lex_state = 0, .external_lex_state = 4},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0, .external_lex_state = 4},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0, .external_lex_state = 4},
  [689] = {.lex_state = 0, .external_lex_state = 4},
  [690] = {.lex_state = 0, .external_lex_state = 12},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 47},
  [693] = {.lex_state = 0, .external_lex_state = 12},
  [694] = {.lex_state = 0, .external_lex_state = 5},
  [695] = {.lex_state = 0, .external_lex_state = 5},
  [696] = {.lex_state = 0, .external_lex_state = 12},
  [697] = {.lex_state = 47},
  [698] = {.lex_state = 0, .external_lex_state = 4},
  [699] = {.lex_state = 0, .external_lex_state = 4},
  [700] = {.lex_state = 0, .external_lex_state = 4},
  [701] = {.lex_state = 0, .external_lex_state = 12},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 47},
  [704] = {.lex_state = 0, .external_lex_state = 12},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0, .external_lex_state = 13},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0, .external_lex_state = 12},
  [710] = {.lex_state = 0, .external_lex_state = 4},
  [711] = {.lex_state = 0, .external_lex_state = 9},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0, .external_lex_state = 9},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
};

enum {
  ts_external_token_quoted_template_start = 0,
  ts_external_token_quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token_template_interpolation_start = 3,
  ts_external_token_template_interpolation_end = 4,
  ts_external_token_template_directive_start = 5,
  ts_external_token_template_directive_end = 6,
  ts_external_token_heredoc_identifier = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_quoted_template_start] = sym_quoted_template_start,
  [ts_external_token_quoted_template_end] = sym_quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token_template_interpolation_start] = sym_template_interpolation_start,
  [ts_external_token_template_interpolation_end] = sym_template_interpolation_end,
  [ts_external_token_template_directive_start] = sym_template_directive_start,
  [ts_external_token_template_directive_end] = sym_template_directive_end,
  [ts_external_token_heredoc_identifier] = sym_heredoc_identifier,
};

static const bool ts_external_scanner_states[14][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_interpolation_end] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_template_directive_end] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [2] = {
    [ts_external_token_quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token_template_directive_end] = true,
  },
  [5] = {
    [ts_external_token_template_interpolation_end] = true,
  },
  [6] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [7] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [8] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [9] = {
    [ts_external_token_template_directive_start] = true,
  },
  [10] = {
    [ts_external_token__template_literal_chunk] = true,
  },
  [11] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [12] = {
    [ts_external_token_heredoc_identifier] = true,
  },
  [13] = {
    [ts_external_token_quoted_template_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_shisho_metavariable_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_legacy_index_token1] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [sym_strip_marker] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_quoted_template_start] = ACTIONS(1),
    [sym_quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym_template_interpolation_start] = ACTIONS(1),
    [sym_template_interpolation_end] = ACTIONS(1),
    [sym_template_directive_start] = ACTIONS(1),
    [sym_template_directive_end] = ACTIONS(1),
    [sym_heredoc_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(719),
    [sym_shisho_metavariable] = STATE(404),
    [sym_shisho_ellipsis_metavariable] = STATE(404),
    [sym_body] = STATE(718),
    [sym_attribute] = STATE(404),
    [sym_block] = STATE(404),
    [sym_object] = STATE(718),
    [sym_object_start] = STATE(16),
    [aux_sym_body_repeat1] = STATE(404),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON_LBRACK] = ACTIONS(7),
    [sym_shisho_ellipsis] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(15), 1,
      sym_tuple_start,
    STATE(90), 1,
      sym_for_intro,
    STATE(203), 1,
      sym_object_end,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(582), 1,
      sym__object_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [111] = 31,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(15), 1,
      sym_tuple_start,
    STATE(88), 1,
      sym_for_intro,
    STATE(203), 1,
      sym_object_end,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(582), 1,
      sym__object_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [222] = 31,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(15), 1,
      sym_tuple_start,
    STATE(84), 1,
      sym_for_intro,
    STATE(268), 1,
      sym_object_end,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(612), 1,
      sym__object_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [333] = 31,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(15), 1,
      sym_tuple_start,
    STATE(92), 1,
      sym_for_intro,
    STATE(342), 1,
      sym_object_end,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(610), 1,
      sym__object_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [444] = 31,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(15), 1,
      sym_tuple_start,
    STATE(48), 1,
      sym_for_intro,
    STATE(312), 1,
      sym_object_end,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(597), 1,
      sym__object_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [555] = 31,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(15), 1,
      sym_tuple_start,
    STATE(93), 1,
      sym_for_intro,
    STATE(148), 1,
      sym_object_end,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(596), 1,
      sym__object_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [666] = 29,
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(70), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(76), 1,
      sym_null_lit,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LT_LT,
    ACTIONS(91), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(94), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(33), 1,
      sym__comma,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [772] = 30,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(47), 1,
      sym_for_intro,
    STATE(169), 1,
      sym_tuple_end,
    STATE(402), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(616), 1,
      sym__tuple_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [880] = 29,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(23), 1,
      sym__comma,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(14), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [986] = 30,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(89), 1,
      sym_for_intro,
    STATE(281), 1,
      sym_tuple_end,
    STATE(402), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(606), 1,
      sym__tuple_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1094] = 30,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(46), 1,
      sym_for_intro,
    STATE(325), 1,
      sym_tuple_end,
    STATE(402), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(633), 1,
      sym__tuple_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1202] = 30,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(55), 1,
      sym_for_intro,
    STATE(366), 1,
      sym_tuple_end,
    STATE(402), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(561), 1,
      sym__tuple_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1310] = 29,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(26), 1,
      sym__comma,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1416] = 30,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(83), 1,
      sym_for_intro,
    STATE(217), 1,
      sym_tuple_end,
    STATE(402), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(578), 1,
      sym__tuple_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1524] = 29,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(15), 1,
      sym_tuple_start,
    STATE(203), 1,
      sym_object_end,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(582), 1,
      sym__object_elems,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1629] = 28,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(172), 1,
      sym__function_call_end,
    STATE(402), 1,
      sym_conditional,
    STATE(408), 1,
      sym_expression,
    STATE(615), 1,
      sym_function_arguments,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1731] = 28,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(357), 1,
      sym__function_call_end,
    STATE(402), 1,
      sym_conditional,
    STATE(408), 1,
      sym_expression,
    STATE(559), 1,
      sym_function_arguments,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1833] = 28,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(291), 1,
      sym__function_call_end,
    STATE(402), 1,
      sym_conditional,
    STATE(408), 1,
      sym_expression,
    STATE(601), 1,
      sym_function_arguments,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1935] = 28,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(238), 1,
      sym__function_call_end,
    STATE(402), 1,
      sym_conditional,
    STATE(408), 1,
      sym_expression,
    STATE(553), 1,
      sym_function_arguments,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2037] = 28,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(329), 1,
      sym__function_call_end,
    STATE(402), 1,
      sym_conditional,
    STATE(408), 1,
      sym_expression,
    STATE(547), 1,
      sym_function_arguments,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2139] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(145), 1,
      sym_strip_marker,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    ACTIONS(149), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(532), 1,
      sym_expression,
    STATE(544), 1,
      sym_conditional,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(246), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2238] = 27,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(374), 1,
      sym_object_elem,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2337] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    ACTIONS(151), 1,
      sym_strip_marker,
    ACTIONS(153), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(527), 1,
      sym_expression,
    STATE(544), 1,
      sym_conditional,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(246), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2436] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    ACTIONS(155), 1,
      sym_strip_marker,
    ACTIONS(157), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(524), 1,
      sym_expression,
    STATE(544), 1,
      sym_conditional,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(246), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2535] = 27,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(374), 1,
      sym_object_elem,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2634] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    ACTIONS(161), 1,
      sym_strip_marker,
    ACTIONS(163), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(521), 1,
      sym_expression,
    STATE(544), 1,
      sym_conditional,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(246), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2733] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    ACTIONS(165), 1,
      sym_strip_marker,
    ACTIONS(167), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(543), 1,
      sym_expression,
    STATE(544), 1,
      sym_conditional,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(246), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2832] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    ACTIONS(169), 1,
      sym_strip_marker,
    ACTIONS(171), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(525), 1,
      sym_expression,
    STATE(544), 1,
      sym_conditional,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(246), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2931] = 26,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(435), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3027] = 26,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(435), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3123] = 26,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(435), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3219] = 26,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(374), 1,
      sym_object_elem,
    STATE(402), 1,
      sym_conditional,
    STATE(504), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3315] = 26,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(435), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3411] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(609), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3504] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3597] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(613), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3690] = 13,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(195), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(181), 12,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3759] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3852] = 12,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(195), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(181), 13,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3919] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(409), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4012] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(576), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4105] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(494), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4198] = 11,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(181), 15,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [4263] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(567), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4356] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(423), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4449] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(433), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4542] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(554), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4635] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(414), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4728] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(369), 1,
      sym_conditional,
    STATE(371), 1,
      sym_expression,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(80), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4821] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(515), 1,
      sym_conditional,
    STATE(534), 1,
      sym_expression,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4914] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_expression,
    STATE(418), 1,
      sym_conditional,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(196), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5007] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(413), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5100] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(588), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5193] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(434), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5286] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(639), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5379] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(594), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5472] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(634), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5565] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(410), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5658] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(411), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5751] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5844] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(369), 1,
      sym_conditional,
    STATE(370), 1,
      sym_expression,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(80), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5937] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(577), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6030] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(641), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6123] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(592), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6216] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(551), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6309] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(622), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6402] = 9,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(181), 17,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [6463] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(528), 1,
      sym_expression,
    STATE(544), 1,
      sym_conditional,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(246), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6556] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(181), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [6611] = 8,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(187), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(181), 19,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [6670] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(515), 1,
      sym_conditional,
    STATE(526), 1,
      sym_expression,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6763] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(505), 1,
      sym_expression,
    STATE(515), 1,
      sym_conditional,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6856] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(621), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6949] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(491), 1,
      sym_expression,
    STATE(515), 1,
      sym_conditional,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7042] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(515), 1,
      sym_conditional,
    STATE(529), 1,
      sym_expression,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7135] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(415), 1,
      sym_expression,
    STATE(418), 1,
      sym_conditional,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(196), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7228] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(556), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7321] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(605), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7414] = 18,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DOT_STAR,
    ACTIONS(261), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(263), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(185), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(195), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(253), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(251), 9,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [7493] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(515), 1,
      sym_conditional,
    STATE(538), 1,
      sym_expression,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7586] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(164), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(267), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(265), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7641] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(425), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7734] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(618), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7827] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(604), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7920] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(552), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8013] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(435), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8106] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(591), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8199] = 25,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(436), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8292] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(573), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8385] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(515), 1,
      sym_conditional,
    STATE(519), 1,
      sym_expression,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8478] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(560), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8571] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(402), 1,
      sym_conditional,
    STATE(555), 1,
      sym_expression,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(192), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8664] = 23,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(185), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8751] = 23,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8838] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(271), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(269), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8893] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(141), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8980] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(186), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9067] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(114), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(275), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(273), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [9122] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(193), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9209] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(71), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9296] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(184), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9383] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(191), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9470] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(194), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9557] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(142), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9644] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(82), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9731] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(70), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9818] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9905] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(68), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9992] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(44), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10079] = 23,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(189), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10166] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(40), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10253] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(199), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(207), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(211), 1,
      sym_null_lit,
    ACTIONS(215), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(704), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(155), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(175), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(38), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10340] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(123), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(279), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(277), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [10395] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(123), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(283), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(281), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [10450] = 23,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(188), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10537] = 23,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(187), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10624] = 23,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(141), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10711] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    STATE(2), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(190), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10798] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10885] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(225), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10972] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(197), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11059] = 7,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(163), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(123), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(287), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(285), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11114] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11201] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11288] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(228), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11375] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(229), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11462] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(195), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11549] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(129), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(141), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(693), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(341), 2,
      sym_tuple,
      sym_object,
    STATE(344), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(346), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(347), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(338), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(244), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11636] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(198), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11723] = 23,
    ACTIONS(15), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(27), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(31), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(43), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(15), 1,
      sym_tuple_start,
    STATE(690), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(241), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(239), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(142), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11810] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(256), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11897] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(235), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [11984] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(236), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [12071] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(199), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [12158] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [12245] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(97), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(241), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(245), 1,
      sym_null_lit,
    ACTIONS(249), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(681), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(243), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(276), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(284), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(285), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(296), 2,
      sym_tuple,
      sym_object,
    STATE(297), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(201), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [12332] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(240), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [12419] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(254), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [12506] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(217), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(225), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(229), 1,
      sym_null_lit,
    ACTIONS(233), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(709), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(227), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(311), 2,
      sym_tuple,
      sym_object,
    STATE(313), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(314), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(315), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(310), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(214), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [12593] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12642] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(267), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12691] = 5,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(295), 20,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12738] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(303), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(301), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12780] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(307), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(305), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12822] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(309), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12864] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(313), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12906] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(317), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12948] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(321), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(325), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13032] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(329), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(333), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13116] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(337), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(343), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(341), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13200] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(345), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(351), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(349), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13284] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(355), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(353), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13326] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(359), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(357), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13368] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(363), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(361), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13410] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(367), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(365), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13452] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(371), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(369), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13494] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(373), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13536] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(377), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13578] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(383), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(381), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13620] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(387), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(385), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13662] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(389), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13704] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(395), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(393), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13746] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(399), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(397), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13788] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(403), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(401), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13830] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(407), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(405), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13872] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(409), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13914] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(415), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(413), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13956] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(419), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(417), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13998] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(423), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(421), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [14040] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(425), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [14082] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(429), 21,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [14124] = 7,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(179), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(279), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14173] = 7,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(179), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(283), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14222] = 7,
    ACTIONS(437), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(179), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(287), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14271] = 7,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(177), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(275), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14320] = 7,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(271), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14369] = 18,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      anon_sym_DOT_STAR,
    ACTIONS(445), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      anon_sym_AMP_AMP,
    ACTIONS(461), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(447), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(455), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(457), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(251), 6,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_if,
      anon_sym_QMARK,
  [14439] = 8,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(449), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 16,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14489] = 12,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(469), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(473), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 11,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14547] = 9,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(447), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 14,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14599] = 8,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 17,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14649] = 11,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(447), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(455), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(183), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 12,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14705] = 12,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(447), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(455), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(457), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(183), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 10,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14763] = 13,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(459), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(447), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(449), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(455), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(457), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(183), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 9,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [14823] = 9,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 15,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14875] = 11,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(469), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 13,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14931] = 17,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      anon_sym_DOT_STAR,
    ACTIONS(445), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_AMP_AMP,
    ACTIONS(477), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(469), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(473), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(251), 7,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
  [14999] = 13,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(469), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(473), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(219), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(222), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 10,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [15059] = 13,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(491), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(485), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(489), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(183), 3,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [15118] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(267), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15163] = 18,
    ACTIONS(253), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(491), 1,
      anon_sym_AMP_AMP,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(497), 1,
      anon_sym_DOT_STAR,
    ACTIONS(499), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(501), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(485), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(489), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
  [15232] = 12,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(485), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(489), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(183), 3,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15289] = 8,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(481), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 5,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 15,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15338] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15383] = 9,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 5,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 13,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15434] = 11,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(485), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(183), 3,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(277), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 11,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15489] = 5,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(295), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15531] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15605] = 7,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(210), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(275), 4,
      anon_sym_COLON_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15650] = 7,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(211), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(271), 4,
      anon_sym_COLON_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15695] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(407), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      sym_shisho_ellipsis,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15769] = 7,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(209), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(287), 4,
      anon_sym_COLON_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15814] = 7,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(209), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(279), 4,
      anon_sym_COLON_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15859] = 7,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(278), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(209), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(283), 4,
      anon_sym_COLON_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15904] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15940] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15976] = 8,
    ACTIONS(513), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(511), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 13,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16022] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(409), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16058] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16094] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(403), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(401), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16130] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(399), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16166] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(383), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(381), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16202] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16238] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(419), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16274] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16310] = 17,
    ACTIONS(513), 1,
      anon_sym_SLASH,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(519), 1,
      anon_sym_DOT_STAR,
    ACTIONS(521), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(511), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(523), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(527), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(529), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(251), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [16374] = 13,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(547), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(535), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(537), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(541), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(543), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(545), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16430] = 12,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(535), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(537), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(541), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(543), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(545), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16484] = 11,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(535), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(537), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(541), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(543), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16536] = 9,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(535), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(537), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 11,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16584] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16626] = 8,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(537), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 13,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16672] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16708] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(423), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16744] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(303), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16780] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(267), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16822] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(387), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16858] = 12,
    ACTIONS(513), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(511), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(523), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(527), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(529), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 7,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16912] = 11,
    ACTIONS(513), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(511), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(523), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(527), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 9,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16964] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(371), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17000] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(415), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17036] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(425), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17072] = 9,
    ACTIONS(513), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(511), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(523), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 11,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17120] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(359), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(357), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17156] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(429), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(395), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17228] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(267), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17270] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17306] = 17,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(547), 1,
      anon_sym_AMP_AMP,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(553), 1,
      anon_sym_DOT_STAR,
    ACTIONS(555), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(557), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(535), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(537), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(541), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(543), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(545), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(364), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(251), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(362), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [17370] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17406] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(343), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17442] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(367), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17478] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(363), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(361), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17514] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(351), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17550] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(355), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(353), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17586] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(307), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17622] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(183), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17664] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 21,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17700] = 13,
    ACTIONS(513), 1,
      anon_sym_SLASH,
    ACTIONS(531), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(511), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(523), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(527), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(529), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(322), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(319), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(181), 6,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17756] = 7,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(279), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(267), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(277), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17798] = 5,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(295), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17836] = 7,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(271), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(263), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(269), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17878] = 7,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(275), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(257), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(273), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17920] = 7,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(275), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(264), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(273), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17962] = 7,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(271), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(265), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(269), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18004] = 7,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(283), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(267), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(281), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18046] = 7,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(279), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(266), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(277), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18088] = 7,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(283), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(266), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(281), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18130] = 7,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(363), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(287), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(266), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(285), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18172] = 7,
    ACTIONS(567), 1,
      anon_sym_LBRACK,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(320), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(287), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(267), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(285), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 18,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18247] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(407), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 18,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18280] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 18,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18313] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 18,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18346] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(307), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(343), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18410] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(303), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18442] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18474] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(359), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(357), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18506] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18538] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18570] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(383), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(381), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18602] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(399), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18634] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(403), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(401), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18666] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18698] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(409), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18730] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(355), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(353), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18762] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18794] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(351), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18826] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(371), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18858] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18890] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(363), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(361), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18922] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(367), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18954] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(415), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [18986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(387), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19018] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19050] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(419), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19082] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(423), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19114] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19146] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(425), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19178] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(429), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19210] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(395), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 17,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [19274] = 5,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(295), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19309] = 5,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(295), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19344] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19373] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(303), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19402] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19431] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19460] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19489] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(395), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19518] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(429), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19547] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(425), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19605] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19634] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19663] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(355), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(353), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19692] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(359), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(357), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19721] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(371), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19750] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19779] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(303), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19808] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19837] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19866] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19895] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(383), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(381), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19924] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(399), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19982] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(403), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(401), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20011] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(407), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20040] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(409), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20069] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(415), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20127] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(343), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20156] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(307), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20185] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(351), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20214] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(419), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20243] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20272] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(363), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(361), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20301] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(395), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20330] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(429), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20359] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(425), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20388] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(423), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20417] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(367), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20446] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20475] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20504] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(387), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20533] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20562] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(387), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20591] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(355), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(353), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20620] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(359), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(357), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20649] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(367), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20678] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(363), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(361), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20707] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(371), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20736] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(351), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20765] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(343), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20794] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(423), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(419), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20852] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(307), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20881] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20910] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(415), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20968] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [20997] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(409), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21055] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(383), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(381), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(399), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21171] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(403), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(401), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21200] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21229] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(407), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [21258] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(253), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(251), 12,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21285] = 4,
    ACTIONS(581), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(579), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(577), 11,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21314] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(585), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(583), 12,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21341] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(587), 10,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21367] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(593), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(591), 10,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(595), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(59), 11,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21419] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(593), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(591), 10,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21444] = 13,
    ACTIONS(597), 1,
      sym_quoted_template_end,
    ACTIONS(599), 1,
      sym__template_literal_chunk,
    ACTIONS(601), 1,
      sym_template_interpolation_start,
    ACTIONS(603), 1,
      sym_template_directive_start,
    STATE(384), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(424), 1,
      aux_sym_template_literal_repeat1,
    STATE(448), 1,
      sym_template_literal,
    STATE(455), 1,
      sym_template_if_branch,
    STATE(648), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(451), 2,
      sym_template_for,
      sym_template_if,
    STATE(391), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21488] = 12,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(605), 1,
      sym__template_literal_chunk,
    ACTIONS(607), 1,
      sym_template_interpolation_start,
    ACTIONS(609), 1,
      sym_heredoc_identifier,
    STATE(389), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(696), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(467), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21530] = 13,
    ACTIONS(599), 1,
      sym__template_literal_chunk,
    ACTIONS(601), 1,
      sym_template_interpolation_start,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(611), 1,
      sym_quoted_template_end,
    STATE(384), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(424), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_literal,
    STATE(455), 1,
      sym_template_if_branch,
    STATE(665), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(451), 2,
      sym_template_for,
      sym_template_if,
    STATE(391), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21574] = 12,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(605), 1,
      sym__template_literal_chunk,
    ACTIONS(607), 1,
      sym_template_interpolation_start,
    ACTIONS(613), 1,
      sym_heredoc_identifier,
    STATE(389), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(645), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(467), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21616] = 12,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(605), 1,
      sym__template_literal_chunk,
    ACTIONS(607), 1,
      sym_template_interpolation_start,
    ACTIONS(615), 1,
      sym_heredoc_identifier,
    STATE(389), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(664), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(467), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21658] = 12,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(605), 1,
      sym__template_literal_chunk,
    ACTIONS(607), 1,
      sym_template_interpolation_start,
    ACTIONS(617), 1,
      sym_heredoc_identifier,
    STATE(389), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(674), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(467), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21700] = 12,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(605), 1,
      sym__template_literal_chunk,
    ACTIONS(607), 1,
      sym_template_interpolation_start,
    ACTIONS(619), 1,
      sym_heredoc_identifier,
    STATE(389), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(657), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(467), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21742] = 13,
    ACTIONS(599), 1,
      sym__template_literal_chunk,
    ACTIONS(601), 1,
      sym_template_interpolation_start,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym_quoted_template_end,
    STATE(384), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(424), 1,
      aux_sym_template_literal_repeat1,
    STATE(450), 1,
      sym_template_literal,
    STATE(455), 1,
      sym_template_if_branch,
    STATE(660), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(451), 2,
      sym_template_for,
      sym_template_if,
    STATE(391), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21786] = 12,
    ACTIONS(623), 1,
      sym__template_literal_chunk,
    ACTIONS(625), 1,
      sym_template_interpolation_start,
    ACTIONS(627), 1,
      sym_template_directive_start,
    STATE(390), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(456), 1,
      aux_sym_template_literal_repeat1,
    STATE(468), 1,
      sym_template_for_end,
    STATE(473), 1,
      sym_template_if_branch,
    STATE(565), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(523), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21828] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(631), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(629), 9,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21852] = 13,
    ACTIONS(599), 1,
      sym__template_literal_chunk,
    ACTIONS(601), 1,
      sym_template_interpolation_start,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(633), 1,
      sym_quoted_template_end,
    STATE(384), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(424), 1,
      aux_sym_template_literal_repeat1,
    STATE(454), 1,
      sym_template_literal,
    STATE(455), 1,
      sym_template_if_branch,
    STATE(670), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(451), 2,
      sym_template_for,
      sym_template_if,
    STATE(391), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21896] = 13,
    ACTIONS(599), 1,
      sym__template_literal_chunk,
    ACTIONS(601), 1,
      sym_template_interpolation_start,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(635), 1,
      sym_quoted_template_end,
    STATE(384), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(424), 1,
      aux_sym_template_literal_repeat1,
    STATE(455), 1,
      sym_template_if_branch,
    STATE(464), 1,
      sym_template_literal,
    STATE(707), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(451), 2,
      sym_template_for,
      sym_template_if,
    STATE(391), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21940] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(639), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(637), 9,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21964] = 12,
    ACTIONS(623), 1,
      sym__template_literal_chunk,
    ACTIONS(625), 1,
      sym_template_interpolation_start,
    ACTIONS(641), 1,
      sym_template_directive_start,
    STATE(390), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(456), 1,
      aux_sym_template_literal_repeat1,
    STATE(473), 1,
      sym_template_if_branch,
    STATE(483), 1,
      sym_template_for_end,
    STATE(619), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(523), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22006] = 12,
    ACTIONS(623), 1,
      sym__template_literal_chunk,
    ACTIONS(625), 1,
      sym_template_interpolation_start,
    ACTIONS(643), 1,
      sym_template_directive_start,
    STATE(390), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(456), 1,
      aux_sym_template_literal_repeat1,
    STATE(473), 1,
      sym_template_if_branch,
    STATE(499), 1,
      sym_template_for_end,
    STATE(574), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(523), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22048] = 11,
    ACTIONS(599), 1,
      sym__template_literal_chunk,
    ACTIONS(601), 1,
      sym_template_interpolation_start,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(645), 1,
      sym_quoted_template_end,
    STATE(384), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(424), 1,
      aux_sym_template_literal_repeat1,
    STATE(455), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(451), 2,
      sym_template_for,
      sym_template_if,
    STATE(392), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22087] = 11,
    ACTIONS(647), 1,
      sym_quoted_template_end,
    ACTIONS(649), 1,
      sym__template_literal_chunk,
    ACTIONS(652), 1,
      sym_template_interpolation_start,
    ACTIONS(655), 1,
      sym_template_directive_start,
    STATE(384), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(424), 1,
      aux_sym_template_literal_repeat1,
    STATE(455), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(451), 2,
      sym_template_for,
      sym_template_if,
    STATE(392), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22126] = 11,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(623), 1,
      sym__template_literal_chunk,
    ACTIONS(625), 1,
      sym_template_interpolation_start,
    STATE(390), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(456), 1,
      aux_sym_template_literal_repeat1,
    STATE(473), 1,
      sym_template_if_branch,
    STATE(717), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(523), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22165] = 11,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(623), 1,
      sym__template_literal_chunk,
    ACTIONS(625), 1,
      sym_template_interpolation_start,
    STATE(390), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(456), 1,
      aux_sym_template_literal_repeat1,
    STATE(473), 1,
      sym_template_if_branch,
    STATE(711), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(523), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22204] = 11,
    ACTIONS(603), 1,
      sym_template_directive_start,
    ACTIONS(605), 1,
      sym__template_literal_chunk,
    ACTIONS(607), 1,
      sym_template_interpolation_start,
    ACTIONS(645), 1,
      sym_heredoc_identifier,
    STATE(389), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(467), 2,
      sym_template_for,
      sym_template_if,
    STATE(396), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22243] = 11,
    ACTIONS(647), 1,
      sym_heredoc_identifier,
    ACTIONS(655), 1,
      sym_template_directive_start,
    ACTIONS(658), 1,
      sym__template_literal_chunk,
    ACTIONS(661), 1,
      sym_template_interpolation_start,
    STATE(389), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(467), 2,
      sym_template_for,
      sym_template_if,
    STATE(396), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22282] = 10,
    ACTIONS(623), 1,
      sym__template_literal_chunk,
    ACTIONS(625), 1,
      sym_template_interpolation_start,
    ACTIONS(645), 1,
      sym_template_directive_start,
    STATE(390), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(456), 1,
      aux_sym_template_literal_repeat1,
    STATE(473), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(523), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22318] = 10,
    ACTIONS(655), 1,
      sym_template_directive_start,
    ACTIONS(664), 1,
      sym__template_literal_chunk,
    ACTIONS(667), 1,
      sym_template_interpolation_start,
    STATE(390), 1,
      sym_template_for_start,
    STATE(393), 1,
      sym_template_if_intro,
    STATE(456), 1,
      aux_sym_template_literal_repeat1,
    STATE(473), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(523), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22354] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(9), 1,
      sym_shisho_ellipsis,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(422), 1,
      sym_block_end,
    STATE(617), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(404), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22384] = 8,
    ACTIONS(672), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(676), 1,
      anon_sym_EQ,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      sym_quoted_template_start,
    STATE(399), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 2,
      sym_shisho_ellipsis,
      sym_identifier,
    STATE(405), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_string_lit,
      aux_sym_block_repeat1,
  [22414] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(9), 1,
      sym_shisho_ellipsis,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(431), 1,
      sym_block_end,
    STATE(571), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(404), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22444] = 3,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 9,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
  [22463] = 3,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(583), 9,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      anon_sym_QMARK,
  [22482] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(684), 1,
      sym_shisho_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(406), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22507] = 7,
    ACTIONS(672), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      sym_quoted_template_start,
    STATE(401), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(686), 2,
      sym_shisho_ellipsis,
      sym_identifier,
    STATE(407), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_string_lit,
      aux_sym_block_repeat1,
  [22534] = 6,
    ACTIONS(690), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(693), 1,
      sym_shisho_ellipsis,
    ACTIONS(696), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(688), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(406), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22559] = 6,
    ACTIONS(699), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(707), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(702), 2,
      sym_shisho_ellipsis,
      sym_identifier,
    STATE(407), 4,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_string_lit,
      aux_sym_block_repeat1,
  [22583] = 8,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym__comma,
    STATE(419), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(715), 1,
      sym_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22609] = 8,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(220), 1,
      sym_object_end,
    STATE(477), 1,
      sym_ellipsis,
    STATE(625), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22635] = 8,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(359), 1,
      sym_object_end,
    STATE(446), 1,
      sym_ellipsis,
    STATE(630), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22661] = 8,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(288), 1,
      sym_object_end,
    STATE(447), 1,
      sym_ellipsis,
    STATE(642), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22687] = 8,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(321), 1,
      sym_object_end,
    STATE(458), 1,
      sym_ellipsis,
    STATE(598), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22713] = 8,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(220), 1,
      sym_object_end,
    STATE(457), 1,
      sym_ellipsis,
    STATE(602), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22739] = 8,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(151), 1,
      sym_object_end,
    STATE(449), 1,
      sym_ellipsis,
    STATE(637), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22765] = 4,
    ACTIONS(724), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(726), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22782] = 3,
    ACTIONS(585), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(583), 5,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
  [22797] = 5,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym__comma,
    STATE(417), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(728), 3,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
  [22816] = 3,
    ACTIONS(253), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
  [22831] = 7,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(710), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym__comma,
    STATE(417), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(720), 1,
      sym_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22854] = 6,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      anon_sym_RBRACK,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym__comma,
    STATE(466), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22874] = 4,
    ACTIONS(741), 1,
      sym__template_literal_chunk,
    STATE(421), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(739), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22890] = 3,
    ACTIONS(746), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(744), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22904] = 6,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(352), 1,
      sym_tuple_end,
    STATE(557), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22924] = 4,
    ACTIONS(750), 1,
      sym__template_literal_chunk,
    STATE(421), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22940] = 6,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(248), 1,
      sym_tuple_end,
    STATE(549), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22960] = 3,
    ACTIONS(754), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(752), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22974] = 3,
    ACTIONS(758), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(756), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22988] = 3,
    ACTIONS(762), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(760), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [23002] = 3,
    ACTIONS(391), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(389), 4,
      sym_quoted_template_start,
      sym_shisho_ellipsis,
      anon_sym_LBRACE,
      sym_identifier,
  [23016] = 4,
    ACTIONS(764), 1,
      sym__template_literal_chunk,
    STATE(437), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23032] = 3,
    ACTIONS(768), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(766), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [23046] = 3,
    ACTIONS(315), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(313), 4,
      sym_quoted_template_start,
      sym_shisho_ellipsis,
      anon_sym_LBRACE,
      sym_identifier,
  [23060] = 6,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(154), 1,
      sym_tuple_end,
    STATE(562), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23080] = 6,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(330), 1,
      sym_tuple_end,
    STATE(548), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23100] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23114] = 6,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    ACTIONS(718), 1,
      anon_sym_if,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    STATE(273), 1,
      sym_tuple_end,
    STATE(566), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23134] = 4,
    ACTIONS(770), 1,
      sym__template_literal_chunk,
    STATE(437), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(739), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23150] = 3,
    ACTIONS(762), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(760), 4,
      sym_quoted_template_start,
      sym_shisho_ellipsis,
      anon_sym_LBRACE,
      sym_identifier,
  [23164] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23175] = 4,
    ACTIONS(775), 1,
      sym__template_literal_chunk,
    STATE(440), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(739), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23190] = 3,
    ACTIONS(778), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(780), 3,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [23203] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(782), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23214] = 5,
    ACTIONS(784), 1,
      anon_sym_for,
    ACTIONS(786), 1,
      anon_sym_if,
    ACTIONS(788), 1,
      sym_strip_marker,
    ACTIONS(790), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23231] = 5,
    ACTIONS(784), 1,
      anon_sym_for,
    ACTIONS(786), 1,
      anon_sym_if,
    ACTIONS(792), 1,
      sym_strip_marker,
    ACTIONS(794), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23248] = 3,
    ACTIONS(796), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23261] = 5,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_if,
    STATE(304), 1,
      sym_object_end,
    STATE(623), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23278] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_if,
    STATE(274), 1,
      sym_object_end,
    STATE(636), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23295] = 3,
    ACTIONS(800), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23308] = 5,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_if,
    STATE(144), 1,
      sym_object_end,
    STATE(638), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23325] = 3,
    ACTIONS(802), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23338] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(804), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23349] = 5,
    ACTIONS(806), 1,
      sym_template_directive_start,
    STATE(394), 1,
      sym_template_else_intro,
    STATE(476), 1,
      sym_template_if_end,
    STATE(620), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23366] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(808), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23377] = 3,
    ACTIONS(810), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23390] = 5,
    ACTIONS(812), 1,
      sym_template_directive_start,
    STATE(394), 1,
      sym_template_else_intro,
    STATE(460), 1,
      sym_template_if_end,
    STATE(563), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23407] = 4,
    ACTIONS(814), 1,
      sym__template_literal_chunk,
    STATE(440), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(748), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23422] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_if,
    STATE(232), 1,
      sym_object_end,
    STATE(603), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23439] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_if,
    STATE(318), 1,
      sym_object_end,
    STATE(600), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(816), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23467] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23489] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(822), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23500] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(824), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23511] = 3,
    ACTIONS(826), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23524] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(828), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23535] = 5,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym__comma,
    STATE(417), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23552] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(804), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23563] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(832), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23574] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23585] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(836), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23596] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(822), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23607] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(838), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23618] = 5,
    ACTIONS(840), 1,
      sym_template_directive_start,
    STATE(394), 1,
      sym_template_else_intro,
    STATE(498), 1,
      sym_template_if_end,
    STATE(575), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23635] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(838), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23646] = 5,
    ACTIONS(784), 1,
      anon_sym_for,
    ACTIONS(786), 1,
      anon_sym_if,
    ACTIONS(842), 1,
      sym_strip_marker,
    ACTIONS(844), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23663] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23674] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_if,
    STATE(232), 1,
      sym_object_end,
    STATE(558), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23691] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(836), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23702] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(816), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23713] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(846), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23724] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(824), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23735] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(828), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(832), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23757] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(846), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23768] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(782), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23779] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(808), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23790] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23801] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23812] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23823] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(846), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(583), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23843] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(838), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23853] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(836), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23863] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(848), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [23875] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(822), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23885] = 4,
    ACTIONS(850), 1,
      sym__template_literal_chunk,
    STATE(512), 1,
      aux_sym_template_literal_repeat1,
    STATE(680), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23899] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(852), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_if,
  [23909] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23919] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(832), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23929] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(834), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23939] = 4,
    ACTIONS(854), 1,
      anon_sym_for,
    ACTIONS(856), 1,
      anon_sym_if,
    ACTIONS(858), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23953] = 4,
    ACTIONS(860), 1,
      sym_strip_marker,
    ACTIONS(862), 1,
      anon_sym_else,
    ACTIONS(864), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23967] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(866), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23977] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(868), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [23989] = 4,
    ACTIONS(870), 1,
      anon_sym_QMARK,
    ACTIONS(872), 1,
      sym_strip_marker,
    ACTIONS(874), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24003] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24013] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(876), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24023] = 4,
    ACTIONS(854), 1,
      anon_sym_for,
    ACTIONS(856), 1,
      anon_sym_if,
    ACTIONS(878), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24037] = 4,
    ACTIONS(862), 1,
      anon_sym_else,
    ACTIONS(880), 1,
      sym_strip_marker,
    ACTIONS(882), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24051] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(808), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24061] = 4,
    ACTIONS(854), 1,
      anon_sym_for,
    ACTIONS(856), 1,
      anon_sym_if,
    ACTIONS(884), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24075] = 4,
    ACTIONS(748), 1,
      sym_quoted_template_end,
    ACTIONS(886), 1,
      sym__template_literal_chunk,
    STATE(536), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24089] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(782), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24099] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(828), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24109] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [24119] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(888), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24129] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(773), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24139] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(824), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24149] = 4,
    ACTIONS(870), 1,
      anon_sym_QMARK,
    ACTIONS(890), 1,
      sym_strip_marker,
    ACTIONS(892), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24163] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(816), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24173] = 4,
    ACTIONS(894), 1,
      anon_sym_QMARK,
    ACTIONS(896), 1,
      sym_strip_marker,
    ACTIONS(898), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24187] = 4,
    ACTIONS(784), 1,
      anon_sym_for,
    ACTIONS(786), 1,
      anon_sym_if,
    ACTIONS(900), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24201] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(804), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24211] = 4,
    ACTIONS(894), 1,
      anon_sym_QMARK,
    ACTIONS(902), 1,
      sym_strip_marker,
    ACTIONS(904), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24225] = 4,
    ACTIONS(155), 1,
      sym_strip_marker,
    ACTIONS(157), 1,
      sym_template_interpolation_end,
    ACTIONS(894), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24239] = 4,
    ACTIONS(870), 1,
      anon_sym_QMARK,
    ACTIONS(906), 1,
      sym_strip_marker,
    ACTIONS(908), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24253] = 4,
    ACTIONS(894), 1,
      anon_sym_QMARK,
    ACTIONS(910), 1,
      sym_strip_marker,
    ACTIONS(912), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24267] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(583), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [24277] = 4,
    ACTIONS(870), 1,
      anon_sym_QMARK,
    ACTIONS(914), 1,
      sym_strip_marker,
    ACTIONS(916), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24291] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(918), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24301] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(920), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24311] = 4,
    ACTIONS(161), 1,
      sym_strip_marker,
    ACTIONS(163), 1,
      sym_template_interpolation_end,
    ACTIONS(894), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24325] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(922), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24335] = 4,
    ACTIONS(870), 1,
      anon_sym_QMARK,
    ACTIONS(924), 1,
      sym_strip_marker,
    ACTIONS(926), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24349] = 4,
    ACTIONS(862), 1,
      anon_sym_else,
    ACTIONS(928), 1,
      sym_strip_marker,
    ACTIONS(930), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24363] = 4,
    ACTIONS(739), 1,
      sym_quoted_template_end,
    ACTIONS(932), 1,
      sym__template_literal_chunk,
    STATE(536), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24377] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(935), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24387] = 4,
    ACTIONS(870), 1,
      anon_sym_QMARK,
    ACTIONS(937), 1,
      sym_strip_marker,
    ACTIONS(939), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24401] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(941), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24411] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(943), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24421] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(945), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24431] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(947), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24441] = 4,
    ACTIONS(151), 1,
      sym_strip_marker,
    ACTIONS(153), 1,
      sym_template_interpolation_end,
    ACTIONS(894), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24455] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [24465] = 3,
    ACTIONS(949), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(951), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24476] = 3,
    ACTIONS(953), 1,
      sym_strip_marker,
    ACTIONS(955), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24487] = 3,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24498] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24509] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24520] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24531] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24542] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(965), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24553] = 3,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24564] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(969), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24575] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(971), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24586] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(973), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24597] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(358), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24608] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24619] = 3,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24630] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(977), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24641] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24652] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24663] = 3,
    ACTIONS(979), 1,
      sym_template_directive_start,
    STATE(471), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24674] = 3,
    ACTIONS(930), 1,
      anon_sym_endif,
    ACTIONS(981), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24685] = 3,
    ACTIONS(983), 1,
      sym_template_directive_start,
    STATE(478), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24696] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24707] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24718] = 3,
    ACTIONS(987), 1,
      sym_identifier,
    ACTIONS(989), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24729] = 3,
    ACTIONS(854), 1,
      anon_sym_for,
    ACTIONS(856), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24740] = 3,
    ACTIONS(991), 1,
      anon_sym_else,
    ACTIONS(993), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24751] = 3,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(426), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24762] = 3,
    ACTIONS(995), 1,
      sym_strip_marker,
    ACTIONS(997), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24773] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(999), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24784] = 3,
    ACTIONS(1001), 1,
      sym_template_directive_start,
    STATE(493), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24795] = 3,
    ACTIONS(1003), 1,
      sym_template_directive_start,
    STATE(495), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24806] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1005), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24817] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1007), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24828] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24839] = 3,
    ACTIONS(1009), 1,
      sym_strip_marker,
    ACTIONS(1011), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24850] = 3,
    ACTIONS(991), 1,
      anon_sym_else,
    ACTIONS(1013), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24861] = 3,
    ACTIONS(844), 1,
      anon_sym_endfor,
    ACTIONS(1015), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24872] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24883] = 3,
    ACTIONS(1017), 1,
      sym_strip_marker,
    ACTIONS(1019), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24894] = 3,
    ACTIONS(794), 1,
      anon_sym_endfor,
    ACTIONS(1021), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24905] = 3,
    ACTIONS(1023), 1,
      sym_strip_marker,
    ACTIONS(1025), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24916] = 3,
    ACTIONS(882), 1,
      anon_sym_endif,
    ACTIONS(1027), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24927] = 3,
    ACTIONS(1029), 1,
      sym_identifier,
    ACTIONS(1031), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24938] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24949] = 3,
    ACTIONS(991), 1,
      anon_sym_else,
    ACTIONS(1035), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24960] = 3,
    ACTIONS(1037), 1,
      sym_strip_marker,
    ACTIONS(1039), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24971] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1041), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24982] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1043), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24993] = 3,
    ACTIONS(1045), 1,
      sym_strip_marker,
    ACTIONS(1047), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25004] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1049), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25015] = 3,
    ACTIONS(1051), 1,
      sym_strip_marker,
    ACTIONS(1053), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25026] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25037] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25048] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25059] = 3,
    ACTIONS(1055), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(1057), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25070] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25081] = 3,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25092] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25103] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25114] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25125] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1063), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25136] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25147] = 3,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25158] = 3,
    ACTIONS(1069), 1,
      sym_identifier,
    ACTIONS(1071), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25169] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25180] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25191] = 3,
    ACTIONS(1075), 1,
      sym_strip_marker,
    ACTIONS(1077), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25202] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25213] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25224] = 3,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1083), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25235] = 3,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25246] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25257] = 3,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(431), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25268] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1087), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25279] = 3,
    ACTIONS(1089), 1,
      sym_template_directive_start,
    STATE(470), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25290] = 3,
    ACTIONS(1091), 1,
      sym_template_directive_start,
    STATE(462), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25301] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1093), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25312] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1095), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25323] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25334] = 3,
    ACTIONS(1097), 1,
      sym_strip_marker,
    ACTIONS(1099), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25345] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25356] = 3,
    ACTIONS(1101), 1,
      sym_strip_marker,
    ACTIONS(1103), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25367] = 3,
    ACTIONS(790), 1,
      anon_sym_endfor,
    ACTIONS(1105), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25378] = 3,
    ACTIONS(1107), 1,
      sym_strip_marker,
    ACTIONS(1109), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25389] = 3,
    ACTIONS(864), 1,
      anon_sym_endif,
    ACTIONS(1111), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25400] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25411] = 3,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25422] = 3,
    ACTIONS(1117), 1,
      sym_strip_marker,
    ACTIONS(1119), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25433] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25444] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25455] = 3,
    ACTIONS(1123), 1,
      sym_strip_marker,
    ACTIONS(1125), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25466] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25477] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25488] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25499] = 3,
    ACTIONS(716), 1,
      anon_sym_QMARK,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25510] = 3,
    ACTIONS(1129), 1,
      sym_identifier,
    ACTIONS(1131), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25521] = 3,
    ACTIONS(720), 1,
      anon_sym_QMARK,
    ACTIONS(1133), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25532] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25543] = 2,
    ACTIONS(1119), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25551] = 2,
    ACTIONS(1135), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25559] = 2,
    ACTIONS(1137), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25567] = 2,
    ACTIONS(1139), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25575] = 2,
    ACTIONS(898), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25583] = 2,
    ACTIONS(1141), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25591] = 2,
    ACTIONS(1143), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25599] = 2,
    ACTIONS(1013), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25607] = 2,
    ACTIONS(1145), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25615] = 2,
    ACTIONS(1147), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25623] = 2,
    ACTIONS(993), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25631] = 2,
    ACTIONS(884), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25639] = 2,
    ACTIONS(1125), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25647] = 2,
    ACTIONS(939), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25655] = 2,
    ACTIONS(1149), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25663] = 2,
    ACTIONS(858), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25671] = 2,
    ACTIONS(1151), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25679] = 2,
    ACTIONS(1153), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25687] = 2,
    ACTIONS(904), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25695] = 2,
    ACTIONS(1155), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25703] = 2,
    ACTIONS(1157), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25711] = 2,
    ACTIONS(1159), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25719] = 2,
    ACTIONS(1161), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25727] = 2,
    ACTIONS(1077), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25735] = 2,
    ACTIONS(1163), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25743] = 2,
    ACTIONS(1165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25751] = 2,
    ACTIONS(1167), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25759] = 2,
    ACTIONS(1169), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25767] = 2,
    ACTIONS(1171), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25775] = 2,
    ACTIONS(1173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25783] = 2,
    ACTIONS(908), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25791] = 2,
    ACTIONS(1175), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25799] = 2,
    ACTIONS(1177), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25807] = 2,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25815] = 2,
    ACTIONS(1181), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25823] = 2,
    ACTIONS(1183), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25831] = 2,
    ACTIONS(1053), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25839] = 2,
    ACTIONS(1185), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25847] = 2,
    ACTIONS(1187), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25855] = 2,
    ACTIONS(1189), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25863] = 2,
    ACTIONS(1191), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25871] = 2,
    ACTIONS(1193), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25879] = 2,
    ACTIONS(1035), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25887] = 2,
    ACTIONS(1047), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25895] = 2,
    ACTIONS(878), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25903] = 2,
    ACTIONS(1195), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25911] = 2,
    ACTIONS(1039), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25919] = 2,
    ACTIONS(1197), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25927] = 2,
    ACTIONS(1199), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25935] = 2,
    ACTIONS(1201), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25943] = 2,
    ACTIONS(1203), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25951] = 2,
    ACTIONS(1205), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25959] = 2,
    ACTIONS(912), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25967] = 2,
    ACTIONS(1207), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25975] = 2,
    ACTIONS(1209), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25983] = 2,
    ACTIONS(1211), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25991] = 2,
    ACTIONS(926), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25999] = 2,
    ACTIONS(916), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26007] = 2,
    ACTIONS(1213), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26015] = 2,
    ACTIONS(1215), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26023] = 2,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26031] = 2,
    ACTIONS(1219), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26039] = 2,
    ACTIONS(1221), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26047] = 2,
    ACTIONS(1223), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26055] = 2,
    ACTIONS(1225), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26063] = 2,
    ACTIONS(1227), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26071] = 2,
    ACTIONS(1229), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26079] = 2,
    ACTIONS(1099), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26087] = 2,
    ACTIONS(1231), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26095] = 2,
    ACTIONS(1233), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26103] = 2,
    ACTIONS(1235), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26111] = 2,
    ACTIONS(951), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26119] = 2,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26127] = 2,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26135] = 2,
    ACTIONS(1239), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26143] = 2,
    ACTIONS(1241), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26151] = 2,
    ACTIONS(1243), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26159] = 2,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26167] = 2,
    ACTIONS(1245), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 111,
  [SMALL_STATE(4)] = 222,
  [SMALL_STATE(5)] = 333,
  [SMALL_STATE(6)] = 444,
  [SMALL_STATE(7)] = 555,
  [SMALL_STATE(8)] = 666,
  [SMALL_STATE(9)] = 772,
  [SMALL_STATE(10)] = 880,
  [SMALL_STATE(11)] = 986,
  [SMALL_STATE(12)] = 1094,
  [SMALL_STATE(13)] = 1202,
  [SMALL_STATE(14)] = 1310,
  [SMALL_STATE(15)] = 1416,
  [SMALL_STATE(16)] = 1524,
  [SMALL_STATE(17)] = 1629,
  [SMALL_STATE(18)] = 1731,
  [SMALL_STATE(19)] = 1833,
  [SMALL_STATE(20)] = 1935,
  [SMALL_STATE(21)] = 2037,
  [SMALL_STATE(22)] = 2139,
  [SMALL_STATE(23)] = 2238,
  [SMALL_STATE(24)] = 2337,
  [SMALL_STATE(25)] = 2436,
  [SMALL_STATE(26)] = 2535,
  [SMALL_STATE(27)] = 2634,
  [SMALL_STATE(28)] = 2733,
  [SMALL_STATE(29)] = 2832,
  [SMALL_STATE(30)] = 2931,
  [SMALL_STATE(31)] = 3027,
  [SMALL_STATE(32)] = 3123,
  [SMALL_STATE(33)] = 3219,
  [SMALL_STATE(34)] = 3315,
  [SMALL_STATE(35)] = 3411,
  [SMALL_STATE(36)] = 3504,
  [SMALL_STATE(37)] = 3597,
  [SMALL_STATE(38)] = 3690,
  [SMALL_STATE(39)] = 3759,
  [SMALL_STATE(40)] = 3852,
  [SMALL_STATE(41)] = 3919,
  [SMALL_STATE(42)] = 4012,
  [SMALL_STATE(43)] = 4105,
  [SMALL_STATE(44)] = 4198,
  [SMALL_STATE(45)] = 4263,
  [SMALL_STATE(46)] = 4356,
  [SMALL_STATE(47)] = 4449,
  [SMALL_STATE(48)] = 4542,
  [SMALL_STATE(49)] = 4635,
  [SMALL_STATE(50)] = 4728,
  [SMALL_STATE(51)] = 4821,
  [SMALL_STATE(52)] = 4914,
  [SMALL_STATE(53)] = 5007,
  [SMALL_STATE(54)] = 5100,
  [SMALL_STATE(55)] = 5193,
  [SMALL_STATE(56)] = 5286,
  [SMALL_STATE(57)] = 5379,
  [SMALL_STATE(58)] = 5472,
  [SMALL_STATE(59)] = 5565,
  [SMALL_STATE(60)] = 5658,
  [SMALL_STATE(61)] = 5751,
  [SMALL_STATE(62)] = 5844,
  [SMALL_STATE(63)] = 5937,
  [SMALL_STATE(64)] = 6030,
  [SMALL_STATE(65)] = 6123,
  [SMALL_STATE(66)] = 6216,
  [SMALL_STATE(67)] = 6309,
  [SMALL_STATE(68)] = 6402,
  [SMALL_STATE(69)] = 6463,
  [SMALL_STATE(70)] = 6556,
  [SMALL_STATE(71)] = 6611,
  [SMALL_STATE(72)] = 6670,
  [SMALL_STATE(73)] = 6763,
  [SMALL_STATE(74)] = 6856,
  [SMALL_STATE(75)] = 6949,
  [SMALL_STATE(76)] = 7042,
  [SMALL_STATE(77)] = 7135,
  [SMALL_STATE(78)] = 7228,
  [SMALL_STATE(79)] = 7321,
  [SMALL_STATE(80)] = 7414,
  [SMALL_STATE(81)] = 7493,
  [SMALL_STATE(82)] = 7586,
  [SMALL_STATE(83)] = 7641,
  [SMALL_STATE(84)] = 7734,
  [SMALL_STATE(85)] = 7827,
  [SMALL_STATE(86)] = 7920,
  [SMALL_STATE(87)] = 8013,
  [SMALL_STATE(88)] = 8106,
  [SMALL_STATE(89)] = 8199,
  [SMALL_STATE(90)] = 8292,
  [SMALL_STATE(91)] = 8385,
  [SMALL_STATE(92)] = 8478,
  [SMALL_STATE(93)] = 8571,
  [SMALL_STATE(94)] = 8664,
  [SMALL_STATE(95)] = 8751,
  [SMALL_STATE(96)] = 8838,
  [SMALL_STATE(97)] = 8893,
  [SMALL_STATE(98)] = 8980,
  [SMALL_STATE(99)] = 9067,
  [SMALL_STATE(100)] = 9122,
  [SMALL_STATE(101)] = 9209,
  [SMALL_STATE(102)] = 9296,
  [SMALL_STATE(103)] = 9383,
  [SMALL_STATE(104)] = 9470,
  [SMALL_STATE(105)] = 9557,
  [SMALL_STATE(106)] = 9644,
  [SMALL_STATE(107)] = 9731,
  [SMALL_STATE(108)] = 9818,
  [SMALL_STATE(109)] = 9905,
  [SMALL_STATE(110)] = 9992,
  [SMALL_STATE(111)] = 10079,
  [SMALL_STATE(112)] = 10166,
  [SMALL_STATE(113)] = 10253,
  [SMALL_STATE(114)] = 10340,
  [SMALL_STATE(115)] = 10395,
  [SMALL_STATE(116)] = 10450,
  [SMALL_STATE(117)] = 10537,
  [SMALL_STATE(118)] = 10624,
  [SMALL_STATE(119)] = 10711,
  [SMALL_STATE(120)] = 10798,
  [SMALL_STATE(121)] = 10885,
  [SMALL_STATE(122)] = 10972,
  [SMALL_STATE(123)] = 11059,
  [SMALL_STATE(124)] = 11114,
  [SMALL_STATE(125)] = 11201,
  [SMALL_STATE(126)] = 11288,
  [SMALL_STATE(127)] = 11375,
  [SMALL_STATE(128)] = 11462,
  [SMALL_STATE(129)] = 11549,
  [SMALL_STATE(130)] = 11636,
  [SMALL_STATE(131)] = 11723,
  [SMALL_STATE(132)] = 11810,
  [SMALL_STATE(133)] = 11897,
  [SMALL_STATE(134)] = 11984,
  [SMALL_STATE(135)] = 12071,
  [SMALL_STATE(136)] = 12158,
  [SMALL_STATE(137)] = 12245,
  [SMALL_STATE(138)] = 12332,
  [SMALL_STATE(139)] = 12419,
  [SMALL_STATE(140)] = 12506,
  [SMALL_STATE(141)] = 12593,
  [SMALL_STATE(142)] = 12642,
  [SMALL_STATE(143)] = 12691,
  [SMALL_STATE(144)] = 12738,
  [SMALL_STATE(145)] = 12780,
  [SMALL_STATE(146)] = 12822,
  [SMALL_STATE(147)] = 12864,
  [SMALL_STATE(148)] = 12906,
  [SMALL_STATE(149)] = 12948,
  [SMALL_STATE(150)] = 12990,
  [SMALL_STATE(151)] = 13032,
  [SMALL_STATE(152)] = 13074,
  [SMALL_STATE(153)] = 13116,
  [SMALL_STATE(154)] = 13158,
  [SMALL_STATE(155)] = 13200,
  [SMALL_STATE(156)] = 13242,
  [SMALL_STATE(157)] = 13284,
  [SMALL_STATE(158)] = 13326,
  [SMALL_STATE(159)] = 13368,
  [SMALL_STATE(160)] = 13410,
  [SMALL_STATE(161)] = 13452,
  [SMALL_STATE(162)] = 13494,
  [SMALL_STATE(163)] = 13536,
  [SMALL_STATE(164)] = 13578,
  [SMALL_STATE(165)] = 13620,
  [SMALL_STATE(166)] = 13662,
  [SMALL_STATE(167)] = 13704,
  [SMALL_STATE(168)] = 13746,
  [SMALL_STATE(169)] = 13788,
  [SMALL_STATE(170)] = 13830,
  [SMALL_STATE(171)] = 13872,
  [SMALL_STATE(172)] = 13914,
  [SMALL_STATE(173)] = 13956,
  [SMALL_STATE(174)] = 13998,
  [SMALL_STATE(175)] = 14040,
  [SMALL_STATE(176)] = 14082,
  [SMALL_STATE(177)] = 14124,
  [SMALL_STATE(178)] = 14173,
  [SMALL_STATE(179)] = 14222,
  [SMALL_STATE(180)] = 14271,
  [SMALL_STATE(181)] = 14320,
  [SMALL_STATE(182)] = 14369,
  [SMALL_STATE(183)] = 14439,
  [SMALL_STATE(184)] = 14489,
  [SMALL_STATE(185)] = 14547,
  [SMALL_STATE(186)] = 14599,
  [SMALL_STATE(187)] = 14649,
  [SMALL_STATE(188)] = 14705,
  [SMALL_STATE(189)] = 14763,
  [SMALL_STATE(190)] = 14823,
  [SMALL_STATE(191)] = 14875,
  [SMALL_STATE(192)] = 14931,
  [SMALL_STATE(193)] = 14999,
  [SMALL_STATE(194)] = 15059,
  [SMALL_STATE(195)] = 15118,
  [SMALL_STATE(196)] = 15163,
  [SMALL_STATE(197)] = 15232,
  [SMALL_STATE(198)] = 15289,
  [SMALL_STATE(199)] = 15338,
  [SMALL_STATE(200)] = 15383,
  [SMALL_STATE(201)] = 15434,
  [SMALL_STATE(202)] = 15489,
  [SMALL_STATE(203)] = 15531,
  [SMALL_STATE(204)] = 15568,
  [SMALL_STATE(205)] = 15605,
  [SMALL_STATE(206)] = 15650,
  [SMALL_STATE(207)] = 15695,
  [SMALL_STATE(208)] = 15732,
  [SMALL_STATE(209)] = 15769,
  [SMALL_STATE(210)] = 15814,
  [SMALL_STATE(211)] = 15859,
  [SMALL_STATE(212)] = 15904,
  [SMALL_STATE(213)] = 15940,
  [SMALL_STATE(214)] = 15976,
  [SMALL_STATE(215)] = 16022,
  [SMALL_STATE(216)] = 16058,
  [SMALL_STATE(217)] = 16094,
  [SMALL_STATE(218)] = 16130,
  [SMALL_STATE(219)] = 16166,
  [SMALL_STATE(220)] = 16202,
  [SMALL_STATE(221)] = 16238,
  [SMALL_STATE(222)] = 16274,
  [SMALL_STATE(223)] = 16310,
  [SMALL_STATE(224)] = 16374,
  [SMALL_STATE(225)] = 16430,
  [SMALL_STATE(226)] = 16484,
  [SMALL_STATE(227)] = 16536,
  [SMALL_STATE(228)] = 16584,
  [SMALL_STATE(229)] = 16626,
  [SMALL_STATE(230)] = 16672,
  [SMALL_STATE(231)] = 16708,
  [SMALL_STATE(232)] = 16744,
  [SMALL_STATE(233)] = 16780,
  [SMALL_STATE(234)] = 16822,
  [SMALL_STATE(235)] = 16858,
  [SMALL_STATE(236)] = 16912,
  [SMALL_STATE(237)] = 16964,
  [SMALL_STATE(238)] = 17000,
  [SMALL_STATE(239)] = 17036,
  [SMALL_STATE(240)] = 17072,
  [SMALL_STATE(241)] = 17120,
  [SMALL_STATE(242)] = 17156,
  [SMALL_STATE(243)] = 17192,
  [SMALL_STATE(244)] = 17228,
  [SMALL_STATE(245)] = 17270,
  [SMALL_STATE(246)] = 17306,
  [SMALL_STATE(247)] = 17370,
  [SMALL_STATE(248)] = 17406,
  [SMALL_STATE(249)] = 17442,
  [SMALL_STATE(250)] = 17478,
  [SMALL_STATE(251)] = 17514,
  [SMALL_STATE(252)] = 17550,
  [SMALL_STATE(253)] = 17586,
  [SMALL_STATE(254)] = 17622,
  [SMALL_STATE(255)] = 17664,
  [SMALL_STATE(256)] = 17700,
  [SMALL_STATE(257)] = 17756,
  [SMALL_STATE(258)] = 17798,
  [SMALL_STATE(259)] = 17836,
  [SMALL_STATE(260)] = 17878,
  [SMALL_STATE(261)] = 17920,
  [SMALL_STATE(262)] = 17962,
  [SMALL_STATE(263)] = 18004,
  [SMALL_STATE(264)] = 18046,
  [SMALL_STATE(265)] = 18088,
  [SMALL_STATE(266)] = 18130,
  [SMALL_STATE(267)] = 18172,
  [SMALL_STATE(268)] = 18214,
  [SMALL_STATE(269)] = 18247,
  [SMALL_STATE(270)] = 18280,
  [SMALL_STATE(271)] = 18313,
  [SMALL_STATE(272)] = 18346,
  [SMALL_STATE(273)] = 18378,
  [SMALL_STATE(274)] = 18410,
  [SMALL_STATE(275)] = 18442,
  [SMALL_STATE(276)] = 18474,
  [SMALL_STATE(277)] = 18506,
  [SMALL_STATE(278)] = 18538,
  [SMALL_STATE(279)] = 18570,
  [SMALL_STATE(280)] = 18602,
  [SMALL_STATE(281)] = 18634,
  [SMALL_STATE(282)] = 18666,
  [SMALL_STATE(283)] = 18698,
  [SMALL_STATE(284)] = 18730,
  [SMALL_STATE(285)] = 18762,
  [SMALL_STATE(286)] = 18794,
  [SMALL_STATE(287)] = 18826,
  [SMALL_STATE(288)] = 18858,
  [SMALL_STATE(289)] = 18890,
  [SMALL_STATE(290)] = 18922,
  [SMALL_STATE(291)] = 18954,
  [SMALL_STATE(292)] = 18986,
  [SMALL_STATE(293)] = 19018,
  [SMALL_STATE(294)] = 19050,
  [SMALL_STATE(295)] = 19082,
  [SMALL_STATE(296)] = 19114,
  [SMALL_STATE(297)] = 19146,
  [SMALL_STATE(298)] = 19178,
  [SMALL_STATE(299)] = 19210,
  [SMALL_STATE(300)] = 19242,
  [SMALL_STATE(301)] = 19274,
  [SMALL_STATE(302)] = 19309,
  [SMALL_STATE(303)] = 19344,
  [SMALL_STATE(304)] = 19373,
  [SMALL_STATE(305)] = 19402,
  [SMALL_STATE(306)] = 19431,
  [SMALL_STATE(307)] = 19460,
  [SMALL_STATE(308)] = 19489,
  [SMALL_STATE(309)] = 19518,
  [SMALL_STATE(310)] = 19547,
  [SMALL_STATE(311)] = 19576,
  [SMALL_STATE(312)] = 19605,
  [SMALL_STATE(313)] = 19634,
  [SMALL_STATE(314)] = 19663,
  [SMALL_STATE(315)] = 19692,
  [SMALL_STATE(316)] = 19721,
  [SMALL_STATE(317)] = 19750,
  [SMALL_STATE(318)] = 19779,
  [SMALL_STATE(319)] = 19808,
  [SMALL_STATE(320)] = 19837,
  [SMALL_STATE(321)] = 19866,
  [SMALL_STATE(322)] = 19895,
  [SMALL_STATE(323)] = 19924,
  [SMALL_STATE(324)] = 19953,
  [SMALL_STATE(325)] = 19982,
  [SMALL_STATE(326)] = 20011,
  [SMALL_STATE(327)] = 20040,
  [SMALL_STATE(328)] = 20069,
  [SMALL_STATE(329)] = 20098,
  [SMALL_STATE(330)] = 20127,
  [SMALL_STATE(331)] = 20156,
  [SMALL_STATE(332)] = 20185,
  [SMALL_STATE(333)] = 20214,
  [SMALL_STATE(334)] = 20243,
  [SMALL_STATE(335)] = 20272,
  [SMALL_STATE(336)] = 20301,
  [SMALL_STATE(337)] = 20330,
  [SMALL_STATE(338)] = 20359,
  [SMALL_STATE(339)] = 20388,
  [SMALL_STATE(340)] = 20417,
  [SMALL_STATE(341)] = 20446,
  [SMALL_STATE(342)] = 20475,
  [SMALL_STATE(343)] = 20504,
  [SMALL_STATE(344)] = 20533,
  [SMALL_STATE(345)] = 20562,
  [SMALL_STATE(346)] = 20591,
  [SMALL_STATE(347)] = 20620,
  [SMALL_STATE(348)] = 20649,
  [SMALL_STATE(349)] = 20678,
  [SMALL_STATE(350)] = 20707,
  [SMALL_STATE(351)] = 20736,
  [SMALL_STATE(352)] = 20765,
  [SMALL_STATE(353)] = 20794,
  [SMALL_STATE(354)] = 20823,
  [SMALL_STATE(355)] = 20852,
  [SMALL_STATE(356)] = 20881,
  [SMALL_STATE(357)] = 20910,
  [SMALL_STATE(358)] = 20939,
  [SMALL_STATE(359)] = 20968,
  [SMALL_STATE(360)] = 20997,
  [SMALL_STATE(361)] = 21026,
  [SMALL_STATE(362)] = 21055,
  [SMALL_STATE(363)] = 21084,
  [SMALL_STATE(364)] = 21113,
  [SMALL_STATE(365)] = 21142,
  [SMALL_STATE(366)] = 21171,
  [SMALL_STATE(367)] = 21200,
  [SMALL_STATE(368)] = 21229,
  [SMALL_STATE(369)] = 21258,
  [SMALL_STATE(370)] = 21285,
  [SMALL_STATE(371)] = 21314,
  [SMALL_STATE(372)] = 21341,
  [SMALL_STATE(373)] = 21367,
  [SMALL_STATE(374)] = 21393,
  [SMALL_STATE(375)] = 21419,
  [SMALL_STATE(376)] = 21444,
  [SMALL_STATE(377)] = 21488,
  [SMALL_STATE(378)] = 21530,
  [SMALL_STATE(379)] = 21574,
  [SMALL_STATE(380)] = 21616,
  [SMALL_STATE(381)] = 21658,
  [SMALL_STATE(382)] = 21700,
  [SMALL_STATE(383)] = 21742,
  [SMALL_STATE(384)] = 21786,
  [SMALL_STATE(385)] = 21828,
  [SMALL_STATE(386)] = 21852,
  [SMALL_STATE(387)] = 21896,
  [SMALL_STATE(388)] = 21940,
  [SMALL_STATE(389)] = 21964,
  [SMALL_STATE(390)] = 22006,
  [SMALL_STATE(391)] = 22048,
  [SMALL_STATE(392)] = 22087,
  [SMALL_STATE(393)] = 22126,
  [SMALL_STATE(394)] = 22165,
  [SMALL_STATE(395)] = 22204,
  [SMALL_STATE(396)] = 22243,
  [SMALL_STATE(397)] = 22282,
  [SMALL_STATE(398)] = 22318,
  [SMALL_STATE(399)] = 22354,
  [SMALL_STATE(400)] = 22384,
  [SMALL_STATE(401)] = 22414,
  [SMALL_STATE(402)] = 22444,
  [SMALL_STATE(403)] = 22463,
  [SMALL_STATE(404)] = 22482,
  [SMALL_STATE(405)] = 22507,
  [SMALL_STATE(406)] = 22534,
  [SMALL_STATE(407)] = 22559,
  [SMALL_STATE(408)] = 22583,
  [SMALL_STATE(409)] = 22609,
  [SMALL_STATE(410)] = 22635,
  [SMALL_STATE(411)] = 22661,
  [SMALL_STATE(412)] = 22687,
  [SMALL_STATE(413)] = 22713,
  [SMALL_STATE(414)] = 22739,
  [SMALL_STATE(415)] = 22765,
  [SMALL_STATE(416)] = 22782,
  [SMALL_STATE(417)] = 22797,
  [SMALL_STATE(418)] = 22816,
  [SMALL_STATE(419)] = 22831,
  [SMALL_STATE(420)] = 22854,
  [SMALL_STATE(421)] = 22874,
  [SMALL_STATE(422)] = 22890,
  [SMALL_STATE(423)] = 22904,
  [SMALL_STATE(424)] = 22924,
  [SMALL_STATE(425)] = 22940,
  [SMALL_STATE(426)] = 22960,
  [SMALL_STATE(427)] = 22974,
  [SMALL_STATE(428)] = 22988,
  [SMALL_STATE(429)] = 23002,
  [SMALL_STATE(430)] = 23016,
  [SMALL_STATE(431)] = 23032,
  [SMALL_STATE(432)] = 23046,
  [SMALL_STATE(433)] = 23060,
  [SMALL_STATE(434)] = 23080,
  [SMALL_STATE(435)] = 23100,
  [SMALL_STATE(436)] = 23114,
  [SMALL_STATE(437)] = 23134,
  [SMALL_STATE(438)] = 23150,
  [SMALL_STATE(439)] = 23164,
  [SMALL_STATE(440)] = 23175,
  [SMALL_STATE(441)] = 23190,
  [SMALL_STATE(442)] = 23203,
  [SMALL_STATE(443)] = 23214,
  [SMALL_STATE(444)] = 23231,
  [SMALL_STATE(445)] = 23248,
  [SMALL_STATE(446)] = 23261,
  [SMALL_STATE(447)] = 23278,
  [SMALL_STATE(448)] = 23295,
  [SMALL_STATE(449)] = 23308,
  [SMALL_STATE(450)] = 23325,
  [SMALL_STATE(451)] = 23338,
  [SMALL_STATE(452)] = 23349,
  [SMALL_STATE(453)] = 23366,
  [SMALL_STATE(454)] = 23377,
  [SMALL_STATE(455)] = 23390,
  [SMALL_STATE(456)] = 23407,
  [SMALL_STATE(457)] = 23422,
  [SMALL_STATE(458)] = 23439,
  [SMALL_STATE(459)] = 23456,
  [SMALL_STATE(460)] = 23467,
  [SMALL_STATE(461)] = 23478,
  [SMALL_STATE(462)] = 23489,
  [SMALL_STATE(463)] = 23500,
  [SMALL_STATE(464)] = 23511,
  [SMALL_STATE(465)] = 23524,
  [SMALL_STATE(466)] = 23535,
  [SMALL_STATE(467)] = 23552,
  [SMALL_STATE(468)] = 23563,
  [SMALL_STATE(469)] = 23574,
  [SMALL_STATE(470)] = 23585,
  [SMALL_STATE(471)] = 23596,
  [SMALL_STATE(472)] = 23607,
  [SMALL_STATE(473)] = 23618,
  [SMALL_STATE(474)] = 23635,
  [SMALL_STATE(475)] = 23646,
  [SMALL_STATE(476)] = 23663,
  [SMALL_STATE(477)] = 23674,
  [SMALL_STATE(478)] = 23691,
  [SMALL_STATE(479)] = 23702,
  [SMALL_STATE(480)] = 23713,
  [SMALL_STATE(481)] = 23724,
  [SMALL_STATE(482)] = 23735,
  [SMALL_STATE(483)] = 23746,
  [SMALL_STATE(484)] = 23757,
  [SMALL_STATE(485)] = 23768,
  [SMALL_STATE(486)] = 23779,
  [SMALL_STATE(487)] = 23790,
  [SMALL_STATE(488)] = 23801,
  [SMALL_STATE(489)] = 23812,
  [SMALL_STATE(490)] = 23823,
  [SMALL_STATE(491)] = 23833,
  [SMALL_STATE(492)] = 23843,
  [SMALL_STATE(493)] = 23853,
  [SMALL_STATE(494)] = 23863,
  [SMALL_STATE(495)] = 23875,
  [SMALL_STATE(496)] = 23885,
  [SMALL_STATE(497)] = 23899,
  [SMALL_STATE(498)] = 23909,
  [SMALL_STATE(499)] = 23919,
  [SMALL_STATE(500)] = 23929,
  [SMALL_STATE(501)] = 23939,
  [SMALL_STATE(502)] = 23953,
  [SMALL_STATE(503)] = 23967,
  [SMALL_STATE(504)] = 23977,
  [SMALL_STATE(505)] = 23989,
  [SMALL_STATE(506)] = 24003,
  [SMALL_STATE(507)] = 24013,
  [SMALL_STATE(508)] = 24023,
  [SMALL_STATE(509)] = 24037,
  [SMALL_STATE(510)] = 24051,
  [SMALL_STATE(511)] = 24061,
  [SMALL_STATE(512)] = 24075,
  [SMALL_STATE(513)] = 24089,
  [SMALL_STATE(514)] = 24099,
  [SMALL_STATE(515)] = 24109,
  [SMALL_STATE(516)] = 24119,
  [SMALL_STATE(517)] = 24129,
  [SMALL_STATE(518)] = 24139,
  [SMALL_STATE(519)] = 24149,
  [SMALL_STATE(520)] = 24163,
  [SMALL_STATE(521)] = 24173,
  [SMALL_STATE(522)] = 24187,
  [SMALL_STATE(523)] = 24201,
  [SMALL_STATE(524)] = 24211,
  [SMALL_STATE(525)] = 24225,
  [SMALL_STATE(526)] = 24239,
  [SMALL_STATE(527)] = 24253,
  [SMALL_STATE(528)] = 24267,
  [SMALL_STATE(529)] = 24277,
  [SMALL_STATE(530)] = 24291,
  [SMALL_STATE(531)] = 24301,
  [SMALL_STATE(532)] = 24311,
  [SMALL_STATE(533)] = 24325,
  [SMALL_STATE(534)] = 24335,
  [SMALL_STATE(535)] = 24349,
  [SMALL_STATE(536)] = 24363,
  [SMALL_STATE(537)] = 24377,
  [SMALL_STATE(538)] = 24387,
  [SMALL_STATE(539)] = 24401,
  [SMALL_STATE(540)] = 24411,
  [SMALL_STATE(541)] = 24421,
  [SMALL_STATE(542)] = 24431,
  [SMALL_STATE(543)] = 24441,
  [SMALL_STATE(544)] = 24455,
  [SMALL_STATE(545)] = 24465,
  [SMALL_STATE(546)] = 24476,
  [SMALL_STATE(547)] = 24487,
  [SMALL_STATE(548)] = 24498,
  [SMALL_STATE(549)] = 24509,
  [SMALL_STATE(550)] = 24520,
  [SMALL_STATE(551)] = 24531,
  [SMALL_STATE(552)] = 24542,
  [SMALL_STATE(553)] = 24553,
  [SMALL_STATE(554)] = 24564,
  [SMALL_STATE(555)] = 24575,
  [SMALL_STATE(556)] = 24586,
  [SMALL_STATE(557)] = 24597,
  [SMALL_STATE(558)] = 24608,
  [SMALL_STATE(559)] = 24619,
  [SMALL_STATE(560)] = 24630,
  [SMALL_STATE(561)] = 24641,
  [SMALL_STATE(562)] = 24652,
  [SMALL_STATE(563)] = 24663,
  [SMALL_STATE(564)] = 24674,
  [SMALL_STATE(565)] = 24685,
  [SMALL_STATE(566)] = 24696,
  [SMALL_STATE(567)] = 24707,
  [SMALL_STATE(568)] = 24718,
  [SMALL_STATE(569)] = 24729,
  [SMALL_STATE(570)] = 24740,
  [SMALL_STATE(571)] = 24751,
  [SMALL_STATE(572)] = 24762,
  [SMALL_STATE(573)] = 24773,
  [SMALL_STATE(574)] = 24784,
  [SMALL_STATE(575)] = 24795,
  [SMALL_STATE(576)] = 24806,
  [SMALL_STATE(577)] = 24817,
  [SMALL_STATE(578)] = 24828,
  [SMALL_STATE(579)] = 24839,
  [SMALL_STATE(580)] = 24850,
  [SMALL_STATE(581)] = 24861,
  [SMALL_STATE(582)] = 24872,
  [SMALL_STATE(583)] = 24883,
  [SMALL_STATE(584)] = 24894,
  [SMALL_STATE(585)] = 24905,
  [SMALL_STATE(586)] = 24916,
  [SMALL_STATE(587)] = 24927,
  [SMALL_STATE(588)] = 24938,
  [SMALL_STATE(589)] = 24949,
  [SMALL_STATE(590)] = 24960,
  [SMALL_STATE(591)] = 24971,
  [SMALL_STATE(592)] = 24982,
  [SMALL_STATE(593)] = 24993,
  [SMALL_STATE(594)] = 25004,
  [SMALL_STATE(595)] = 25015,
  [SMALL_STATE(596)] = 25026,
  [SMALL_STATE(597)] = 25037,
  [SMALL_STATE(598)] = 25048,
  [SMALL_STATE(599)] = 25059,
  [SMALL_STATE(600)] = 25070,
  [SMALL_STATE(601)] = 25081,
  [SMALL_STATE(602)] = 25092,
  [SMALL_STATE(603)] = 25103,
  [SMALL_STATE(604)] = 25114,
  [SMALL_STATE(605)] = 25125,
  [SMALL_STATE(606)] = 25136,
  [SMALL_STATE(607)] = 25147,
  [SMALL_STATE(608)] = 25158,
  [SMALL_STATE(609)] = 25169,
  [SMALL_STATE(610)] = 25180,
  [SMALL_STATE(611)] = 25191,
  [SMALL_STATE(612)] = 25202,
  [SMALL_STATE(613)] = 25213,
  [SMALL_STATE(614)] = 25224,
  [SMALL_STATE(615)] = 25235,
  [SMALL_STATE(616)] = 25246,
  [SMALL_STATE(617)] = 25257,
  [SMALL_STATE(618)] = 25268,
  [SMALL_STATE(619)] = 25279,
  [SMALL_STATE(620)] = 25290,
  [SMALL_STATE(621)] = 25301,
  [SMALL_STATE(622)] = 25312,
  [SMALL_STATE(623)] = 25323,
  [SMALL_STATE(624)] = 25334,
  [SMALL_STATE(625)] = 25345,
  [SMALL_STATE(626)] = 25356,
  [SMALL_STATE(627)] = 25367,
  [SMALL_STATE(628)] = 25378,
  [SMALL_STATE(629)] = 25389,
  [SMALL_STATE(630)] = 25400,
  [SMALL_STATE(631)] = 25411,
  [SMALL_STATE(632)] = 25422,
  [SMALL_STATE(633)] = 25433,
  [SMALL_STATE(634)] = 25444,
  [SMALL_STATE(635)] = 25455,
  [SMALL_STATE(636)] = 25466,
  [SMALL_STATE(637)] = 25477,
  [SMALL_STATE(638)] = 25488,
  [SMALL_STATE(639)] = 25499,
  [SMALL_STATE(640)] = 25510,
  [SMALL_STATE(641)] = 25521,
  [SMALL_STATE(642)] = 25532,
  [SMALL_STATE(643)] = 25543,
  [SMALL_STATE(644)] = 25551,
  [SMALL_STATE(645)] = 25559,
  [SMALL_STATE(646)] = 25567,
  [SMALL_STATE(647)] = 25575,
  [SMALL_STATE(648)] = 25583,
  [SMALL_STATE(649)] = 25591,
  [SMALL_STATE(650)] = 25599,
  [SMALL_STATE(651)] = 25607,
  [SMALL_STATE(652)] = 25615,
  [SMALL_STATE(653)] = 25623,
  [SMALL_STATE(654)] = 25631,
  [SMALL_STATE(655)] = 25639,
  [SMALL_STATE(656)] = 25647,
  [SMALL_STATE(657)] = 25655,
  [SMALL_STATE(658)] = 25663,
  [SMALL_STATE(659)] = 25671,
  [SMALL_STATE(660)] = 25679,
  [SMALL_STATE(661)] = 25687,
  [SMALL_STATE(662)] = 25695,
  [SMALL_STATE(663)] = 25703,
  [SMALL_STATE(664)] = 25711,
  [SMALL_STATE(665)] = 25719,
  [SMALL_STATE(666)] = 25727,
  [SMALL_STATE(667)] = 25735,
  [SMALL_STATE(668)] = 25743,
  [SMALL_STATE(669)] = 25751,
  [SMALL_STATE(670)] = 25759,
  [SMALL_STATE(671)] = 25767,
  [SMALL_STATE(672)] = 25775,
  [SMALL_STATE(673)] = 25783,
  [SMALL_STATE(674)] = 25791,
  [SMALL_STATE(675)] = 25799,
  [SMALL_STATE(676)] = 25807,
  [SMALL_STATE(677)] = 25815,
  [SMALL_STATE(678)] = 25823,
  [SMALL_STATE(679)] = 25831,
  [SMALL_STATE(680)] = 25839,
  [SMALL_STATE(681)] = 25847,
  [SMALL_STATE(682)] = 25855,
  [SMALL_STATE(683)] = 25863,
  [SMALL_STATE(684)] = 25871,
  [SMALL_STATE(685)] = 25879,
  [SMALL_STATE(686)] = 25887,
  [SMALL_STATE(687)] = 25895,
  [SMALL_STATE(688)] = 25903,
  [SMALL_STATE(689)] = 25911,
  [SMALL_STATE(690)] = 25919,
  [SMALL_STATE(691)] = 25927,
  [SMALL_STATE(692)] = 25935,
  [SMALL_STATE(693)] = 25943,
  [SMALL_STATE(694)] = 25951,
  [SMALL_STATE(695)] = 25959,
  [SMALL_STATE(696)] = 25967,
  [SMALL_STATE(697)] = 25975,
  [SMALL_STATE(698)] = 25983,
  [SMALL_STATE(699)] = 25991,
  [SMALL_STATE(700)] = 25999,
  [SMALL_STATE(701)] = 26007,
  [SMALL_STATE(702)] = 26015,
  [SMALL_STATE(703)] = 26023,
  [SMALL_STATE(704)] = 26031,
  [SMALL_STATE(705)] = 26039,
  [SMALL_STATE(706)] = 26047,
  [SMALL_STATE(707)] = 26055,
  [SMALL_STATE(708)] = 26063,
  [SMALL_STATE(709)] = 26071,
  [SMALL_STATE(710)] = 26079,
  [SMALL_STATE(711)] = 26087,
  [SMALL_STATE(712)] = 26095,
  [SMALL_STATE(713)] = 26103,
  [SMALL_STATE(714)] = 26111,
  [SMALL_STATE(715)] = 26119,
  [SMALL_STATE(716)] = 26127,
  [SMALL_STATE(717)] = 26135,
  [SMALL_STATE(718)] = 26143,
  [SMALL_STATE(719)] = 26151,
  [SMALL_STATE(720)] = 26159,
  [SMALL_STATE(721)] = 26167,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(705),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(373),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(202),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(54),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(243),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(243),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(242),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(239),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(33),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(372),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(131),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(701),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(701),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(383),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(58),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(640),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_metavariable, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_metavariable, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(66),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(587),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(63),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(568),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(67),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(614),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(85),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(608),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(424),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(22),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(522),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(430),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(29),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(456),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(28),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(545),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(406),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(400),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(599),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(407),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(496),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(87),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(421),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_end, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(437),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 4),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(440),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 4),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 5),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ellipsis, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 4),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 4),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 6),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 10),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(536),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 8),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 6),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 5),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 9),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 7),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_branch, 2),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_branch, 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [1243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
