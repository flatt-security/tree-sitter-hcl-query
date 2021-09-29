#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 716
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
  [8] = {.lex_state = 4, .external_lex_state = 2},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
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
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 1, .external_lex_state = 3},
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
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 47},
  [188] = {.lex_state = 47},
  [189] = {.lex_state = 47},
  [190] = {.lex_state = 3},
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
  [231] = {.lex_state = 47, .external_lex_state = 4},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
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
  [245] = {.lex_state = 47, .external_lex_state = 5},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 47, .external_lex_state = 4},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 47, .external_lex_state = 4},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 47, .external_lex_state = 4},
  [258] = {.lex_state = 47, .external_lex_state = 4},
  [259] = {.lex_state = 47, .external_lex_state = 4},
  [260] = {.lex_state = 47},
  [261] = {.lex_state = 47, .external_lex_state = 5},
  [262] = {.lex_state = 47, .external_lex_state = 5},
  [263] = {.lex_state = 47, .external_lex_state = 5},
  [264] = {.lex_state = 47, .external_lex_state = 4},
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
  [304] = {.lex_state = 47, .external_lex_state = 5},
  [305] = {.lex_state = 47, .external_lex_state = 5},
  [306] = {.lex_state = 47, .external_lex_state = 4},
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
  [319] = {.lex_state = 47, .external_lex_state = 5},
  [320] = {.lex_state = 47, .external_lex_state = 4},
  [321] = {.lex_state = 47, .external_lex_state = 4},
  [322] = {.lex_state = 47, .external_lex_state = 5},
  [323] = {.lex_state = 47, .external_lex_state = 4},
  [324] = {.lex_state = 47, .external_lex_state = 4},
  [325] = {.lex_state = 47, .external_lex_state = 4},
  [326] = {.lex_state = 47, .external_lex_state = 4},
  [327] = {.lex_state = 47, .external_lex_state = 5},
  [328] = {.lex_state = 47, .external_lex_state = 5},
  [329] = {.lex_state = 47, .external_lex_state = 4},
  [330] = {.lex_state = 47, .external_lex_state = 5},
  [331] = {.lex_state = 47, .external_lex_state = 4},
  [332] = {.lex_state = 47, .external_lex_state = 5},
  [333] = {.lex_state = 47, .external_lex_state = 5},
  [334] = {.lex_state = 47, .external_lex_state = 4},
  [335] = {.lex_state = 47, .external_lex_state = 5},
  [336] = {.lex_state = 47, .external_lex_state = 5},
  [337] = {.lex_state = 47, .external_lex_state = 5},
  [338] = {.lex_state = 47, .external_lex_state = 4},
  [339] = {.lex_state = 47, .external_lex_state = 4},
  [340] = {.lex_state = 47, .external_lex_state = 5},
  [341] = {.lex_state = 47, .external_lex_state = 5},
  [342] = {.lex_state = 47, .external_lex_state = 5},
  [343] = {.lex_state = 47, .external_lex_state = 5},
  [344] = {.lex_state = 47, .external_lex_state = 5},
  [345] = {.lex_state = 47, .external_lex_state = 5},
  [346] = {.lex_state = 47, .external_lex_state = 5},
  [347] = {.lex_state = 47, .external_lex_state = 5},
  [348] = {.lex_state = 47, .external_lex_state = 4},
  [349] = {.lex_state = 47, .external_lex_state = 5},
  [350] = {.lex_state = 47, .external_lex_state = 4},
  [351] = {.lex_state = 47, .external_lex_state = 4},
  [352] = {.lex_state = 47, .external_lex_state = 5},
  [353] = {.lex_state = 47, .external_lex_state = 5},
  [354] = {.lex_state = 47, .external_lex_state = 5},
  [355] = {.lex_state = 47, .external_lex_state = 4},
  [356] = {.lex_state = 47, .external_lex_state = 5},
  [357] = {.lex_state = 47, .external_lex_state = 4},
  [358] = {.lex_state = 47, .external_lex_state = 4},
  [359] = {.lex_state = 47, .external_lex_state = 4},
  [360] = {.lex_state = 47, .external_lex_state = 4},
  [361] = {.lex_state = 47, .external_lex_state = 5},
  [362] = {.lex_state = 47, .external_lex_state = 5},
  [363] = {.lex_state = 47, .external_lex_state = 5},
  [364] = {.lex_state = 47, .external_lex_state = 5},
  [365] = {.lex_state = 47, .external_lex_state = 5},
  [366] = {.lex_state = 47, .external_lex_state = 4},
  [367] = {.lex_state = 47, .external_lex_state = 5},
  [368] = {.lex_state = 47, .external_lex_state = 4},
  [369] = {.lex_state = 1, .external_lex_state = 2},
  [370] = {.lex_state = 1, .external_lex_state = 2},
  [371] = {.lex_state = 1, .external_lex_state = 2},
  [372] = {.lex_state = 4, .external_lex_state = 2},
  [373] = {.lex_state = 1, .external_lex_state = 2},
  [374] = {.lex_state = 4, .external_lex_state = 2},
  [375] = {.lex_state = 1, .external_lex_state = 2},
  [376] = {.lex_state = 1, .external_lex_state = 2},
  [377] = {.lex_state = 0, .external_lex_state = 6},
  [378] = {.lex_state = 0, .external_lex_state = 7},
  [379] = {.lex_state = 0, .external_lex_state = 6},
  [380] = {.lex_state = 0, .external_lex_state = 7},
  [381] = {.lex_state = 0, .external_lex_state = 7},
  [382] = {.lex_state = 0, .external_lex_state = 8},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 0, .external_lex_state = 8},
  [386] = {.lex_state = 1, .external_lex_state = 2},
  [387] = {.lex_state = 0, .external_lex_state = 6},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 0, .external_lex_state = 7},
  [390] = {.lex_state = 0, .external_lex_state = 7},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 0, .external_lex_state = 7},
  [393] = {.lex_state = 0, .external_lex_state = 6},
  [394] = {.lex_state = 0, .external_lex_state = 8},
  [395] = {.lex_state = 0, .external_lex_state = 7},
  [396] = {.lex_state = 0, .external_lex_state = 8},
  [397] = {.lex_state = 0, .external_lex_state = 8},
  [398] = {.lex_state = 0, .external_lex_state = 8},
  [399] = {.lex_state = 47},
  [400] = {.lex_state = 47},
  [401] = {.lex_state = 47},
  [402] = {.lex_state = 47},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 5, .external_lex_state = 2},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 47, .external_lex_state = 2},
  [414] = {.lex_state = 47},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 47},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 47},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 47, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 6},
  [423] = {.lex_state = 0, .external_lex_state = 6},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 47},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 47},
  [428] = {.lex_state = 47},
  [429] = {.lex_state = 0, .external_lex_state = 7},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 47},
  [433] = {.lex_state = 47},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0, .external_lex_state = 7},
  [436] = {.lex_state = 0, .external_lex_state = 7},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 47},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0, .external_lex_state = 6},
  [442] = {.lex_state = 0, .external_lex_state = 6},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 6},
  [449] = {.lex_state = 0, .external_lex_state = 9},
  [450] = {.lex_state = 0, .external_lex_state = 6},
  [451] = {.lex_state = 0, .external_lex_state = 6},
  [452] = {.lex_state = 0, .external_lex_state = 9},
  [453] = {.lex_state = 0, .external_lex_state = 8},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0, .external_lex_state = 7},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0, .external_lex_state = 8},
  [458] = {.lex_state = 0, .external_lex_state = 6},
  [459] = {.lex_state = 0, .external_lex_state = 6},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0, .external_lex_state = 7},
  [462] = {.lex_state = 0, .external_lex_state = 6},
  [463] = {.lex_state = 0, .external_lex_state = 7},
  [464] = {.lex_state = 0, .external_lex_state = 6},
  [465] = {.lex_state = 0, .external_lex_state = 7},
  [466] = {.lex_state = 0, .external_lex_state = 6},
  [467] = {.lex_state = 0, .external_lex_state = 6},
  [468] = {.lex_state = 0, .external_lex_state = 6},
  [469] = {.lex_state = 0, .external_lex_state = 6},
  [470] = {.lex_state = 0, .external_lex_state = 9},
  [471] = {.lex_state = 0, .external_lex_state = 6},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0, .external_lex_state = 7},
  [474] = {.lex_state = 0, .external_lex_state = 7},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0, .external_lex_state = 6},
  [477] = {.lex_state = 0, .external_lex_state = 7},
  [478] = {.lex_state = 0, .external_lex_state = 7},
  [479] = {.lex_state = 0, .external_lex_state = 7},
  [480] = {.lex_state = 0, .external_lex_state = 7},
  [481] = {.lex_state = 0, .external_lex_state = 7},
  [482] = {.lex_state = 0, .external_lex_state = 6},
  [483] = {.lex_state = 0, .external_lex_state = 7},
  [484] = {.lex_state = 0, .external_lex_state = 7},
  [485] = {.lex_state = 0, .external_lex_state = 6},
  [486] = {.lex_state = 0, .external_lex_state = 7},
  [487] = {.lex_state = 0, .external_lex_state = 8},
  [488] = {.lex_state = 0, .external_lex_state = 4},
  [489] = {.lex_state = 0, .external_lex_state = 8},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0, .external_lex_state = 8},
  [492] = {.lex_state = 0, .external_lex_state = 8},
  [493] = {.lex_state = 0, .external_lex_state = 10},
  [494] = {.lex_state = 0, .external_lex_state = 8},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0, .external_lex_state = 8},
  [497] = {.lex_state = 0, .external_lex_state = 8},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0, .external_lex_state = 4},
  [501] = {.lex_state = 3},
  [502] = {.lex_state = 0, .external_lex_state = 8},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0, .external_lex_state = 8},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0, .external_lex_state = 11},
  [507] = {.lex_state = 0, .external_lex_state = 8},
  [508] = {.lex_state = 0, .external_lex_state = 8},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0, .external_lex_state = 8},
  [511] = {.lex_state = 0, .external_lex_state = 8},
  [512] = {.lex_state = 0, .external_lex_state = 8},
  [513] = {.lex_state = 0, .external_lex_state = 8},
  [514] = {.lex_state = 0, .external_lex_state = 4},
  [515] = {.lex_state = 0, .external_lex_state = 8},
  [516] = {.lex_state = 0, .external_lex_state = 8},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0, .external_lex_state = 4},
  [519] = {.lex_state = 0, .external_lex_state = 8},
  [520] = {.lex_state = 0, .external_lex_state = 5},
  [521] = {.lex_state = 0, .external_lex_state = 5},
  [522] = {.lex_state = 0, .external_lex_state = 5},
  [523] = {.lex_state = 0, .external_lex_state = 4},
  [524] = {.lex_state = 0, .external_lex_state = 5},
  [525] = {.lex_state = 0, .external_lex_state = 5},
  [526] = {.lex_state = 0, .external_lex_state = 4},
  [527] = {.lex_state = 0, .external_lex_state = 8},
  [528] = {.lex_state = 0, .external_lex_state = 8},
  [529] = {.lex_state = 0, .external_lex_state = 5},
  [530] = {.lex_state = 0, .external_lex_state = 8},
  [531] = {.lex_state = 0, .external_lex_state = 5},
  [532] = {.lex_state = 0, .external_lex_state = 8},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0, .external_lex_state = 11},
  [535] = {.lex_state = 0, .external_lex_state = 4},
  [536] = {.lex_state = 0, .external_lex_state = 8},
  [537] = {.lex_state = 0, .external_lex_state = 8},
  [538] = {.lex_state = 0, .external_lex_state = 4},
  [539] = {.lex_state = 47, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 5},
  [541] = {.lex_state = 0, .external_lex_state = 8},
  [542] = {.lex_state = 0, .external_lex_state = 8},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 47},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 47},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 47},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0, .external_lex_state = 9},
  [561] = {.lex_state = 0, .external_lex_state = 9},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 47},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0, .external_lex_state = 4},
  [570] = {.lex_state = 0, .external_lex_state = 9},
  [571] = {.lex_state = 0, .external_lex_state = 9},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 47},
  [576] = {.lex_state = 0, .external_lex_state = 4},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0, .external_lex_state = 4},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0, .external_lex_state = 4},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 47},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0, .external_lex_state = 4},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0, .external_lex_state = 4},
  [589] = {.lex_state = 0, .external_lex_state = 4},
  [590] = {.lex_state = 47},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 47},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0, .external_lex_state = 4},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 47},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 47},
  [616] = {.lex_state = 0, .external_lex_state = 9},
  [617] = {.lex_state = 0, .external_lex_state = 9},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0, .external_lex_state = 4},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0, .external_lex_state = 4},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 47},
  [629] = {.lex_state = 0, .external_lex_state = 4},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0, .external_lex_state = 4},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0, .external_lex_state = 4},
  [639] = {.lex_state = 0, .external_lex_state = 4},
  [640] = {.lex_state = 0, .external_lex_state = 4},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0, .external_lex_state = 5},
  [643] = {.lex_state = 0, .external_lex_state = 4},
  [644] = {.lex_state = 0, .external_lex_state = 4},
  [645] = {.lex_state = 0, .external_lex_state = 12},
  [646] = {.lex_state = 0, .external_lex_state = 4},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0, .external_lex_state = 4},
  [650] = {.lex_state = 0, .external_lex_state = 5},
  [651] = {.lex_state = 0, .external_lex_state = 12},
  [652] = {.lex_state = 0, .external_lex_state = 13},
  [653] = {.lex_state = 0, .external_lex_state = 5},
  [654] = {.lex_state = 0, .external_lex_state = 13},
  [655] = {.lex_state = 0, .external_lex_state = 4},
  [656] = {.lex_state = 0, .external_lex_state = 13},
  [657] = {.lex_state = 0, .external_lex_state = 4},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0, .external_lex_state = 4},
  [661] = {.lex_state = 0, .external_lex_state = 12},
  [662] = {.lex_state = 0, .external_lex_state = 12},
  [663] = {.lex_state = 0, .external_lex_state = 4},
  [664] = {.lex_state = 0, .external_lex_state = 4},
  [665] = {.lex_state = 0, .external_lex_state = 5},
  [666] = {.lex_state = 47},
  [667] = {.lex_state = 47},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0, .external_lex_state = 4},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0, .external_lex_state = 13},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 0, .external_lex_state = 12},
  [675] = {.lex_state = 0, .external_lex_state = 13},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0, .external_lex_state = 4},
  [678] = {.lex_state = 0, .external_lex_state = 4},
  [679] = {.lex_state = 47},
  [680] = {.lex_state = 0, .external_lex_state = 4},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0, .external_lex_state = 4},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0, .external_lex_state = 13},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0, .external_lex_state = 4},
  [687] = {.lex_state = 0, .external_lex_state = 13},
  [688] = {.lex_state = 0, .external_lex_state = 5},
  [689] = {.lex_state = 0, .external_lex_state = 5},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0, .external_lex_state = 13},
  [692] = {.lex_state = 47},
  [693] = {.lex_state = 0, .external_lex_state = 4},
  [694] = {.lex_state = 0, .external_lex_state = 4},
  [695] = {.lex_state = 0, .external_lex_state = 13},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 47},
  [698] = {.lex_state = 0, .external_lex_state = 13},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0, .external_lex_state = 4},
  [701] = {.lex_state = 0, .external_lex_state = 12},
  [702] = {.lex_state = 0, .external_lex_state = 9},
  [703] = {.lex_state = 0, .external_lex_state = 13},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0, .external_lex_state = 9},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 47},
  [715] = {.lex_state = 0},
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
    [ts_external_token_quoted_template_end] = true,
  },
  [13] = {
    [ts_external_token_heredoc_identifier] = true,
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
    [sym_config_file] = STATE(713),
    [sym_shisho_metavariable] = STATE(402),
    [sym_shisho_ellipsis_metavariable] = STATE(402),
    [sym_body] = STATE(712),
    [sym_attribute] = STATE(402),
    [sym_block] = STATE(402),
    [sym_object] = STATE(712),
    [sym_object_start] = STATE(16),
    [aux_sym_body_repeat1] = STATE(402),
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(48), 1,
      sym_for_intro,
    STATE(311), 1,
      sym_object_end,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(605), 1,
      sym__object_elems,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(88), 1,
      sym_for_intro,
    STATE(208), 1,
      sym_object_end,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(578), 1,
      sym__object_elems,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(84), 1,
      sym_for_intro,
    STATE(268), 1,
      sym_object_end,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(609), 1,
      sym__object_elems,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(90), 1,
      sym_for_intro,
    STATE(208), 1,
      sym_object_end,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(578), 1,
      sym__object_elems,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(93), 1,
      sym_for_intro,
    STATE(163), 1,
      sym_object_end,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(598), 1,
      sym__object_elems,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(92), 1,
      sym_for_intro,
    STATE(341), 1,
      sym_object_end,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(607), 1,
      sym__object_elems,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [666] = 30,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(83), 1,
      sym_for_intro,
    STATE(218), 1,
      sym_tuple_end,
    STATE(403), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(574), 1,
      sym__tuple_elems,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [774] = 30,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(46), 1,
      sym_for_intro,
    STATE(325), 1,
      sym_tuple_end,
    STATE(403), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(604), 1,
      sym__tuple_elems,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [882] = 29,
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
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(24), 1,
      sym__comma,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(11), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [988] = 29,
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
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(22), 1,
      sym__comma,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(89), 1,
      sym_for_intro,
    STATE(280), 1,
      sym_tuple_end,
    STATE(403), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(546), 1,
      sym__tuple_elems,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(54), 1,
      sym_for_intro,
    STATE(365), 1,
      sym_tuple_end,
    STATE(403), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(557), 1,
      sym__tuple_elems,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [1310] = 29,
    ACTIONS(73), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(90), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(96), 1,
      sym_null_lit,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LT_LT,
    ACTIONS(111), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(114), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(32), 1,
      sym__comma,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(14), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(47), 1,
      sym_for_intro,
    STATE(145), 1,
      sym_tuple_end,
    STATE(403), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    STATE(634), 1,
      sym__tuple_elems,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [1524] = 29,
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
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(10), 1,
      sym_object_elem,
    STATE(208), 1,
      sym_object_end,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(578), 1,
      sym__object_elems,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(290), 1,
      sym__function_call_end,
    STATE(403), 1,
      sym_conditional,
    STATE(409), 1,
      sym_expression,
    STATE(559), 1,
      sym_function_arguments,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(356), 1,
      sym__function_call_end,
    STATE(403), 1,
      sym_conditional,
    STATE(409), 1,
      sym_expression,
    STATE(555), 1,
      sym_function_arguments,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(237), 1,
      sym__function_call_end,
    STATE(403), 1,
      sym_conditional,
    STATE(409), 1,
      sym_expression,
    STATE(551), 1,
      sym_function_arguments,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(170), 1,
      sym__function_call_end,
    STATE(403), 1,
      sym_conditional,
    STATE(409), 1,
      sym_expression,
    STATE(608), 1,
      sym_function_arguments,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(331), 1,
      sym__function_call_end,
    STATE(403), 1,
      sym_conditional,
    STATE(409), 1,
      sym_expression,
    STATE(545), 1,
      sym_function_arguments,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [2139] = 27,
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
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(373), 1,
      sym_object_elem,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [2238] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      sym_strip_marker,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    ACTIONS(151), 1,
      sym_template_interpolation_end,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(525), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(245), 9,
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
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(373), 1,
      sym_object_elem,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [2436] = 27,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    ACTIONS(153), 1,
      sym_strip_marker,
    ACTIONS(155), 1,
      sym_template_interpolation_end,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(522), 1,
      sym_expression,
    STATE(525), 1,
      sym_conditional,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(245), 9,
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
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    ACTIONS(157), 1,
      sym_strip_marker,
    ACTIONS(159), 1,
      sym_template_interpolation_end,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(525), 1,
      sym_conditional,
    STATE(529), 1,
      sym_expression,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(245), 9,
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
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    ACTIONS(161), 1,
      sym_strip_marker,
    ACTIONS(163), 1,
      sym_template_interpolation_end,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(521), 1,
      sym_expression,
    STATE(525), 1,
      sym_conditional,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(245), 9,
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
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    ACTIONS(165), 1,
      sym_strip_marker,
    ACTIONS(167), 1,
      sym_template_interpolation_end,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(525), 1,
      sym_conditional,
    STATE(531), 1,
      sym_expression,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(245), 9,
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
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    ACTIONS(169), 1,
      sym_strip_marker,
    ACTIONS(171), 1,
      sym_template_interpolation_end,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(520), 1,
      sym_expression,
    STATE(525), 1,
      sym_conditional,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(245), 9,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(431), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(431), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [3123] = 26,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(373), 1,
      sym_object_elem,
    STATE(403), 1,
      sym_conditional,
    STATE(501), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [3219] = 26,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(431), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(431), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [3411] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(514), 1,
      sym_conditional,
    STATE(523), 1,
      sym_expression,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [3504] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(549), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(610), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [3690] = 13,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(209), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(213), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(199), 12,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(410), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [3852] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(637), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [3945] = 12,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(209), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(213), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(199), 13,
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
  [4012] = 25,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(573), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [4105] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(572), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [4198] = 11,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(209), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(199), 15,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(564), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(419), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(430), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(550), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [4635] = 25,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(370), 1,
      sym_expression,
    STATE(371), 1,
      sym_conditional,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [4728] = 25,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(490), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [4821] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(618), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [4914] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(407), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [5007] = 25,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(619), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [5100] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(434), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_expression,
    STATE(418), 1,
      sym_conditional,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [5379] = 25,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(584), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(592), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(408), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(621), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(404), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [5844] = 9,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 11,
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
    ACTIONS(199), 17,
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
  [5905] = 25,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(369), 1,
      sym_expression,
    STATE(371), 1,
      sym_conditional,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [5998] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(404), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [6091] = 25,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(548), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [6184] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(514), 1,
      sym_conditional,
    STATE(538), 1,
      sym_expression,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [6277] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(406), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [6370] = 25,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(620), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [6463] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 12,
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
    ACTIONS(199), 21,
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
  [6518] = 8,
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 11,
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
    ACTIONS(199), 19,
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
  [6577] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(500), 1,
      sym_expression,
    STATE(514), 1,
      sym_conditional,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [6670] = 25,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(405), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [6763] = 25,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(601), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [6856] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(488), 1,
      sym_expression,
    STATE(514), 1,
      sym_conditional,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [6949] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(524), 1,
      sym_expression,
    STATE(525), 1,
      sym_conditional,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(245), 9,
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
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(514), 1,
      sym_conditional,
    STATE(526), 1,
      sym_expression,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_expression,
    STATE(418), 1,
      sym_conditional,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(552), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(595), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(207), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
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
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(209), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(213), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
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
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(514), 1,
      sym_conditional,
    STATE(535), 1,
      sym_expression,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(158), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(154), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(615), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(593), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(591), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(431), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(590), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(426), 1,
      sym_expression,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(575), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [8385] = 25,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(514), 1,
      sym_conditional,
    STATE(518), 1,
      sym_expression,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(558), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(403), 1,
      sym_conditional,
    STATE(553), 1,
      sym_expression,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [8751] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [8838] = 23,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [8925] = 23,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [9012] = 23,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [9099] = 23,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [9186] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(116), 3,
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
  [9241] = 23,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [9328] = 23,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [9415] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [9502] = 23,
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
    ACTIONS(53), 1,
      anon_sym_COLON_LBRACK,
    STATE(5), 1,
      sym_object_start,
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [9589] = 23,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [9676] = 23,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [9763] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [9850] = 23,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(69), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9937] = 23,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(62), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10024] = 23,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [10111] = 23,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [10198] = 23,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(41), 9,
      sym_shisho_metavariable,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10285] = 23,
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
    STATE(15), 1,
      sym_tuple_start,
    STATE(698), 1,
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
    STATE(161), 2,
      sym_tuple,
      sym_object,
    STATE(167), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(175), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(176), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(150), 3,
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
  [10372] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(123), 3,
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
  [10427] = 23,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [10514] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(156), 2,
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
  [10569] = 23,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [10656] = 23,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [10743] = 23,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [10830] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
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
  [10917] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
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
  [11004] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [11091] = 7,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(156), 2,
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
  [11146] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
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
  [11233] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
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
  [11320] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
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
  [11407] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
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
  [11494] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(131), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(139), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(143), 1,
      sym_null_lit,
    ACTIONS(149), 1,
      sym_quoted_template_start,
    STATE(7), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(687), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(340), 2,
      sym_tuple,
      sym_object,
    STATE(343), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(345), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(346), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(337), 3,
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
  [11581] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [11668] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [11755] = 7,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(114), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(293), 10,
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
    ACTIONS(291), 21,
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
  [11810] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(250), 9,
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
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [11984] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [12071] = 23,
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
    STATE(8), 1,
      sym_tuple_start,
    STATE(684), 1,
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
    STATE(215), 2,
      sym_tuple,
      sym_object,
    STATE(246), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(252), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(255), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(242), 3,
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
  [12158] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [12245] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
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
  [12332] = 23,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(253), 9,
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
    ACTIONS(181), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(189), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(193), 1,
      sym_null_lit,
    ACTIONS(197), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(9), 1,
      sym_tuple_start,
    STATE(703), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(310), 2,
      sym_tuple,
      sym_object,
    STATE(312), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(313), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(314), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(309), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(231), 9,
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
    ACTIONS(53), 1,
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
    STATE(12), 1,
      sym_tuple_start,
    STATE(675), 1,
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
    STATE(272), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(273), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(289), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(297), 2,
      sym_tuple,
      sym_object,
    STATE(298), 3,
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
  [12593] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
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
  [12642] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 21,
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
    STATE(20), 1,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(181), 3,
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
  [14173] = 7,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(181), 3,
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
  [14222] = 7,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
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
  [14271] = 7,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(177), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(293), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(291), 21,
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
    ACTIONS(437), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(181), 3,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
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
  [14439] = 9,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 14,
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
  [14491] = 11,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(201), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 12,
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
  [14547] = 12,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(201), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 10,
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
  [14605] = 13,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(201), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 9,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [14665] = 9,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 15,
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
  [14717] = 17,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
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
  [14785] = 13,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(475), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 10,
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
  [14845] = 8,
    ACTIONS(451), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(449), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 16,
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
  [14895] = 11,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 13,
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
  [14951] = 8,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 17,
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
  [15001] = 12,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
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
    STATE(212), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(222), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(234), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 11,
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
  [15059] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(276), 3,
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
  [15104] = 8,
    ACTIONS(481), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(276), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 5,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 15,
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
  [15153] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(276), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 17,
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
  [15198] = 9,
    ACTIONS(481), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(276), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 5,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 13,
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
  [15249] = 18,
    ACTIONS(253), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(481), 1,
      anon_sym_SLASH,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(489), 1,
      anon_sym_DOT_STAR,
    ACTIONS(491), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(499), 1,
      anon_sym_AMP_AMP,
    ACTIONS(501), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(495), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(497), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(276), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_QMARK,
  [15318] = 11,
    ACTIONS(481), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(495), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(201), 3,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(276), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 11,
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
  [15373] = 12,
    ACTIONS(481), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(495), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(497), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(201), 3,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(276), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 9,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15430] = 13,
    ACTIONS(481), 1,
      anon_sym_SLASH,
    ACTIONS(499), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(495), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(497), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(278), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(201), 3,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(276), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [15489] = 5,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
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
    ACTIONS(399), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 22,
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
    ACTIONS(423), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 22,
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
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(210), 3,
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
  [15650] = 7,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(211), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(293), 4,
      anon_sym_COLON_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(291), 17,
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
  [15695] = 7,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(205), 3,
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
  [15740] = 3,
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
    ACTIONS(377), 22,
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
  [15777] = 3,
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
    ACTIONS(373), 22,
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
  [15814] = 7,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(210), 3,
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
  [15859] = 7,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(277), 2,
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
  [15904] = 3,
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
  [15940] = 3,
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
  [15976] = 13,
    ACTIONS(515), 1,
      anon_sym_SLASH,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(511), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(517), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(519), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(521), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(320), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 6,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16032] = 3,
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
  [16068] = 3,
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
  [16104] = 3,
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
  [16140] = 3,
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
  [16176] = 3,
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
  [16212] = 3,
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
  [16248] = 3,
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
  [16284] = 3,
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
  [16320] = 17,
    ACTIONS(515), 1,
      anon_sym_SLASH,
    ACTIONS(523), 1,
      anon_sym_AMP_AMP,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(529), 1,
      anon_sym_DOT_STAR,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(511), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(517), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(519), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(521), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(251), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(320), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [16384] = 13,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(547), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
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
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(361), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16440] = 12,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
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
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(361), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16494] = 11,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
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
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(361), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16546] = 9,
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
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(361), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 11,
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
  [16594] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(361), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 15,
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
  [16636] = 8,
    ACTIONS(539), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(537), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(361), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 13,
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
  [16682] = 3,
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
  [16718] = 8,
    ACTIONS(515), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(513), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(320), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 13,
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
  [16764] = 3,
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
  [16800] = 3,
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
  [16836] = 3,
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
  [16872] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(320), 3,
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
  [16914] = 11,
    ACTIONS(515), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(511), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(517), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(519), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(320), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 9,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16966] = 3,
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
    ACTIONS(405), 21,
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
  [17002] = 3,
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
  [17038] = 3,
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
    ACTIONS(317), 21,
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
  [17074] = 9,
    ACTIONS(515), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(511), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(320), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 11,
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
  [17122] = 3,
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
  [17158] = 3,
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
    ACTIONS(325), 21,
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
  [17194] = 3,
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
    ACTIONS(313), 21,
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
  [17230] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(361), 3,
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
  [17272] = 17,
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
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(363), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(251), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(361), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [17336] = 3,
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
  [17372] = 3,
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
  [17408] = 3,
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
  [17444] = 3,
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
  [17480] = 12,
    ACTIONS(515), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(201), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(511), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(517), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(519), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(521), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(320), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(199), 7,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17534] = 3,
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
  [17570] = 3,
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
  [17606] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(323), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(320), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(201), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 15,
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
  [17648] = 3,
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
  [17684] = 3,
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
  [17720] = 3,
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
  [17756] = 7,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(271), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(264), 3,
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
  [17798] = 7,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(275), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(267), 3,
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
  [17840] = 7,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(293), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(258), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(291), 15,
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
  [17882] = 5,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
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
  [17920] = 7,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(293), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(263), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(291), 15,
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
    STATE(362), 2,
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
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(275), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(266), 3,
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
  [18046] = 7,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
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
  [18088] = 7,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 2,
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
  [18130] = 7,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(362), 2,
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
  [18172] = 7,
    ACTIONS(567), 1,
      anon_sym_LBRACK,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(321), 2,
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
  [18214] = 3,
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
    ACTIONS(377), 18,
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
    ACTIONS(423), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 18,
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
    ACTIONS(399), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 18,
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
    ACTIONS(375), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 18,
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
  [18378] = 3,
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
  [18410] = 3,
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
  [18442] = 3,
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
  [18474] = 3,
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
  [18506] = 3,
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
  [18538] = 3,
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
  [18634] = 3,
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
  [18666] = 3,
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
  [18698] = 3,
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
  [18730] = 3,
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
  [18762] = 3,
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
  [18794] = 3,
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
  [18826] = 3,
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
  [18858] = 3,
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
  [18890] = 3,
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
  [18922] = 3,
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
    ACTIONS(405), 17,
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
  [18986] = 3,
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
  [19018] = 3,
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
    ACTIONS(319), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 17,
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
  [19146] = 3,
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
  [19178] = 3,
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
    ACTIONS(325), 17,
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
    ACTIONS(315), 6,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 17,
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
  [19373] = 3,
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
  [19460] = 3,
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
  [19489] = 3,
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
  [19518] = 3,
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
  [19547] = 3,
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
  [19576] = 3,
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
  [19605] = 3,
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
  [19634] = 3,
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
  [19663] = 3,
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
  [19692] = 3,
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
  [19721] = 3,
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
  [19750] = 3,
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
  [19779] = 3,
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
  [19808] = 3,
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
  [19837] = 3,
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
  [19866] = 3,
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
  [19895] = 3,
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
  [19924] = 3,
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
  [19953] = 3,
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
  [19982] = 3,
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
  [20011] = 3,
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
  [20040] = 3,
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
  [20127] = 3,
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
  [20156] = 3,
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
  [20185] = 3,
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
  [20214] = 3,
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
  [20243] = 3,
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
  [20272] = 3,
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
  [20301] = 3,
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
  [20330] = 3,
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
  [20359] = 3,
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
  [20388] = 3,
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
  [20417] = 3,
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
  [20446] = 3,
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
  [20475] = 3,
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
  [20504] = 3,
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
  [20533] = 3,
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
  [20562] = 3,
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
  [20591] = 3,
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
  [20620] = 3,
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
  [20707] = 3,
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
  [20736] = 3,
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
  [20765] = 3,
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
  [20794] = 3,
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
  [20823] = 3,
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
  [20852] = 3,
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
  [20881] = 3,
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
  [20910] = 3,
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
  [21026] = 3,
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
  [21055] = 3,
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
  [21084] = 3,
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
  [21171] = 3,
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
  [21200] = 3,
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
  [21229] = 3,
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
  [21258] = 4,
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
  [21287] = 3,
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
  [21314] = 3,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
    ACTIONS(591), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(79), 11,
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
  [21393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(595), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(593), 10,
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
  [21419] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(587), 10,
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
  [21444] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(599), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(597), 9,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21468] = 13,
    ACTIONS(601), 1,
      sym_quoted_template_end,
    ACTIONS(603), 1,
      sym__template_literal_chunk,
    ACTIONS(605), 1,
      sym_template_interpolation_start,
    ACTIONS(607), 1,
      sym_template_directive_start,
    STATE(385), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    STATE(447), 1,
      sym_template_literal,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(651), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(393), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21512] = 12,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(609), 1,
      sym__template_literal_chunk,
    ACTIONS(611), 1,
      sym_template_interpolation_start,
    ACTIONS(613), 1,
      sym_heredoc_identifier,
    STATE(384), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(429), 1,
      aux_sym_template_literal_repeat1,
    STATE(449), 1,
      sym_template_if_branch,
    STATE(652), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21554] = 13,
    ACTIONS(603), 1,
      sym__template_literal_chunk,
    ACTIONS(605), 1,
      sym_template_interpolation_start,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(615), 1,
      sym_quoted_template_end,
    STATE(385), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(458), 1,
      sym_template_literal,
    STATE(701), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(393), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21598] = 12,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(609), 1,
      sym__template_literal_chunk,
    ACTIONS(611), 1,
      sym_template_interpolation_start,
    ACTIONS(617), 1,
      sym_heredoc_identifier,
    STATE(384), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(429), 1,
      aux_sym_template_literal_repeat1,
    STATE(449), 1,
      sym_template_if_branch,
    STATE(691), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21640] = 12,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(609), 1,
      sym__template_literal_chunk,
    ACTIONS(611), 1,
      sym_template_interpolation_start,
    ACTIONS(619), 1,
      sym_heredoc_identifier,
    STATE(384), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(429), 1,
      aux_sym_template_literal_repeat1,
    STATE(449), 1,
      sym_template_if_branch,
    STATE(671), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21682] = 12,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(625), 1,
      sym_template_directive_start,
    STATE(382), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(453), 1,
      aux_sym_template_literal_repeat1,
    STATE(470), 1,
      sym_template_if_branch,
    STATE(492), 1,
      sym_template_for_end,
    STATE(570), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(528), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21724] = 13,
    ACTIONS(603), 1,
      sym__template_literal_chunk,
    ACTIONS(605), 1,
      sym_template_interpolation_start,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(627), 1,
      sym_quoted_template_end,
    STATE(385), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    STATE(441), 1,
      sym_template_literal,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(662), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(393), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21768] = 12,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(629), 1,
      sym_template_directive_start,
    STATE(382), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(453), 1,
      aux_sym_template_literal_repeat1,
    STATE(470), 1,
      sym_template_if_branch,
    STATE(480), 1,
      sym_template_for_end,
    STATE(616), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(528), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21810] = 12,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(631), 1,
      sym_template_directive_start,
    STATE(382), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(453), 1,
      aux_sym_template_literal_repeat1,
    STATE(468), 1,
      sym_template_for_end,
    STATE(470), 1,
      sym_template_if_branch,
    STATE(561), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(528), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21852] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(635), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(633), 9,
      sym_quoted_template_start,
      anon_sym_COLON_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [21876] = 13,
    ACTIONS(603), 1,
      sym__template_literal_chunk,
    ACTIONS(605), 1,
      sym_template_interpolation_start,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(637), 1,
      sym_quoted_template_end,
    STATE(385), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    STATE(445), 1,
      sym_template_literal,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(645), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(393), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21920] = 13,
    ACTIONS(603), 1,
      sym__template_literal_chunk,
    ACTIONS(605), 1,
      sym_template_interpolation_start,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(639), 1,
      sym_quoted_template_end,
    STATE(385), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    STATE(451), 1,
      sym_template_literal,
    STATE(452), 1,
      sym_template_if_branch,
    STATE(661), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(393), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [21964] = 12,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(609), 1,
      sym__template_literal_chunk,
    ACTIONS(611), 1,
      sym_template_interpolation_start,
    ACTIONS(641), 1,
      sym_heredoc_identifier,
    STATE(384), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(429), 1,
      aux_sym_template_literal_repeat1,
    STATE(449), 1,
      sym_template_if_branch,
    STATE(656), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22006] = 12,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(609), 1,
      sym__template_literal_chunk,
    ACTIONS(611), 1,
      sym_template_interpolation_start,
    ACTIONS(643), 1,
      sym_heredoc_identifier,
    STATE(384), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(429), 1,
      aux_sym_template_literal_repeat1,
    STATE(449), 1,
      sym_template_if_branch,
    STATE(654), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22048] = 11,
    ACTIONS(645), 1,
      sym_quoted_template_end,
    ACTIONS(647), 1,
      sym__template_literal_chunk,
    ACTIONS(650), 1,
      sym_template_interpolation_start,
    ACTIONS(653), 1,
      sym_template_directive_start,
    STATE(385), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(391), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22087] = 11,
    ACTIONS(645), 1,
      sym_heredoc_identifier,
    ACTIONS(653), 1,
      sym_template_directive_start,
    ACTIONS(656), 1,
      sym__template_literal_chunk,
    ACTIONS(659), 1,
      sym_template_interpolation_start,
    STATE(384), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(429), 1,
      aux_sym_template_literal_repeat1,
    STATE(449), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(392), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22126] = 11,
    ACTIONS(603), 1,
      sym__template_literal_chunk,
    ACTIONS(605), 1,
      sym_template_interpolation_start,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(662), 1,
      sym_quoted_template_end,
    STATE(385), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    STATE(452), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(448), 2,
      sym_template_for,
      sym_template_if,
    STATE(391), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22165] = 11,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    STATE(382), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(453), 1,
      aux_sym_template_literal_repeat1,
    STATE(470), 1,
      sym_template_if_branch,
    STATE(711), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(528), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22204] = 11,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(609), 1,
      sym__template_literal_chunk,
    ACTIONS(611), 1,
      sym_template_interpolation_start,
    ACTIONS(662), 1,
      sym_heredoc_identifier,
    STATE(384), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(429), 1,
      aux_sym_template_literal_repeat1,
    STATE(449), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(455), 2,
      sym_template_for,
      sym_template_if,
    STATE(392), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22243] = 11,
    ACTIONS(607), 1,
      sym_template_directive_start,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    STATE(382), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(453), 1,
      aux_sym_template_literal_repeat1,
    STATE(470), 1,
      sym_template_if_branch,
    STATE(702), 1,
      sym__template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(528), 2,
      sym_template_for,
      sym_template_if,
    STATE(397), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22282] = 10,
    ACTIONS(621), 1,
      sym__template_literal_chunk,
    ACTIONS(623), 1,
      sym_template_interpolation_start,
    ACTIONS(662), 1,
      sym_template_directive_start,
    STATE(382), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(453), 1,
      aux_sym_template_literal_repeat1,
    STATE(470), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(528), 2,
      sym_template_for,
      sym_template_if,
    STATE(398), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym__template_repeat1,
  [22318] = 10,
    ACTIONS(653), 1,
      sym_template_directive_start,
    ACTIONS(664), 1,
      sym__template_literal_chunk,
    ACTIONS(667), 1,
      sym_template_interpolation_start,
    STATE(382), 1,
      sym_template_for_start,
    STATE(394), 1,
      sym_template_if_intro,
    STATE(453), 1,
      aux_sym_template_literal_repeat1,
    STATE(470), 1,
      sym_template_if_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(528), 2,
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
    STATE(428), 1,
      sym_block_end,
    STATE(603), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(402), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22384] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(9), 1,
      sym_shisho_ellipsis,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(427), 1,
      sym_block_end,
    STATE(568), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(402), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22414] = 6,
    ACTIONS(674), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(677), 1,
      sym_shisho_ellipsis,
    ACTIONS(680), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(401), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22439] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(685), 1,
      sym_shisho_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(401), 5,
      sym_shisho_metavariable,
      sym_shisho_ellipsis_metavariable,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [22464] = 3,
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
  [22483] = 3,
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
  [22502] = 8,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(303), 1,
      sym_object_end,
    STATE(443), 1,
      sym_ellipsis,
    STATE(614), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22528] = 8,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(220), 1,
      sym_object_end,
    STATE(472), 1,
      sym_ellipsis,
    STATE(622), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22554] = 8,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(220), 1,
      sym_object_end,
    STATE(454), 1,
      sym_ellipsis,
    STATE(597), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22580] = 8,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(283), 1,
      sym_object_end,
    STATE(444), 1,
      sym_ellipsis,
    STATE(627), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22606] = 8,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    STATE(31), 1,
      sym__comma,
    STATE(417), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(705), 1,
      sym_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22632] = 8,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(319), 1,
      sym_object_end,
    STATE(456), 1,
      sym_ellipsis,
    STATE(594), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22658] = 7,
    ACTIONS(699), 1,
      anon_sym_EQ,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(703), 1,
      sym_identifier,
    ACTIONS(705), 1,
      sym_quoted_template_start,
    STATE(399), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(413), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [22682] = 8,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(144), 1,
      sym_object_end,
    STATE(446), 1,
      sym_ellipsis,
    STATE(633), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22708] = 6,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
    ACTIONS(705), 1,
      sym_quoted_template_start,
    ACTIONS(707), 1,
      sym_identifier,
    STATE(400), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [22729] = 3,
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
  [22744] = 5,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym__comma,
    STATE(415), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(709), 3,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
  [22763] = 4,
    ACTIONS(716), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(714), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22780] = 7,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      sym__comma,
    STATE(415), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(704), 1,
      sym_ellipsis,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22803] = 3,
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
  [22818] = 6,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(357), 1,
      sym_tuple_end,
    STATE(556), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22838] = 6,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(249), 1,
      sym_tuple_end,
    STATE(613), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22858] = 5,
    ACTIONS(722), 1,
      anon_sym_LBRACE,
    ACTIONS(724), 1,
      sym_identifier,
    ACTIONS(727), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(421), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [22876] = 4,
    ACTIONS(732), 1,
      sym__template_literal_chunk,
    STATE(423), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(730), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22892] = 4,
    ACTIONS(736), 1,
      sym__template_literal_chunk,
    STATE(423), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(734), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22908] = 6,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym__comma,
    STATE(460), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22928] = 3,
    ACTIONS(745), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(743), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22942] = 6,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(291), 1,
      sym_tuple_end,
    STATE(544), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22962] = 3,
    ACTIONS(749), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(747), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22976] = 3,
    ACTIONS(753), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(751), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [22990] = 4,
    ACTIONS(755), 1,
      sym__template_literal_chunk,
    STATE(435), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(730), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23006] = 6,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(153), 1,
      sym_tuple_end,
    STATE(563), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23026] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(709), 4,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23040] = 3,
    ACTIONS(759), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(757), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [23054] = 3,
    ACTIONS(763), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(761), 4,
      ts_builtin_sym_end,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [23068] = 6,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(689), 1,
      anon_sym_if,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    STATE(328), 1,
      sym_tuple_end,
    STATE(630), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23088] = 4,
    ACTIONS(765), 1,
      sym__template_literal_chunk,
    STATE(435), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(734), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23104] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(768), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23115] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(770), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23126] = 3,
    ACTIONS(772), 1,
      anon_sym_COLON_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(774), 3,
      sym_shisho_ellipsis,
      anon_sym_RBRACE,
      sym_identifier,
  [23139] = 5,
    ACTIONS(776), 1,
      anon_sym_for,
    ACTIONS(778), 1,
      anon_sym_if,
    ACTIONS(780), 1,
      sym_strip_marker,
    ACTIONS(782), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23156] = 5,
    ACTIONS(776), 1,
      anon_sym_for,
    ACTIONS(778), 1,
      anon_sym_if,
    ACTIONS(784), 1,
      sym_strip_marker,
    ACTIONS(786), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23173] = 3,
    ACTIONS(788), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23186] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23197] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_if,
    STATE(368), 1,
      sym_object_end,
    STATE(612), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23214] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_if,
    STATE(281), 1,
      sym_object_end,
    STATE(632), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23231] = 3,
    ACTIONS(794), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23244] = 5,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_if,
    STATE(149), 1,
      sym_object_end,
    STATE(635), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23261] = 3,
    ACTIONS(796), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23274] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23285] = 5,
    ACTIONS(800), 1,
      sym_template_directive_start,
    STATE(396), 1,
      sym_template_else_intro,
    STATE(473), 1,
      sym_template_if_end,
    STATE(617), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(802), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23313] = 3,
    ACTIONS(804), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23326] = 5,
    ACTIONS(806), 1,
      sym_template_directive_start,
    STATE(396), 1,
      sym_template_else_intro,
    STATE(467), 1,
      sym_template_if_end,
    STATE(560), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23343] = 4,
    ACTIONS(808), 1,
      sym__template_literal_chunk,
    STATE(457), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(730), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23358] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_if,
    STATE(232), 1,
      sym_object_end,
    STATE(599), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23375] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23386] = 5,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_if,
    STATE(318), 1,
      sym_object_end,
    STATE(596), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23403] = 4,
    ACTIONS(810), 1,
      sym__template_literal_chunk,
    STATE(457), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(734), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23418] = 3,
    ACTIONS(813), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23431] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(815), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23442] = 5,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      sym__comma,
    STATE(415), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(819), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23470] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(821), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23481] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(823), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23492] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(825), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23503] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(827), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23514] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(829), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23525] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(831), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23536] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(833), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23547] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(819), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23558] = 5,
    ACTIONS(835), 1,
      sym_template_directive_start,
    STATE(396), 1,
      sym_template_else_intro,
    STATE(494), 1,
      sym_template_if_end,
    STATE(571), 1,
      sym_template_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23575] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(827), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23586] = 5,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_if,
    STATE(232), 1,
      sym_object_end,
    STATE(554), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23603] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(831), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23614] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(770), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23625] = 5,
    ACTIONS(776), 1,
      anon_sym_for,
    ACTIONS(778), 1,
      anon_sym_if,
    ACTIONS(837), 1,
      sym_strip_marker,
    ACTIONS(839), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23642] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(823), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(841), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23664] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(821), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23675] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(825), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23686] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(833), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23708] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(841), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23719] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(802), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(815), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23741] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(768), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23752] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(829), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [23763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(841), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23773] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(583), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23783] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(829), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23793] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(843), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [23805] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(845), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23815] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(833), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23825] = 4,
    ACTIONS(847), 1,
      sym__template_literal_chunk,
    STATE(506), 1,
      aux_sym_template_literal_repeat1,
    STATE(674), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23839] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(831), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23849] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(849), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_if,
  [23859] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(827), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23869] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(823), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23879] = 4,
    ACTIONS(851), 1,
      anon_sym_for,
    ACTIONS(853), 1,
      anon_sym_if,
    ACTIONS(855), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23893] = 4,
    ACTIONS(857), 1,
      sym_strip_marker,
    ACTIONS(859), 1,
      anon_sym_else,
    ACTIONS(861), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23907] = 4,
    ACTIONS(863), 1,
      anon_sym_QMARK,
    ACTIONS(865), 1,
      sym_strip_marker,
    ACTIONS(867), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23921] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(869), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [23933] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(819), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23943] = 4,
    ACTIONS(851), 1,
      anon_sym_for,
    ACTIONS(853), 1,
      anon_sym_if,
    ACTIONS(871), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23957] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(873), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23967] = 4,
    ACTIONS(859), 1,
      anon_sym_else,
    ACTIONS(875), 1,
      sym_strip_marker,
    ACTIONS(877), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23981] = 4,
    ACTIONS(730), 1,
      sym_quoted_template_end,
    ACTIONS(879), 1,
      sym__template_literal_chunk,
    STATE(534), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23995] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(815), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24005] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(802), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24015] = 4,
    ACTIONS(851), 1,
      anon_sym_for,
    ACTIONS(853), 1,
      anon_sym_if,
    ACTIONS(881), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24029] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24039] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(825), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24049] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(883), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24059] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(885), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24069] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [24079] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(768), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24089] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(821), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24099] = 4,
    ACTIONS(776), 1,
      anon_sym_for,
    ACTIONS(778), 1,
      anon_sym_if,
    ACTIONS(887), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24113] = 4,
    ACTIONS(863), 1,
      anon_sym_QMARK,
    ACTIONS(889), 1,
      sym_strip_marker,
    ACTIONS(891), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24127] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(770), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24137] = 4,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(895), 1,
      sym_strip_marker,
    ACTIONS(897), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24151] = 4,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(899), 1,
      sym_strip_marker,
    ACTIONS(901), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24165] = 4,
    ACTIONS(161), 1,
      sym_strip_marker,
    ACTIONS(163), 1,
      sym_template_interpolation_end,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24179] = 4,
    ACTIONS(863), 1,
      anon_sym_QMARK,
    ACTIONS(903), 1,
      sym_strip_marker,
    ACTIONS(905), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24193] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(583), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [24203] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [24213] = 4,
    ACTIONS(863), 1,
      anon_sym_QMARK,
    ACTIONS(907), 1,
      sym_strip_marker,
    ACTIONS(909), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24227] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(911), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24237] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24247] = 4,
    ACTIONS(169), 1,
      sym_strip_marker,
    ACTIONS(171), 1,
      sym_template_interpolation_end,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24261] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(913), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24271] = 4,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(915), 1,
      sym_strip_marker,
    ACTIONS(917), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24285] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(919), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24295] = 4,
    ACTIONS(859), 1,
      anon_sym_else,
    ACTIONS(921), 1,
      sym_strip_marker,
    ACTIONS(923), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24309] = 4,
    ACTIONS(734), 1,
      sym_quoted_template_end,
    ACTIONS(925), 1,
      sym__template_literal_chunk,
    STATE(534), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24323] = 4,
    ACTIONS(863), 1,
      anon_sym_QMARK,
    ACTIONS(928), 1,
      sym_strip_marker,
    ACTIONS(930), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24337] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(932), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24347] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(934), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24357] = 4,
    ACTIONS(863), 1,
      anon_sym_QMARK,
    ACTIONS(936), 1,
      sym_strip_marker,
    ACTIONS(938), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24371] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(389), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [24381] = 4,
    ACTIONS(165), 1,
      sym_strip_marker,
    ACTIONS(167), 1,
      sym_template_interpolation_end,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(940), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(942), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [24415] = 3,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24426] = 3,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24437] = 3,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24448] = 3,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24459] = 3,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    ACTIONS(952), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24470] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24481] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(956), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24492] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(958), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24503] = 3,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24514] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(962), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24525] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(964), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24536] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24547] = 3,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24558] = 3,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(359), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24569] = 3,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24580] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(968), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24591] = 3,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24602] = 3,
    ACTIONS(972), 1,
      sym_template_directive_start,
    STATE(469), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24613] = 3,
    ACTIONS(974), 1,
      sym_template_directive_start,
    STATE(476), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24624] = 3,
    ACTIONS(923), 1,
      anon_sym_endif,
    ACTIONS(976), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24635] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24646] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24657] = 3,
    ACTIONS(980), 1,
      sym_identifier,
    ACTIONS(982), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24668] = 3,
    ACTIONS(851), 1,
      anon_sym_for,
    ACTIONS(853), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24679] = 3,
    ACTIONS(984), 1,
      anon_sym_else,
    ACTIONS(986), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24690] = 3,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(432), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24701] = 3,
    ACTIONS(988), 1,
      sym_strip_marker,
    ACTIONS(990), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24712] = 3,
    ACTIONS(992), 1,
      sym_template_directive_start,
    STATE(497), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24723] = 3,
    ACTIONS(994), 1,
      sym_template_directive_start,
    STATE(502), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24734] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(996), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24745] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(998), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24756] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24767] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1000), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24778] = 3,
    ACTIONS(1002), 1,
      sym_strip_marker,
    ACTIONS(1004), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24789] = 3,
    ACTIONS(984), 1,
      anon_sym_else,
    ACTIONS(1006), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24800] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24811] = 3,
    ACTIONS(1008), 1,
      sym_strip_marker,
    ACTIONS(1010), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24822] = 3,
    ACTIONS(786), 1,
      anon_sym_endfor,
    ACTIONS(1012), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24833] = 3,
    ACTIONS(1014), 1,
      sym_strip_marker,
    ACTIONS(1016), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24844] = 3,
    ACTIONS(877), 1,
      anon_sym_endif,
    ACTIONS(1018), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24855] = 3,
    ACTIONS(1020), 1,
      sym_identifier,
    ACTIONS(1022), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24866] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24877] = 3,
    ACTIONS(839), 1,
      anon_sym_endfor,
    ACTIONS(1026), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24888] = 3,
    ACTIONS(1028), 1,
      sym_strip_marker,
    ACTIONS(1030), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24899] = 3,
    ACTIONS(984), 1,
      anon_sym_else,
    ACTIONS(1032), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24910] = 3,
    ACTIONS(1034), 1,
      sym_strip_marker,
    ACTIONS(1036), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24921] = 3,
    ACTIONS(1038), 1,
      sym_strip_marker,
    ACTIONS(1040), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24932] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1042), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24943] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(1044), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24954] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24965] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1048), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24976] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24987] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(1050), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24998] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25009] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25020] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25031] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25042] = 3,
    ACTIONS(1052), 1,
      sym_identifier,
    ACTIONS(1054), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25053] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25064] = 3,
    ACTIONS(1058), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(1060), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25075] = 3,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(427), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25086] = 3,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25097] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25108] = 3,
    ACTIONS(1062), 1,
      sym_strip_marker,
    ACTIONS(1064), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25119] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25130] = 3,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25141] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25152] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25163] = 3,
    ACTIONS(1070), 1,
      sym_identifier,
    ACTIONS(1072), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25174] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25185] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25196] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25207] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1074), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25218] = 3,
    ACTIONS(1076), 1,
      sym_template_directive_start,
    STATE(463), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25229] = 3,
    ACTIONS(1078), 1,
      sym_template_directive_start,
    STATE(461), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25240] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(1080), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25251] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25262] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK,
    ACTIONS(1084), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25273] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(1086), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25284] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25295] = 3,
    ACTIONS(1088), 1,
      sym_strip_marker,
    ACTIONS(1090), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25306] = 3,
    ACTIONS(782), 1,
      anon_sym_endfor,
    ACTIONS(1092), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25317] = 3,
    ACTIONS(1094), 1,
      sym_strip_marker,
    ACTIONS(1096), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25328] = 3,
    ACTIONS(861), 1,
      anon_sym_endif,
    ACTIONS(1098), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25339] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25350] = 3,
    ACTIONS(1100), 1,
      sym_identifier,
    ACTIONS(1102), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25361] = 3,
    ACTIONS(1104), 1,
      sym_strip_marker,
    ACTIONS(1106), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25372] = 3,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25383] = 3,
    ACTIONS(1108), 1,
      sym_strip_marker,
    ACTIONS(1110), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25394] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25405] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25416] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25427] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25438] = 3,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
    ACTIONS(1114), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25449] = 3,
    ACTIONS(691), 1,
      anon_sym_QMARK,
    ACTIONS(1116), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25460] = 3,
    ACTIONS(1118), 1,
      sym_strip_marker,
    ACTIONS(1120), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25471] = 3,
    ACTIONS(1122), 1,
      sym_strip_marker,
    ACTIONS(1124), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25482] = 2,
    ACTIONS(1106), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25490] = 2,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25498] = 2,
    ACTIONS(897), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25506] = 2,
    ACTIONS(1128), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25514] = 2,
    ACTIONS(1130), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25522] = 2,
    ACTIONS(1132), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25530] = 2,
    ACTIONS(1110), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25538] = 2,
    ACTIONS(986), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25546] = 2,
    ACTIONS(855), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25554] = 2,
    ACTIONS(930), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25562] = 2,
    ACTIONS(1134), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25570] = 2,
    ACTIONS(1136), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25578] = 2,
    ACTIONS(1138), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25586] = 2,
    ACTIONS(901), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25594] = 2,
    ACTIONS(1140), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25602] = 2,
    ACTIONS(1142), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25610] = 2,
    ACTIONS(1144), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25618] = 2,
    ACTIONS(1146), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25626] = 2,
    ACTIONS(881), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25634] = 2,
    ACTIONS(1148), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25642] = 2,
    ACTIONS(1064), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25650] = 2,
    ACTIONS(1150), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25658] = 2,
    ACTIONS(1152), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25666] = 2,
    ACTIONS(1120), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25674] = 2,
    ACTIONS(1154), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25682] = 2,
    ACTIONS(1156), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25690] = 2,
    ACTIONS(1158), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25698] = 2,
    ACTIONS(1160), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25706] = 2,
    ACTIONS(1162), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25714] = 2,
    ACTIONS(905), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25722] = 2,
    ACTIONS(1164), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25730] = 2,
    ACTIONS(1166), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25738] = 2,
    ACTIONS(1168), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25746] = 2,
    ACTIONS(1170), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25754] = 2,
    ACTIONS(1172), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25762] = 2,
    ACTIONS(1174), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25770] = 2,
    ACTIONS(1176), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25778] = 2,
    ACTIONS(1178), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25786] = 2,
    ACTIONS(1124), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25794] = 2,
    ACTIONS(1180), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25802] = 2,
    ACTIONS(1182), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25810] = 2,
    ACTIONS(1032), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25818] = 2,
    ACTIONS(1040), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25826] = 2,
    ACTIONS(871), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25834] = 2,
    ACTIONS(1184), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25842] = 2,
    ACTIONS(1186), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25850] = 2,
    ACTIONS(1030), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25858] = 2,
    ACTIONS(1188), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25866] = 2,
    ACTIONS(1190), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25874] = 2,
    ACTIONS(917), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25882] = 2,
    ACTIONS(1006), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25890] = 2,
    ACTIONS(1192), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25898] = 2,
    ACTIONS(1194), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25906] = 2,
    ACTIONS(1196), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25914] = 2,
    ACTIONS(938), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25922] = 2,
    ACTIONS(1198), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25930] = 2,
    ACTIONS(1200), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25938] = 2,
    ACTIONS(1202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25946] = 2,
    ACTIONS(1204), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25954] = 2,
    ACTIONS(1206), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25962] = 2,
    ACTIONS(909), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25970] = 2,
    ACTIONS(1208), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25978] = 2,
    ACTIONS(1210), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25986] = 2,
    ACTIONS(1212), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [25994] = 2,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26002] = 2,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26010] = 2,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26018] = 2,
    ACTIONS(1216), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26026] = 2,
    ACTIONS(1060), 1,
      sym_shisho_metavariable_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26034] = 2,
    ACTIONS(1218), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26042] = 2,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26050] = 2,
    ACTIONS(1222), 1,
      sym_template_directive_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26058] = 2,
    ACTIONS(1224), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26066] = 2,
    ACTIONS(1226), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26074] = 2,
    ACTIONS(1228), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [26082] = 2,
    ACTIONS(1230), 1,
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
  [SMALL_STATE(9)] = 774,
  [SMALL_STATE(10)] = 882,
  [SMALL_STATE(11)] = 988,
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
  [SMALL_STATE(41)] = 3945,
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
  [SMALL_STATE(63)] = 5905,
  [SMALL_STATE(64)] = 5998,
  [SMALL_STATE(65)] = 6091,
  [SMALL_STATE(66)] = 6184,
  [SMALL_STATE(67)] = 6277,
  [SMALL_STATE(68)] = 6370,
  [SMALL_STATE(69)] = 6463,
  [SMALL_STATE(70)] = 6518,
  [SMALL_STATE(71)] = 6577,
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
  [SMALL_STATE(97)] = 8925,
  [SMALL_STATE(98)] = 9012,
  [SMALL_STATE(99)] = 9099,
  [SMALL_STATE(100)] = 9186,
  [SMALL_STATE(101)] = 9241,
  [SMALL_STATE(102)] = 9328,
  [SMALL_STATE(103)] = 9415,
  [SMALL_STATE(104)] = 9502,
  [SMALL_STATE(105)] = 9589,
  [SMALL_STATE(106)] = 9676,
  [SMALL_STATE(107)] = 9763,
  [SMALL_STATE(108)] = 9850,
  [SMALL_STATE(109)] = 9937,
  [SMALL_STATE(110)] = 10024,
  [SMALL_STATE(111)] = 10111,
  [SMALL_STATE(112)] = 10198,
  [SMALL_STATE(113)] = 10285,
  [SMALL_STATE(114)] = 10372,
  [SMALL_STATE(115)] = 10427,
  [SMALL_STATE(116)] = 10514,
  [SMALL_STATE(117)] = 10569,
  [SMALL_STATE(118)] = 10656,
  [SMALL_STATE(119)] = 10743,
  [SMALL_STATE(120)] = 10830,
  [SMALL_STATE(121)] = 10917,
  [SMALL_STATE(122)] = 11004,
  [SMALL_STATE(123)] = 11091,
  [SMALL_STATE(124)] = 11146,
  [SMALL_STATE(125)] = 11233,
  [SMALL_STATE(126)] = 11320,
  [SMALL_STATE(127)] = 11407,
  [SMALL_STATE(128)] = 11494,
  [SMALL_STATE(129)] = 11581,
  [SMALL_STATE(130)] = 11668,
  [SMALL_STATE(131)] = 11755,
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
  [SMALL_STATE(184)] = 14491,
  [SMALL_STATE(185)] = 14547,
  [SMALL_STATE(186)] = 14605,
  [SMALL_STATE(187)] = 14665,
  [SMALL_STATE(188)] = 14717,
  [SMALL_STATE(189)] = 14785,
  [SMALL_STATE(190)] = 14845,
  [SMALL_STATE(191)] = 14895,
  [SMALL_STATE(192)] = 14951,
  [SMALL_STATE(193)] = 15001,
  [SMALL_STATE(194)] = 15059,
  [SMALL_STATE(195)] = 15104,
  [SMALL_STATE(196)] = 15153,
  [SMALL_STATE(197)] = 15198,
  [SMALL_STATE(198)] = 15249,
  [SMALL_STATE(199)] = 15318,
  [SMALL_STATE(200)] = 15373,
  [SMALL_STATE(201)] = 15430,
  [SMALL_STATE(202)] = 15489,
  [SMALL_STATE(203)] = 15531,
  [SMALL_STATE(204)] = 15568,
  [SMALL_STATE(205)] = 15605,
  [SMALL_STATE(206)] = 15650,
  [SMALL_STATE(207)] = 15695,
  [SMALL_STATE(208)] = 15740,
  [SMALL_STATE(209)] = 15777,
  [SMALL_STATE(210)] = 15814,
  [SMALL_STATE(211)] = 15859,
  [SMALL_STATE(212)] = 15904,
  [SMALL_STATE(213)] = 15940,
  [SMALL_STATE(214)] = 15976,
  [SMALL_STATE(215)] = 16032,
  [SMALL_STATE(216)] = 16068,
  [SMALL_STATE(217)] = 16104,
  [SMALL_STATE(218)] = 16140,
  [SMALL_STATE(219)] = 16176,
  [SMALL_STATE(220)] = 16212,
  [SMALL_STATE(221)] = 16248,
  [SMALL_STATE(222)] = 16284,
  [SMALL_STATE(223)] = 16320,
  [SMALL_STATE(224)] = 16384,
  [SMALL_STATE(225)] = 16440,
  [SMALL_STATE(226)] = 16494,
  [SMALL_STATE(227)] = 16546,
  [SMALL_STATE(228)] = 16594,
  [SMALL_STATE(229)] = 16636,
  [SMALL_STATE(230)] = 16682,
  [SMALL_STATE(231)] = 16718,
  [SMALL_STATE(232)] = 16764,
  [SMALL_STATE(233)] = 16800,
  [SMALL_STATE(234)] = 16836,
  [SMALL_STATE(235)] = 16872,
  [SMALL_STATE(236)] = 16914,
  [SMALL_STATE(237)] = 16966,
  [SMALL_STATE(238)] = 17002,
  [SMALL_STATE(239)] = 17038,
  [SMALL_STATE(240)] = 17074,
  [SMALL_STATE(241)] = 17122,
  [SMALL_STATE(242)] = 17158,
  [SMALL_STATE(243)] = 17194,
  [SMALL_STATE(244)] = 17230,
  [SMALL_STATE(245)] = 17272,
  [SMALL_STATE(246)] = 17336,
  [SMALL_STATE(247)] = 17372,
  [SMALL_STATE(248)] = 17408,
  [SMALL_STATE(249)] = 17444,
  [SMALL_STATE(250)] = 17480,
  [SMALL_STATE(251)] = 17534,
  [SMALL_STATE(252)] = 17570,
  [SMALL_STATE(253)] = 17606,
  [SMALL_STATE(254)] = 17648,
  [SMALL_STATE(255)] = 17684,
  [SMALL_STATE(256)] = 17720,
  [SMALL_STATE(257)] = 17756,
  [SMALL_STATE(258)] = 17798,
  [SMALL_STATE(259)] = 17840,
  [SMALL_STATE(260)] = 17882,
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
  [SMALL_STATE(370)] = 21287,
  [SMALL_STATE(371)] = 21314,
  [SMALL_STATE(372)] = 21341,
  [SMALL_STATE(373)] = 21367,
  [SMALL_STATE(374)] = 21393,
  [SMALL_STATE(375)] = 21419,
  [SMALL_STATE(376)] = 21444,
  [SMALL_STATE(377)] = 21468,
  [SMALL_STATE(378)] = 21512,
  [SMALL_STATE(379)] = 21554,
  [SMALL_STATE(380)] = 21598,
  [SMALL_STATE(381)] = 21640,
  [SMALL_STATE(382)] = 21682,
  [SMALL_STATE(383)] = 21724,
  [SMALL_STATE(384)] = 21768,
  [SMALL_STATE(385)] = 21810,
  [SMALL_STATE(386)] = 21852,
  [SMALL_STATE(387)] = 21876,
  [SMALL_STATE(388)] = 21920,
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
  [SMALL_STATE(402)] = 22439,
  [SMALL_STATE(403)] = 22464,
  [SMALL_STATE(404)] = 22483,
  [SMALL_STATE(405)] = 22502,
  [SMALL_STATE(406)] = 22528,
  [SMALL_STATE(407)] = 22554,
  [SMALL_STATE(408)] = 22580,
  [SMALL_STATE(409)] = 22606,
  [SMALL_STATE(410)] = 22632,
  [SMALL_STATE(411)] = 22658,
  [SMALL_STATE(412)] = 22682,
  [SMALL_STATE(413)] = 22708,
  [SMALL_STATE(414)] = 22729,
  [SMALL_STATE(415)] = 22744,
  [SMALL_STATE(416)] = 22763,
  [SMALL_STATE(417)] = 22780,
  [SMALL_STATE(418)] = 22803,
  [SMALL_STATE(419)] = 22818,
  [SMALL_STATE(420)] = 22838,
  [SMALL_STATE(421)] = 22858,
  [SMALL_STATE(422)] = 22876,
  [SMALL_STATE(423)] = 22892,
  [SMALL_STATE(424)] = 22908,
  [SMALL_STATE(425)] = 22928,
  [SMALL_STATE(426)] = 22942,
  [SMALL_STATE(427)] = 22962,
  [SMALL_STATE(428)] = 22976,
  [SMALL_STATE(429)] = 22990,
  [SMALL_STATE(430)] = 23006,
  [SMALL_STATE(431)] = 23026,
  [SMALL_STATE(432)] = 23040,
  [SMALL_STATE(433)] = 23054,
  [SMALL_STATE(434)] = 23068,
  [SMALL_STATE(435)] = 23088,
  [SMALL_STATE(436)] = 23104,
  [SMALL_STATE(437)] = 23115,
  [SMALL_STATE(438)] = 23126,
  [SMALL_STATE(439)] = 23139,
  [SMALL_STATE(440)] = 23156,
  [SMALL_STATE(441)] = 23173,
  [SMALL_STATE(442)] = 23186,
  [SMALL_STATE(443)] = 23197,
  [SMALL_STATE(444)] = 23214,
  [SMALL_STATE(445)] = 23231,
  [SMALL_STATE(446)] = 23244,
  [SMALL_STATE(447)] = 23261,
  [SMALL_STATE(448)] = 23274,
  [SMALL_STATE(449)] = 23285,
  [SMALL_STATE(450)] = 23302,
  [SMALL_STATE(451)] = 23313,
  [SMALL_STATE(452)] = 23326,
  [SMALL_STATE(453)] = 23343,
  [SMALL_STATE(454)] = 23358,
  [SMALL_STATE(455)] = 23375,
  [SMALL_STATE(456)] = 23386,
  [SMALL_STATE(457)] = 23403,
  [SMALL_STATE(458)] = 23418,
  [SMALL_STATE(459)] = 23431,
  [SMALL_STATE(460)] = 23442,
  [SMALL_STATE(461)] = 23459,
  [SMALL_STATE(462)] = 23470,
  [SMALL_STATE(463)] = 23481,
  [SMALL_STATE(464)] = 23492,
  [SMALL_STATE(465)] = 23503,
  [SMALL_STATE(466)] = 23514,
  [SMALL_STATE(467)] = 23525,
  [SMALL_STATE(468)] = 23536,
  [SMALL_STATE(469)] = 23547,
  [SMALL_STATE(470)] = 23558,
  [SMALL_STATE(471)] = 23575,
  [SMALL_STATE(472)] = 23586,
  [SMALL_STATE(473)] = 23603,
  [SMALL_STATE(474)] = 23614,
  [SMALL_STATE(475)] = 23625,
  [SMALL_STATE(476)] = 23642,
  [SMALL_STATE(477)] = 23653,
  [SMALL_STATE(478)] = 23664,
  [SMALL_STATE(479)] = 23675,
  [SMALL_STATE(480)] = 23686,
  [SMALL_STATE(481)] = 23697,
  [SMALL_STATE(482)] = 23708,
  [SMALL_STATE(483)] = 23719,
  [SMALL_STATE(484)] = 23730,
  [SMALL_STATE(485)] = 23741,
  [SMALL_STATE(486)] = 23752,
  [SMALL_STATE(487)] = 23763,
  [SMALL_STATE(488)] = 23773,
  [SMALL_STATE(489)] = 23783,
  [SMALL_STATE(490)] = 23793,
  [SMALL_STATE(491)] = 23805,
  [SMALL_STATE(492)] = 23815,
  [SMALL_STATE(493)] = 23825,
  [SMALL_STATE(494)] = 23839,
  [SMALL_STATE(495)] = 23849,
  [SMALL_STATE(496)] = 23859,
  [SMALL_STATE(497)] = 23869,
  [SMALL_STATE(498)] = 23879,
  [SMALL_STATE(499)] = 23893,
  [SMALL_STATE(500)] = 23907,
  [SMALL_STATE(501)] = 23921,
  [SMALL_STATE(502)] = 23933,
  [SMALL_STATE(503)] = 23943,
  [SMALL_STATE(504)] = 23957,
  [SMALL_STATE(505)] = 23967,
  [SMALL_STATE(506)] = 23981,
  [SMALL_STATE(507)] = 23995,
  [SMALL_STATE(508)] = 24005,
  [SMALL_STATE(509)] = 24015,
  [SMALL_STATE(510)] = 24029,
  [SMALL_STATE(511)] = 24039,
  [SMALL_STATE(512)] = 24049,
  [SMALL_STATE(513)] = 24059,
  [SMALL_STATE(514)] = 24069,
  [SMALL_STATE(515)] = 24079,
  [SMALL_STATE(516)] = 24089,
  [SMALL_STATE(517)] = 24099,
  [SMALL_STATE(518)] = 24113,
  [SMALL_STATE(519)] = 24127,
  [SMALL_STATE(520)] = 24137,
  [SMALL_STATE(521)] = 24151,
  [SMALL_STATE(522)] = 24165,
  [SMALL_STATE(523)] = 24179,
  [SMALL_STATE(524)] = 24193,
  [SMALL_STATE(525)] = 24203,
  [SMALL_STATE(526)] = 24213,
  [SMALL_STATE(527)] = 24227,
  [SMALL_STATE(528)] = 24237,
  [SMALL_STATE(529)] = 24247,
  [SMALL_STATE(530)] = 24261,
  [SMALL_STATE(531)] = 24271,
  [SMALL_STATE(532)] = 24285,
  [SMALL_STATE(533)] = 24295,
  [SMALL_STATE(534)] = 24309,
  [SMALL_STATE(535)] = 24323,
  [SMALL_STATE(536)] = 24337,
  [SMALL_STATE(537)] = 24347,
  [SMALL_STATE(538)] = 24357,
  [SMALL_STATE(539)] = 24371,
  [SMALL_STATE(540)] = 24381,
  [SMALL_STATE(541)] = 24395,
  [SMALL_STATE(542)] = 24405,
  [SMALL_STATE(543)] = 24415,
  [SMALL_STATE(544)] = 24426,
  [SMALL_STATE(545)] = 24437,
  [SMALL_STATE(546)] = 24448,
  [SMALL_STATE(547)] = 24459,
  [SMALL_STATE(548)] = 24470,
  [SMALL_STATE(549)] = 24481,
  [SMALL_STATE(550)] = 24492,
  [SMALL_STATE(551)] = 24503,
  [SMALL_STATE(552)] = 24514,
  [SMALL_STATE(553)] = 24525,
  [SMALL_STATE(554)] = 24536,
  [SMALL_STATE(555)] = 24547,
  [SMALL_STATE(556)] = 24558,
  [SMALL_STATE(557)] = 24569,
  [SMALL_STATE(558)] = 24580,
  [SMALL_STATE(559)] = 24591,
  [SMALL_STATE(560)] = 24602,
  [SMALL_STATE(561)] = 24613,
  [SMALL_STATE(562)] = 24624,
  [SMALL_STATE(563)] = 24635,
  [SMALL_STATE(564)] = 24646,
  [SMALL_STATE(565)] = 24657,
  [SMALL_STATE(566)] = 24668,
  [SMALL_STATE(567)] = 24679,
  [SMALL_STATE(568)] = 24690,
  [SMALL_STATE(569)] = 24701,
  [SMALL_STATE(570)] = 24712,
  [SMALL_STATE(571)] = 24723,
  [SMALL_STATE(572)] = 24734,
  [SMALL_STATE(573)] = 24745,
  [SMALL_STATE(574)] = 24756,
  [SMALL_STATE(575)] = 24767,
  [SMALL_STATE(576)] = 24778,
  [SMALL_STATE(577)] = 24789,
  [SMALL_STATE(578)] = 24800,
  [SMALL_STATE(579)] = 24811,
  [SMALL_STATE(580)] = 24822,
  [SMALL_STATE(581)] = 24833,
  [SMALL_STATE(582)] = 24844,
  [SMALL_STATE(583)] = 24855,
  [SMALL_STATE(584)] = 24866,
  [SMALL_STATE(585)] = 24877,
  [SMALL_STATE(586)] = 24888,
  [SMALL_STATE(587)] = 24899,
  [SMALL_STATE(588)] = 24910,
  [SMALL_STATE(589)] = 24921,
  [SMALL_STATE(590)] = 24932,
  [SMALL_STATE(591)] = 24943,
  [SMALL_STATE(592)] = 24954,
  [SMALL_STATE(593)] = 24965,
  [SMALL_STATE(594)] = 24976,
  [SMALL_STATE(595)] = 24987,
  [SMALL_STATE(596)] = 24998,
  [SMALL_STATE(597)] = 25009,
  [SMALL_STATE(598)] = 25020,
  [SMALL_STATE(599)] = 25031,
  [SMALL_STATE(600)] = 25042,
  [SMALL_STATE(601)] = 25053,
  [SMALL_STATE(602)] = 25064,
  [SMALL_STATE(603)] = 25075,
  [SMALL_STATE(604)] = 25086,
  [SMALL_STATE(605)] = 25097,
  [SMALL_STATE(606)] = 25108,
  [SMALL_STATE(607)] = 25119,
  [SMALL_STATE(608)] = 25130,
  [SMALL_STATE(609)] = 25141,
  [SMALL_STATE(610)] = 25152,
  [SMALL_STATE(611)] = 25163,
  [SMALL_STATE(612)] = 25174,
  [SMALL_STATE(613)] = 25185,
  [SMALL_STATE(614)] = 25196,
  [SMALL_STATE(615)] = 25207,
  [SMALL_STATE(616)] = 25218,
  [SMALL_STATE(617)] = 25229,
  [SMALL_STATE(618)] = 25240,
  [SMALL_STATE(619)] = 25251,
  [SMALL_STATE(620)] = 25262,
  [SMALL_STATE(621)] = 25273,
  [SMALL_STATE(622)] = 25284,
  [SMALL_STATE(623)] = 25295,
  [SMALL_STATE(624)] = 25306,
  [SMALL_STATE(625)] = 25317,
  [SMALL_STATE(626)] = 25328,
  [SMALL_STATE(627)] = 25339,
  [SMALL_STATE(628)] = 25350,
  [SMALL_STATE(629)] = 25361,
  [SMALL_STATE(630)] = 25372,
  [SMALL_STATE(631)] = 25383,
  [SMALL_STATE(632)] = 25394,
  [SMALL_STATE(633)] = 25405,
  [SMALL_STATE(634)] = 25416,
  [SMALL_STATE(635)] = 25427,
  [SMALL_STATE(636)] = 25438,
  [SMALL_STATE(637)] = 25449,
  [SMALL_STATE(638)] = 25460,
  [SMALL_STATE(639)] = 25471,
  [SMALL_STATE(640)] = 25482,
  [SMALL_STATE(641)] = 25490,
  [SMALL_STATE(642)] = 25498,
  [SMALL_STATE(643)] = 25506,
  [SMALL_STATE(644)] = 25514,
  [SMALL_STATE(645)] = 25522,
  [SMALL_STATE(646)] = 25530,
  [SMALL_STATE(647)] = 25538,
  [SMALL_STATE(648)] = 25546,
  [SMALL_STATE(649)] = 25554,
  [SMALL_STATE(650)] = 25562,
  [SMALL_STATE(651)] = 25570,
  [SMALL_STATE(652)] = 25578,
  [SMALL_STATE(653)] = 25586,
  [SMALL_STATE(654)] = 25594,
  [SMALL_STATE(655)] = 25602,
  [SMALL_STATE(656)] = 25610,
  [SMALL_STATE(657)] = 25618,
  [SMALL_STATE(658)] = 25626,
  [SMALL_STATE(659)] = 25634,
  [SMALL_STATE(660)] = 25642,
  [SMALL_STATE(661)] = 25650,
  [SMALL_STATE(662)] = 25658,
  [SMALL_STATE(663)] = 25666,
  [SMALL_STATE(664)] = 25674,
  [SMALL_STATE(665)] = 25682,
  [SMALL_STATE(666)] = 25690,
  [SMALL_STATE(667)] = 25698,
  [SMALL_STATE(668)] = 25706,
  [SMALL_STATE(669)] = 25714,
  [SMALL_STATE(670)] = 25722,
  [SMALL_STATE(671)] = 25730,
  [SMALL_STATE(672)] = 25738,
  [SMALL_STATE(673)] = 25746,
  [SMALL_STATE(674)] = 25754,
  [SMALL_STATE(675)] = 25762,
  [SMALL_STATE(676)] = 25770,
  [SMALL_STATE(677)] = 25778,
  [SMALL_STATE(678)] = 25786,
  [SMALL_STATE(679)] = 25794,
  [SMALL_STATE(680)] = 25802,
  [SMALL_STATE(681)] = 25810,
  [SMALL_STATE(682)] = 25818,
  [SMALL_STATE(683)] = 25826,
  [SMALL_STATE(684)] = 25834,
  [SMALL_STATE(685)] = 25842,
  [SMALL_STATE(686)] = 25850,
  [SMALL_STATE(687)] = 25858,
  [SMALL_STATE(688)] = 25866,
  [SMALL_STATE(689)] = 25874,
  [SMALL_STATE(690)] = 25882,
  [SMALL_STATE(691)] = 25890,
  [SMALL_STATE(692)] = 25898,
  [SMALL_STATE(693)] = 25906,
  [SMALL_STATE(694)] = 25914,
  [SMALL_STATE(695)] = 25922,
  [SMALL_STATE(696)] = 25930,
  [SMALL_STATE(697)] = 25938,
  [SMALL_STATE(698)] = 25946,
  [SMALL_STATE(699)] = 25954,
  [SMALL_STATE(700)] = 25962,
  [SMALL_STATE(701)] = 25970,
  [SMALL_STATE(702)] = 25978,
  [SMALL_STATE(703)] = 25986,
  [SMALL_STATE(704)] = 25994,
  [SMALL_STATE(705)] = 26002,
  [SMALL_STATE(706)] = 26010,
  [SMALL_STATE(707)] = 26018,
  [SMALL_STATE(708)] = 26026,
  [SMALL_STATE(709)] = 26034,
  [SMALL_STATE(710)] = 26042,
  [SMALL_STATE(711)] = 26050,
  [SMALL_STATE(712)] = 26058,
  [SMALL_STATE(713)] = 26066,
  [SMALL_STATE(714)] = 26074,
  [SMALL_STATE(715)] = 26082,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(699),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(372),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(202),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(57),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(247),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(247),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(243),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(242),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(32),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(374),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(135),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(695),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(695),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(377),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(68),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(628),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_metavariable, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_metavariable, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(65),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(583),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(42),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(565),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(53),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(611),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(85),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(600),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(422),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(26),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(517),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(429),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(25),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template, 1),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(453),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 2), SHIFT_REPEAT(23),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(602),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(401),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(411),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(87),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(421),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(493),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(423),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shisho_ellipsis_metavariable, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_end, 1),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(435),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 5),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template_repeat1, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(457),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 4),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 5),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 10),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ellipsis, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 5),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 3),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 6),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 7),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 8),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(534),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 6),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 5),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 9),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 4),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_branch, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_branch, 2),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
