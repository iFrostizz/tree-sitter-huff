#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 0
#define TOKEN_COUNT 171
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  sym_def_val = 2,
  anon_sym_macro = 3,
  anon_sym_fn = 4,
  anon_sym_takes = 5,
  anon_sym_returns = 6,
  anon_sym_function = 7,
  anon_sym_constant = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_LBRACK = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACK = 14,
  anon_sym_stop = 15,
  anon_sym_add = 16,
  anon_sym_mul = 17,
  anon_sym_sub = 18,
  anon_sym_div = 19,
  anon_sym_sdiv = 20,
  anon_sym_mod = 21,
  anon_sym_smod = 22,
  anon_sym_addmod = 23,
  anon_sym_mulmod = 24,
  anon_sym_exp = 25,
  anon_sym_signextend = 26,
  anon_sym_lt = 27,
  anon_sym_gt = 28,
  anon_sym_slt = 29,
  anon_sym_sgt = 30,
  anon_sym_eq = 31,
  anon_sym_iszero = 32,
  anon_sym_and = 33,
  anon_sym_or = 34,
  anon_sym_xor = 35,
  anon_sym_not = 36,
  anon_sym_byte = 37,
  anon_sym_sha3 = 38,
  anon_sym_keccak = 39,
  anon_sym_address = 40,
  anon_sym_balance = 41,
  anon_sym_origin = 42,
  anon_sym_caller = 43,
  anon_sym_callvalue = 44,
  anon_sym_calldataload = 45,
  anon_sym_calldatasize = 46,
  anon_sym_calldatacopy = 47,
  anon_sym_codesize = 48,
  anon_sym_codecopy = 49,
  anon_sym_gasprice = 50,
  anon_sym_extcodesize = 51,
  anon_sym_extcodecopy = 52,
  anon_sym_returndatasize = 53,
  anon_sym_returndatacopy = 54,
  anon_sym_blockhash = 55,
  anon_sym_coinbase = 56,
  anon_sym_timestamp = 57,
  anon_sym_number = 58,
  anon_sym_difficulty = 59,
  anon_sym_gaslimit = 60,
  anon_sym_chainid = 61,
  anon_sym_selfbalance = 62,
  anon_sym_basefee = 63,
  anon_sym_pop = 64,
  anon_sym_mload = 65,
  anon_sym_mstore = 66,
  anon_sym_mstore8 = 67,
  anon_sym_sload = 68,
  anon_sym_sstore = 69,
  anon_sym_jump = 70,
  anon_sym_jumpi = 71,
  anon_sym_getpc = 72,
  anon_sym_msize = 73,
  anon_sym_gas = 74,
  anon_sym_jumpdest = 75,
  anon_sym_push1 = 76,
  anon_sym_push2 = 77,
  anon_sym_push3 = 78,
  anon_sym_push4 = 79,
  anon_sym_push5 = 80,
  anon_sym_push6 = 81,
  anon_sym_push7 = 82,
  anon_sym_push8 = 83,
  anon_sym_push9 = 84,
  anon_sym_push10 = 85,
  anon_sym_push11 = 86,
  anon_sym_push12 = 87,
  anon_sym_push13 = 88,
  anon_sym_push14 = 89,
  anon_sym_push15 = 90,
  anon_sym_push16 = 91,
  anon_sym_push17 = 92,
  anon_sym_push18 = 93,
  anon_sym_push19 = 94,
  anon_sym_push20 = 95,
  anon_sym_push21 = 96,
  anon_sym_push22 = 97,
  anon_sym_push23 = 98,
  anon_sym_push24 = 99,
  anon_sym_push25 = 100,
  anon_sym_push26 = 101,
  anon_sym_push27 = 102,
  anon_sym_push28 = 103,
  anon_sym_push29 = 104,
  anon_sym_push30 = 105,
  anon_sym_push31 = 106,
  anon_sym_push32 = 107,
  anon_sym_dup1 = 108,
  anon_sym_dup2 = 109,
  anon_sym_dup3 = 110,
  anon_sym_dup4 = 111,
  anon_sym_dup5 = 112,
  anon_sym_dup6 = 113,
  anon_sym_dup7 = 114,
  anon_sym_dup8 = 115,
  anon_sym_dup9 = 116,
  anon_sym_dup10 = 117,
  anon_sym_dup11 = 118,
  anon_sym_dup12 = 119,
  anon_sym_dup13 = 120,
  anon_sym_dup14 = 121,
  anon_sym_dup15 = 122,
  anon_sym_dup16 = 123,
  anon_sym_swap1 = 124,
  anon_sym_swap2 = 125,
  anon_sym_swap3 = 126,
  anon_sym_swap4 = 127,
  anon_sym_swap5 = 128,
  anon_sym_swap6 = 129,
  anon_sym_swap7 = 130,
  anon_sym_swap8 = 131,
  anon_sym_swap9 = 132,
  anon_sym_swap10 = 133,
  anon_sym_swap11 = 134,
  anon_sym_swap12 = 135,
  anon_sym_swap13 = 136,
  anon_sym_swap14 = 137,
  anon_sym_swap15 = 138,
  anon_sym_swap16 = 139,
  anon_sym_shl = 140,
  anon_sym_shr = 141,
  anon_sym_sar = 142,
  anon_sym_log0 = 143,
  anon_sym_log1 = 144,
  anon_sym_log2 = 145,
  anon_sym_log3 = 146,
  anon_sym_log4 = 147,
  anon_sym_create = 148,
  anon_sym_call = 149,
  anon_sym_callcode = 150,
  anon_sym_return = 151,
  anon_sym_delegatecall = 152,
  anon_sym_create2 = 153,
  anon_sym_staticcall = 154,
  anon_sym_revert = 155,
  anon_sym_invalid = 156,
  anon_sym_selfdestruct = 157,
  aux_sym__label_token1 = 158,
  anon_sym_COLON = 159,
  sym_hex = 160,
  anon_sym_LPAREN_RPAREN = 161,
  anon_sym_LPAREN = 162,
  aux_sym_parameters_token1 = 163,
  anon_sym_RPAREN = 164,
  sym__single_parameter = 165,
  anon_sym_view = 166,
  anon_sym_pure = 167,
  anon_sym_payable = 168,
  anon_sym_nonpayable = 169,
  sym_comment = 170,
  sym_source_file = 171,
  sym_definition = 172,
  sym__declaration = 173,
  sym__def_params = 174,
  sym__def_const = 175,
  sym_keyword = 176,
  sym__def = 177,
  sym_keyword_definition = 178,
  sym_interface_definition = 179,
  sym_constant_definition = 180,
  sym_val_parameters = 181,
  sym_block = 182,
  sym_stack_assertion = 183,
  sym__statement = 184,
  sym_opcode = 185,
  sym_label = 186,
  sym__label = 187,
  sym__destination = 188,
  sym_const_access = 189,
  sym_macro_call = 190,
  sym_const = 191,
  sym_identifier = 192,
  sym_parameters = 193,
  sym_parameter = 194,
  sym_visibility = 195,
  sym_constant = 196,
  aux_sym_source_file_repeat1 = 197,
  aux_sym_block_repeat1 = 198,
  aux_sym_stack_assertion_repeat1 = 199,
  aux_sym_parameters_repeat1 = 200,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = " = ",
  [sym_def_val] = "def_val",
  [anon_sym_macro] = "macro",
  [anon_sym_fn] = "fn",
  [anon_sym_takes] = "takes",
  [anon_sym_returns] = "returns",
  [anon_sym_function] = "function",
  [anon_sym_constant] = "constant",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_stop] = "stop",
  [anon_sym_add] = "add",
  [anon_sym_mul] = "mul",
  [anon_sym_sub] = "sub",
  [anon_sym_div] = "div",
  [anon_sym_sdiv] = "sdiv",
  [anon_sym_mod] = "mod",
  [anon_sym_smod] = "smod",
  [anon_sym_addmod] = "addmod",
  [anon_sym_mulmod] = "mulmod",
  [anon_sym_exp] = "exp",
  [anon_sym_signextend] = "signextend",
  [anon_sym_lt] = "lt",
  [anon_sym_gt] = "gt",
  [anon_sym_slt] = "slt",
  [anon_sym_sgt] = "sgt",
  [anon_sym_eq] = "eq",
  [anon_sym_iszero] = "iszero",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_not] = "not",
  [anon_sym_byte] = "byte",
  [anon_sym_sha3] = "sha3",
  [anon_sym_keccak] = "keccak",
  [anon_sym_address] = "address",
  [anon_sym_balance] = "balance",
  [anon_sym_origin] = "origin",
  [anon_sym_caller] = "caller",
  [anon_sym_callvalue] = "callvalue",
  [anon_sym_calldataload] = "calldataload",
  [anon_sym_calldatasize] = "calldatasize",
  [anon_sym_calldatacopy] = "calldatacopy",
  [anon_sym_codesize] = "codesize",
  [anon_sym_codecopy] = "codecopy",
  [anon_sym_gasprice] = "gasprice",
  [anon_sym_extcodesize] = "extcodesize",
  [anon_sym_extcodecopy] = "extcodecopy",
  [anon_sym_returndatasize] = "returndatasize",
  [anon_sym_returndatacopy] = "returndatacopy",
  [anon_sym_blockhash] = "blockhash",
  [anon_sym_coinbase] = "coinbase",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_number] = "number",
  [anon_sym_difficulty] = "difficulty",
  [anon_sym_gaslimit] = "gaslimit",
  [anon_sym_chainid] = "chainid",
  [anon_sym_selfbalance] = "selfbalance",
  [anon_sym_basefee] = "basefee",
  [anon_sym_pop] = "pop",
  [anon_sym_mload] = "mload",
  [anon_sym_mstore] = "mstore",
  [anon_sym_mstore8] = "mstore8",
  [anon_sym_sload] = "sload",
  [anon_sym_sstore] = "sstore",
  [anon_sym_jump] = "jump",
  [anon_sym_jumpi] = "jumpi",
  [anon_sym_getpc] = "getpc",
  [anon_sym_msize] = "msize",
  [anon_sym_gas] = "gas",
  [anon_sym_jumpdest] = "jumpdest",
  [anon_sym_push1] = "push1",
  [anon_sym_push2] = "push2",
  [anon_sym_push3] = "push3",
  [anon_sym_push4] = "push4",
  [anon_sym_push5] = "push5",
  [anon_sym_push6] = "push6",
  [anon_sym_push7] = "push7",
  [anon_sym_push8] = "push8",
  [anon_sym_push9] = "push9",
  [anon_sym_push10] = "push10",
  [anon_sym_push11] = "push11",
  [anon_sym_push12] = "push12",
  [anon_sym_push13] = "push13",
  [anon_sym_push14] = "push14",
  [anon_sym_push15] = "push15",
  [anon_sym_push16] = "push16",
  [anon_sym_push17] = "push17",
  [anon_sym_push18] = "push18",
  [anon_sym_push19] = "push19",
  [anon_sym_push20] = "push20",
  [anon_sym_push21] = "push21",
  [anon_sym_push22] = "push22",
  [anon_sym_push23] = "push23",
  [anon_sym_push24] = "push24",
  [anon_sym_push25] = "push25",
  [anon_sym_push26] = "push26",
  [anon_sym_push27] = "push27",
  [anon_sym_push28] = "push28",
  [anon_sym_push29] = "push29",
  [anon_sym_push30] = "push30",
  [anon_sym_push31] = "push31",
  [anon_sym_push32] = "push32",
  [anon_sym_dup1] = "dup1",
  [anon_sym_dup2] = "dup2",
  [anon_sym_dup3] = "dup3",
  [anon_sym_dup4] = "dup4",
  [anon_sym_dup5] = "dup5",
  [anon_sym_dup6] = "dup6",
  [anon_sym_dup7] = "dup7",
  [anon_sym_dup8] = "dup8",
  [anon_sym_dup9] = "dup9",
  [anon_sym_dup10] = "dup10",
  [anon_sym_dup11] = "dup11",
  [anon_sym_dup12] = "dup12",
  [anon_sym_dup13] = "dup13",
  [anon_sym_dup14] = "dup14",
  [anon_sym_dup15] = "dup15",
  [anon_sym_dup16] = "dup16",
  [anon_sym_swap1] = "swap1",
  [anon_sym_swap2] = "swap2",
  [anon_sym_swap3] = "swap3",
  [anon_sym_swap4] = "swap4",
  [anon_sym_swap5] = "swap5",
  [anon_sym_swap6] = "swap6",
  [anon_sym_swap7] = "swap7",
  [anon_sym_swap8] = "swap8",
  [anon_sym_swap9] = "swap9",
  [anon_sym_swap10] = "swap10",
  [anon_sym_swap11] = "swap11",
  [anon_sym_swap12] = "swap12",
  [anon_sym_swap13] = "swap13",
  [anon_sym_swap14] = "swap14",
  [anon_sym_swap15] = "swap15",
  [anon_sym_swap16] = "swap16",
  [anon_sym_shl] = "shl",
  [anon_sym_shr] = "shr",
  [anon_sym_sar] = "sar",
  [anon_sym_log0] = "log0",
  [anon_sym_log1] = "log1",
  [anon_sym_log2] = "log2",
  [anon_sym_log3] = "log3",
  [anon_sym_log4] = "log4",
  [anon_sym_create] = "create",
  [anon_sym_call] = "call",
  [anon_sym_callcode] = "callcode",
  [anon_sym_return] = "return",
  [anon_sym_delegatecall] = "delegatecall",
  [anon_sym_create2] = "create2",
  [anon_sym_staticcall] = "staticcall",
  [anon_sym_revert] = "revert",
  [anon_sym_invalid] = "invalid",
  [anon_sym_selfdestruct] = "selfdestruct",
  [aux_sym__label_token1] = "_label_token1",
  [anon_sym_COLON] = ":",
  [sym_hex] = "hex",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parameters_token1] = "parameters_token1",
  [anon_sym_RPAREN] = ")",
  [sym__single_parameter] = "_single_parameter",
  [anon_sym_view] = "view",
  [anon_sym_pure] = "pure",
  [anon_sym_payable] = "payable",
  [anon_sym_nonpayable] = "nonpayable",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym__declaration] = "_declaration",
  [sym__def_params] = "_def_params",
  [sym__def_const] = "_def_const",
  [sym_keyword] = "keyword",
  [sym__def] = "_def",
  [sym_keyword_definition] = "keyword_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_val_parameters] = "val_parameters",
  [sym_block] = "block",
  [sym_stack_assertion] = "stack_assertion",
  [sym__statement] = "_statement",
  [sym_opcode] = "opcode",
  [sym_label] = "label",
  [sym__label] = "_label",
  [sym__destination] = "_destination",
  [sym_const_access] = "const_access",
  [sym_macro_call] = "macro_call",
  [sym_const] = "const",
  [sym_identifier] = "identifier",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_visibility] = "visibility",
  [sym_constant] = "constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_stack_assertion_repeat1] = "stack_assertion_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_def_val] = sym_def_val,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_takes] = anon_sym_takes,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_sdiv] = anon_sym_sdiv,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_smod] = anon_sym_smod,
  [anon_sym_addmod] = anon_sym_addmod,
  [anon_sym_mulmod] = anon_sym_mulmod,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_signextend] = anon_sym_signextend,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_iszero] = anon_sym_iszero,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_sha3] = anon_sym_sha3,
  [anon_sym_keccak] = anon_sym_keccak,
  [anon_sym_address] = anon_sym_address,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_origin] = anon_sym_origin,
  [anon_sym_caller] = anon_sym_caller,
  [anon_sym_callvalue] = anon_sym_callvalue,
  [anon_sym_calldataload] = anon_sym_calldataload,
  [anon_sym_calldatasize] = anon_sym_calldatasize,
  [anon_sym_calldatacopy] = anon_sym_calldatacopy,
  [anon_sym_codesize] = anon_sym_codesize,
  [anon_sym_codecopy] = anon_sym_codecopy,
  [anon_sym_gasprice] = anon_sym_gasprice,
  [anon_sym_extcodesize] = anon_sym_extcodesize,
  [anon_sym_extcodecopy] = anon_sym_extcodecopy,
  [anon_sym_returndatasize] = anon_sym_returndatasize,
  [anon_sym_returndatacopy] = anon_sym_returndatacopy,
  [anon_sym_blockhash] = anon_sym_blockhash,
  [anon_sym_coinbase] = anon_sym_coinbase,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_difficulty] = anon_sym_difficulty,
  [anon_sym_gaslimit] = anon_sym_gaslimit,
  [anon_sym_chainid] = anon_sym_chainid,
  [anon_sym_selfbalance] = anon_sym_selfbalance,
  [anon_sym_basefee] = anon_sym_basefee,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_mload] = anon_sym_mload,
  [anon_sym_mstore] = anon_sym_mstore,
  [anon_sym_mstore8] = anon_sym_mstore8,
  [anon_sym_sload] = anon_sym_sload,
  [anon_sym_sstore] = anon_sym_sstore,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_jumpi] = anon_sym_jumpi,
  [anon_sym_getpc] = anon_sym_getpc,
  [anon_sym_msize] = anon_sym_msize,
  [anon_sym_gas] = anon_sym_gas,
  [anon_sym_jumpdest] = anon_sym_jumpdest,
  [anon_sym_push1] = anon_sym_push1,
  [anon_sym_push2] = anon_sym_push2,
  [anon_sym_push3] = anon_sym_push3,
  [anon_sym_push4] = anon_sym_push4,
  [anon_sym_push5] = anon_sym_push5,
  [anon_sym_push6] = anon_sym_push6,
  [anon_sym_push7] = anon_sym_push7,
  [anon_sym_push8] = anon_sym_push8,
  [anon_sym_push9] = anon_sym_push9,
  [anon_sym_push10] = anon_sym_push10,
  [anon_sym_push11] = anon_sym_push11,
  [anon_sym_push12] = anon_sym_push12,
  [anon_sym_push13] = anon_sym_push13,
  [anon_sym_push14] = anon_sym_push14,
  [anon_sym_push15] = anon_sym_push15,
  [anon_sym_push16] = anon_sym_push16,
  [anon_sym_push17] = anon_sym_push17,
  [anon_sym_push18] = anon_sym_push18,
  [anon_sym_push19] = anon_sym_push19,
  [anon_sym_push20] = anon_sym_push20,
  [anon_sym_push21] = anon_sym_push21,
  [anon_sym_push22] = anon_sym_push22,
  [anon_sym_push23] = anon_sym_push23,
  [anon_sym_push24] = anon_sym_push24,
  [anon_sym_push25] = anon_sym_push25,
  [anon_sym_push26] = anon_sym_push26,
  [anon_sym_push27] = anon_sym_push27,
  [anon_sym_push28] = anon_sym_push28,
  [anon_sym_push29] = anon_sym_push29,
  [anon_sym_push30] = anon_sym_push30,
  [anon_sym_push31] = anon_sym_push31,
  [anon_sym_push32] = anon_sym_push32,
  [anon_sym_dup1] = anon_sym_dup1,
  [anon_sym_dup2] = anon_sym_dup2,
  [anon_sym_dup3] = anon_sym_dup3,
  [anon_sym_dup4] = anon_sym_dup4,
  [anon_sym_dup5] = anon_sym_dup5,
  [anon_sym_dup6] = anon_sym_dup6,
  [anon_sym_dup7] = anon_sym_dup7,
  [anon_sym_dup8] = anon_sym_dup8,
  [anon_sym_dup9] = anon_sym_dup9,
  [anon_sym_dup10] = anon_sym_dup10,
  [anon_sym_dup11] = anon_sym_dup11,
  [anon_sym_dup12] = anon_sym_dup12,
  [anon_sym_dup13] = anon_sym_dup13,
  [anon_sym_dup14] = anon_sym_dup14,
  [anon_sym_dup15] = anon_sym_dup15,
  [anon_sym_dup16] = anon_sym_dup16,
  [anon_sym_swap1] = anon_sym_swap1,
  [anon_sym_swap2] = anon_sym_swap2,
  [anon_sym_swap3] = anon_sym_swap3,
  [anon_sym_swap4] = anon_sym_swap4,
  [anon_sym_swap5] = anon_sym_swap5,
  [anon_sym_swap6] = anon_sym_swap6,
  [anon_sym_swap7] = anon_sym_swap7,
  [anon_sym_swap8] = anon_sym_swap8,
  [anon_sym_swap9] = anon_sym_swap9,
  [anon_sym_swap10] = anon_sym_swap10,
  [anon_sym_swap11] = anon_sym_swap11,
  [anon_sym_swap12] = anon_sym_swap12,
  [anon_sym_swap13] = anon_sym_swap13,
  [anon_sym_swap14] = anon_sym_swap14,
  [anon_sym_swap15] = anon_sym_swap15,
  [anon_sym_swap16] = anon_sym_swap16,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_sar] = anon_sym_sar,
  [anon_sym_log0] = anon_sym_log0,
  [anon_sym_log1] = anon_sym_log1,
  [anon_sym_log2] = anon_sym_log2,
  [anon_sym_log3] = anon_sym_log3,
  [anon_sym_log4] = anon_sym_log4,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_callcode] = anon_sym_callcode,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_delegatecall] = anon_sym_delegatecall,
  [anon_sym_create2] = anon_sym_create2,
  [anon_sym_staticcall] = anon_sym_staticcall,
  [anon_sym_revert] = anon_sym_revert,
  [anon_sym_invalid] = anon_sym_invalid,
  [anon_sym_selfdestruct] = anon_sym_selfdestruct,
  [aux_sym__label_token1] = aux_sym__label_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_hex] = sym_hex,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parameters_token1] = aux_sym_parameters_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__single_parameter] = sym__single_parameter,
  [anon_sym_view] = anon_sym_view,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_payable] = anon_sym_payable,
  [anon_sym_nonpayable] = anon_sym_nonpayable,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym__declaration] = sym__declaration,
  [sym__def_params] = sym__def_params,
  [sym__def_const] = sym__def_const,
  [sym_keyword] = sym_keyword,
  [sym__def] = sym__def,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_val_parameters] = sym_val_parameters,
  [sym_block] = sym_block,
  [sym_stack_assertion] = sym_stack_assertion,
  [sym__statement] = sym__statement,
  [sym_opcode] = sym_opcode,
  [sym_label] = sym_label,
  [sym__label] = sym__label,
  [sym__destination] = sym__destination,
  [sym_const_access] = sym_const_access,
  [sym_macro_call] = sym_macro_call,
  [sym_const] = sym_const,
  [sym_identifier] = sym_identifier,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_visibility] = sym_visibility,
  [sym_constant] = sym_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_stack_assertion_repeat1] = aux_sym_stack_assertion_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
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
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_takes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iszero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keccak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_origin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calldataload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calldatasize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calldatacopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codesize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codecopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gasprice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extcodesize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extcodecopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returndatasize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returndatacopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coinbase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_difficulty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaslimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chainid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selfbalance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basefee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mstore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mstore8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sstore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jumpi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jumpdest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegatecall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_staticcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invalid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selfdestruct] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameters_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__single_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_view] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonpayable] = {
    .visible = true,
    .named = false,
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
  [sym__def_params] = {
    .visible = false,
    .named = true,
  },
  [sym__def_const] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__def] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_val_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym__destination] = {
    .visible = false,
    .named = true,
  },
  [sym_const_access] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_call] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
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
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stack_assertion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
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
  [54] = 33,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 35,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(325);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '(') ADVANCE(813);
      if (lookahead == ')') ADVANCE(816);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(810);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'j') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead == '{') ADVANCE(334);
      if (lookahead == '}') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '(') ADVANCE(813);
      if (lookahead == ')') ADVANCE(816);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(810);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'j') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead == '{') ADVANCE(334);
      if (lookahead == '}') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '(') ADVANCE(813);
      if (lookahead == ')') ADVANCE(816);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(810);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'j') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead == '{') ADVANCE(334);
      if (lookahead == '}') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == '{') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == '{') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(810);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'g') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead == 'j') ADVANCE(790);
      if (lookahead == 'k') ADVANCE(624);
      if (lookahead == 'l') ADVANCE(717);
      if (lookahead == 'm') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(719);
      if (lookahead == 'r') ADVANCE(625);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == 'x') ADVANCE(721);
      if (lookahead == '}') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(813);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(816);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(812);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(823);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(822);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(530);
      if (lookahead == '1') ADVANCE(531);
      if (lookahead == '2') ADVANCE(532);
      if (lookahead == '3') ADVANCE(533);
      if (lookahead == '4') ADVANCE(534);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(492);
      if (lookahead == '2') ADVANCE(493);
      if (lookahead == '3') ADVANCE(494);
      if (lookahead == '4') ADVANCE(495);
      if (lookahead == '5') ADVANCE(496);
      if (lookahead == '6') ADVANCE(497);
      if (lookahead == '7') ADVANCE(498);
      if (lookahead == '8') ADVANCE(499);
      if (lookahead == '9') ADVANCE(500);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(460);
      if (lookahead == '2') ADVANCE(461);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == '4') ADVANCE(463);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead == '6') ADVANCE(465);
      if (lookahead == '7') ADVANCE(466);
      if (lookahead == '8') ADVANCE(467);
      if (lookahead == '9') ADVANCE(468);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(508);
      if (lookahead == '2') ADVANCE(509);
      if (lookahead == '3') ADVANCE(510);
      if (lookahead == '4') ADVANCE(511);
      if (lookahead == '5') ADVANCE(512);
      if (lookahead == '6') ADVANCE(513);
      if (lookahead == '7') ADVANCE(514);
      if (lookahead == '8') ADVANCE(515);
      if (lookahead == '9') ADVANCE(516);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(386);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'g') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(346);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(186);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 171:
      if (lookahead == 'k') ADVANCE(387);
      END_STATE();
    case 172:
      if (lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 173:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(423);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 249:
      if (lookahead == 'q') ADVANCE(372);
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 305:
      if (lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 306:
      if (lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 307:
      if (lookahead == 'w') ADVANCE(818);
      END_STATE();
    case 308:
      if (lookahead == 'x') ADVANCE(295);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 310:
      if (lookahead == 'y') ADVANCE(427);
      END_STATE();
    case 311:
      if (lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 312:
      if (lookahead == 'y') ADVANCE(403);
      END_STATE();
    case 313:
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 314:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 315:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 316:
      if (lookahead == 'z') ADVANCE(136);
      END_STATE();
    case 317:
      if (lookahead == 'z') ADVANCE(105);
      END_STATE();
    case 318:
      if (lookahead == 'z') ADVANCE(115);
      END_STATE();
    case 319:
      if (lookahead == 'z') ADVANCE(120);
      END_STATE();
    case 320:
      if (lookahead == 'z') ADVANCE(122);
      END_STATE();
    case 321:
      if (lookahead == 'z') ADVANCE(123);
      END_STATE();
    case 322:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(323);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      END_STATE();
    case 324:
      if (eof) ADVANCE(325);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == '{') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(324)
      END_STATE();
    case 325:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_def_val);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_takes);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'm') ADVANCE(727);
      if (lookahead == 'r') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'm') ADVANCE(731);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_div);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_sdiv);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_sdiv);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_smod);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_smod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_addmod);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_addmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_mulmod);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_mulmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_exp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_signextend);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_signextend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_lt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_gt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_slt);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_slt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_sgt);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_iszero);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_iszero);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_and);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'i') ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_sha3);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_keccak);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_keccak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_address);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_balance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_origin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_caller);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_caller);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_callvalue);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_callvalue);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_calldataload);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_calldataload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_calldatasize);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_calldatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_calldatacopy);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_calldatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_codesize);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_codesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_codecopy);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_codecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_gasprice);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_gasprice);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_extcodesize);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_extcodesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_extcodecopy);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_extcodecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_returndatasize);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_returndatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_returndatacopy);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_returndatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_blockhash);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_blockhash);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_coinbase);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_coinbase);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_difficulty);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_difficulty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_gaslimit);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_gaslimit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_chainid);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_chainid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_selfbalance);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_selfbalance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_basefee);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_basefee);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_mload);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_mload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_mstore);
      if (lookahead == '8') ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_mstore);
      if (lookahead == '8') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_mstore8);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_sload);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_sload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_sstore);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_sstore);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == 'i') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_jumpi);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_jumpi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_getpc);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_getpc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_msize);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_msize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_gas);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_gas);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'p') ADVANCE(761);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_jumpdest);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_jumpdest);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_push1);
      if (lookahead == '0') ADVANCE(469);
      if (lookahead == '1') ADVANCE(470);
      if (lookahead == '2') ADVANCE(471);
      if (lookahead == '3') ADVANCE(472);
      if (lookahead == '4') ADVANCE(473);
      if (lookahead == '5') ADVANCE(474);
      if (lookahead == '6') ADVANCE(475);
      if (lookahead == '7') ADVANCE(476);
      if (lookahead == '8') ADVANCE(477);
      if (lookahead == '9') ADVANCE(478);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_push2);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '1') ADVANCE(480);
      if (lookahead == '2') ADVANCE(481);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '4') ADVANCE(483);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead == '6') ADVANCE(485);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead == '8') ADVANCE(487);
      if (lookahead == '9') ADVANCE(488);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_push3);
      if (lookahead == '0') ADVANCE(489);
      if (lookahead == '1') ADVANCE(490);
      if (lookahead == '2') ADVANCE(491);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_push4);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_push5);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_push6);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_push7);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_push8);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_push9);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_push10);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_push11);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_push12);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_push13);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_push14);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_push15);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_push16);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_push17);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_push18);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_push19);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_push20);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_push21);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_push22);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_push23);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_push24);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_push25);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_push26);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_push27);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_push28);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_push29);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_push30);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_push31);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_push32);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_dup1);
      if (lookahead == '0') ADVANCE(501);
      if (lookahead == '1') ADVANCE(502);
      if (lookahead == '2') ADVANCE(503);
      if (lookahead == '3') ADVANCE(504);
      if (lookahead == '4') ADVANCE(505);
      if (lookahead == '5') ADVANCE(506);
      if (lookahead == '6') ADVANCE(507);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_dup2);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_dup3);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_dup4);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_dup5);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_dup6);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_dup7);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_dup8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_dup9);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_dup10);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_dup11);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_dup12);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_dup13);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_dup14);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_dup15);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_dup16);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_swap1);
      if (lookahead == '0') ADVANCE(517);
      if (lookahead == '1') ADVANCE(518);
      if (lookahead == '2') ADVANCE(519);
      if (lookahead == '3') ADVANCE(520);
      if (lookahead == '4') ADVANCE(521);
      if (lookahead == '5') ADVANCE(522);
      if (lookahead == '6') ADVANCE(523);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_swap2);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_swap3);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_swap4);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_swap5);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_swap6);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_swap7);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_swap8);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_swap9);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_swap10);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_swap11);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_swap12);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_swap13);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_swap14);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_swap15);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_swap16);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_shl);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_shl);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_shr);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_shr);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_sar);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_sar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_log0);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_log1);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_log2);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_log3);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_log4);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '2') ADVANCE(545);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '2') ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'c') ADVANCE(733);
      if (lookahead == 'd') ADVANCE(582);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead == 'v') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_callcode);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_callcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 'd') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_delegatecall);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_delegatecall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_create2);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_staticcall);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_staticcall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_revert);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_revert);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_invalid);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_invalid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_selfdestruct);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_selfdestruct);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '0') ADVANCE(530);
      if (lookahead == '1') ADVANCE(531);
      if (lookahead == '2') ADVANCE(532);
      if (lookahead == '3') ADVANCE(533);
      if (lookahead == '4') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(492);
      if (lookahead == '2') ADVANCE(493);
      if (lookahead == '3') ADVANCE(494);
      if (lookahead == '4') ADVANCE(495);
      if (lookahead == '5') ADVANCE(496);
      if (lookahead == '6') ADVANCE(497);
      if (lookahead == '7') ADVANCE(498);
      if (lookahead == '8') ADVANCE(499);
      if (lookahead == '9') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(460);
      if (lookahead == '2') ADVANCE(461);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == '4') ADVANCE(463);
      if (lookahead == '5') ADVANCE(464);
      if (lookahead == '6') ADVANCE(465);
      if (lookahead == '7') ADVANCE(466);
      if (lookahead == '8') ADVANCE(467);
      if (lookahead == '9') ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(508);
      if (lookahead == '2') ADVANCE(509);
      if (lookahead == '3') ADVANCE(510);
      if (lookahead == '4') ADVANCE(511);
      if (lookahead == '5') ADVANCE(512);
      if (lookahead == '6') ADVANCE(513);
      if (lookahead == '7') ADVANCE(514);
      if (lookahead == '8') ADVANCE(515);
      if (lookahead == '9') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '3') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'y') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == 't') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == 'd') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'h') ADVANCE(562);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == 'm') ADVANCE(723);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead == 'u') ADVANCE(587);
      if (lookahead == 'w') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(686);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(673);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(713);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == 'o') ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(770);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(695);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(702);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(698);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(705);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(699);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(575);
      if (lookahead == 'd') ADVANCE(656);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead == 's') ADVANCE(681);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(638);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == 's') ADVANCE(682);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(729);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(735);
      if (lookahead == 's') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(734);
      if (lookahead == 's') ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(609);
      if (lookahead == 'n') ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(657);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'i') ADVANCE(659);
      if (lookahead == 'u') ADVANCE(737);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(665);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(756);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(714);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(758);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(754);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(768);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(661);
      if (lookahead == 'v') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(715);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(674);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(706);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(709);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(774);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(618);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == 't') ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == 'o') ADVANCE(611);
      if (lookahead == 's') ADVANCE(679);
      if (lookahead == 'u') ADVANCE(688);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(567);
      if (lookahead == 's') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(649);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(740);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(796);
      if (lookahead == 's') ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(663);
      if (lookahead == 't') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(771);
      if (lookahead == 'u') ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(569);
      if (lookahead == 't') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(760);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'q') ADVANCE(373);
      if (lookahead == 'x') ADVANCE(738);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(718);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(710);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(632);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(680);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(668);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(667);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(764);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == 'v') ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(799);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(685);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(630);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(658);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(736);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(704);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(757);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(639);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'x') ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(809);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(809);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(809);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(809);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(809);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      if (lookahead == ',') ADVANCE(814);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__single_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_nonpayable);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(823);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 324},
  [14] = {.lex_state = 324},
  [15] = {.lex_state = 324},
  [16] = {.lex_state = 324},
  [17] = {.lex_state = 324},
  [18] = {.lex_state = 324},
  [19] = {.lex_state = 324},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 324},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 815},
  [55] = {.lex_state = 815},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_def_val] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_takes] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_sdiv] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_smod] = ACTIONS(1),
    [anon_sym_addmod] = ACTIONS(1),
    [anon_sym_mulmod] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_signextend] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_iszero] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_sha3] = ACTIONS(1),
    [anon_sym_keccak] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_origin] = ACTIONS(1),
    [anon_sym_caller] = ACTIONS(1),
    [anon_sym_callvalue] = ACTIONS(1),
    [anon_sym_calldataload] = ACTIONS(1),
    [anon_sym_calldatasize] = ACTIONS(1),
    [anon_sym_calldatacopy] = ACTIONS(1),
    [anon_sym_codesize] = ACTIONS(1),
    [anon_sym_codecopy] = ACTIONS(1),
    [anon_sym_gasprice] = ACTIONS(1),
    [anon_sym_extcodesize] = ACTIONS(1),
    [anon_sym_extcodecopy] = ACTIONS(1),
    [anon_sym_returndatasize] = ACTIONS(1),
    [anon_sym_returndatacopy] = ACTIONS(1),
    [anon_sym_blockhash] = ACTIONS(1),
    [anon_sym_coinbase] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_difficulty] = ACTIONS(1),
    [anon_sym_gaslimit] = ACTIONS(1),
    [anon_sym_chainid] = ACTIONS(1),
    [anon_sym_selfbalance] = ACTIONS(1),
    [anon_sym_basefee] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_mload] = ACTIONS(1),
    [anon_sym_mstore] = ACTIONS(1),
    [anon_sym_mstore8] = ACTIONS(1),
    [anon_sym_sload] = ACTIONS(1),
    [anon_sym_sstore] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_jumpi] = ACTIONS(1),
    [anon_sym_getpc] = ACTIONS(1),
    [anon_sym_msize] = ACTIONS(1),
    [anon_sym_gas] = ACTIONS(1),
    [anon_sym_jumpdest] = ACTIONS(1),
    [anon_sym_push1] = ACTIONS(1),
    [anon_sym_push2] = ACTIONS(1),
    [anon_sym_push3] = ACTIONS(1),
    [anon_sym_push4] = ACTIONS(1),
    [anon_sym_push5] = ACTIONS(1),
    [anon_sym_push6] = ACTIONS(1),
    [anon_sym_push7] = ACTIONS(1),
    [anon_sym_push8] = ACTIONS(1),
    [anon_sym_push9] = ACTIONS(1),
    [anon_sym_push10] = ACTIONS(1),
    [anon_sym_push11] = ACTIONS(1),
    [anon_sym_push12] = ACTIONS(1),
    [anon_sym_push13] = ACTIONS(1),
    [anon_sym_push14] = ACTIONS(1),
    [anon_sym_push15] = ACTIONS(1),
    [anon_sym_push16] = ACTIONS(1),
    [anon_sym_push17] = ACTIONS(1),
    [anon_sym_push18] = ACTIONS(1),
    [anon_sym_push19] = ACTIONS(1),
    [anon_sym_push20] = ACTIONS(1),
    [anon_sym_push21] = ACTIONS(1),
    [anon_sym_push22] = ACTIONS(1),
    [anon_sym_push23] = ACTIONS(1),
    [anon_sym_push24] = ACTIONS(1),
    [anon_sym_push25] = ACTIONS(1),
    [anon_sym_push26] = ACTIONS(1),
    [anon_sym_push27] = ACTIONS(1),
    [anon_sym_push28] = ACTIONS(1),
    [anon_sym_push29] = ACTIONS(1),
    [anon_sym_push30] = ACTIONS(1),
    [anon_sym_push31] = ACTIONS(1),
    [anon_sym_push32] = ACTIONS(1),
    [anon_sym_dup1] = ACTIONS(1),
    [anon_sym_dup2] = ACTIONS(1),
    [anon_sym_dup3] = ACTIONS(1),
    [anon_sym_dup4] = ACTIONS(1),
    [anon_sym_dup5] = ACTIONS(1),
    [anon_sym_dup6] = ACTIONS(1),
    [anon_sym_dup7] = ACTIONS(1),
    [anon_sym_dup8] = ACTIONS(1),
    [anon_sym_dup9] = ACTIONS(1),
    [anon_sym_dup10] = ACTIONS(1),
    [anon_sym_dup11] = ACTIONS(1),
    [anon_sym_dup12] = ACTIONS(1),
    [anon_sym_dup13] = ACTIONS(1),
    [anon_sym_dup14] = ACTIONS(1),
    [anon_sym_dup15] = ACTIONS(1),
    [anon_sym_dup16] = ACTIONS(1),
    [anon_sym_swap1] = ACTIONS(1),
    [anon_sym_swap2] = ACTIONS(1),
    [anon_sym_swap3] = ACTIONS(1),
    [anon_sym_swap4] = ACTIONS(1),
    [anon_sym_swap5] = ACTIONS(1),
    [anon_sym_swap6] = ACTIONS(1),
    [anon_sym_swap7] = ACTIONS(1),
    [anon_sym_swap8] = ACTIONS(1),
    [anon_sym_swap9] = ACTIONS(1),
    [anon_sym_swap10] = ACTIONS(1),
    [anon_sym_swap11] = ACTIONS(1),
    [anon_sym_swap12] = ACTIONS(1),
    [anon_sym_swap13] = ACTIONS(1),
    [anon_sym_swap14] = ACTIONS(1),
    [anon_sym_swap15] = ACTIONS(1),
    [anon_sym_swap16] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_shr] = ACTIONS(1),
    [anon_sym_sar] = ACTIONS(1),
    [anon_sym_log0] = ACTIONS(1),
    [anon_sym_log1] = ACTIONS(1),
    [anon_sym_log2] = ACTIONS(1),
    [anon_sym_log3] = ACTIONS(1),
    [anon_sym_log4] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_callcode] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_delegatecall] = ACTIONS(1),
    [anon_sym_create2] = ACTIONS(1),
    [anon_sym_staticcall] = ACTIONS(1),
    [anon_sym_revert] = ACTIONS(1),
    [anon_sym_invalid] = ACTIONS(1),
    [anon_sym_selfdestruct] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_payable] = ACTIONS(1),
    [anon_sym_nonpayable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym_definition] = STATE(21),
    [sym_keyword_definition] = STATE(45),
    [sym_interface_definition] = STATE(45),
    [sym_constant_definition] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_def_val] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_stack_assertion] = STATE(4),
    [sym__statement] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym_label] = STATE(4),
    [sym__label] = STATE(11),
    [sym__destination] = STATE(11),
    [sym_const_access] = STATE(4),
    [sym_macro_call] = STATE(4),
    [sym_identifier] = STATE(58),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_stop] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_sdiv] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_smod] = ACTIONS(15),
    [anon_sym_addmod] = ACTIONS(15),
    [anon_sym_mulmod] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_signextend] = ACTIONS(15),
    [anon_sym_lt] = ACTIONS(15),
    [anon_sym_gt] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_eq] = ACTIONS(15),
    [anon_sym_iszero] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_sha3] = ACTIONS(17),
    [anon_sym_keccak] = ACTIONS(15),
    [anon_sym_address] = ACTIONS(15),
    [anon_sym_balance] = ACTIONS(15),
    [anon_sym_origin] = ACTIONS(15),
    [anon_sym_caller] = ACTIONS(15),
    [anon_sym_callvalue] = ACTIONS(15),
    [anon_sym_calldataload] = ACTIONS(15),
    [anon_sym_calldatasize] = ACTIONS(15),
    [anon_sym_calldatacopy] = ACTIONS(15),
    [anon_sym_codesize] = ACTIONS(15),
    [anon_sym_codecopy] = ACTIONS(15),
    [anon_sym_gasprice] = ACTIONS(15),
    [anon_sym_extcodesize] = ACTIONS(15),
    [anon_sym_extcodecopy] = ACTIONS(15),
    [anon_sym_returndatasize] = ACTIONS(15),
    [anon_sym_returndatacopy] = ACTIONS(15),
    [anon_sym_blockhash] = ACTIONS(15),
    [anon_sym_coinbase] = ACTIONS(15),
    [anon_sym_timestamp] = ACTIONS(15),
    [anon_sym_number] = ACTIONS(15),
    [anon_sym_difficulty] = ACTIONS(15),
    [anon_sym_gaslimit] = ACTIONS(15),
    [anon_sym_chainid] = ACTIONS(15),
    [anon_sym_selfbalance] = ACTIONS(15),
    [anon_sym_basefee] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_mload] = ACTIONS(15),
    [anon_sym_mstore] = ACTIONS(15),
    [anon_sym_mstore8] = ACTIONS(17),
    [anon_sym_sload] = ACTIONS(15),
    [anon_sym_sstore] = ACTIONS(15),
    [anon_sym_jump] = ACTIONS(15),
    [anon_sym_jumpi] = ACTIONS(15),
    [anon_sym_getpc] = ACTIONS(15),
    [anon_sym_msize] = ACTIONS(15),
    [anon_sym_gas] = ACTIONS(15),
    [anon_sym_jumpdest] = ACTIONS(15),
    [anon_sym_push1] = ACTIONS(15),
    [anon_sym_push2] = ACTIONS(15),
    [anon_sym_push3] = ACTIONS(15),
    [anon_sym_push4] = ACTIONS(17),
    [anon_sym_push5] = ACTIONS(17),
    [anon_sym_push6] = ACTIONS(17),
    [anon_sym_push7] = ACTIONS(17),
    [anon_sym_push8] = ACTIONS(17),
    [anon_sym_push9] = ACTIONS(17),
    [anon_sym_push10] = ACTIONS(17),
    [anon_sym_push11] = ACTIONS(17),
    [anon_sym_push12] = ACTIONS(17),
    [anon_sym_push13] = ACTIONS(17),
    [anon_sym_push14] = ACTIONS(17),
    [anon_sym_push15] = ACTIONS(17),
    [anon_sym_push16] = ACTIONS(17),
    [anon_sym_push17] = ACTIONS(17),
    [anon_sym_push18] = ACTIONS(17),
    [anon_sym_push19] = ACTIONS(17),
    [anon_sym_push20] = ACTIONS(17),
    [anon_sym_push21] = ACTIONS(17),
    [anon_sym_push22] = ACTIONS(17),
    [anon_sym_push23] = ACTIONS(17),
    [anon_sym_push24] = ACTIONS(17),
    [anon_sym_push25] = ACTIONS(17),
    [anon_sym_push26] = ACTIONS(17),
    [anon_sym_push27] = ACTIONS(17),
    [anon_sym_push28] = ACTIONS(17),
    [anon_sym_push29] = ACTIONS(17),
    [anon_sym_push30] = ACTIONS(17),
    [anon_sym_push31] = ACTIONS(17),
    [anon_sym_push32] = ACTIONS(17),
    [anon_sym_dup1] = ACTIONS(15),
    [anon_sym_dup2] = ACTIONS(17),
    [anon_sym_dup3] = ACTIONS(17),
    [anon_sym_dup4] = ACTIONS(17),
    [anon_sym_dup5] = ACTIONS(17),
    [anon_sym_dup6] = ACTIONS(17),
    [anon_sym_dup7] = ACTIONS(17),
    [anon_sym_dup8] = ACTIONS(17),
    [anon_sym_dup9] = ACTIONS(17),
    [anon_sym_dup10] = ACTIONS(17),
    [anon_sym_dup11] = ACTIONS(17),
    [anon_sym_dup12] = ACTIONS(17),
    [anon_sym_dup13] = ACTIONS(17),
    [anon_sym_dup14] = ACTIONS(17),
    [anon_sym_dup15] = ACTIONS(17),
    [anon_sym_dup16] = ACTIONS(17),
    [anon_sym_swap1] = ACTIONS(15),
    [anon_sym_swap2] = ACTIONS(17),
    [anon_sym_swap3] = ACTIONS(17),
    [anon_sym_swap4] = ACTIONS(17),
    [anon_sym_swap5] = ACTIONS(17),
    [anon_sym_swap6] = ACTIONS(17),
    [anon_sym_swap7] = ACTIONS(17),
    [anon_sym_swap8] = ACTIONS(17),
    [anon_sym_swap9] = ACTIONS(17),
    [anon_sym_swap10] = ACTIONS(17),
    [anon_sym_swap11] = ACTIONS(17),
    [anon_sym_swap12] = ACTIONS(17),
    [anon_sym_swap13] = ACTIONS(17),
    [anon_sym_swap14] = ACTIONS(17),
    [anon_sym_swap15] = ACTIONS(17),
    [anon_sym_swap16] = ACTIONS(17),
    [anon_sym_shl] = ACTIONS(15),
    [anon_sym_shr] = ACTIONS(15),
    [anon_sym_sar] = ACTIONS(15),
    [anon_sym_log0] = ACTIONS(17),
    [anon_sym_log1] = ACTIONS(17),
    [anon_sym_log2] = ACTIONS(17),
    [anon_sym_log3] = ACTIONS(17),
    [anon_sym_log4] = ACTIONS(17),
    [anon_sym_create] = ACTIONS(15),
    [anon_sym_call] = ACTIONS(15),
    [anon_sym_callcode] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_delegatecall] = ACTIONS(15),
    [anon_sym_create2] = ACTIONS(17),
    [anon_sym_staticcall] = ACTIONS(15),
    [anon_sym_revert] = ACTIONS(15),
    [anon_sym_invalid] = ACTIONS(15),
    [anon_sym_selfdestruct] = ACTIONS(15),
    [aux_sym__label_token1] = ACTIONS(19),
    [sym_hex] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_stack_assertion] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_opcode] = STATE(3),
    [sym_label] = STATE(3),
    [sym__label] = STATE(11),
    [sym__destination] = STATE(11),
    [sym_const_access] = STATE(3),
    [sym_macro_call] = STATE(3),
    [sym_identifier] = STATE(58),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_stop] = ACTIONS(31),
    [anon_sym_add] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_sdiv] = ACTIONS(31),
    [anon_sym_mod] = ACTIONS(31),
    [anon_sym_smod] = ACTIONS(31),
    [anon_sym_addmod] = ACTIONS(31),
    [anon_sym_mulmod] = ACTIONS(31),
    [anon_sym_exp] = ACTIONS(31),
    [anon_sym_signextend] = ACTIONS(31),
    [anon_sym_lt] = ACTIONS(31),
    [anon_sym_gt] = ACTIONS(31),
    [anon_sym_slt] = ACTIONS(31),
    [anon_sym_sgt] = ACTIONS(31),
    [anon_sym_eq] = ACTIONS(31),
    [anon_sym_iszero] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(31),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_sha3] = ACTIONS(34),
    [anon_sym_keccak] = ACTIONS(31),
    [anon_sym_address] = ACTIONS(31),
    [anon_sym_balance] = ACTIONS(31),
    [anon_sym_origin] = ACTIONS(31),
    [anon_sym_caller] = ACTIONS(31),
    [anon_sym_callvalue] = ACTIONS(31),
    [anon_sym_calldataload] = ACTIONS(31),
    [anon_sym_calldatasize] = ACTIONS(31),
    [anon_sym_calldatacopy] = ACTIONS(31),
    [anon_sym_codesize] = ACTIONS(31),
    [anon_sym_codecopy] = ACTIONS(31),
    [anon_sym_gasprice] = ACTIONS(31),
    [anon_sym_extcodesize] = ACTIONS(31),
    [anon_sym_extcodecopy] = ACTIONS(31),
    [anon_sym_returndatasize] = ACTIONS(31),
    [anon_sym_returndatacopy] = ACTIONS(31),
    [anon_sym_blockhash] = ACTIONS(31),
    [anon_sym_coinbase] = ACTIONS(31),
    [anon_sym_timestamp] = ACTIONS(31),
    [anon_sym_number] = ACTIONS(31),
    [anon_sym_difficulty] = ACTIONS(31),
    [anon_sym_gaslimit] = ACTIONS(31),
    [anon_sym_chainid] = ACTIONS(31),
    [anon_sym_selfbalance] = ACTIONS(31),
    [anon_sym_basefee] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_mload] = ACTIONS(31),
    [anon_sym_mstore] = ACTIONS(31),
    [anon_sym_mstore8] = ACTIONS(34),
    [anon_sym_sload] = ACTIONS(31),
    [anon_sym_sstore] = ACTIONS(31),
    [anon_sym_jump] = ACTIONS(31),
    [anon_sym_jumpi] = ACTIONS(31),
    [anon_sym_getpc] = ACTIONS(31),
    [anon_sym_msize] = ACTIONS(31),
    [anon_sym_gas] = ACTIONS(31),
    [anon_sym_jumpdest] = ACTIONS(31),
    [anon_sym_push1] = ACTIONS(31),
    [anon_sym_push2] = ACTIONS(31),
    [anon_sym_push3] = ACTIONS(31),
    [anon_sym_push4] = ACTIONS(34),
    [anon_sym_push5] = ACTIONS(34),
    [anon_sym_push6] = ACTIONS(34),
    [anon_sym_push7] = ACTIONS(34),
    [anon_sym_push8] = ACTIONS(34),
    [anon_sym_push9] = ACTIONS(34),
    [anon_sym_push10] = ACTIONS(34),
    [anon_sym_push11] = ACTIONS(34),
    [anon_sym_push12] = ACTIONS(34),
    [anon_sym_push13] = ACTIONS(34),
    [anon_sym_push14] = ACTIONS(34),
    [anon_sym_push15] = ACTIONS(34),
    [anon_sym_push16] = ACTIONS(34),
    [anon_sym_push17] = ACTIONS(34),
    [anon_sym_push18] = ACTIONS(34),
    [anon_sym_push19] = ACTIONS(34),
    [anon_sym_push20] = ACTIONS(34),
    [anon_sym_push21] = ACTIONS(34),
    [anon_sym_push22] = ACTIONS(34),
    [anon_sym_push23] = ACTIONS(34),
    [anon_sym_push24] = ACTIONS(34),
    [anon_sym_push25] = ACTIONS(34),
    [anon_sym_push26] = ACTIONS(34),
    [anon_sym_push27] = ACTIONS(34),
    [anon_sym_push28] = ACTIONS(34),
    [anon_sym_push29] = ACTIONS(34),
    [anon_sym_push30] = ACTIONS(34),
    [anon_sym_push31] = ACTIONS(34),
    [anon_sym_push32] = ACTIONS(34),
    [anon_sym_dup1] = ACTIONS(31),
    [anon_sym_dup2] = ACTIONS(34),
    [anon_sym_dup3] = ACTIONS(34),
    [anon_sym_dup4] = ACTIONS(34),
    [anon_sym_dup5] = ACTIONS(34),
    [anon_sym_dup6] = ACTIONS(34),
    [anon_sym_dup7] = ACTIONS(34),
    [anon_sym_dup8] = ACTIONS(34),
    [anon_sym_dup9] = ACTIONS(34),
    [anon_sym_dup10] = ACTIONS(34),
    [anon_sym_dup11] = ACTIONS(34),
    [anon_sym_dup12] = ACTIONS(34),
    [anon_sym_dup13] = ACTIONS(34),
    [anon_sym_dup14] = ACTIONS(34),
    [anon_sym_dup15] = ACTIONS(34),
    [anon_sym_dup16] = ACTIONS(34),
    [anon_sym_swap1] = ACTIONS(31),
    [anon_sym_swap2] = ACTIONS(34),
    [anon_sym_swap3] = ACTIONS(34),
    [anon_sym_swap4] = ACTIONS(34),
    [anon_sym_swap5] = ACTIONS(34),
    [anon_sym_swap6] = ACTIONS(34),
    [anon_sym_swap7] = ACTIONS(34),
    [anon_sym_swap8] = ACTIONS(34),
    [anon_sym_swap9] = ACTIONS(34),
    [anon_sym_swap10] = ACTIONS(34),
    [anon_sym_swap11] = ACTIONS(34),
    [anon_sym_swap12] = ACTIONS(34),
    [anon_sym_swap13] = ACTIONS(34),
    [anon_sym_swap14] = ACTIONS(34),
    [anon_sym_swap15] = ACTIONS(34),
    [anon_sym_swap16] = ACTIONS(34),
    [anon_sym_shl] = ACTIONS(31),
    [anon_sym_shr] = ACTIONS(31),
    [anon_sym_sar] = ACTIONS(31),
    [anon_sym_log0] = ACTIONS(34),
    [anon_sym_log1] = ACTIONS(34),
    [anon_sym_log2] = ACTIONS(34),
    [anon_sym_log3] = ACTIONS(34),
    [anon_sym_log4] = ACTIONS(34),
    [anon_sym_create] = ACTIONS(31),
    [anon_sym_call] = ACTIONS(31),
    [anon_sym_callcode] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(31),
    [anon_sym_delegatecall] = ACTIONS(31),
    [anon_sym_create2] = ACTIONS(34),
    [anon_sym_staticcall] = ACTIONS(31),
    [anon_sym_revert] = ACTIONS(31),
    [anon_sym_invalid] = ACTIONS(31),
    [anon_sym_selfdestruct] = ACTIONS(31),
    [aux_sym__label_token1] = ACTIONS(37),
    [sym_hex] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_stack_assertion] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_opcode] = STATE(3),
    [sym_label] = STATE(3),
    [sym__label] = STATE(11),
    [sym__destination] = STATE(11),
    [sym_const_access] = STATE(3),
    [sym_macro_call] = STATE(3),
    [sym_identifier] = STATE(58),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_stop] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_sdiv] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_smod] = ACTIONS(15),
    [anon_sym_addmod] = ACTIONS(15),
    [anon_sym_mulmod] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_signextend] = ACTIONS(15),
    [anon_sym_lt] = ACTIONS(15),
    [anon_sym_gt] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_eq] = ACTIONS(15),
    [anon_sym_iszero] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_sha3] = ACTIONS(17),
    [anon_sym_keccak] = ACTIONS(15),
    [anon_sym_address] = ACTIONS(15),
    [anon_sym_balance] = ACTIONS(15),
    [anon_sym_origin] = ACTIONS(15),
    [anon_sym_caller] = ACTIONS(15),
    [anon_sym_callvalue] = ACTIONS(15),
    [anon_sym_calldataload] = ACTIONS(15),
    [anon_sym_calldatasize] = ACTIONS(15),
    [anon_sym_calldatacopy] = ACTIONS(15),
    [anon_sym_codesize] = ACTIONS(15),
    [anon_sym_codecopy] = ACTIONS(15),
    [anon_sym_gasprice] = ACTIONS(15),
    [anon_sym_extcodesize] = ACTIONS(15),
    [anon_sym_extcodecopy] = ACTIONS(15),
    [anon_sym_returndatasize] = ACTIONS(15),
    [anon_sym_returndatacopy] = ACTIONS(15),
    [anon_sym_blockhash] = ACTIONS(15),
    [anon_sym_coinbase] = ACTIONS(15),
    [anon_sym_timestamp] = ACTIONS(15),
    [anon_sym_number] = ACTIONS(15),
    [anon_sym_difficulty] = ACTIONS(15),
    [anon_sym_gaslimit] = ACTIONS(15),
    [anon_sym_chainid] = ACTIONS(15),
    [anon_sym_selfbalance] = ACTIONS(15),
    [anon_sym_basefee] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_mload] = ACTIONS(15),
    [anon_sym_mstore] = ACTIONS(15),
    [anon_sym_mstore8] = ACTIONS(17),
    [anon_sym_sload] = ACTIONS(15),
    [anon_sym_sstore] = ACTIONS(15),
    [anon_sym_jump] = ACTIONS(15),
    [anon_sym_jumpi] = ACTIONS(15),
    [anon_sym_getpc] = ACTIONS(15),
    [anon_sym_msize] = ACTIONS(15),
    [anon_sym_gas] = ACTIONS(15),
    [anon_sym_jumpdest] = ACTIONS(15),
    [anon_sym_push1] = ACTIONS(15),
    [anon_sym_push2] = ACTIONS(15),
    [anon_sym_push3] = ACTIONS(15),
    [anon_sym_push4] = ACTIONS(17),
    [anon_sym_push5] = ACTIONS(17),
    [anon_sym_push6] = ACTIONS(17),
    [anon_sym_push7] = ACTIONS(17),
    [anon_sym_push8] = ACTIONS(17),
    [anon_sym_push9] = ACTIONS(17),
    [anon_sym_push10] = ACTIONS(17),
    [anon_sym_push11] = ACTIONS(17),
    [anon_sym_push12] = ACTIONS(17),
    [anon_sym_push13] = ACTIONS(17),
    [anon_sym_push14] = ACTIONS(17),
    [anon_sym_push15] = ACTIONS(17),
    [anon_sym_push16] = ACTIONS(17),
    [anon_sym_push17] = ACTIONS(17),
    [anon_sym_push18] = ACTIONS(17),
    [anon_sym_push19] = ACTIONS(17),
    [anon_sym_push20] = ACTIONS(17),
    [anon_sym_push21] = ACTIONS(17),
    [anon_sym_push22] = ACTIONS(17),
    [anon_sym_push23] = ACTIONS(17),
    [anon_sym_push24] = ACTIONS(17),
    [anon_sym_push25] = ACTIONS(17),
    [anon_sym_push26] = ACTIONS(17),
    [anon_sym_push27] = ACTIONS(17),
    [anon_sym_push28] = ACTIONS(17),
    [anon_sym_push29] = ACTIONS(17),
    [anon_sym_push30] = ACTIONS(17),
    [anon_sym_push31] = ACTIONS(17),
    [anon_sym_push32] = ACTIONS(17),
    [anon_sym_dup1] = ACTIONS(15),
    [anon_sym_dup2] = ACTIONS(17),
    [anon_sym_dup3] = ACTIONS(17),
    [anon_sym_dup4] = ACTIONS(17),
    [anon_sym_dup5] = ACTIONS(17),
    [anon_sym_dup6] = ACTIONS(17),
    [anon_sym_dup7] = ACTIONS(17),
    [anon_sym_dup8] = ACTIONS(17),
    [anon_sym_dup9] = ACTIONS(17),
    [anon_sym_dup10] = ACTIONS(17),
    [anon_sym_dup11] = ACTIONS(17),
    [anon_sym_dup12] = ACTIONS(17),
    [anon_sym_dup13] = ACTIONS(17),
    [anon_sym_dup14] = ACTIONS(17),
    [anon_sym_dup15] = ACTIONS(17),
    [anon_sym_dup16] = ACTIONS(17),
    [anon_sym_swap1] = ACTIONS(15),
    [anon_sym_swap2] = ACTIONS(17),
    [anon_sym_swap3] = ACTIONS(17),
    [anon_sym_swap4] = ACTIONS(17),
    [anon_sym_swap5] = ACTIONS(17),
    [anon_sym_swap6] = ACTIONS(17),
    [anon_sym_swap7] = ACTIONS(17),
    [anon_sym_swap8] = ACTIONS(17),
    [anon_sym_swap9] = ACTIONS(17),
    [anon_sym_swap10] = ACTIONS(17),
    [anon_sym_swap11] = ACTIONS(17),
    [anon_sym_swap12] = ACTIONS(17),
    [anon_sym_swap13] = ACTIONS(17),
    [anon_sym_swap14] = ACTIONS(17),
    [anon_sym_swap15] = ACTIONS(17),
    [anon_sym_swap16] = ACTIONS(17),
    [anon_sym_shl] = ACTIONS(15),
    [anon_sym_shr] = ACTIONS(15),
    [anon_sym_sar] = ACTIONS(15),
    [anon_sym_log0] = ACTIONS(17),
    [anon_sym_log1] = ACTIONS(17),
    [anon_sym_log2] = ACTIONS(17),
    [anon_sym_log3] = ACTIONS(17),
    [anon_sym_log4] = ACTIONS(17),
    [anon_sym_create] = ACTIONS(15),
    [anon_sym_call] = ACTIONS(15),
    [anon_sym_callcode] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_delegatecall] = ACTIONS(15),
    [anon_sym_create2] = ACTIONS(17),
    [anon_sym_staticcall] = ACTIONS(15),
    [anon_sym_revert] = ACTIONS(15),
    [anon_sym_invalid] = ACTIONS(15),
    [anon_sym_selfdestruct] = ACTIONS(15),
    [aux_sym__label_token1] = ACTIONS(19),
    [sym_hex] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_stop] = ACTIONS(49),
    [anon_sym_add] = ACTIONS(49),
    [anon_sym_mul] = ACTIONS(49),
    [anon_sym_sub] = ACTIONS(49),
    [anon_sym_div] = ACTIONS(49),
    [anon_sym_sdiv] = ACTIONS(49),
    [anon_sym_mod] = ACTIONS(49),
    [anon_sym_smod] = ACTIONS(49),
    [anon_sym_addmod] = ACTIONS(49),
    [anon_sym_mulmod] = ACTIONS(49),
    [anon_sym_exp] = ACTIONS(49),
    [anon_sym_signextend] = ACTIONS(49),
    [anon_sym_lt] = ACTIONS(49),
    [anon_sym_gt] = ACTIONS(49),
    [anon_sym_slt] = ACTIONS(49),
    [anon_sym_sgt] = ACTIONS(49),
    [anon_sym_eq] = ACTIONS(49),
    [anon_sym_iszero] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_xor] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(49),
    [anon_sym_byte] = ACTIONS(49),
    [anon_sym_sha3] = ACTIONS(47),
    [anon_sym_keccak] = ACTIONS(49),
    [anon_sym_address] = ACTIONS(49),
    [anon_sym_balance] = ACTIONS(49),
    [anon_sym_origin] = ACTIONS(49),
    [anon_sym_caller] = ACTIONS(49),
    [anon_sym_callvalue] = ACTIONS(49),
    [anon_sym_calldataload] = ACTIONS(49),
    [anon_sym_calldatasize] = ACTIONS(49),
    [anon_sym_calldatacopy] = ACTIONS(49),
    [anon_sym_codesize] = ACTIONS(49),
    [anon_sym_codecopy] = ACTIONS(49),
    [anon_sym_gasprice] = ACTIONS(49),
    [anon_sym_extcodesize] = ACTIONS(49),
    [anon_sym_extcodecopy] = ACTIONS(49),
    [anon_sym_returndatasize] = ACTIONS(49),
    [anon_sym_returndatacopy] = ACTIONS(49),
    [anon_sym_blockhash] = ACTIONS(49),
    [anon_sym_coinbase] = ACTIONS(49),
    [anon_sym_timestamp] = ACTIONS(49),
    [anon_sym_number] = ACTIONS(49),
    [anon_sym_difficulty] = ACTIONS(49),
    [anon_sym_gaslimit] = ACTIONS(49),
    [anon_sym_chainid] = ACTIONS(49),
    [anon_sym_selfbalance] = ACTIONS(49),
    [anon_sym_basefee] = ACTIONS(49),
    [anon_sym_pop] = ACTIONS(49),
    [anon_sym_mload] = ACTIONS(49),
    [anon_sym_mstore] = ACTIONS(49),
    [anon_sym_mstore8] = ACTIONS(47),
    [anon_sym_sload] = ACTIONS(49),
    [anon_sym_sstore] = ACTIONS(49),
    [anon_sym_jump] = ACTIONS(49),
    [anon_sym_jumpi] = ACTIONS(49),
    [anon_sym_getpc] = ACTIONS(49),
    [anon_sym_msize] = ACTIONS(49),
    [anon_sym_gas] = ACTIONS(49),
    [anon_sym_jumpdest] = ACTIONS(49),
    [anon_sym_push1] = ACTIONS(49),
    [anon_sym_push2] = ACTIONS(49),
    [anon_sym_push3] = ACTIONS(49),
    [anon_sym_push4] = ACTIONS(47),
    [anon_sym_push5] = ACTIONS(47),
    [anon_sym_push6] = ACTIONS(47),
    [anon_sym_push7] = ACTIONS(47),
    [anon_sym_push8] = ACTIONS(47),
    [anon_sym_push9] = ACTIONS(47),
    [anon_sym_push10] = ACTIONS(47),
    [anon_sym_push11] = ACTIONS(47),
    [anon_sym_push12] = ACTIONS(47),
    [anon_sym_push13] = ACTIONS(47),
    [anon_sym_push14] = ACTIONS(47),
    [anon_sym_push15] = ACTIONS(47),
    [anon_sym_push16] = ACTIONS(47),
    [anon_sym_push17] = ACTIONS(47),
    [anon_sym_push18] = ACTIONS(47),
    [anon_sym_push19] = ACTIONS(47),
    [anon_sym_push20] = ACTIONS(47),
    [anon_sym_push21] = ACTIONS(47),
    [anon_sym_push22] = ACTIONS(47),
    [anon_sym_push23] = ACTIONS(47),
    [anon_sym_push24] = ACTIONS(47),
    [anon_sym_push25] = ACTIONS(47),
    [anon_sym_push26] = ACTIONS(47),
    [anon_sym_push27] = ACTIONS(47),
    [anon_sym_push28] = ACTIONS(47),
    [anon_sym_push29] = ACTIONS(47),
    [anon_sym_push30] = ACTIONS(47),
    [anon_sym_push31] = ACTIONS(47),
    [anon_sym_push32] = ACTIONS(47),
    [anon_sym_dup1] = ACTIONS(49),
    [anon_sym_dup2] = ACTIONS(47),
    [anon_sym_dup3] = ACTIONS(47),
    [anon_sym_dup4] = ACTIONS(47),
    [anon_sym_dup5] = ACTIONS(47),
    [anon_sym_dup6] = ACTIONS(47),
    [anon_sym_dup7] = ACTIONS(47),
    [anon_sym_dup8] = ACTIONS(47),
    [anon_sym_dup9] = ACTIONS(47),
    [anon_sym_dup10] = ACTIONS(47),
    [anon_sym_dup11] = ACTIONS(47),
    [anon_sym_dup12] = ACTIONS(47),
    [anon_sym_dup13] = ACTIONS(47),
    [anon_sym_dup14] = ACTIONS(47),
    [anon_sym_dup15] = ACTIONS(47),
    [anon_sym_dup16] = ACTIONS(47),
    [anon_sym_swap1] = ACTIONS(49),
    [anon_sym_swap2] = ACTIONS(47),
    [anon_sym_swap3] = ACTIONS(47),
    [anon_sym_swap4] = ACTIONS(47),
    [anon_sym_swap5] = ACTIONS(47),
    [anon_sym_swap6] = ACTIONS(47),
    [anon_sym_swap7] = ACTIONS(47),
    [anon_sym_swap8] = ACTIONS(47),
    [anon_sym_swap9] = ACTIONS(47),
    [anon_sym_swap10] = ACTIONS(47),
    [anon_sym_swap11] = ACTIONS(47),
    [anon_sym_swap12] = ACTIONS(47),
    [anon_sym_swap13] = ACTIONS(47),
    [anon_sym_swap14] = ACTIONS(47),
    [anon_sym_swap15] = ACTIONS(47),
    [anon_sym_swap16] = ACTIONS(47),
    [anon_sym_shl] = ACTIONS(49),
    [anon_sym_shr] = ACTIONS(49),
    [anon_sym_sar] = ACTIONS(49),
    [anon_sym_log0] = ACTIONS(47),
    [anon_sym_log1] = ACTIONS(47),
    [anon_sym_log2] = ACTIONS(47),
    [anon_sym_log3] = ACTIONS(47),
    [anon_sym_log4] = ACTIONS(47),
    [anon_sym_create] = ACTIONS(49),
    [anon_sym_call] = ACTIONS(49),
    [anon_sym_callcode] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(49),
    [anon_sym_delegatecall] = ACTIONS(49),
    [anon_sym_create2] = ACTIONS(47),
    [anon_sym_staticcall] = ACTIONS(49),
    [anon_sym_revert] = ACTIONS(49),
    [anon_sym_invalid] = ACTIONS(49),
    [anon_sym_selfdestruct] = ACTIONS(49),
    [aux_sym__label_token1] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(51),
    [sym_hex] = ACTIONS(47),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_stop] = ACTIONS(57),
    [anon_sym_add] = ACTIONS(57),
    [anon_sym_mul] = ACTIONS(57),
    [anon_sym_sub] = ACTIONS(57),
    [anon_sym_div] = ACTIONS(57),
    [anon_sym_sdiv] = ACTIONS(57),
    [anon_sym_mod] = ACTIONS(57),
    [anon_sym_smod] = ACTIONS(57),
    [anon_sym_addmod] = ACTIONS(57),
    [anon_sym_mulmod] = ACTIONS(57),
    [anon_sym_exp] = ACTIONS(57),
    [anon_sym_signextend] = ACTIONS(57),
    [anon_sym_lt] = ACTIONS(57),
    [anon_sym_gt] = ACTIONS(57),
    [anon_sym_slt] = ACTIONS(57),
    [anon_sym_sgt] = ACTIONS(57),
    [anon_sym_eq] = ACTIONS(57),
    [anon_sym_iszero] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_xor] = ACTIONS(57),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_byte] = ACTIONS(57),
    [anon_sym_sha3] = ACTIONS(55),
    [anon_sym_keccak] = ACTIONS(57),
    [anon_sym_address] = ACTIONS(57),
    [anon_sym_balance] = ACTIONS(57),
    [anon_sym_origin] = ACTIONS(57),
    [anon_sym_caller] = ACTIONS(57),
    [anon_sym_callvalue] = ACTIONS(57),
    [anon_sym_calldataload] = ACTIONS(57),
    [anon_sym_calldatasize] = ACTIONS(57),
    [anon_sym_calldatacopy] = ACTIONS(57),
    [anon_sym_codesize] = ACTIONS(57),
    [anon_sym_codecopy] = ACTIONS(57),
    [anon_sym_gasprice] = ACTIONS(57),
    [anon_sym_extcodesize] = ACTIONS(57),
    [anon_sym_extcodecopy] = ACTIONS(57),
    [anon_sym_returndatasize] = ACTIONS(57),
    [anon_sym_returndatacopy] = ACTIONS(57),
    [anon_sym_blockhash] = ACTIONS(57),
    [anon_sym_coinbase] = ACTIONS(57),
    [anon_sym_timestamp] = ACTIONS(57),
    [anon_sym_number] = ACTIONS(57),
    [anon_sym_difficulty] = ACTIONS(57),
    [anon_sym_gaslimit] = ACTIONS(57),
    [anon_sym_chainid] = ACTIONS(57),
    [anon_sym_selfbalance] = ACTIONS(57),
    [anon_sym_basefee] = ACTIONS(57),
    [anon_sym_pop] = ACTIONS(57),
    [anon_sym_mload] = ACTIONS(57),
    [anon_sym_mstore] = ACTIONS(57),
    [anon_sym_mstore8] = ACTIONS(55),
    [anon_sym_sload] = ACTIONS(57),
    [anon_sym_sstore] = ACTIONS(57),
    [anon_sym_jump] = ACTIONS(57),
    [anon_sym_jumpi] = ACTIONS(57),
    [anon_sym_getpc] = ACTIONS(57),
    [anon_sym_msize] = ACTIONS(57),
    [anon_sym_gas] = ACTIONS(57),
    [anon_sym_jumpdest] = ACTIONS(57),
    [anon_sym_push1] = ACTIONS(57),
    [anon_sym_push2] = ACTIONS(57),
    [anon_sym_push3] = ACTIONS(57),
    [anon_sym_push4] = ACTIONS(55),
    [anon_sym_push5] = ACTIONS(55),
    [anon_sym_push6] = ACTIONS(55),
    [anon_sym_push7] = ACTIONS(55),
    [anon_sym_push8] = ACTIONS(55),
    [anon_sym_push9] = ACTIONS(55),
    [anon_sym_push10] = ACTIONS(55),
    [anon_sym_push11] = ACTIONS(55),
    [anon_sym_push12] = ACTIONS(55),
    [anon_sym_push13] = ACTIONS(55),
    [anon_sym_push14] = ACTIONS(55),
    [anon_sym_push15] = ACTIONS(55),
    [anon_sym_push16] = ACTIONS(55),
    [anon_sym_push17] = ACTIONS(55),
    [anon_sym_push18] = ACTIONS(55),
    [anon_sym_push19] = ACTIONS(55),
    [anon_sym_push20] = ACTIONS(55),
    [anon_sym_push21] = ACTIONS(55),
    [anon_sym_push22] = ACTIONS(55),
    [anon_sym_push23] = ACTIONS(55),
    [anon_sym_push24] = ACTIONS(55),
    [anon_sym_push25] = ACTIONS(55),
    [anon_sym_push26] = ACTIONS(55),
    [anon_sym_push27] = ACTIONS(55),
    [anon_sym_push28] = ACTIONS(55),
    [anon_sym_push29] = ACTIONS(55),
    [anon_sym_push30] = ACTIONS(55),
    [anon_sym_push31] = ACTIONS(55),
    [anon_sym_push32] = ACTIONS(55),
    [anon_sym_dup1] = ACTIONS(57),
    [anon_sym_dup2] = ACTIONS(55),
    [anon_sym_dup3] = ACTIONS(55),
    [anon_sym_dup4] = ACTIONS(55),
    [anon_sym_dup5] = ACTIONS(55),
    [anon_sym_dup6] = ACTIONS(55),
    [anon_sym_dup7] = ACTIONS(55),
    [anon_sym_dup8] = ACTIONS(55),
    [anon_sym_dup9] = ACTIONS(55),
    [anon_sym_dup10] = ACTIONS(55),
    [anon_sym_dup11] = ACTIONS(55),
    [anon_sym_dup12] = ACTIONS(55),
    [anon_sym_dup13] = ACTIONS(55),
    [anon_sym_dup14] = ACTIONS(55),
    [anon_sym_dup15] = ACTIONS(55),
    [anon_sym_dup16] = ACTIONS(55),
    [anon_sym_swap1] = ACTIONS(57),
    [anon_sym_swap2] = ACTIONS(55),
    [anon_sym_swap3] = ACTIONS(55),
    [anon_sym_swap4] = ACTIONS(55),
    [anon_sym_swap5] = ACTIONS(55),
    [anon_sym_swap6] = ACTIONS(55),
    [anon_sym_swap7] = ACTIONS(55),
    [anon_sym_swap8] = ACTIONS(55),
    [anon_sym_swap9] = ACTIONS(55),
    [anon_sym_swap10] = ACTIONS(55),
    [anon_sym_swap11] = ACTIONS(55),
    [anon_sym_swap12] = ACTIONS(55),
    [anon_sym_swap13] = ACTIONS(55),
    [anon_sym_swap14] = ACTIONS(55),
    [anon_sym_swap15] = ACTIONS(55),
    [anon_sym_swap16] = ACTIONS(55),
    [anon_sym_shl] = ACTIONS(57),
    [anon_sym_shr] = ACTIONS(57),
    [anon_sym_sar] = ACTIONS(57),
    [anon_sym_log0] = ACTIONS(55),
    [anon_sym_log1] = ACTIONS(55),
    [anon_sym_log2] = ACTIONS(55),
    [anon_sym_log3] = ACTIONS(55),
    [anon_sym_log4] = ACTIONS(55),
    [anon_sym_create] = ACTIONS(57),
    [anon_sym_call] = ACTIONS(57),
    [anon_sym_callcode] = ACTIONS(57),
    [anon_sym_return] = ACTIONS(57),
    [anon_sym_delegatecall] = ACTIONS(57),
    [anon_sym_create2] = ACTIONS(55),
    [anon_sym_staticcall] = ACTIONS(57),
    [anon_sym_revert] = ACTIONS(57),
    [anon_sym_invalid] = ACTIONS(57),
    [anon_sym_selfdestruct] = ACTIONS(57),
    [aux_sym__label_token1] = ACTIONS(57),
    [sym_hex] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_stop] = ACTIONS(61),
    [anon_sym_add] = ACTIONS(61),
    [anon_sym_mul] = ACTIONS(61),
    [anon_sym_sub] = ACTIONS(61),
    [anon_sym_div] = ACTIONS(61),
    [anon_sym_sdiv] = ACTIONS(61),
    [anon_sym_mod] = ACTIONS(61),
    [anon_sym_smod] = ACTIONS(61),
    [anon_sym_addmod] = ACTIONS(61),
    [anon_sym_mulmod] = ACTIONS(61),
    [anon_sym_exp] = ACTIONS(61),
    [anon_sym_signextend] = ACTIONS(61),
    [anon_sym_lt] = ACTIONS(61),
    [anon_sym_gt] = ACTIONS(61),
    [anon_sym_slt] = ACTIONS(61),
    [anon_sym_sgt] = ACTIONS(61),
    [anon_sym_eq] = ACTIONS(61),
    [anon_sym_iszero] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_xor] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_byte] = ACTIONS(61),
    [anon_sym_sha3] = ACTIONS(59),
    [anon_sym_keccak] = ACTIONS(61),
    [anon_sym_address] = ACTIONS(61),
    [anon_sym_balance] = ACTIONS(61),
    [anon_sym_origin] = ACTIONS(61),
    [anon_sym_caller] = ACTIONS(61),
    [anon_sym_callvalue] = ACTIONS(61),
    [anon_sym_calldataload] = ACTIONS(61),
    [anon_sym_calldatasize] = ACTIONS(61),
    [anon_sym_calldatacopy] = ACTIONS(61),
    [anon_sym_codesize] = ACTIONS(61),
    [anon_sym_codecopy] = ACTIONS(61),
    [anon_sym_gasprice] = ACTIONS(61),
    [anon_sym_extcodesize] = ACTIONS(61),
    [anon_sym_extcodecopy] = ACTIONS(61),
    [anon_sym_returndatasize] = ACTIONS(61),
    [anon_sym_returndatacopy] = ACTIONS(61),
    [anon_sym_blockhash] = ACTIONS(61),
    [anon_sym_coinbase] = ACTIONS(61),
    [anon_sym_timestamp] = ACTIONS(61),
    [anon_sym_number] = ACTIONS(61),
    [anon_sym_difficulty] = ACTIONS(61),
    [anon_sym_gaslimit] = ACTIONS(61),
    [anon_sym_chainid] = ACTIONS(61),
    [anon_sym_selfbalance] = ACTIONS(61),
    [anon_sym_basefee] = ACTIONS(61),
    [anon_sym_pop] = ACTIONS(61),
    [anon_sym_mload] = ACTIONS(61),
    [anon_sym_mstore] = ACTIONS(61),
    [anon_sym_mstore8] = ACTIONS(59),
    [anon_sym_sload] = ACTIONS(61),
    [anon_sym_sstore] = ACTIONS(61),
    [anon_sym_jump] = ACTIONS(61),
    [anon_sym_jumpi] = ACTIONS(61),
    [anon_sym_getpc] = ACTIONS(61),
    [anon_sym_msize] = ACTIONS(61),
    [anon_sym_gas] = ACTIONS(61),
    [anon_sym_jumpdest] = ACTIONS(61),
    [anon_sym_push1] = ACTIONS(61),
    [anon_sym_push2] = ACTIONS(61),
    [anon_sym_push3] = ACTIONS(61),
    [anon_sym_push4] = ACTIONS(59),
    [anon_sym_push5] = ACTIONS(59),
    [anon_sym_push6] = ACTIONS(59),
    [anon_sym_push7] = ACTIONS(59),
    [anon_sym_push8] = ACTIONS(59),
    [anon_sym_push9] = ACTIONS(59),
    [anon_sym_push10] = ACTIONS(59),
    [anon_sym_push11] = ACTIONS(59),
    [anon_sym_push12] = ACTIONS(59),
    [anon_sym_push13] = ACTIONS(59),
    [anon_sym_push14] = ACTIONS(59),
    [anon_sym_push15] = ACTIONS(59),
    [anon_sym_push16] = ACTIONS(59),
    [anon_sym_push17] = ACTIONS(59),
    [anon_sym_push18] = ACTIONS(59),
    [anon_sym_push19] = ACTIONS(59),
    [anon_sym_push20] = ACTIONS(59),
    [anon_sym_push21] = ACTIONS(59),
    [anon_sym_push22] = ACTIONS(59),
    [anon_sym_push23] = ACTIONS(59),
    [anon_sym_push24] = ACTIONS(59),
    [anon_sym_push25] = ACTIONS(59),
    [anon_sym_push26] = ACTIONS(59),
    [anon_sym_push27] = ACTIONS(59),
    [anon_sym_push28] = ACTIONS(59),
    [anon_sym_push29] = ACTIONS(59),
    [anon_sym_push30] = ACTIONS(59),
    [anon_sym_push31] = ACTIONS(59),
    [anon_sym_push32] = ACTIONS(59),
    [anon_sym_dup1] = ACTIONS(61),
    [anon_sym_dup2] = ACTIONS(59),
    [anon_sym_dup3] = ACTIONS(59),
    [anon_sym_dup4] = ACTIONS(59),
    [anon_sym_dup5] = ACTIONS(59),
    [anon_sym_dup6] = ACTIONS(59),
    [anon_sym_dup7] = ACTIONS(59),
    [anon_sym_dup8] = ACTIONS(59),
    [anon_sym_dup9] = ACTIONS(59),
    [anon_sym_dup10] = ACTIONS(59),
    [anon_sym_dup11] = ACTIONS(59),
    [anon_sym_dup12] = ACTIONS(59),
    [anon_sym_dup13] = ACTIONS(59),
    [anon_sym_dup14] = ACTIONS(59),
    [anon_sym_dup15] = ACTIONS(59),
    [anon_sym_dup16] = ACTIONS(59),
    [anon_sym_swap1] = ACTIONS(61),
    [anon_sym_swap2] = ACTIONS(59),
    [anon_sym_swap3] = ACTIONS(59),
    [anon_sym_swap4] = ACTIONS(59),
    [anon_sym_swap5] = ACTIONS(59),
    [anon_sym_swap6] = ACTIONS(59),
    [anon_sym_swap7] = ACTIONS(59),
    [anon_sym_swap8] = ACTIONS(59),
    [anon_sym_swap9] = ACTIONS(59),
    [anon_sym_swap10] = ACTIONS(59),
    [anon_sym_swap11] = ACTIONS(59),
    [anon_sym_swap12] = ACTIONS(59),
    [anon_sym_swap13] = ACTIONS(59),
    [anon_sym_swap14] = ACTIONS(59),
    [anon_sym_swap15] = ACTIONS(59),
    [anon_sym_swap16] = ACTIONS(59),
    [anon_sym_shl] = ACTIONS(61),
    [anon_sym_shr] = ACTIONS(61),
    [anon_sym_sar] = ACTIONS(61),
    [anon_sym_log0] = ACTIONS(59),
    [anon_sym_log1] = ACTIONS(59),
    [anon_sym_log2] = ACTIONS(59),
    [anon_sym_log3] = ACTIONS(59),
    [anon_sym_log4] = ACTIONS(59),
    [anon_sym_create] = ACTIONS(61),
    [anon_sym_call] = ACTIONS(61),
    [anon_sym_callcode] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_delegatecall] = ACTIONS(61),
    [anon_sym_create2] = ACTIONS(59),
    [anon_sym_staticcall] = ACTIONS(61),
    [anon_sym_revert] = ACTIONS(61),
    [anon_sym_invalid] = ACTIONS(61),
    [anon_sym_selfdestruct] = ACTIONS(61),
    [aux_sym__label_token1] = ACTIONS(61),
    [sym_hex] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_DOLLAR] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_stop] = ACTIONS(65),
    [anon_sym_add] = ACTIONS(65),
    [anon_sym_mul] = ACTIONS(65),
    [anon_sym_sub] = ACTIONS(65),
    [anon_sym_div] = ACTIONS(65),
    [anon_sym_sdiv] = ACTIONS(65),
    [anon_sym_mod] = ACTIONS(65),
    [anon_sym_smod] = ACTIONS(65),
    [anon_sym_addmod] = ACTIONS(65),
    [anon_sym_mulmod] = ACTIONS(65),
    [anon_sym_exp] = ACTIONS(65),
    [anon_sym_signextend] = ACTIONS(65),
    [anon_sym_lt] = ACTIONS(65),
    [anon_sym_gt] = ACTIONS(65),
    [anon_sym_slt] = ACTIONS(65),
    [anon_sym_sgt] = ACTIONS(65),
    [anon_sym_eq] = ACTIONS(65),
    [anon_sym_iszero] = ACTIONS(65),
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_or] = ACTIONS(65),
    [anon_sym_xor] = ACTIONS(65),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_byte] = ACTIONS(65),
    [anon_sym_sha3] = ACTIONS(63),
    [anon_sym_keccak] = ACTIONS(65),
    [anon_sym_address] = ACTIONS(65),
    [anon_sym_balance] = ACTIONS(65),
    [anon_sym_origin] = ACTIONS(65),
    [anon_sym_caller] = ACTIONS(65),
    [anon_sym_callvalue] = ACTIONS(65),
    [anon_sym_calldataload] = ACTIONS(65),
    [anon_sym_calldatasize] = ACTIONS(65),
    [anon_sym_calldatacopy] = ACTIONS(65),
    [anon_sym_codesize] = ACTIONS(65),
    [anon_sym_codecopy] = ACTIONS(65),
    [anon_sym_gasprice] = ACTIONS(65),
    [anon_sym_extcodesize] = ACTIONS(65),
    [anon_sym_extcodecopy] = ACTIONS(65),
    [anon_sym_returndatasize] = ACTIONS(65),
    [anon_sym_returndatacopy] = ACTIONS(65),
    [anon_sym_blockhash] = ACTIONS(65),
    [anon_sym_coinbase] = ACTIONS(65),
    [anon_sym_timestamp] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_difficulty] = ACTIONS(65),
    [anon_sym_gaslimit] = ACTIONS(65),
    [anon_sym_chainid] = ACTIONS(65),
    [anon_sym_selfbalance] = ACTIONS(65),
    [anon_sym_basefee] = ACTIONS(65),
    [anon_sym_pop] = ACTIONS(65),
    [anon_sym_mload] = ACTIONS(65),
    [anon_sym_mstore] = ACTIONS(65),
    [anon_sym_mstore8] = ACTIONS(63),
    [anon_sym_sload] = ACTIONS(65),
    [anon_sym_sstore] = ACTIONS(65),
    [anon_sym_jump] = ACTIONS(65),
    [anon_sym_jumpi] = ACTIONS(65),
    [anon_sym_getpc] = ACTIONS(65),
    [anon_sym_msize] = ACTIONS(65),
    [anon_sym_gas] = ACTIONS(65),
    [anon_sym_jumpdest] = ACTIONS(65),
    [anon_sym_push1] = ACTIONS(65),
    [anon_sym_push2] = ACTIONS(65),
    [anon_sym_push3] = ACTIONS(65),
    [anon_sym_push4] = ACTIONS(63),
    [anon_sym_push5] = ACTIONS(63),
    [anon_sym_push6] = ACTIONS(63),
    [anon_sym_push7] = ACTIONS(63),
    [anon_sym_push8] = ACTIONS(63),
    [anon_sym_push9] = ACTIONS(63),
    [anon_sym_push10] = ACTIONS(63),
    [anon_sym_push11] = ACTIONS(63),
    [anon_sym_push12] = ACTIONS(63),
    [anon_sym_push13] = ACTIONS(63),
    [anon_sym_push14] = ACTIONS(63),
    [anon_sym_push15] = ACTIONS(63),
    [anon_sym_push16] = ACTIONS(63),
    [anon_sym_push17] = ACTIONS(63),
    [anon_sym_push18] = ACTIONS(63),
    [anon_sym_push19] = ACTIONS(63),
    [anon_sym_push20] = ACTIONS(63),
    [anon_sym_push21] = ACTIONS(63),
    [anon_sym_push22] = ACTIONS(63),
    [anon_sym_push23] = ACTIONS(63),
    [anon_sym_push24] = ACTIONS(63),
    [anon_sym_push25] = ACTIONS(63),
    [anon_sym_push26] = ACTIONS(63),
    [anon_sym_push27] = ACTIONS(63),
    [anon_sym_push28] = ACTIONS(63),
    [anon_sym_push29] = ACTIONS(63),
    [anon_sym_push30] = ACTIONS(63),
    [anon_sym_push31] = ACTIONS(63),
    [anon_sym_push32] = ACTIONS(63),
    [anon_sym_dup1] = ACTIONS(65),
    [anon_sym_dup2] = ACTIONS(63),
    [anon_sym_dup3] = ACTIONS(63),
    [anon_sym_dup4] = ACTIONS(63),
    [anon_sym_dup5] = ACTIONS(63),
    [anon_sym_dup6] = ACTIONS(63),
    [anon_sym_dup7] = ACTIONS(63),
    [anon_sym_dup8] = ACTIONS(63),
    [anon_sym_dup9] = ACTIONS(63),
    [anon_sym_dup10] = ACTIONS(63),
    [anon_sym_dup11] = ACTIONS(63),
    [anon_sym_dup12] = ACTIONS(63),
    [anon_sym_dup13] = ACTIONS(63),
    [anon_sym_dup14] = ACTIONS(63),
    [anon_sym_dup15] = ACTIONS(63),
    [anon_sym_dup16] = ACTIONS(63),
    [anon_sym_swap1] = ACTIONS(65),
    [anon_sym_swap2] = ACTIONS(63),
    [anon_sym_swap3] = ACTIONS(63),
    [anon_sym_swap4] = ACTIONS(63),
    [anon_sym_swap5] = ACTIONS(63),
    [anon_sym_swap6] = ACTIONS(63),
    [anon_sym_swap7] = ACTIONS(63),
    [anon_sym_swap8] = ACTIONS(63),
    [anon_sym_swap9] = ACTIONS(63),
    [anon_sym_swap10] = ACTIONS(63),
    [anon_sym_swap11] = ACTIONS(63),
    [anon_sym_swap12] = ACTIONS(63),
    [anon_sym_swap13] = ACTIONS(63),
    [anon_sym_swap14] = ACTIONS(63),
    [anon_sym_swap15] = ACTIONS(63),
    [anon_sym_swap16] = ACTIONS(63),
    [anon_sym_shl] = ACTIONS(65),
    [anon_sym_shr] = ACTIONS(65),
    [anon_sym_sar] = ACTIONS(65),
    [anon_sym_log0] = ACTIONS(63),
    [anon_sym_log1] = ACTIONS(63),
    [anon_sym_log2] = ACTIONS(63),
    [anon_sym_log3] = ACTIONS(63),
    [anon_sym_log4] = ACTIONS(63),
    [anon_sym_create] = ACTIONS(65),
    [anon_sym_call] = ACTIONS(65),
    [anon_sym_callcode] = ACTIONS(65),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_delegatecall] = ACTIONS(65),
    [anon_sym_create2] = ACTIONS(63),
    [anon_sym_staticcall] = ACTIONS(65),
    [anon_sym_revert] = ACTIONS(65),
    [anon_sym_invalid] = ACTIONS(65),
    [anon_sym_selfdestruct] = ACTIONS(65),
    [aux_sym__label_token1] = ACTIONS(65),
    [sym_hex] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_stop] = ACTIONS(69),
    [anon_sym_add] = ACTIONS(69),
    [anon_sym_mul] = ACTIONS(69),
    [anon_sym_sub] = ACTIONS(69),
    [anon_sym_div] = ACTIONS(69),
    [anon_sym_sdiv] = ACTIONS(69),
    [anon_sym_mod] = ACTIONS(69),
    [anon_sym_smod] = ACTIONS(69),
    [anon_sym_addmod] = ACTIONS(69),
    [anon_sym_mulmod] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_signextend] = ACTIONS(69),
    [anon_sym_lt] = ACTIONS(69),
    [anon_sym_gt] = ACTIONS(69),
    [anon_sym_slt] = ACTIONS(69),
    [anon_sym_sgt] = ACTIONS(69),
    [anon_sym_eq] = ACTIONS(69),
    [anon_sym_iszero] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(69),
    [anon_sym_xor] = ACTIONS(69),
    [anon_sym_not] = ACTIONS(69),
    [anon_sym_byte] = ACTIONS(69),
    [anon_sym_sha3] = ACTIONS(67),
    [anon_sym_keccak] = ACTIONS(69),
    [anon_sym_address] = ACTIONS(69),
    [anon_sym_balance] = ACTIONS(69),
    [anon_sym_origin] = ACTIONS(69),
    [anon_sym_caller] = ACTIONS(69),
    [anon_sym_callvalue] = ACTIONS(69),
    [anon_sym_calldataload] = ACTIONS(69),
    [anon_sym_calldatasize] = ACTIONS(69),
    [anon_sym_calldatacopy] = ACTIONS(69),
    [anon_sym_codesize] = ACTIONS(69),
    [anon_sym_codecopy] = ACTIONS(69),
    [anon_sym_gasprice] = ACTIONS(69),
    [anon_sym_extcodesize] = ACTIONS(69),
    [anon_sym_extcodecopy] = ACTIONS(69),
    [anon_sym_returndatasize] = ACTIONS(69),
    [anon_sym_returndatacopy] = ACTIONS(69),
    [anon_sym_blockhash] = ACTIONS(69),
    [anon_sym_coinbase] = ACTIONS(69),
    [anon_sym_timestamp] = ACTIONS(69),
    [anon_sym_number] = ACTIONS(69),
    [anon_sym_difficulty] = ACTIONS(69),
    [anon_sym_gaslimit] = ACTIONS(69),
    [anon_sym_chainid] = ACTIONS(69),
    [anon_sym_selfbalance] = ACTIONS(69),
    [anon_sym_basefee] = ACTIONS(69),
    [anon_sym_pop] = ACTIONS(69),
    [anon_sym_mload] = ACTIONS(69),
    [anon_sym_mstore] = ACTIONS(69),
    [anon_sym_mstore8] = ACTIONS(67),
    [anon_sym_sload] = ACTIONS(69),
    [anon_sym_sstore] = ACTIONS(69),
    [anon_sym_jump] = ACTIONS(69),
    [anon_sym_jumpi] = ACTIONS(69),
    [anon_sym_getpc] = ACTIONS(69),
    [anon_sym_msize] = ACTIONS(69),
    [anon_sym_gas] = ACTIONS(69),
    [anon_sym_jumpdest] = ACTIONS(69),
    [anon_sym_push1] = ACTIONS(69),
    [anon_sym_push2] = ACTIONS(69),
    [anon_sym_push3] = ACTIONS(69),
    [anon_sym_push4] = ACTIONS(67),
    [anon_sym_push5] = ACTIONS(67),
    [anon_sym_push6] = ACTIONS(67),
    [anon_sym_push7] = ACTIONS(67),
    [anon_sym_push8] = ACTIONS(67),
    [anon_sym_push9] = ACTIONS(67),
    [anon_sym_push10] = ACTIONS(67),
    [anon_sym_push11] = ACTIONS(67),
    [anon_sym_push12] = ACTIONS(67),
    [anon_sym_push13] = ACTIONS(67),
    [anon_sym_push14] = ACTIONS(67),
    [anon_sym_push15] = ACTIONS(67),
    [anon_sym_push16] = ACTIONS(67),
    [anon_sym_push17] = ACTIONS(67),
    [anon_sym_push18] = ACTIONS(67),
    [anon_sym_push19] = ACTIONS(67),
    [anon_sym_push20] = ACTIONS(67),
    [anon_sym_push21] = ACTIONS(67),
    [anon_sym_push22] = ACTIONS(67),
    [anon_sym_push23] = ACTIONS(67),
    [anon_sym_push24] = ACTIONS(67),
    [anon_sym_push25] = ACTIONS(67),
    [anon_sym_push26] = ACTIONS(67),
    [anon_sym_push27] = ACTIONS(67),
    [anon_sym_push28] = ACTIONS(67),
    [anon_sym_push29] = ACTIONS(67),
    [anon_sym_push30] = ACTIONS(67),
    [anon_sym_push31] = ACTIONS(67),
    [anon_sym_push32] = ACTIONS(67),
    [anon_sym_dup1] = ACTIONS(69),
    [anon_sym_dup2] = ACTIONS(67),
    [anon_sym_dup3] = ACTIONS(67),
    [anon_sym_dup4] = ACTIONS(67),
    [anon_sym_dup5] = ACTIONS(67),
    [anon_sym_dup6] = ACTIONS(67),
    [anon_sym_dup7] = ACTIONS(67),
    [anon_sym_dup8] = ACTIONS(67),
    [anon_sym_dup9] = ACTIONS(67),
    [anon_sym_dup10] = ACTIONS(67),
    [anon_sym_dup11] = ACTIONS(67),
    [anon_sym_dup12] = ACTIONS(67),
    [anon_sym_dup13] = ACTIONS(67),
    [anon_sym_dup14] = ACTIONS(67),
    [anon_sym_dup15] = ACTIONS(67),
    [anon_sym_dup16] = ACTIONS(67),
    [anon_sym_swap1] = ACTIONS(69),
    [anon_sym_swap2] = ACTIONS(67),
    [anon_sym_swap3] = ACTIONS(67),
    [anon_sym_swap4] = ACTIONS(67),
    [anon_sym_swap5] = ACTIONS(67),
    [anon_sym_swap6] = ACTIONS(67),
    [anon_sym_swap7] = ACTIONS(67),
    [anon_sym_swap8] = ACTIONS(67),
    [anon_sym_swap9] = ACTIONS(67),
    [anon_sym_swap10] = ACTIONS(67),
    [anon_sym_swap11] = ACTIONS(67),
    [anon_sym_swap12] = ACTIONS(67),
    [anon_sym_swap13] = ACTIONS(67),
    [anon_sym_swap14] = ACTIONS(67),
    [anon_sym_swap15] = ACTIONS(67),
    [anon_sym_swap16] = ACTIONS(67),
    [anon_sym_shl] = ACTIONS(69),
    [anon_sym_shr] = ACTIONS(69),
    [anon_sym_sar] = ACTIONS(69),
    [anon_sym_log0] = ACTIONS(67),
    [anon_sym_log1] = ACTIONS(67),
    [anon_sym_log2] = ACTIONS(67),
    [anon_sym_log3] = ACTIONS(67),
    [anon_sym_log4] = ACTIONS(67),
    [anon_sym_create] = ACTIONS(69),
    [anon_sym_call] = ACTIONS(69),
    [anon_sym_callcode] = ACTIONS(69),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_delegatecall] = ACTIONS(69),
    [anon_sym_create2] = ACTIONS(67),
    [anon_sym_staticcall] = ACTIONS(69),
    [anon_sym_revert] = ACTIONS(69),
    [anon_sym_invalid] = ACTIONS(69),
    [anon_sym_selfdestruct] = ACTIONS(69),
    [aux_sym__label_token1] = ACTIONS(69),
    [sym_hex] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_stop] = ACTIONS(73),
    [anon_sym_add] = ACTIONS(73),
    [anon_sym_mul] = ACTIONS(73),
    [anon_sym_sub] = ACTIONS(73),
    [anon_sym_div] = ACTIONS(73),
    [anon_sym_sdiv] = ACTIONS(73),
    [anon_sym_mod] = ACTIONS(73),
    [anon_sym_smod] = ACTIONS(73),
    [anon_sym_addmod] = ACTIONS(73),
    [anon_sym_mulmod] = ACTIONS(73),
    [anon_sym_exp] = ACTIONS(73),
    [anon_sym_signextend] = ACTIONS(73),
    [anon_sym_lt] = ACTIONS(73),
    [anon_sym_gt] = ACTIONS(73),
    [anon_sym_slt] = ACTIONS(73),
    [anon_sym_sgt] = ACTIONS(73),
    [anon_sym_eq] = ACTIONS(73),
    [anon_sym_iszero] = ACTIONS(73),
    [anon_sym_and] = ACTIONS(73),
    [anon_sym_or] = ACTIONS(73),
    [anon_sym_xor] = ACTIONS(73),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_byte] = ACTIONS(73),
    [anon_sym_sha3] = ACTIONS(71),
    [anon_sym_keccak] = ACTIONS(73),
    [anon_sym_address] = ACTIONS(73),
    [anon_sym_balance] = ACTIONS(73),
    [anon_sym_origin] = ACTIONS(73),
    [anon_sym_caller] = ACTIONS(73),
    [anon_sym_callvalue] = ACTIONS(73),
    [anon_sym_calldataload] = ACTIONS(73),
    [anon_sym_calldatasize] = ACTIONS(73),
    [anon_sym_calldatacopy] = ACTIONS(73),
    [anon_sym_codesize] = ACTIONS(73),
    [anon_sym_codecopy] = ACTIONS(73),
    [anon_sym_gasprice] = ACTIONS(73),
    [anon_sym_extcodesize] = ACTIONS(73),
    [anon_sym_extcodecopy] = ACTIONS(73),
    [anon_sym_returndatasize] = ACTIONS(73),
    [anon_sym_returndatacopy] = ACTIONS(73),
    [anon_sym_blockhash] = ACTIONS(73),
    [anon_sym_coinbase] = ACTIONS(73),
    [anon_sym_timestamp] = ACTIONS(73),
    [anon_sym_number] = ACTIONS(73),
    [anon_sym_difficulty] = ACTIONS(73),
    [anon_sym_gaslimit] = ACTIONS(73),
    [anon_sym_chainid] = ACTIONS(73),
    [anon_sym_selfbalance] = ACTIONS(73),
    [anon_sym_basefee] = ACTIONS(73),
    [anon_sym_pop] = ACTIONS(73),
    [anon_sym_mload] = ACTIONS(73),
    [anon_sym_mstore] = ACTIONS(73),
    [anon_sym_mstore8] = ACTIONS(71),
    [anon_sym_sload] = ACTIONS(73),
    [anon_sym_sstore] = ACTIONS(73),
    [anon_sym_jump] = ACTIONS(73),
    [anon_sym_jumpi] = ACTIONS(73),
    [anon_sym_getpc] = ACTIONS(73),
    [anon_sym_msize] = ACTIONS(73),
    [anon_sym_gas] = ACTIONS(73),
    [anon_sym_jumpdest] = ACTIONS(73),
    [anon_sym_push1] = ACTIONS(73),
    [anon_sym_push2] = ACTIONS(73),
    [anon_sym_push3] = ACTIONS(73),
    [anon_sym_push4] = ACTIONS(71),
    [anon_sym_push5] = ACTIONS(71),
    [anon_sym_push6] = ACTIONS(71),
    [anon_sym_push7] = ACTIONS(71),
    [anon_sym_push8] = ACTIONS(71),
    [anon_sym_push9] = ACTIONS(71),
    [anon_sym_push10] = ACTIONS(71),
    [anon_sym_push11] = ACTIONS(71),
    [anon_sym_push12] = ACTIONS(71),
    [anon_sym_push13] = ACTIONS(71),
    [anon_sym_push14] = ACTIONS(71),
    [anon_sym_push15] = ACTIONS(71),
    [anon_sym_push16] = ACTIONS(71),
    [anon_sym_push17] = ACTIONS(71),
    [anon_sym_push18] = ACTIONS(71),
    [anon_sym_push19] = ACTIONS(71),
    [anon_sym_push20] = ACTIONS(71),
    [anon_sym_push21] = ACTIONS(71),
    [anon_sym_push22] = ACTIONS(71),
    [anon_sym_push23] = ACTIONS(71),
    [anon_sym_push24] = ACTIONS(71),
    [anon_sym_push25] = ACTIONS(71),
    [anon_sym_push26] = ACTIONS(71),
    [anon_sym_push27] = ACTIONS(71),
    [anon_sym_push28] = ACTIONS(71),
    [anon_sym_push29] = ACTIONS(71),
    [anon_sym_push30] = ACTIONS(71),
    [anon_sym_push31] = ACTIONS(71),
    [anon_sym_push32] = ACTIONS(71),
    [anon_sym_dup1] = ACTIONS(73),
    [anon_sym_dup2] = ACTIONS(71),
    [anon_sym_dup3] = ACTIONS(71),
    [anon_sym_dup4] = ACTIONS(71),
    [anon_sym_dup5] = ACTIONS(71),
    [anon_sym_dup6] = ACTIONS(71),
    [anon_sym_dup7] = ACTIONS(71),
    [anon_sym_dup8] = ACTIONS(71),
    [anon_sym_dup9] = ACTIONS(71),
    [anon_sym_dup10] = ACTIONS(71),
    [anon_sym_dup11] = ACTIONS(71),
    [anon_sym_dup12] = ACTIONS(71),
    [anon_sym_dup13] = ACTIONS(71),
    [anon_sym_dup14] = ACTIONS(71),
    [anon_sym_dup15] = ACTIONS(71),
    [anon_sym_dup16] = ACTIONS(71),
    [anon_sym_swap1] = ACTIONS(73),
    [anon_sym_swap2] = ACTIONS(71),
    [anon_sym_swap3] = ACTIONS(71),
    [anon_sym_swap4] = ACTIONS(71),
    [anon_sym_swap5] = ACTIONS(71),
    [anon_sym_swap6] = ACTIONS(71),
    [anon_sym_swap7] = ACTIONS(71),
    [anon_sym_swap8] = ACTIONS(71),
    [anon_sym_swap9] = ACTIONS(71),
    [anon_sym_swap10] = ACTIONS(71),
    [anon_sym_swap11] = ACTIONS(71),
    [anon_sym_swap12] = ACTIONS(71),
    [anon_sym_swap13] = ACTIONS(71),
    [anon_sym_swap14] = ACTIONS(71),
    [anon_sym_swap15] = ACTIONS(71),
    [anon_sym_swap16] = ACTIONS(71),
    [anon_sym_shl] = ACTIONS(73),
    [anon_sym_shr] = ACTIONS(73),
    [anon_sym_sar] = ACTIONS(73),
    [anon_sym_log0] = ACTIONS(71),
    [anon_sym_log1] = ACTIONS(71),
    [anon_sym_log2] = ACTIONS(71),
    [anon_sym_log3] = ACTIONS(71),
    [anon_sym_log4] = ACTIONS(71),
    [anon_sym_create] = ACTIONS(73),
    [anon_sym_call] = ACTIONS(73),
    [anon_sym_callcode] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(73),
    [anon_sym_delegatecall] = ACTIONS(73),
    [anon_sym_create2] = ACTIONS(71),
    [anon_sym_staticcall] = ACTIONS(73),
    [anon_sym_revert] = ACTIONS(73),
    [anon_sym_invalid] = ACTIONS(73),
    [anon_sym_selfdestruct] = ACTIONS(73),
    [aux_sym__label_token1] = ACTIONS(73),
    [sym_hex] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_stop] = ACTIONS(77),
    [anon_sym_add] = ACTIONS(77),
    [anon_sym_mul] = ACTIONS(77),
    [anon_sym_sub] = ACTIONS(77),
    [anon_sym_div] = ACTIONS(77),
    [anon_sym_sdiv] = ACTIONS(77),
    [anon_sym_mod] = ACTIONS(77),
    [anon_sym_smod] = ACTIONS(77),
    [anon_sym_addmod] = ACTIONS(77),
    [anon_sym_mulmod] = ACTIONS(77),
    [anon_sym_exp] = ACTIONS(77),
    [anon_sym_signextend] = ACTIONS(77),
    [anon_sym_lt] = ACTIONS(77),
    [anon_sym_gt] = ACTIONS(77),
    [anon_sym_slt] = ACTIONS(77),
    [anon_sym_sgt] = ACTIONS(77),
    [anon_sym_eq] = ACTIONS(77),
    [anon_sym_iszero] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(77),
    [anon_sym_or] = ACTIONS(77),
    [anon_sym_xor] = ACTIONS(77),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_byte] = ACTIONS(77),
    [anon_sym_sha3] = ACTIONS(75),
    [anon_sym_keccak] = ACTIONS(77),
    [anon_sym_address] = ACTIONS(77),
    [anon_sym_balance] = ACTIONS(77),
    [anon_sym_origin] = ACTIONS(77),
    [anon_sym_caller] = ACTIONS(77),
    [anon_sym_callvalue] = ACTIONS(77),
    [anon_sym_calldataload] = ACTIONS(77),
    [anon_sym_calldatasize] = ACTIONS(77),
    [anon_sym_calldatacopy] = ACTIONS(77),
    [anon_sym_codesize] = ACTIONS(77),
    [anon_sym_codecopy] = ACTIONS(77),
    [anon_sym_gasprice] = ACTIONS(77),
    [anon_sym_extcodesize] = ACTIONS(77),
    [anon_sym_extcodecopy] = ACTIONS(77),
    [anon_sym_returndatasize] = ACTIONS(77),
    [anon_sym_returndatacopy] = ACTIONS(77),
    [anon_sym_blockhash] = ACTIONS(77),
    [anon_sym_coinbase] = ACTIONS(77),
    [anon_sym_timestamp] = ACTIONS(77),
    [anon_sym_number] = ACTIONS(77),
    [anon_sym_difficulty] = ACTIONS(77),
    [anon_sym_gaslimit] = ACTIONS(77),
    [anon_sym_chainid] = ACTIONS(77),
    [anon_sym_selfbalance] = ACTIONS(77),
    [anon_sym_basefee] = ACTIONS(77),
    [anon_sym_pop] = ACTIONS(77),
    [anon_sym_mload] = ACTIONS(77),
    [anon_sym_mstore] = ACTIONS(77),
    [anon_sym_mstore8] = ACTIONS(75),
    [anon_sym_sload] = ACTIONS(77),
    [anon_sym_sstore] = ACTIONS(77),
    [anon_sym_jump] = ACTIONS(77),
    [anon_sym_jumpi] = ACTIONS(77),
    [anon_sym_getpc] = ACTIONS(77),
    [anon_sym_msize] = ACTIONS(77),
    [anon_sym_gas] = ACTIONS(77),
    [anon_sym_jumpdest] = ACTIONS(77),
    [anon_sym_push1] = ACTIONS(77),
    [anon_sym_push2] = ACTIONS(77),
    [anon_sym_push3] = ACTIONS(77),
    [anon_sym_push4] = ACTIONS(75),
    [anon_sym_push5] = ACTIONS(75),
    [anon_sym_push6] = ACTIONS(75),
    [anon_sym_push7] = ACTIONS(75),
    [anon_sym_push8] = ACTIONS(75),
    [anon_sym_push9] = ACTIONS(75),
    [anon_sym_push10] = ACTIONS(75),
    [anon_sym_push11] = ACTIONS(75),
    [anon_sym_push12] = ACTIONS(75),
    [anon_sym_push13] = ACTIONS(75),
    [anon_sym_push14] = ACTIONS(75),
    [anon_sym_push15] = ACTIONS(75),
    [anon_sym_push16] = ACTIONS(75),
    [anon_sym_push17] = ACTIONS(75),
    [anon_sym_push18] = ACTIONS(75),
    [anon_sym_push19] = ACTIONS(75),
    [anon_sym_push20] = ACTIONS(75),
    [anon_sym_push21] = ACTIONS(75),
    [anon_sym_push22] = ACTIONS(75),
    [anon_sym_push23] = ACTIONS(75),
    [anon_sym_push24] = ACTIONS(75),
    [anon_sym_push25] = ACTIONS(75),
    [anon_sym_push26] = ACTIONS(75),
    [anon_sym_push27] = ACTIONS(75),
    [anon_sym_push28] = ACTIONS(75),
    [anon_sym_push29] = ACTIONS(75),
    [anon_sym_push30] = ACTIONS(75),
    [anon_sym_push31] = ACTIONS(75),
    [anon_sym_push32] = ACTIONS(75),
    [anon_sym_dup1] = ACTIONS(77),
    [anon_sym_dup2] = ACTIONS(75),
    [anon_sym_dup3] = ACTIONS(75),
    [anon_sym_dup4] = ACTIONS(75),
    [anon_sym_dup5] = ACTIONS(75),
    [anon_sym_dup6] = ACTIONS(75),
    [anon_sym_dup7] = ACTIONS(75),
    [anon_sym_dup8] = ACTIONS(75),
    [anon_sym_dup9] = ACTIONS(75),
    [anon_sym_dup10] = ACTIONS(75),
    [anon_sym_dup11] = ACTIONS(75),
    [anon_sym_dup12] = ACTIONS(75),
    [anon_sym_dup13] = ACTIONS(75),
    [anon_sym_dup14] = ACTIONS(75),
    [anon_sym_dup15] = ACTIONS(75),
    [anon_sym_dup16] = ACTIONS(75),
    [anon_sym_swap1] = ACTIONS(77),
    [anon_sym_swap2] = ACTIONS(75),
    [anon_sym_swap3] = ACTIONS(75),
    [anon_sym_swap4] = ACTIONS(75),
    [anon_sym_swap5] = ACTIONS(75),
    [anon_sym_swap6] = ACTIONS(75),
    [anon_sym_swap7] = ACTIONS(75),
    [anon_sym_swap8] = ACTIONS(75),
    [anon_sym_swap9] = ACTIONS(75),
    [anon_sym_swap10] = ACTIONS(75),
    [anon_sym_swap11] = ACTIONS(75),
    [anon_sym_swap12] = ACTIONS(75),
    [anon_sym_swap13] = ACTIONS(75),
    [anon_sym_swap14] = ACTIONS(75),
    [anon_sym_swap15] = ACTIONS(75),
    [anon_sym_swap16] = ACTIONS(75),
    [anon_sym_shl] = ACTIONS(77),
    [anon_sym_shr] = ACTIONS(77),
    [anon_sym_sar] = ACTIONS(77),
    [anon_sym_log0] = ACTIONS(75),
    [anon_sym_log1] = ACTIONS(75),
    [anon_sym_log2] = ACTIONS(75),
    [anon_sym_log3] = ACTIONS(75),
    [anon_sym_log4] = ACTIONS(75),
    [anon_sym_create] = ACTIONS(77),
    [anon_sym_call] = ACTIONS(77),
    [anon_sym_callcode] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(77),
    [anon_sym_delegatecall] = ACTIONS(77),
    [anon_sym_create2] = ACTIONS(75),
    [anon_sym_staticcall] = ACTIONS(77),
    [anon_sym_revert] = ACTIONS(77),
    [anon_sym_invalid] = ACTIONS(77),
    [anon_sym_selfdestruct] = ACTIONS(77),
    [aux_sym__label_token1] = ACTIONS(77),
    [sym_hex] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_stop] = ACTIONS(81),
    [anon_sym_add] = ACTIONS(81),
    [anon_sym_mul] = ACTIONS(81),
    [anon_sym_sub] = ACTIONS(81),
    [anon_sym_div] = ACTIONS(81),
    [anon_sym_sdiv] = ACTIONS(81),
    [anon_sym_mod] = ACTIONS(81),
    [anon_sym_smod] = ACTIONS(81),
    [anon_sym_addmod] = ACTIONS(81),
    [anon_sym_mulmod] = ACTIONS(81),
    [anon_sym_exp] = ACTIONS(81),
    [anon_sym_signextend] = ACTIONS(81),
    [anon_sym_lt] = ACTIONS(81),
    [anon_sym_gt] = ACTIONS(81),
    [anon_sym_slt] = ACTIONS(81),
    [anon_sym_sgt] = ACTIONS(81),
    [anon_sym_eq] = ACTIONS(81),
    [anon_sym_iszero] = ACTIONS(81),
    [anon_sym_and] = ACTIONS(81),
    [anon_sym_or] = ACTIONS(81),
    [anon_sym_xor] = ACTIONS(81),
    [anon_sym_not] = ACTIONS(81),
    [anon_sym_byte] = ACTIONS(81),
    [anon_sym_sha3] = ACTIONS(79),
    [anon_sym_keccak] = ACTIONS(81),
    [anon_sym_address] = ACTIONS(81),
    [anon_sym_balance] = ACTIONS(81),
    [anon_sym_origin] = ACTIONS(81),
    [anon_sym_caller] = ACTIONS(81),
    [anon_sym_callvalue] = ACTIONS(81),
    [anon_sym_calldataload] = ACTIONS(81),
    [anon_sym_calldatasize] = ACTIONS(81),
    [anon_sym_calldatacopy] = ACTIONS(81),
    [anon_sym_codesize] = ACTIONS(81),
    [anon_sym_codecopy] = ACTIONS(81),
    [anon_sym_gasprice] = ACTIONS(81),
    [anon_sym_extcodesize] = ACTIONS(81),
    [anon_sym_extcodecopy] = ACTIONS(81),
    [anon_sym_returndatasize] = ACTIONS(81),
    [anon_sym_returndatacopy] = ACTIONS(81),
    [anon_sym_blockhash] = ACTIONS(81),
    [anon_sym_coinbase] = ACTIONS(81),
    [anon_sym_timestamp] = ACTIONS(81),
    [anon_sym_number] = ACTIONS(81),
    [anon_sym_difficulty] = ACTIONS(81),
    [anon_sym_gaslimit] = ACTIONS(81),
    [anon_sym_chainid] = ACTIONS(81),
    [anon_sym_selfbalance] = ACTIONS(81),
    [anon_sym_basefee] = ACTIONS(81),
    [anon_sym_pop] = ACTIONS(81),
    [anon_sym_mload] = ACTIONS(81),
    [anon_sym_mstore] = ACTIONS(81),
    [anon_sym_mstore8] = ACTIONS(79),
    [anon_sym_sload] = ACTIONS(81),
    [anon_sym_sstore] = ACTIONS(81),
    [anon_sym_jump] = ACTIONS(81),
    [anon_sym_jumpi] = ACTIONS(81),
    [anon_sym_getpc] = ACTIONS(81),
    [anon_sym_msize] = ACTIONS(81),
    [anon_sym_gas] = ACTIONS(81),
    [anon_sym_jumpdest] = ACTIONS(81),
    [anon_sym_push1] = ACTIONS(81),
    [anon_sym_push2] = ACTIONS(81),
    [anon_sym_push3] = ACTIONS(81),
    [anon_sym_push4] = ACTIONS(79),
    [anon_sym_push5] = ACTIONS(79),
    [anon_sym_push6] = ACTIONS(79),
    [anon_sym_push7] = ACTIONS(79),
    [anon_sym_push8] = ACTIONS(79),
    [anon_sym_push9] = ACTIONS(79),
    [anon_sym_push10] = ACTIONS(79),
    [anon_sym_push11] = ACTIONS(79),
    [anon_sym_push12] = ACTIONS(79),
    [anon_sym_push13] = ACTIONS(79),
    [anon_sym_push14] = ACTIONS(79),
    [anon_sym_push15] = ACTIONS(79),
    [anon_sym_push16] = ACTIONS(79),
    [anon_sym_push17] = ACTIONS(79),
    [anon_sym_push18] = ACTIONS(79),
    [anon_sym_push19] = ACTIONS(79),
    [anon_sym_push20] = ACTIONS(79),
    [anon_sym_push21] = ACTIONS(79),
    [anon_sym_push22] = ACTIONS(79),
    [anon_sym_push23] = ACTIONS(79),
    [anon_sym_push24] = ACTIONS(79),
    [anon_sym_push25] = ACTIONS(79),
    [anon_sym_push26] = ACTIONS(79),
    [anon_sym_push27] = ACTIONS(79),
    [anon_sym_push28] = ACTIONS(79),
    [anon_sym_push29] = ACTIONS(79),
    [anon_sym_push30] = ACTIONS(79),
    [anon_sym_push31] = ACTIONS(79),
    [anon_sym_push32] = ACTIONS(79),
    [anon_sym_dup1] = ACTIONS(81),
    [anon_sym_dup2] = ACTIONS(79),
    [anon_sym_dup3] = ACTIONS(79),
    [anon_sym_dup4] = ACTIONS(79),
    [anon_sym_dup5] = ACTIONS(79),
    [anon_sym_dup6] = ACTIONS(79),
    [anon_sym_dup7] = ACTIONS(79),
    [anon_sym_dup8] = ACTIONS(79),
    [anon_sym_dup9] = ACTIONS(79),
    [anon_sym_dup10] = ACTIONS(79),
    [anon_sym_dup11] = ACTIONS(79),
    [anon_sym_dup12] = ACTIONS(79),
    [anon_sym_dup13] = ACTIONS(79),
    [anon_sym_dup14] = ACTIONS(79),
    [anon_sym_dup15] = ACTIONS(79),
    [anon_sym_dup16] = ACTIONS(79),
    [anon_sym_swap1] = ACTIONS(81),
    [anon_sym_swap2] = ACTIONS(79),
    [anon_sym_swap3] = ACTIONS(79),
    [anon_sym_swap4] = ACTIONS(79),
    [anon_sym_swap5] = ACTIONS(79),
    [anon_sym_swap6] = ACTIONS(79),
    [anon_sym_swap7] = ACTIONS(79),
    [anon_sym_swap8] = ACTIONS(79),
    [anon_sym_swap9] = ACTIONS(79),
    [anon_sym_swap10] = ACTIONS(79),
    [anon_sym_swap11] = ACTIONS(79),
    [anon_sym_swap12] = ACTIONS(79),
    [anon_sym_swap13] = ACTIONS(79),
    [anon_sym_swap14] = ACTIONS(79),
    [anon_sym_swap15] = ACTIONS(79),
    [anon_sym_swap16] = ACTIONS(79),
    [anon_sym_shl] = ACTIONS(81),
    [anon_sym_shr] = ACTIONS(81),
    [anon_sym_sar] = ACTIONS(81),
    [anon_sym_log0] = ACTIONS(79),
    [anon_sym_log1] = ACTIONS(79),
    [anon_sym_log2] = ACTIONS(79),
    [anon_sym_log3] = ACTIONS(79),
    [anon_sym_log4] = ACTIONS(79),
    [anon_sym_create] = ACTIONS(81),
    [anon_sym_call] = ACTIONS(81),
    [anon_sym_callcode] = ACTIONS(81),
    [anon_sym_return] = ACTIONS(81),
    [anon_sym_delegatecall] = ACTIONS(81),
    [anon_sym_create2] = ACTIONS(79),
    [anon_sym_staticcall] = ACTIONS(81),
    [anon_sym_revert] = ACTIONS(81),
    [anon_sym_invalid] = ACTIONS(81),
    [anon_sym_selfdestruct] = ACTIONS(81),
    [aux_sym__label_token1] = ACTIONS(81),
    [sym_hex] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_def_val,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
      anon_sym_LBRACE,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [20] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_def_val,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
      anon_sym_LBRACE,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [40] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 9,
      ts_builtin_sym_end,
      sym_def_val,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
      anon_sym_LBRACE,
  [55] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_val_parameters,
    STATE(38), 1,
      sym_keyword,
    ACTIONS(89), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [73] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym_keyword,
    STATE(43), 1,
      sym_val_parameters,
    ACTIONS(89), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [91] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym_val_parameters,
    STATE(38), 1,
      sym_keyword,
    ACTIONS(89), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_keyword,
    ACTIONS(89), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_def_val,
    STATE(20), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(45), 3,
      sym_keyword_definition,
      sym_interface_definition,
      sym_constant_definition,
  [143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_def_val,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(45), 3,
      sym_keyword_definition,
      sym_interface_definition,
      sym_constant_definition,
  [162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [174] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym__label_token1,
    STATE(24), 1,
      sym__declaration,
    STATE(36), 1,
      sym_identifier,
    STATE(44), 1,
      sym__def,
    STATE(46), 1,
      sym__def_const,
    STATE(49), 1,
      sym__def_params,
  [196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_EQ,
    STATE(17), 1,
      sym_visibility,
    ACTIONS(104), 4,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [212] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym__label_token1,
    ACTIONS(108), 1,
      sym_hex,
    STATE(41), 1,
      sym_const,
    STATE(53), 1,
      sym_constant,
    STATE(59), 1,
      sym_identifier,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      anon_sym_EQ,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      sym__single_parameter,
    STATE(30), 1,
      aux_sym_parameters_repeat1,
    STATE(55), 1,
      sym_parameter,
  [258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    ACTIONS(118), 1,
      sym__single_parameter,
    STATE(28), 1,
      aux_sym_stack_assertion_repeat1,
    STATE(34), 1,
      sym_parameter,
  [274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 1,
      sym__single_parameter,
    STATE(28), 1,
      aux_sym_stack_assertion_repeat1,
    STATE(34), 1,
      sym_parameter,
  [290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym__single_parameter,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameters_repeat1,
    STATE(55), 1,
      sym_parameter,
  [306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym__single_parameter,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_stack_assertion_repeat1,
    STATE(34), 1,
      sym_parameter,
  [322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      sym__single_parameter,
    STATE(32), 1,
      aux_sym_parameters_repeat1,
    STATE(55), 1,
      sym_parameter,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__single_parameter,
  [347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 2,
      anon_sym_RBRACK,
      sym__single_parameter,
  [358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameters,
  [380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_parameters,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym__label_token1,
    STATE(57), 1,
      sym_identifier,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_RBRACK,
      sym__single_parameter,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_RPAREN,
      sym__single_parameter,
  [498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      aux_sym__label_token1,
      anon_sym_LPAREN,
  [514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [522] = 2,
    ACTIONS(134), 1,
      aux_sym_parameters_token1,
    ACTIONS(170), 1,
      sym_comment,
  [529] = 2,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym_parameters_token1,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
  [550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN_RPAREN,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_LPAREN_RPAREN,
  [564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN_RPAREN,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 20,
  [SMALL_STATE(15)] = 40,
  [SMALL_STATE(16)] = 55,
  [SMALL_STATE(17)] = 73,
  [SMALL_STATE(18)] = 91,
  [SMALL_STATE(19)] = 109,
  [SMALL_STATE(20)] = 124,
  [SMALL_STATE(21)] = 143,
  [SMALL_STATE(22)] = 162,
  [SMALL_STATE(23)] = 174,
  [SMALL_STATE(24)] = 196,
  [SMALL_STATE(25)] = 212,
  [SMALL_STATE(26)] = 231,
  [SMALL_STATE(27)] = 242,
  [SMALL_STATE(28)] = 258,
  [SMALL_STATE(29)] = 274,
  [SMALL_STATE(30)] = 290,
  [SMALL_STATE(31)] = 306,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 347,
  [SMALL_STATE(35)] = 358,
  [SMALL_STATE(36)] = 367,
  [SMALL_STATE(37)] = 380,
  [SMALL_STATE(38)] = 390,
  [SMALL_STATE(39)] = 400,
  [SMALL_STATE(40)] = 408,
  [SMALL_STATE(41)] = 416,
  [SMALL_STATE(42)] = 424,
  [SMALL_STATE(43)] = 434,
  [SMALL_STATE(44)] = 442,
  [SMALL_STATE(45)] = 450,
  [SMALL_STATE(46)] = 458,
  [SMALL_STATE(47)] = 466,
  [SMALL_STATE(48)] = 474,
  [SMALL_STATE(49)] = 482,
  [SMALL_STATE(50)] = 490,
  [SMALL_STATE(51)] = 498,
  [SMALL_STATE(52)] = 506,
  [SMALL_STATE(53)] = 514,
  [SMALL_STATE(54)] = 522,
  [SMALL_STATE(55)] = 529,
  [SMALL_STATE(56)] = 536,
  [SMALL_STATE(57)] = 543,
  [SMALL_STATE(58)] = 550,
  [SMALL_STATE(59)] = 557,
  [SMALL_STATE(60)] = 564,
  [SMALL_STATE(61)] = 571,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_assertion, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_assertion, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_access, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_access, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_assertion, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_assertion, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_call, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_call, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__destination, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__destination, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_parameters, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_assertion_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_assertion_repeat1, 2), SHIFT_REPEAT(33),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(54),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_assertion_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_params, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_const, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
