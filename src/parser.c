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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 0
#define TOKEN_COUNT 169
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
  anon_sym_stop = 11,
  anon_sym_add = 12,
  anon_sym_mul = 13,
  anon_sym_sub = 14,
  anon_sym_div = 15,
  anon_sym_sdiv = 16,
  anon_sym_mod = 17,
  anon_sym_smod = 18,
  anon_sym_addmod = 19,
  anon_sym_mulmod = 20,
  anon_sym_exp = 21,
  anon_sym_signextend = 22,
  anon_sym_lt = 23,
  anon_sym_gt = 24,
  anon_sym_slt = 25,
  anon_sym_sgt = 26,
  anon_sym_eq = 27,
  anon_sym_iszero = 28,
  anon_sym_and = 29,
  anon_sym_or = 30,
  anon_sym_xor = 31,
  anon_sym_not = 32,
  anon_sym_byte = 33,
  anon_sym_sha3 = 34,
  anon_sym_keccak = 35,
  anon_sym_address = 36,
  anon_sym_balance = 37,
  anon_sym_origin = 38,
  anon_sym_caller = 39,
  anon_sym_callvalue = 40,
  anon_sym_calldataload = 41,
  anon_sym_calldatasize = 42,
  anon_sym_calldatacopy = 43,
  anon_sym_codesize = 44,
  anon_sym_codecopy = 45,
  anon_sym_gasprice = 46,
  anon_sym_extcodesize = 47,
  anon_sym_extcodecopy = 48,
  anon_sym_returndatasize = 49,
  anon_sym_returndatacopy = 50,
  anon_sym_blockhash = 51,
  anon_sym_coinbase = 52,
  anon_sym_timestamp = 53,
  anon_sym_number = 54,
  anon_sym_difficulty = 55,
  anon_sym_gaslimit = 56,
  anon_sym_chainid = 57,
  anon_sym_selfbalance = 58,
  anon_sym_basefee = 59,
  anon_sym_pop = 60,
  anon_sym_mload = 61,
  anon_sym_mstore = 62,
  anon_sym_mstore8 = 63,
  anon_sym_sload = 64,
  anon_sym_sstore = 65,
  anon_sym_jump = 66,
  anon_sym_jumpi = 67,
  anon_sym_getpc = 68,
  anon_sym_msize = 69,
  anon_sym_gas = 70,
  anon_sym_jumpdest = 71,
  anon_sym_push1 = 72,
  anon_sym_push2 = 73,
  anon_sym_push3 = 74,
  anon_sym_push4 = 75,
  anon_sym_push5 = 76,
  anon_sym_push6 = 77,
  anon_sym_push7 = 78,
  anon_sym_push8 = 79,
  anon_sym_push9 = 80,
  anon_sym_push10 = 81,
  anon_sym_push11 = 82,
  anon_sym_push12 = 83,
  anon_sym_push13 = 84,
  anon_sym_push14 = 85,
  anon_sym_push15 = 86,
  anon_sym_push16 = 87,
  anon_sym_push17 = 88,
  anon_sym_push18 = 89,
  anon_sym_push19 = 90,
  anon_sym_push20 = 91,
  anon_sym_push21 = 92,
  anon_sym_push22 = 93,
  anon_sym_push23 = 94,
  anon_sym_push24 = 95,
  anon_sym_push25 = 96,
  anon_sym_push26 = 97,
  anon_sym_push27 = 98,
  anon_sym_push28 = 99,
  anon_sym_push29 = 100,
  anon_sym_push30 = 101,
  anon_sym_push31 = 102,
  anon_sym_push32 = 103,
  anon_sym_dup1 = 104,
  anon_sym_dup2 = 105,
  anon_sym_dup3 = 106,
  anon_sym_dup4 = 107,
  anon_sym_dup5 = 108,
  anon_sym_dup6 = 109,
  anon_sym_dup7 = 110,
  anon_sym_dup8 = 111,
  anon_sym_dup9 = 112,
  anon_sym_dup10 = 113,
  anon_sym_dup11 = 114,
  anon_sym_dup12 = 115,
  anon_sym_dup13 = 116,
  anon_sym_dup14 = 117,
  anon_sym_dup15 = 118,
  anon_sym_dup16 = 119,
  anon_sym_swap1 = 120,
  anon_sym_swap2 = 121,
  anon_sym_swap3 = 122,
  anon_sym_swap4 = 123,
  anon_sym_swap5 = 124,
  anon_sym_swap6 = 125,
  anon_sym_swap7 = 126,
  anon_sym_swap8 = 127,
  anon_sym_swap9 = 128,
  anon_sym_swap10 = 129,
  anon_sym_swap11 = 130,
  anon_sym_swap12 = 131,
  anon_sym_swap13 = 132,
  anon_sym_swap14 = 133,
  anon_sym_swap15 = 134,
  anon_sym_swap16 = 135,
  anon_sym_shl = 136,
  anon_sym_shr = 137,
  anon_sym_sar = 138,
  anon_sym_log0 = 139,
  anon_sym_log1 = 140,
  anon_sym_log2 = 141,
  anon_sym_log3 = 142,
  anon_sym_log4 = 143,
  anon_sym_create = 144,
  anon_sym_call = 145,
  anon_sym_callcode = 146,
  anon_sym_return = 147,
  anon_sym_delegatecall = 148,
  anon_sym_create2 = 149,
  anon_sym_staticcall = 150,
  anon_sym_revert = 151,
  anon_sym_invalid = 152,
  anon_sym_selfdestruct = 153,
  aux_sym__label_token1 = 154,
  anon_sym_COLON = 155,
  sym_hex = 156,
  anon_sym_LBRACK = 157,
  anon_sym_RBRACK = 158,
  anon_sym_LPAREN_RPAREN = 159,
  anon_sym_LPAREN = 160,
  aux_sym_parameters_token1 = 161,
  anon_sym_RPAREN = 162,
  sym__single_parameter = 163,
  anon_sym_view = 164,
  anon_sym_pure = 165,
  anon_sym_payable = 166,
  anon_sym_nonpayable = 167,
  sym_comment = 168,
  sym_source_file = 169,
  sym_definition = 170,
  sym__declaration = 171,
  sym__def_params = 172,
  sym__def_const = 173,
  sym_keyword = 174,
  sym__def = 175,
  sym_keyword_definition = 176,
  sym_interface_definition = 177,
  sym_constant_definition = 178,
  sym_val_parameters = 179,
  sym_block = 180,
  sym__statement = 181,
  sym_opcode = 182,
  sym_label = 183,
  sym__label = 184,
  sym__destination = 185,
  sym_const_access = 186,
  sym_macro_call = 187,
  sym_const = 188,
  sym_identifier = 189,
  sym_parameters = 190,
  sym_parameter = 191,
  sym_visibility = 192,
  sym_constant = 193,
  aux_sym_source_file_repeat1 = 194,
  aux_sym_block_repeat1 = 195,
  aux_sym_parameters_repeat1 = 196,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(325);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '(') ADVANCE(811);
      if (lookahead == ')') ADVANCE(814);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(806);
      if (lookahead == '[') ADVANCE(808);
      if (lookahead == ']') ADVANCE(809);
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
      if (lookahead == '(') ADVANCE(811);
      if (lookahead == ')') ADVANCE(814);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(806);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '[') ADVANCE(808);
      if (lookahead == ']') ADVANCE(809);
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
      if (lookahead == '(') ADVANCE(811);
      if (lookahead == ')') ADVANCE(814);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(806);
      if (lookahead == '[') ADVANCE(808);
      if (lookahead == ']') ADVANCE(809);
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
      if (lookahead == '(') ADVANCE(811);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(806);
      if (lookahead == '[') ADVANCE(808);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 'b') ADVANCE(555);
      if (lookahead == 'c') ADVANCE(556);
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == 'g') ADVANCE(557);
      if (lookahead == 'i') ADVANCE(704);
      if (lookahead == 'j') ADVANCE(786);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == 'p') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == 'x') ADVANCE(717);
      if (lookahead == '}') ADVANCE(335);
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
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(814);
      if (lookahead == '/') ADVANCE(10);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(810);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(821);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(820);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(526);
      if (lookahead == '1') ADVANCE(527);
      if (lookahead == '2') ADVANCE(528);
      if (lookahead == '3') ADVANCE(529);
      if (lookahead == '4') ADVANCE(530);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead == '3') ADVANCE(490);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead == '5') ADVANCE(492);
      if (lookahead == '6') ADVANCE(493);
      if (lookahead == '7') ADVANCE(494);
      if (lookahead == '8') ADVANCE(495);
      if (lookahead == '9') ADVANCE(496);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(456);
      if (lookahead == '2') ADVANCE(457);
      if (lookahead == '3') ADVANCE(458);
      if (lookahead == '4') ADVANCE(459);
      if (lookahead == '5') ADVANCE(460);
      if (lookahead == '6') ADVANCE(461);
      if (lookahead == '7') ADVANCE(462);
      if (lookahead == '8') ADVANCE(463);
      if (lookahead == '9') ADVANCE(464);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '2') ADVANCE(505);
      if (lookahead == '3') ADVANCE(506);
      if (lookahead == '4') ADVANCE(507);
      if (lookahead == '5') ADVANCE(508);
      if (lookahead == '6') ADVANCE(509);
      if (lookahead == '7') ADVANCE(510);
      if (lookahead == '8') ADVANCE(511);
      if (lookahead == '9') ADVANCE(512);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(382);
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
      if (lookahead == 't') ADVANCE(362);
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
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(522);
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
      if (lookahead == 'b') ADVANCE(342);
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
      if (lookahead == 'c') ADVANCE(448);
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
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(546);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(395);
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
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(411);
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
      if (lookahead == 'v') ADVANCE(344);
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
      if (lookahead == 'h') ADVANCE(415);
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
      if (lookahead == 'k') ADVANCE(383);
      END_STATE();
    case 172:
      if (lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 173:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(539);
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
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(538);
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
      if (lookahead == 't') ADVANCE(378);
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
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(370);
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
      if (lookahead == 't') ADVANCE(364);
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
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(433);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(419);
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
      if (lookahead == 'q') ADVANCE(368);
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(421);
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
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(385);
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
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(548);
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
      if (lookahead == 'v') ADVANCE(346);
      END_STATE();
    case 306:
      if (lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 307:
      if (lookahead == 'w') ADVANCE(816);
      END_STATE();
    case 308:
      if (lookahead == 'x') ADVANCE(295);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(403);
      END_STATE();
    case 310:
      if (lookahead == 'y') ADVANCE(423);
      END_STATE();
    case 311:
      if (lookahead == 'y') ADVANCE(409);
      END_STATE();
    case 312:
      if (lookahead == 'y') ADVANCE(399);
      END_STATE();
    case 313:
      if (lookahead == 'y') ADVANCE(413);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(807);
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
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'm') ADVANCE(723);
      if (lookahead == 'r') ADVANCE(644);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'm') ADVANCE(727);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_div);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_sdiv);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_sdiv);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_smod);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_smod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_addmod);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_addmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_mulmod);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_mulmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_exp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_signextend);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_signextend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_lt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_gt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_slt);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_slt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_sgt);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_iszero);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_iszero);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_and);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'i') ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_sha3);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_keccak);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_keccak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_address);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_balance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_origin);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_origin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_caller);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_caller);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_callvalue);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_callvalue);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_calldataload);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_calldataload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_calldatasize);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_calldatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_calldatacopy);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_calldatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_codesize);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_codesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_codecopy);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_codecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_gasprice);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_gasprice);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_extcodesize);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_extcodesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_extcodecopy);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_extcodecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_returndatasize);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_returndatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_returndatacopy);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_returndatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_blockhash);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_blockhash);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_coinbase);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_coinbase);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_difficulty);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_difficulty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_gaslimit);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_gaslimit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_chainid);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_chainid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_selfbalance);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_selfbalance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_basefee);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_basefee);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_mload);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_mload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_mstore);
      if (lookahead == '8') ADVANCE(439);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_mstore);
      if (lookahead == '8') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_mstore8);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_sload);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_sload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_sstore);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_sstore);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_jumpi);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_jumpi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_getpc);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_getpc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_msize);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_msize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_gas);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_gas);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == 'p') ADVANCE(757);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_jumpdest);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_jumpdest);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_push1);
      if (lookahead == '0') ADVANCE(465);
      if (lookahead == '1') ADVANCE(466);
      if (lookahead == '2') ADVANCE(467);
      if (lookahead == '3') ADVANCE(468);
      if (lookahead == '4') ADVANCE(469);
      if (lookahead == '5') ADVANCE(470);
      if (lookahead == '6') ADVANCE(471);
      if (lookahead == '7') ADVANCE(472);
      if (lookahead == '8') ADVANCE(473);
      if (lookahead == '9') ADVANCE(474);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_push2);
      if (lookahead == '0') ADVANCE(475);
      if (lookahead == '1') ADVANCE(476);
      if (lookahead == '2') ADVANCE(477);
      if (lookahead == '3') ADVANCE(478);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead == '5') ADVANCE(480);
      if (lookahead == '6') ADVANCE(481);
      if (lookahead == '7') ADVANCE(482);
      if (lookahead == '8') ADVANCE(483);
      if (lookahead == '9') ADVANCE(484);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_push3);
      if (lookahead == '0') ADVANCE(485);
      if (lookahead == '1') ADVANCE(486);
      if (lookahead == '2') ADVANCE(487);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_push4);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_push5);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_push6);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_push7);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_push8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_push9);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_push10);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_push11);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_push12);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_push13);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_push14);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_push15);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_push16);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_push17);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_push18);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_push19);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_push20);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_push21);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_push22);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_push23);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_push24);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_push25);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_push26);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_push27);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_push28);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_push29);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_push30);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_push31);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_push32);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_dup1);
      if (lookahead == '0') ADVANCE(497);
      if (lookahead == '1') ADVANCE(498);
      if (lookahead == '2') ADVANCE(499);
      if (lookahead == '3') ADVANCE(500);
      if (lookahead == '4') ADVANCE(501);
      if (lookahead == '5') ADVANCE(502);
      if (lookahead == '6') ADVANCE(503);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_dup2);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_dup3);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_dup4);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_dup5);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_dup6);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_dup7);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_dup8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_dup9);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_dup10);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_dup11);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_dup12);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_dup13);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_dup14);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_dup15);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_dup16);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_swap1);
      if (lookahead == '0') ADVANCE(513);
      if (lookahead == '1') ADVANCE(514);
      if (lookahead == '2') ADVANCE(515);
      if (lookahead == '3') ADVANCE(516);
      if (lookahead == '4') ADVANCE(517);
      if (lookahead == '5') ADVANCE(518);
      if (lookahead == '6') ADVANCE(519);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_swap2);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_swap3);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_swap4);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_swap5);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_swap6);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_swap7);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_swap8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_swap9);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_swap10);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_swap11);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_swap12);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_swap13);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_swap14);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_swap15);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_swap16);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_shl);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_shl);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_shr);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_shr);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_sar);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_sar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_log0);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_log1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_log2);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_log3);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_log4);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '2') ADVANCE(541);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '2') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'c') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'v') ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_callcode);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_callcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 'd') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_delegatecall);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_delegatecall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_create2);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_staticcall);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_staticcall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_revert);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_revert);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_invalid);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_invalid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_selfdestruct);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_selfdestruct);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '0') ADVANCE(526);
      if (lookahead == '1') ADVANCE(527);
      if (lookahead == '2') ADVANCE(528);
      if (lookahead == '3') ADVANCE(529);
      if (lookahead == '4') ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == '2') ADVANCE(489);
      if (lookahead == '3') ADVANCE(490);
      if (lookahead == '4') ADVANCE(491);
      if (lookahead == '5') ADVANCE(492);
      if (lookahead == '6') ADVANCE(493);
      if (lookahead == '7') ADVANCE(494);
      if (lookahead == '8') ADVANCE(495);
      if (lookahead == '9') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(456);
      if (lookahead == '2') ADVANCE(457);
      if (lookahead == '3') ADVANCE(458);
      if (lookahead == '4') ADVANCE(459);
      if (lookahead == '5') ADVANCE(460);
      if (lookahead == '6') ADVANCE(461);
      if (lookahead == '7') ADVANCE(462);
      if (lookahead == '8') ADVANCE(463);
      if (lookahead == '9') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '2') ADVANCE(505);
      if (lookahead == '3') ADVANCE(506);
      if (lookahead == '4') ADVANCE(507);
      if (lookahead == '5') ADVANCE(508);
      if (lookahead == '6') ADVANCE(509);
      if (lookahead == '7') ADVANCE(510);
      if (lookahead == '8') ADVANCE(511);
      if (lookahead == '9') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '3') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead == 'y') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == 'h') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'r') ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == 't') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead == 'g') ADVANCE(768);
      if (lookahead == 'h') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'm') ADVANCE(719);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(583);
      if (lookahead == 'w') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(682);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(709);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(737);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(691);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(761);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(698);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(740);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(695);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(649);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(652);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead == 's') ADVANCE(677);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead == 's') ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(728);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == 's') ADVANCE(679);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == 's') ADVANCE(680);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'i') ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'u') ADVANCE(733);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(658);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(710);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(754);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(630);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(764);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(657);
      if (lookahead == 'v') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(703);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(702);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(708);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(705);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(770);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == 't') ADVANCE(720);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(665);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(656);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == 's') ADVANCE(675);
      if (lookahead == 'u') ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 's') ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(685);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(686);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(774);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(674);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(736);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(792);
      if (lookahead == 's') ADVANCE(799);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(673);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 't') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(735);
      if (lookahead == 'u') ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 'u') ADVANCE(699);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(738);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(565);
      if (lookahead == 't') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(618);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(756);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(357);
      if (lookahead == 't') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'q') ADVANCE(369);
      if (lookahead == 'x') ADVANCE(734);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(714);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(706);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(664);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(760);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead == 'v') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(681);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(751);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(654);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(732);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'x') ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(805);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(805);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(632);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(805);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(805);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(638);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(805);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(639);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(805);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      if (lookahead == ',') ADVANCE(812);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__single_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_nonpayable);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(821);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 324},
  [12] = {.lex_state = 324},
  [13] = {.lex_state = 324},
  [14] = {.lex_state = 324},
  [15] = {.lex_state = 324},
  [16] = {.lex_state = 324},
  [17] = {.lex_state = 324},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 324},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 813},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 813},
  [52] = {.lex_state = 7},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_payable] = ACTIONS(1),
    [anon_sym_nonpayable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_definition] = STATE(18),
    [sym_keyword_definition] = STATE(35),
    [sym_interface_definition] = STATE(35),
    [sym_constant_definition] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_def_val] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym_label] = STATE(2),
    [sym__label] = STATE(9),
    [sym__destination] = STATE(9),
    [sym_const_access] = STATE(2),
    [sym_macro_call] = STATE(2),
    [sym_identifier] = STATE(48),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_stop] = ACTIONS(11),
    [anon_sym_add] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_sdiv] = ACTIONS(11),
    [anon_sym_mod] = ACTIONS(11),
    [anon_sym_smod] = ACTIONS(11),
    [anon_sym_addmod] = ACTIONS(11),
    [anon_sym_mulmod] = ACTIONS(11),
    [anon_sym_exp] = ACTIONS(11),
    [anon_sym_signextend] = ACTIONS(11),
    [anon_sym_lt] = ACTIONS(11),
    [anon_sym_gt] = ACTIONS(11),
    [anon_sym_slt] = ACTIONS(11),
    [anon_sym_sgt] = ACTIONS(11),
    [anon_sym_eq] = ACTIONS(11),
    [anon_sym_iszero] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_byte] = ACTIONS(11),
    [anon_sym_sha3] = ACTIONS(14),
    [anon_sym_keccak] = ACTIONS(11),
    [anon_sym_address] = ACTIONS(11),
    [anon_sym_balance] = ACTIONS(11),
    [anon_sym_origin] = ACTIONS(11),
    [anon_sym_caller] = ACTIONS(11),
    [anon_sym_callvalue] = ACTIONS(11),
    [anon_sym_calldataload] = ACTIONS(11),
    [anon_sym_calldatasize] = ACTIONS(11),
    [anon_sym_calldatacopy] = ACTIONS(11),
    [anon_sym_codesize] = ACTIONS(11),
    [anon_sym_codecopy] = ACTIONS(11),
    [anon_sym_gasprice] = ACTIONS(11),
    [anon_sym_extcodesize] = ACTIONS(11),
    [anon_sym_extcodecopy] = ACTIONS(11),
    [anon_sym_returndatasize] = ACTIONS(11),
    [anon_sym_returndatacopy] = ACTIONS(11),
    [anon_sym_blockhash] = ACTIONS(11),
    [anon_sym_coinbase] = ACTIONS(11),
    [anon_sym_timestamp] = ACTIONS(11),
    [anon_sym_number] = ACTIONS(11),
    [anon_sym_difficulty] = ACTIONS(11),
    [anon_sym_gaslimit] = ACTIONS(11),
    [anon_sym_chainid] = ACTIONS(11),
    [anon_sym_selfbalance] = ACTIONS(11),
    [anon_sym_basefee] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_mload] = ACTIONS(11),
    [anon_sym_mstore] = ACTIONS(11),
    [anon_sym_mstore8] = ACTIONS(14),
    [anon_sym_sload] = ACTIONS(11),
    [anon_sym_sstore] = ACTIONS(11),
    [anon_sym_jump] = ACTIONS(11),
    [anon_sym_jumpi] = ACTIONS(11),
    [anon_sym_getpc] = ACTIONS(11),
    [anon_sym_msize] = ACTIONS(11),
    [anon_sym_gas] = ACTIONS(11),
    [anon_sym_jumpdest] = ACTIONS(11),
    [anon_sym_push1] = ACTIONS(11),
    [anon_sym_push2] = ACTIONS(11),
    [anon_sym_push3] = ACTIONS(11),
    [anon_sym_push4] = ACTIONS(14),
    [anon_sym_push5] = ACTIONS(14),
    [anon_sym_push6] = ACTIONS(14),
    [anon_sym_push7] = ACTIONS(14),
    [anon_sym_push8] = ACTIONS(14),
    [anon_sym_push9] = ACTIONS(14),
    [anon_sym_push10] = ACTIONS(14),
    [anon_sym_push11] = ACTIONS(14),
    [anon_sym_push12] = ACTIONS(14),
    [anon_sym_push13] = ACTIONS(14),
    [anon_sym_push14] = ACTIONS(14),
    [anon_sym_push15] = ACTIONS(14),
    [anon_sym_push16] = ACTIONS(14),
    [anon_sym_push17] = ACTIONS(14),
    [anon_sym_push18] = ACTIONS(14),
    [anon_sym_push19] = ACTIONS(14),
    [anon_sym_push20] = ACTIONS(14),
    [anon_sym_push21] = ACTIONS(14),
    [anon_sym_push22] = ACTIONS(14),
    [anon_sym_push23] = ACTIONS(14),
    [anon_sym_push24] = ACTIONS(14),
    [anon_sym_push25] = ACTIONS(14),
    [anon_sym_push26] = ACTIONS(14),
    [anon_sym_push27] = ACTIONS(14),
    [anon_sym_push28] = ACTIONS(14),
    [anon_sym_push29] = ACTIONS(14),
    [anon_sym_push30] = ACTIONS(14),
    [anon_sym_push31] = ACTIONS(14),
    [anon_sym_push32] = ACTIONS(14),
    [anon_sym_dup1] = ACTIONS(11),
    [anon_sym_dup2] = ACTIONS(14),
    [anon_sym_dup3] = ACTIONS(14),
    [anon_sym_dup4] = ACTIONS(14),
    [anon_sym_dup5] = ACTIONS(14),
    [anon_sym_dup6] = ACTIONS(14),
    [anon_sym_dup7] = ACTIONS(14),
    [anon_sym_dup8] = ACTIONS(14),
    [anon_sym_dup9] = ACTIONS(14),
    [anon_sym_dup10] = ACTIONS(14),
    [anon_sym_dup11] = ACTIONS(14),
    [anon_sym_dup12] = ACTIONS(14),
    [anon_sym_dup13] = ACTIONS(14),
    [anon_sym_dup14] = ACTIONS(14),
    [anon_sym_dup15] = ACTIONS(14),
    [anon_sym_dup16] = ACTIONS(14),
    [anon_sym_swap1] = ACTIONS(11),
    [anon_sym_swap2] = ACTIONS(14),
    [anon_sym_swap3] = ACTIONS(14),
    [anon_sym_swap4] = ACTIONS(14),
    [anon_sym_swap5] = ACTIONS(14),
    [anon_sym_swap6] = ACTIONS(14),
    [anon_sym_swap7] = ACTIONS(14),
    [anon_sym_swap8] = ACTIONS(14),
    [anon_sym_swap9] = ACTIONS(14),
    [anon_sym_swap10] = ACTIONS(14),
    [anon_sym_swap11] = ACTIONS(14),
    [anon_sym_swap12] = ACTIONS(14),
    [anon_sym_swap13] = ACTIONS(14),
    [anon_sym_swap14] = ACTIONS(14),
    [anon_sym_swap15] = ACTIONS(14),
    [anon_sym_swap16] = ACTIONS(14),
    [anon_sym_shl] = ACTIONS(11),
    [anon_sym_shr] = ACTIONS(11),
    [anon_sym_sar] = ACTIONS(11),
    [anon_sym_log0] = ACTIONS(14),
    [anon_sym_log1] = ACTIONS(14),
    [anon_sym_log2] = ACTIONS(14),
    [anon_sym_log3] = ACTIONS(14),
    [anon_sym_log4] = ACTIONS(14),
    [anon_sym_create] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_callcode] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_delegatecall] = ACTIONS(11),
    [anon_sym_create2] = ACTIONS(14),
    [anon_sym_staticcall] = ACTIONS(11),
    [anon_sym_revert] = ACTIONS(11),
    [anon_sym_invalid] = ACTIONS(11),
    [anon_sym_selfdestruct] = ACTIONS(11),
    [aux_sym__label_token1] = ACTIONS(17),
    [sym_hex] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym_label] = STATE(2),
    [sym__label] = STATE(9),
    [sym__destination] = STATE(9),
    [sym_const_access] = STATE(2),
    [sym_macro_call] = STATE(2),
    [sym_identifier] = STATE(48),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_RBRACE] = ACTIONS(26),
    [anon_sym_stop] = ACTIONS(28),
    [anon_sym_add] = ACTIONS(28),
    [anon_sym_mul] = ACTIONS(28),
    [anon_sym_sub] = ACTIONS(28),
    [anon_sym_div] = ACTIONS(28),
    [anon_sym_sdiv] = ACTIONS(28),
    [anon_sym_mod] = ACTIONS(28),
    [anon_sym_smod] = ACTIONS(28),
    [anon_sym_addmod] = ACTIONS(28),
    [anon_sym_mulmod] = ACTIONS(28),
    [anon_sym_exp] = ACTIONS(28),
    [anon_sym_signextend] = ACTIONS(28),
    [anon_sym_lt] = ACTIONS(28),
    [anon_sym_gt] = ACTIONS(28),
    [anon_sym_slt] = ACTIONS(28),
    [anon_sym_sgt] = ACTIONS(28),
    [anon_sym_eq] = ACTIONS(28),
    [anon_sym_iszero] = ACTIONS(28),
    [anon_sym_and] = ACTIONS(28),
    [anon_sym_or] = ACTIONS(28),
    [anon_sym_xor] = ACTIONS(28),
    [anon_sym_not] = ACTIONS(28),
    [anon_sym_byte] = ACTIONS(28),
    [anon_sym_sha3] = ACTIONS(30),
    [anon_sym_keccak] = ACTIONS(28),
    [anon_sym_address] = ACTIONS(28),
    [anon_sym_balance] = ACTIONS(28),
    [anon_sym_origin] = ACTIONS(28),
    [anon_sym_caller] = ACTIONS(28),
    [anon_sym_callvalue] = ACTIONS(28),
    [anon_sym_calldataload] = ACTIONS(28),
    [anon_sym_calldatasize] = ACTIONS(28),
    [anon_sym_calldatacopy] = ACTIONS(28),
    [anon_sym_codesize] = ACTIONS(28),
    [anon_sym_codecopy] = ACTIONS(28),
    [anon_sym_gasprice] = ACTIONS(28),
    [anon_sym_extcodesize] = ACTIONS(28),
    [anon_sym_extcodecopy] = ACTIONS(28),
    [anon_sym_returndatasize] = ACTIONS(28),
    [anon_sym_returndatacopy] = ACTIONS(28),
    [anon_sym_blockhash] = ACTIONS(28),
    [anon_sym_coinbase] = ACTIONS(28),
    [anon_sym_timestamp] = ACTIONS(28),
    [anon_sym_number] = ACTIONS(28),
    [anon_sym_difficulty] = ACTIONS(28),
    [anon_sym_gaslimit] = ACTIONS(28),
    [anon_sym_chainid] = ACTIONS(28),
    [anon_sym_selfbalance] = ACTIONS(28),
    [anon_sym_basefee] = ACTIONS(28),
    [anon_sym_pop] = ACTIONS(28),
    [anon_sym_mload] = ACTIONS(28),
    [anon_sym_mstore] = ACTIONS(28),
    [anon_sym_mstore8] = ACTIONS(30),
    [anon_sym_sload] = ACTIONS(28),
    [anon_sym_sstore] = ACTIONS(28),
    [anon_sym_jump] = ACTIONS(28),
    [anon_sym_jumpi] = ACTIONS(28),
    [anon_sym_getpc] = ACTIONS(28),
    [anon_sym_msize] = ACTIONS(28),
    [anon_sym_gas] = ACTIONS(28),
    [anon_sym_jumpdest] = ACTIONS(28),
    [anon_sym_push1] = ACTIONS(28),
    [anon_sym_push2] = ACTIONS(28),
    [anon_sym_push3] = ACTIONS(28),
    [anon_sym_push4] = ACTIONS(30),
    [anon_sym_push5] = ACTIONS(30),
    [anon_sym_push6] = ACTIONS(30),
    [anon_sym_push7] = ACTIONS(30),
    [anon_sym_push8] = ACTIONS(30),
    [anon_sym_push9] = ACTIONS(30),
    [anon_sym_push10] = ACTIONS(30),
    [anon_sym_push11] = ACTIONS(30),
    [anon_sym_push12] = ACTIONS(30),
    [anon_sym_push13] = ACTIONS(30),
    [anon_sym_push14] = ACTIONS(30),
    [anon_sym_push15] = ACTIONS(30),
    [anon_sym_push16] = ACTIONS(30),
    [anon_sym_push17] = ACTIONS(30),
    [anon_sym_push18] = ACTIONS(30),
    [anon_sym_push19] = ACTIONS(30),
    [anon_sym_push20] = ACTIONS(30),
    [anon_sym_push21] = ACTIONS(30),
    [anon_sym_push22] = ACTIONS(30),
    [anon_sym_push23] = ACTIONS(30),
    [anon_sym_push24] = ACTIONS(30),
    [anon_sym_push25] = ACTIONS(30),
    [anon_sym_push26] = ACTIONS(30),
    [anon_sym_push27] = ACTIONS(30),
    [anon_sym_push28] = ACTIONS(30),
    [anon_sym_push29] = ACTIONS(30),
    [anon_sym_push30] = ACTIONS(30),
    [anon_sym_push31] = ACTIONS(30),
    [anon_sym_push32] = ACTIONS(30),
    [anon_sym_dup1] = ACTIONS(28),
    [anon_sym_dup2] = ACTIONS(30),
    [anon_sym_dup3] = ACTIONS(30),
    [anon_sym_dup4] = ACTIONS(30),
    [anon_sym_dup5] = ACTIONS(30),
    [anon_sym_dup6] = ACTIONS(30),
    [anon_sym_dup7] = ACTIONS(30),
    [anon_sym_dup8] = ACTIONS(30),
    [anon_sym_dup9] = ACTIONS(30),
    [anon_sym_dup10] = ACTIONS(30),
    [anon_sym_dup11] = ACTIONS(30),
    [anon_sym_dup12] = ACTIONS(30),
    [anon_sym_dup13] = ACTIONS(30),
    [anon_sym_dup14] = ACTIONS(30),
    [anon_sym_dup15] = ACTIONS(30),
    [anon_sym_dup16] = ACTIONS(30),
    [anon_sym_swap1] = ACTIONS(28),
    [anon_sym_swap2] = ACTIONS(30),
    [anon_sym_swap3] = ACTIONS(30),
    [anon_sym_swap4] = ACTIONS(30),
    [anon_sym_swap5] = ACTIONS(30),
    [anon_sym_swap6] = ACTIONS(30),
    [anon_sym_swap7] = ACTIONS(30),
    [anon_sym_swap8] = ACTIONS(30),
    [anon_sym_swap9] = ACTIONS(30),
    [anon_sym_swap10] = ACTIONS(30),
    [anon_sym_swap11] = ACTIONS(30),
    [anon_sym_swap12] = ACTIONS(30),
    [anon_sym_swap13] = ACTIONS(30),
    [anon_sym_swap14] = ACTIONS(30),
    [anon_sym_swap15] = ACTIONS(30),
    [anon_sym_swap16] = ACTIONS(30),
    [anon_sym_shl] = ACTIONS(28),
    [anon_sym_shr] = ACTIONS(28),
    [anon_sym_sar] = ACTIONS(28),
    [anon_sym_log0] = ACTIONS(30),
    [anon_sym_log1] = ACTIONS(30),
    [anon_sym_log2] = ACTIONS(30),
    [anon_sym_log3] = ACTIONS(30),
    [anon_sym_log4] = ACTIONS(30),
    [anon_sym_create] = ACTIONS(28),
    [anon_sym_call] = ACTIONS(28),
    [anon_sym_callcode] = ACTIONS(28),
    [anon_sym_return] = ACTIONS(28),
    [anon_sym_delegatecall] = ACTIONS(28),
    [anon_sym_create2] = ACTIONS(30),
    [anon_sym_staticcall] = ACTIONS(28),
    [anon_sym_revert] = ACTIONS(28),
    [anon_sym_invalid] = ACTIONS(28),
    [anon_sym_selfdestruct] = ACTIONS(28),
    [aux_sym__label_token1] = ACTIONS(32),
    [sym_hex] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym_opcode] = STATE(3),
    [sym_label] = STATE(3),
    [sym__label] = STATE(9),
    [sym__destination] = STATE(9),
    [sym_const_access] = STATE(3),
    [sym_macro_call] = STATE(3),
    [sym_identifier] = STATE(48),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_stop] = ACTIONS(28),
    [anon_sym_add] = ACTIONS(28),
    [anon_sym_mul] = ACTIONS(28),
    [anon_sym_sub] = ACTIONS(28),
    [anon_sym_div] = ACTIONS(28),
    [anon_sym_sdiv] = ACTIONS(28),
    [anon_sym_mod] = ACTIONS(28),
    [anon_sym_smod] = ACTIONS(28),
    [anon_sym_addmod] = ACTIONS(28),
    [anon_sym_mulmod] = ACTIONS(28),
    [anon_sym_exp] = ACTIONS(28),
    [anon_sym_signextend] = ACTIONS(28),
    [anon_sym_lt] = ACTIONS(28),
    [anon_sym_gt] = ACTIONS(28),
    [anon_sym_slt] = ACTIONS(28),
    [anon_sym_sgt] = ACTIONS(28),
    [anon_sym_eq] = ACTIONS(28),
    [anon_sym_iszero] = ACTIONS(28),
    [anon_sym_and] = ACTIONS(28),
    [anon_sym_or] = ACTIONS(28),
    [anon_sym_xor] = ACTIONS(28),
    [anon_sym_not] = ACTIONS(28),
    [anon_sym_byte] = ACTIONS(28),
    [anon_sym_sha3] = ACTIONS(30),
    [anon_sym_keccak] = ACTIONS(28),
    [anon_sym_address] = ACTIONS(28),
    [anon_sym_balance] = ACTIONS(28),
    [anon_sym_origin] = ACTIONS(28),
    [anon_sym_caller] = ACTIONS(28),
    [anon_sym_callvalue] = ACTIONS(28),
    [anon_sym_calldataload] = ACTIONS(28),
    [anon_sym_calldatasize] = ACTIONS(28),
    [anon_sym_calldatacopy] = ACTIONS(28),
    [anon_sym_codesize] = ACTIONS(28),
    [anon_sym_codecopy] = ACTIONS(28),
    [anon_sym_gasprice] = ACTIONS(28),
    [anon_sym_extcodesize] = ACTIONS(28),
    [anon_sym_extcodecopy] = ACTIONS(28),
    [anon_sym_returndatasize] = ACTIONS(28),
    [anon_sym_returndatacopy] = ACTIONS(28),
    [anon_sym_blockhash] = ACTIONS(28),
    [anon_sym_coinbase] = ACTIONS(28),
    [anon_sym_timestamp] = ACTIONS(28),
    [anon_sym_number] = ACTIONS(28),
    [anon_sym_difficulty] = ACTIONS(28),
    [anon_sym_gaslimit] = ACTIONS(28),
    [anon_sym_chainid] = ACTIONS(28),
    [anon_sym_selfbalance] = ACTIONS(28),
    [anon_sym_basefee] = ACTIONS(28),
    [anon_sym_pop] = ACTIONS(28),
    [anon_sym_mload] = ACTIONS(28),
    [anon_sym_mstore] = ACTIONS(28),
    [anon_sym_mstore8] = ACTIONS(30),
    [anon_sym_sload] = ACTIONS(28),
    [anon_sym_sstore] = ACTIONS(28),
    [anon_sym_jump] = ACTIONS(28),
    [anon_sym_jumpi] = ACTIONS(28),
    [anon_sym_getpc] = ACTIONS(28),
    [anon_sym_msize] = ACTIONS(28),
    [anon_sym_gas] = ACTIONS(28),
    [anon_sym_jumpdest] = ACTIONS(28),
    [anon_sym_push1] = ACTIONS(28),
    [anon_sym_push2] = ACTIONS(28),
    [anon_sym_push3] = ACTIONS(28),
    [anon_sym_push4] = ACTIONS(30),
    [anon_sym_push5] = ACTIONS(30),
    [anon_sym_push6] = ACTIONS(30),
    [anon_sym_push7] = ACTIONS(30),
    [anon_sym_push8] = ACTIONS(30),
    [anon_sym_push9] = ACTIONS(30),
    [anon_sym_push10] = ACTIONS(30),
    [anon_sym_push11] = ACTIONS(30),
    [anon_sym_push12] = ACTIONS(30),
    [anon_sym_push13] = ACTIONS(30),
    [anon_sym_push14] = ACTIONS(30),
    [anon_sym_push15] = ACTIONS(30),
    [anon_sym_push16] = ACTIONS(30),
    [anon_sym_push17] = ACTIONS(30),
    [anon_sym_push18] = ACTIONS(30),
    [anon_sym_push19] = ACTIONS(30),
    [anon_sym_push20] = ACTIONS(30),
    [anon_sym_push21] = ACTIONS(30),
    [anon_sym_push22] = ACTIONS(30),
    [anon_sym_push23] = ACTIONS(30),
    [anon_sym_push24] = ACTIONS(30),
    [anon_sym_push25] = ACTIONS(30),
    [anon_sym_push26] = ACTIONS(30),
    [anon_sym_push27] = ACTIONS(30),
    [anon_sym_push28] = ACTIONS(30),
    [anon_sym_push29] = ACTIONS(30),
    [anon_sym_push30] = ACTIONS(30),
    [anon_sym_push31] = ACTIONS(30),
    [anon_sym_push32] = ACTIONS(30),
    [anon_sym_dup1] = ACTIONS(28),
    [anon_sym_dup2] = ACTIONS(30),
    [anon_sym_dup3] = ACTIONS(30),
    [anon_sym_dup4] = ACTIONS(30),
    [anon_sym_dup5] = ACTIONS(30),
    [anon_sym_dup6] = ACTIONS(30),
    [anon_sym_dup7] = ACTIONS(30),
    [anon_sym_dup8] = ACTIONS(30),
    [anon_sym_dup9] = ACTIONS(30),
    [anon_sym_dup10] = ACTIONS(30),
    [anon_sym_dup11] = ACTIONS(30),
    [anon_sym_dup12] = ACTIONS(30),
    [anon_sym_dup13] = ACTIONS(30),
    [anon_sym_dup14] = ACTIONS(30),
    [anon_sym_dup15] = ACTIONS(30),
    [anon_sym_dup16] = ACTIONS(30),
    [anon_sym_swap1] = ACTIONS(28),
    [anon_sym_swap2] = ACTIONS(30),
    [anon_sym_swap3] = ACTIONS(30),
    [anon_sym_swap4] = ACTIONS(30),
    [anon_sym_swap5] = ACTIONS(30),
    [anon_sym_swap6] = ACTIONS(30),
    [anon_sym_swap7] = ACTIONS(30),
    [anon_sym_swap8] = ACTIONS(30),
    [anon_sym_swap9] = ACTIONS(30),
    [anon_sym_swap10] = ACTIONS(30),
    [anon_sym_swap11] = ACTIONS(30),
    [anon_sym_swap12] = ACTIONS(30),
    [anon_sym_swap13] = ACTIONS(30),
    [anon_sym_swap14] = ACTIONS(30),
    [anon_sym_swap15] = ACTIONS(30),
    [anon_sym_swap16] = ACTIONS(30),
    [anon_sym_shl] = ACTIONS(28),
    [anon_sym_shr] = ACTIONS(28),
    [anon_sym_sar] = ACTIONS(28),
    [anon_sym_log0] = ACTIONS(30),
    [anon_sym_log1] = ACTIONS(30),
    [anon_sym_log2] = ACTIONS(30),
    [anon_sym_log3] = ACTIONS(30),
    [anon_sym_log4] = ACTIONS(30),
    [anon_sym_create] = ACTIONS(28),
    [anon_sym_call] = ACTIONS(28),
    [anon_sym_callcode] = ACTIONS(28),
    [anon_sym_return] = ACTIONS(28),
    [anon_sym_delegatecall] = ACTIONS(28),
    [anon_sym_create2] = ACTIONS(30),
    [anon_sym_staticcall] = ACTIONS(28),
    [anon_sym_revert] = ACTIONS(28),
    [anon_sym_invalid] = ACTIONS(28),
    [anon_sym_selfdestruct] = ACTIONS(28),
    [aux_sym__label_token1] = ACTIONS(32),
    [sym_hex] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_stop] = ACTIONS(44),
    [anon_sym_add] = ACTIONS(44),
    [anon_sym_mul] = ACTIONS(44),
    [anon_sym_sub] = ACTIONS(44),
    [anon_sym_div] = ACTIONS(44),
    [anon_sym_sdiv] = ACTIONS(44),
    [anon_sym_mod] = ACTIONS(44),
    [anon_sym_smod] = ACTIONS(44),
    [anon_sym_addmod] = ACTIONS(44),
    [anon_sym_mulmod] = ACTIONS(44),
    [anon_sym_exp] = ACTIONS(44),
    [anon_sym_signextend] = ACTIONS(44),
    [anon_sym_lt] = ACTIONS(44),
    [anon_sym_gt] = ACTIONS(44),
    [anon_sym_slt] = ACTIONS(44),
    [anon_sym_sgt] = ACTIONS(44),
    [anon_sym_eq] = ACTIONS(44),
    [anon_sym_iszero] = ACTIONS(44),
    [anon_sym_and] = ACTIONS(44),
    [anon_sym_or] = ACTIONS(44),
    [anon_sym_xor] = ACTIONS(44),
    [anon_sym_not] = ACTIONS(44),
    [anon_sym_byte] = ACTIONS(44),
    [anon_sym_sha3] = ACTIONS(42),
    [anon_sym_keccak] = ACTIONS(44),
    [anon_sym_address] = ACTIONS(44),
    [anon_sym_balance] = ACTIONS(44),
    [anon_sym_origin] = ACTIONS(44),
    [anon_sym_caller] = ACTIONS(44),
    [anon_sym_callvalue] = ACTIONS(44),
    [anon_sym_calldataload] = ACTIONS(44),
    [anon_sym_calldatasize] = ACTIONS(44),
    [anon_sym_calldatacopy] = ACTIONS(44),
    [anon_sym_codesize] = ACTIONS(44),
    [anon_sym_codecopy] = ACTIONS(44),
    [anon_sym_gasprice] = ACTIONS(44),
    [anon_sym_extcodesize] = ACTIONS(44),
    [anon_sym_extcodecopy] = ACTIONS(44),
    [anon_sym_returndatasize] = ACTIONS(44),
    [anon_sym_returndatacopy] = ACTIONS(44),
    [anon_sym_blockhash] = ACTIONS(44),
    [anon_sym_coinbase] = ACTIONS(44),
    [anon_sym_timestamp] = ACTIONS(44),
    [anon_sym_number] = ACTIONS(44),
    [anon_sym_difficulty] = ACTIONS(44),
    [anon_sym_gaslimit] = ACTIONS(44),
    [anon_sym_chainid] = ACTIONS(44),
    [anon_sym_selfbalance] = ACTIONS(44),
    [anon_sym_basefee] = ACTIONS(44),
    [anon_sym_pop] = ACTIONS(44),
    [anon_sym_mload] = ACTIONS(44),
    [anon_sym_mstore] = ACTIONS(44),
    [anon_sym_mstore8] = ACTIONS(42),
    [anon_sym_sload] = ACTIONS(44),
    [anon_sym_sstore] = ACTIONS(44),
    [anon_sym_jump] = ACTIONS(44),
    [anon_sym_jumpi] = ACTIONS(44),
    [anon_sym_getpc] = ACTIONS(44),
    [anon_sym_msize] = ACTIONS(44),
    [anon_sym_gas] = ACTIONS(44),
    [anon_sym_jumpdest] = ACTIONS(44),
    [anon_sym_push1] = ACTIONS(44),
    [anon_sym_push2] = ACTIONS(44),
    [anon_sym_push3] = ACTIONS(44),
    [anon_sym_push4] = ACTIONS(42),
    [anon_sym_push5] = ACTIONS(42),
    [anon_sym_push6] = ACTIONS(42),
    [anon_sym_push7] = ACTIONS(42),
    [anon_sym_push8] = ACTIONS(42),
    [anon_sym_push9] = ACTIONS(42),
    [anon_sym_push10] = ACTIONS(42),
    [anon_sym_push11] = ACTIONS(42),
    [anon_sym_push12] = ACTIONS(42),
    [anon_sym_push13] = ACTIONS(42),
    [anon_sym_push14] = ACTIONS(42),
    [anon_sym_push15] = ACTIONS(42),
    [anon_sym_push16] = ACTIONS(42),
    [anon_sym_push17] = ACTIONS(42),
    [anon_sym_push18] = ACTIONS(42),
    [anon_sym_push19] = ACTIONS(42),
    [anon_sym_push20] = ACTIONS(42),
    [anon_sym_push21] = ACTIONS(42),
    [anon_sym_push22] = ACTIONS(42),
    [anon_sym_push23] = ACTIONS(42),
    [anon_sym_push24] = ACTIONS(42),
    [anon_sym_push25] = ACTIONS(42),
    [anon_sym_push26] = ACTIONS(42),
    [anon_sym_push27] = ACTIONS(42),
    [anon_sym_push28] = ACTIONS(42),
    [anon_sym_push29] = ACTIONS(42),
    [anon_sym_push30] = ACTIONS(42),
    [anon_sym_push31] = ACTIONS(42),
    [anon_sym_push32] = ACTIONS(42),
    [anon_sym_dup1] = ACTIONS(44),
    [anon_sym_dup2] = ACTIONS(42),
    [anon_sym_dup3] = ACTIONS(42),
    [anon_sym_dup4] = ACTIONS(42),
    [anon_sym_dup5] = ACTIONS(42),
    [anon_sym_dup6] = ACTIONS(42),
    [anon_sym_dup7] = ACTIONS(42),
    [anon_sym_dup8] = ACTIONS(42),
    [anon_sym_dup9] = ACTIONS(42),
    [anon_sym_dup10] = ACTIONS(42),
    [anon_sym_dup11] = ACTIONS(42),
    [anon_sym_dup12] = ACTIONS(42),
    [anon_sym_dup13] = ACTIONS(42),
    [anon_sym_dup14] = ACTIONS(42),
    [anon_sym_dup15] = ACTIONS(42),
    [anon_sym_dup16] = ACTIONS(42),
    [anon_sym_swap1] = ACTIONS(44),
    [anon_sym_swap2] = ACTIONS(42),
    [anon_sym_swap3] = ACTIONS(42),
    [anon_sym_swap4] = ACTIONS(42),
    [anon_sym_swap5] = ACTIONS(42),
    [anon_sym_swap6] = ACTIONS(42),
    [anon_sym_swap7] = ACTIONS(42),
    [anon_sym_swap8] = ACTIONS(42),
    [anon_sym_swap9] = ACTIONS(42),
    [anon_sym_swap10] = ACTIONS(42),
    [anon_sym_swap11] = ACTIONS(42),
    [anon_sym_swap12] = ACTIONS(42),
    [anon_sym_swap13] = ACTIONS(42),
    [anon_sym_swap14] = ACTIONS(42),
    [anon_sym_swap15] = ACTIONS(42),
    [anon_sym_swap16] = ACTIONS(42),
    [anon_sym_shl] = ACTIONS(44),
    [anon_sym_shr] = ACTIONS(44),
    [anon_sym_sar] = ACTIONS(44),
    [anon_sym_log0] = ACTIONS(42),
    [anon_sym_log1] = ACTIONS(42),
    [anon_sym_log2] = ACTIONS(42),
    [anon_sym_log3] = ACTIONS(42),
    [anon_sym_log4] = ACTIONS(42),
    [anon_sym_create] = ACTIONS(44),
    [anon_sym_call] = ACTIONS(44),
    [anon_sym_callcode] = ACTIONS(44),
    [anon_sym_return] = ACTIONS(44),
    [anon_sym_delegatecall] = ACTIONS(44),
    [anon_sym_create2] = ACTIONS(42),
    [anon_sym_staticcall] = ACTIONS(44),
    [anon_sym_revert] = ACTIONS(44),
    [anon_sym_invalid] = ACTIONS(44),
    [anon_sym_selfdestruct] = ACTIONS(44),
    [aux_sym__label_token1] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(46),
    [sym_hex] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(42),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_stop] = ACTIONS(52),
    [anon_sym_add] = ACTIONS(52),
    [anon_sym_mul] = ACTIONS(52),
    [anon_sym_sub] = ACTIONS(52),
    [anon_sym_div] = ACTIONS(52),
    [anon_sym_sdiv] = ACTIONS(52),
    [anon_sym_mod] = ACTIONS(52),
    [anon_sym_smod] = ACTIONS(52),
    [anon_sym_addmod] = ACTIONS(52),
    [anon_sym_mulmod] = ACTIONS(52),
    [anon_sym_exp] = ACTIONS(52),
    [anon_sym_signextend] = ACTIONS(52),
    [anon_sym_lt] = ACTIONS(52),
    [anon_sym_gt] = ACTIONS(52),
    [anon_sym_slt] = ACTIONS(52),
    [anon_sym_sgt] = ACTIONS(52),
    [anon_sym_eq] = ACTIONS(52),
    [anon_sym_iszero] = ACTIONS(52),
    [anon_sym_and] = ACTIONS(52),
    [anon_sym_or] = ACTIONS(52),
    [anon_sym_xor] = ACTIONS(52),
    [anon_sym_not] = ACTIONS(52),
    [anon_sym_byte] = ACTIONS(52),
    [anon_sym_sha3] = ACTIONS(50),
    [anon_sym_keccak] = ACTIONS(52),
    [anon_sym_address] = ACTIONS(52),
    [anon_sym_balance] = ACTIONS(52),
    [anon_sym_origin] = ACTIONS(52),
    [anon_sym_caller] = ACTIONS(52),
    [anon_sym_callvalue] = ACTIONS(52),
    [anon_sym_calldataload] = ACTIONS(52),
    [anon_sym_calldatasize] = ACTIONS(52),
    [anon_sym_calldatacopy] = ACTIONS(52),
    [anon_sym_codesize] = ACTIONS(52),
    [anon_sym_codecopy] = ACTIONS(52),
    [anon_sym_gasprice] = ACTIONS(52),
    [anon_sym_extcodesize] = ACTIONS(52),
    [anon_sym_extcodecopy] = ACTIONS(52),
    [anon_sym_returndatasize] = ACTIONS(52),
    [anon_sym_returndatacopy] = ACTIONS(52),
    [anon_sym_blockhash] = ACTIONS(52),
    [anon_sym_coinbase] = ACTIONS(52),
    [anon_sym_timestamp] = ACTIONS(52),
    [anon_sym_number] = ACTIONS(52),
    [anon_sym_difficulty] = ACTIONS(52),
    [anon_sym_gaslimit] = ACTIONS(52),
    [anon_sym_chainid] = ACTIONS(52),
    [anon_sym_selfbalance] = ACTIONS(52),
    [anon_sym_basefee] = ACTIONS(52),
    [anon_sym_pop] = ACTIONS(52),
    [anon_sym_mload] = ACTIONS(52),
    [anon_sym_mstore] = ACTIONS(52),
    [anon_sym_mstore8] = ACTIONS(50),
    [anon_sym_sload] = ACTIONS(52),
    [anon_sym_sstore] = ACTIONS(52),
    [anon_sym_jump] = ACTIONS(52),
    [anon_sym_jumpi] = ACTIONS(52),
    [anon_sym_getpc] = ACTIONS(52),
    [anon_sym_msize] = ACTIONS(52),
    [anon_sym_gas] = ACTIONS(52),
    [anon_sym_jumpdest] = ACTIONS(52),
    [anon_sym_push1] = ACTIONS(52),
    [anon_sym_push2] = ACTIONS(52),
    [anon_sym_push3] = ACTIONS(52),
    [anon_sym_push4] = ACTIONS(50),
    [anon_sym_push5] = ACTIONS(50),
    [anon_sym_push6] = ACTIONS(50),
    [anon_sym_push7] = ACTIONS(50),
    [anon_sym_push8] = ACTIONS(50),
    [anon_sym_push9] = ACTIONS(50),
    [anon_sym_push10] = ACTIONS(50),
    [anon_sym_push11] = ACTIONS(50),
    [anon_sym_push12] = ACTIONS(50),
    [anon_sym_push13] = ACTIONS(50),
    [anon_sym_push14] = ACTIONS(50),
    [anon_sym_push15] = ACTIONS(50),
    [anon_sym_push16] = ACTIONS(50),
    [anon_sym_push17] = ACTIONS(50),
    [anon_sym_push18] = ACTIONS(50),
    [anon_sym_push19] = ACTIONS(50),
    [anon_sym_push20] = ACTIONS(50),
    [anon_sym_push21] = ACTIONS(50),
    [anon_sym_push22] = ACTIONS(50),
    [anon_sym_push23] = ACTIONS(50),
    [anon_sym_push24] = ACTIONS(50),
    [anon_sym_push25] = ACTIONS(50),
    [anon_sym_push26] = ACTIONS(50),
    [anon_sym_push27] = ACTIONS(50),
    [anon_sym_push28] = ACTIONS(50),
    [anon_sym_push29] = ACTIONS(50),
    [anon_sym_push30] = ACTIONS(50),
    [anon_sym_push31] = ACTIONS(50),
    [anon_sym_push32] = ACTIONS(50),
    [anon_sym_dup1] = ACTIONS(52),
    [anon_sym_dup2] = ACTIONS(50),
    [anon_sym_dup3] = ACTIONS(50),
    [anon_sym_dup4] = ACTIONS(50),
    [anon_sym_dup5] = ACTIONS(50),
    [anon_sym_dup6] = ACTIONS(50),
    [anon_sym_dup7] = ACTIONS(50),
    [anon_sym_dup8] = ACTIONS(50),
    [anon_sym_dup9] = ACTIONS(50),
    [anon_sym_dup10] = ACTIONS(50),
    [anon_sym_dup11] = ACTIONS(50),
    [anon_sym_dup12] = ACTIONS(50),
    [anon_sym_dup13] = ACTIONS(50),
    [anon_sym_dup14] = ACTIONS(50),
    [anon_sym_dup15] = ACTIONS(50),
    [anon_sym_dup16] = ACTIONS(50),
    [anon_sym_swap1] = ACTIONS(52),
    [anon_sym_swap2] = ACTIONS(50),
    [anon_sym_swap3] = ACTIONS(50),
    [anon_sym_swap4] = ACTIONS(50),
    [anon_sym_swap5] = ACTIONS(50),
    [anon_sym_swap6] = ACTIONS(50),
    [anon_sym_swap7] = ACTIONS(50),
    [anon_sym_swap8] = ACTIONS(50),
    [anon_sym_swap9] = ACTIONS(50),
    [anon_sym_swap10] = ACTIONS(50),
    [anon_sym_swap11] = ACTIONS(50),
    [anon_sym_swap12] = ACTIONS(50),
    [anon_sym_swap13] = ACTIONS(50),
    [anon_sym_swap14] = ACTIONS(50),
    [anon_sym_swap15] = ACTIONS(50),
    [anon_sym_swap16] = ACTIONS(50),
    [anon_sym_shl] = ACTIONS(52),
    [anon_sym_shr] = ACTIONS(52),
    [anon_sym_sar] = ACTIONS(52),
    [anon_sym_log0] = ACTIONS(50),
    [anon_sym_log1] = ACTIONS(50),
    [anon_sym_log2] = ACTIONS(50),
    [anon_sym_log3] = ACTIONS(50),
    [anon_sym_log4] = ACTIONS(50),
    [anon_sym_create] = ACTIONS(52),
    [anon_sym_call] = ACTIONS(52),
    [anon_sym_callcode] = ACTIONS(52),
    [anon_sym_return] = ACTIONS(52),
    [anon_sym_delegatecall] = ACTIONS(52),
    [anon_sym_create2] = ACTIONS(50),
    [anon_sym_staticcall] = ACTIONS(52),
    [anon_sym_revert] = ACTIONS(52),
    [anon_sym_invalid] = ACTIONS(52),
    [anon_sym_selfdestruct] = ACTIONS(52),
    [aux_sym__label_token1] = ACTIONS(52),
    [sym_hex] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_stop] = ACTIONS(56),
    [anon_sym_add] = ACTIONS(56),
    [anon_sym_mul] = ACTIONS(56),
    [anon_sym_sub] = ACTIONS(56),
    [anon_sym_div] = ACTIONS(56),
    [anon_sym_sdiv] = ACTIONS(56),
    [anon_sym_mod] = ACTIONS(56),
    [anon_sym_smod] = ACTIONS(56),
    [anon_sym_addmod] = ACTIONS(56),
    [anon_sym_mulmod] = ACTIONS(56),
    [anon_sym_exp] = ACTIONS(56),
    [anon_sym_signextend] = ACTIONS(56),
    [anon_sym_lt] = ACTIONS(56),
    [anon_sym_gt] = ACTIONS(56),
    [anon_sym_slt] = ACTIONS(56),
    [anon_sym_sgt] = ACTIONS(56),
    [anon_sym_eq] = ACTIONS(56),
    [anon_sym_iszero] = ACTIONS(56),
    [anon_sym_and] = ACTIONS(56),
    [anon_sym_or] = ACTIONS(56),
    [anon_sym_xor] = ACTIONS(56),
    [anon_sym_not] = ACTIONS(56),
    [anon_sym_byte] = ACTIONS(56),
    [anon_sym_sha3] = ACTIONS(54),
    [anon_sym_keccak] = ACTIONS(56),
    [anon_sym_address] = ACTIONS(56),
    [anon_sym_balance] = ACTIONS(56),
    [anon_sym_origin] = ACTIONS(56),
    [anon_sym_caller] = ACTIONS(56),
    [anon_sym_callvalue] = ACTIONS(56),
    [anon_sym_calldataload] = ACTIONS(56),
    [anon_sym_calldatasize] = ACTIONS(56),
    [anon_sym_calldatacopy] = ACTIONS(56),
    [anon_sym_codesize] = ACTIONS(56),
    [anon_sym_codecopy] = ACTIONS(56),
    [anon_sym_gasprice] = ACTIONS(56),
    [anon_sym_extcodesize] = ACTIONS(56),
    [anon_sym_extcodecopy] = ACTIONS(56),
    [anon_sym_returndatasize] = ACTIONS(56),
    [anon_sym_returndatacopy] = ACTIONS(56),
    [anon_sym_blockhash] = ACTIONS(56),
    [anon_sym_coinbase] = ACTIONS(56),
    [anon_sym_timestamp] = ACTIONS(56),
    [anon_sym_number] = ACTIONS(56),
    [anon_sym_difficulty] = ACTIONS(56),
    [anon_sym_gaslimit] = ACTIONS(56),
    [anon_sym_chainid] = ACTIONS(56),
    [anon_sym_selfbalance] = ACTIONS(56),
    [anon_sym_basefee] = ACTIONS(56),
    [anon_sym_pop] = ACTIONS(56),
    [anon_sym_mload] = ACTIONS(56),
    [anon_sym_mstore] = ACTIONS(56),
    [anon_sym_mstore8] = ACTIONS(54),
    [anon_sym_sload] = ACTIONS(56),
    [anon_sym_sstore] = ACTIONS(56),
    [anon_sym_jump] = ACTIONS(56),
    [anon_sym_jumpi] = ACTIONS(56),
    [anon_sym_getpc] = ACTIONS(56),
    [anon_sym_msize] = ACTIONS(56),
    [anon_sym_gas] = ACTIONS(56),
    [anon_sym_jumpdest] = ACTIONS(56),
    [anon_sym_push1] = ACTIONS(56),
    [anon_sym_push2] = ACTIONS(56),
    [anon_sym_push3] = ACTIONS(56),
    [anon_sym_push4] = ACTIONS(54),
    [anon_sym_push5] = ACTIONS(54),
    [anon_sym_push6] = ACTIONS(54),
    [anon_sym_push7] = ACTIONS(54),
    [anon_sym_push8] = ACTIONS(54),
    [anon_sym_push9] = ACTIONS(54),
    [anon_sym_push10] = ACTIONS(54),
    [anon_sym_push11] = ACTIONS(54),
    [anon_sym_push12] = ACTIONS(54),
    [anon_sym_push13] = ACTIONS(54),
    [anon_sym_push14] = ACTIONS(54),
    [anon_sym_push15] = ACTIONS(54),
    [anon_sym_push16] = ACTIONS(54),
    [anon_sym_push17] = ACTIONS(54),
    [anon_sym_push18] = ACTIONS(54),
    [anon_sym_push19] = ACTIONS(54),
    [anon_sym_push20] = ACTIONS(54),
    [anon_sym_push21] = ACTIONS(54),
    [anon_sym_push22] = ACTIONS(54),
    [anon_sym_push23] = ACTIONS(54),
    [anon_sym_push24] = ACTIONS(54),
    [anon_sym_push25] = ACTIONS(54),
    [anon_sym_push26] = ACTIONS(54),
    [anon_sym_push27] = ACTIONS(54),
    [anon_sym_push28] = ACTIONS(54),
    [anon_sym_push29] = ACTIONS(54),
    [anon_sym_push30] = ACTIONS(54),
    [anon_sym_push31] = ACTIONS(54),
    [anon_sym_push32] = ACTIONS(54),
    [anon_sym_dup1] = ACTIONS(56),
    [anon_sym_dup2] = ACTIONS(54),
    [anon_sym_dup3] = ACTIONS(54),
    [anon_sym_dup4] = ACTIONS(54),
    [anon_sym_dup5] = ACTIONS(54),
    [anon_sym_dup6] = ACTIONS(54),
    [anon_sym_dup7] = ACTIONS(54),
    [anon_sym_dup8] = ACTIONS(54),
    [anon_sym_dup9] = ACTIONS(54),
    [anon_sym_dup10] = ACTIONS(54),
    [anon_sym_dup11] = ACTIONS(54),
    [anon_sym_dup12] = ACTIONS(54),
    [anon_sym_dup13] = ACTIONS(54),
    [anon_sym_dup14] = ACTIONS(54),
    [anon_sym_dup15] = ACTIONS(54),
    [anon_sym_dup16] = ACTIONS(54),
    [anon_sym_swap1] = ACTIONS(56),
    [anon_sym_swap2] = ACTIONS(54),
    [anon_sym_swap3] = ACTIONS(54),
    [anon_sym_swap4] = ACTIONS(54),
    [anon_sym_swap5] = ACTIONS(54),
    [anon_sym_swap6] = ACTIONS(54),
    [anon_sym_swap7] = ACTIONS(54),
    [anon_sym_swap8] = ACTIONS(54),
    [anon_sym_swap9] = ACTIONS(54),
    [anon_sym_swap10] = ACTIONS(54),
    [anon_sym_swap11] = ACTIONS(54),
    [anon_sym_swap12] = ACTIONS(54),
    [anon_sym_swap13] = ACTIONS(54),
    [anon_sym_swap14] = ACTIONS(54),
    [anon_sym_swap15] = ACTIONS(54),
    [anon_sym_swap16] = ACTIONS(54),
    [anon_sym_shl] = ACTIONS(56),
    [anon_sym_shr] = ACTIONS(56),
    [anon_sym_sar] = ACTIONS(56),
    [anon_sym_log0] = ACTIONS(54),
    [anon_sym_log1] = ACTIONS(54),
    [anon_sym_log2] = ACTIONS(54),
    [anon_sym_log3] = ACTIONS(54),
    [anon_sym_log4] = ACTIONS(54),
    [anon_sym_create] = ACTIONS(56),
    [anon_sym_call] = ACTIONS(56),
    [anon_sym_callcode] = ACTIONS(56),
    [anon_sym_return] = ACTIONS(56),
    [anon_sym_delegatecall] = ACTIONS(56),
    [anon_sym_create2] = ACTIONS(54),
    [anon_sym_staticcall] = ACTIONS(56),
    [anon_sym_revert] = ACTIONS(56),
    [anon_sym_invalid] = ACTIONS(56),
    [anon_sym_selfdestruct] = ACTIONS(56),
    [aux_sym__label_token1] = ACTIONS(56),
    [sym_hex] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_stop] = ACTIONS(60),
    [anon_sym_add] = ACTIONS(60),
    [anon_sym_mul] = ACTIONS(60),
    [anon_sym_sub] = ACTIONS(60),
    [anon_sym_div] = ACTIONS(60),
    [anon_sym_sdiv] = ACTIONS(60),
    [anon_sym_mod] = ACTIONS(60),
    [anon_sym_smod] = ACTIONS(60),
    [anon_sym_addmod] = ACTIONS(60),
    [anon_sym_mulmod] = ACTIONS(60),
    [anon_sym_exp] = ACTIONS(60),
    [anon_sym_signextend] = ACTIONS(60),
    [anon_sym_lt] = ACTIONS(60),
    [anon_sym_gt] = ACTIONS(60),
    [anon_sym_slt] = ACTIONS(60),
    [anon_sym_sgt] = ACTIONS(60),
    [anon_sym_eq] = ACTIONS(60),
    [anon_sym_iszero] = ACTIONS(60),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_or] = ACTIONS(60),
    [anon_sym_xor] = ACTIONS(60),
    [anon_sym_not] = ACTIONS(60),
    [anon_sym_byte] = ACTIONS(60),
    [anon_sym_sha3] = ACTIONS(58),
    [anon_sym_keccak] = ACTIONS(60),
    [anon_sym_address] = ACTIONS(60),
    [anon_sym_balance] = ACTIONS(60),
    [anon_sym_origin] = ACTIONS(60),
    [anon_sym_caller] = ACTIONS(60),
    [anon_sym_callvalue] = ACTIONS(60),
    [anon_sym_calldataload] = ACTIONS(60),
    [anon_sym_calldatasize] = ACTIONS(60),
    [anon_sym_calldatacopy] = ACTIONS(60),
    [anon_sym_codesize] = ACTIONS(60),
    [anon_sym_codecopy] = ACTIONS(60),
    [anon_sym_gasprice] = ACTIONS(60),
    [anon_sym_extcodesize] = ACTIONS(60),
    [anon_sym_extcodecopy] = ACTIONS(60),
    [anon_sym_returndatasize] = ACTIONS(60),
    [anon_sym_returndatacopy] = ACTIONS(60),
    [anon_sym_blockhash] = ACTIONS(60),
    [anon_sym_coinbase] = ACTIONS(60),
    [anon_sym_timestamp] = ACTIONS(60),
    [anon_sym_number] = ACTIONS(60),
    [anon_sym_difficulty] = ACTIONS(60),
    [anon_sym_gaslimit] = ACTIONS(60),
    [anon_sym_chainid] = ACTIONS(60),
    [anon_sym_selfbalance] = ACTIONS(60),
    [anon_sym_basefee] = ACTIONS(60),
    [anon_sym_pop] = ACTIONS(60),
    [anon_sym_mload] = ACTIONS(60),
    [anon_sym_mstore] = ACTIONS(60),
    [anon_sym_mstore8] = ACTIONS(58),
    [anon_sym_sload] = ACTIONS(60),
    [anon_sym_sstore] = ACTIONS(60),
    [anon_sym_jump] = ACTIONS(60),
    [anon_sym_jumpi] = ACTIONS(60),
    [anon_sym_getpc] = ACTIONS(60),
    [anon_sym_msize] = ACTIONS(60),
    [anon_sym_gas] = ACTIONS(60),
    [anon_sym_jumpdest] = ACTIONS(60),
    [anon_sym_push1] = ACTIONS(60),
    [anon_sym_push2] = ACTIONS(60),
    [anon_sym_push3] = ACTIONS(60),
    [anon_sym_push4] = ACTIONS(58),
    [anon_sym_push5] = ACTIONS(58),
    [anon_sym_push6] = ACTIONS(58),
    [anon_sym_push7] = ACTIONS(58),
    [anon_sym_push8] = ACTIONS(58),
    [anon_sym_push9] = ACTIONS(58),
    [anon_sym_push10] = ACTIONS(58),
    [anon_sym_push11] = ACTIONS(58),
    [anon_sym_push12] = ACTIONS(58),
    [anon_sym_push13] = ACTIONS(58),
    [anon_sym_push14] = ACTIONS(58),
    [anon_sym_push15] = ACTIONS(58),
    [anon_sym_push16] = ACTIONS(58),
    [anon_sym_push17] = ACTIONS(58),
    [anon_sym_push18] = ACTIONS(58),
    [anon_sym_push19] = ACTIONS(58),
    [anon_sym_push20] = ACTIONS(58),
    [anon_sym_push21] = ACTIONS(58),
    [anon_sym_push22] = ACTIONS(58),
    [anon_sym_push23] = ACTIONS(58),
    [anon_sym_push24] = ACTIONS(58),
    [anon_sym_push25] = ACTIONS(58),
    [anon_sym_push26] = ACTIONS(58),
    [anon_sym_push27] = ACTIONS(58),
    [anon_sym_push28] = ACTIONS(58),
    [anon_sym_push29] = ACTIONS(58),
    [anon_sym_push30] = ACTIONS(58),
    [anon_sym_push31] = ACTIONS(58),
    [anon_sym_push32] = ACTIONS(58),
    [anon_sym_dup1] = ACTIONS(60),
    [anon_sym_dup2] = ACTIONS(58),
    [anon_sym_dup3] = ACTIONS(58),
    [anon_sym_dup4] = ACTIONS(58),
    [anon_sym_dup5] = ACTIONS(58),
    [anon_sym_dup6] = ACTIONS(58),
    [anon_sym_dup7] = ACTIONS(58),
    [anon_sym_dup8] = ACTIONS(58),
    [anon_sym_dup9] = ACTIONS(58),
    [anon_sym_dup10] = ACTIONS(58),
    [anon_sym_dup11] = ACTIONS(58),
    [anon_sym_dup12] = ACTIONS(58),
    [anon_sym_dup13] = ACTIONS(58),
    [anon_sym_dup14] = ACTIONS(58),
    [anon_sym_dup15] = ACTIONS(58),
    [anon_sym_dup16] = ACTIONS(58),
    [anon_sym_swap1] = ACTIONS(60),
    [anon_sym_swap2] = ACTIONS(58),
    [anon_sym_swap3] = ACTIONS(58),
    [anon_sym_swap4] = ACTIONS(58),
    [anon_sym_swap5] = ACTIONS(58),
    [anon_sym_swap6] = ACTIONS(58),
    [anon_sym_swap7] = ACTIONS(58),
    [anon_sym_swap8] = ACTIONS(58),
    [anon_sym_swap9] = ACTIONS(58),
    [anon_sym_swap10] = ACTIONS(58),
    [anon_sym_swap11] = ACTIONS(58),
    [anon_sym_swap12] = ACTIONS(58),
    [anon_sym_swap13] = ACTIONS(58),
    [anon_sym_swap14] = ACTIONS(58),
    [anon_sym_swap15] = ACTIONS(58),
    [anon_sym_swap16] = ACTIONS(58),
    [anon_sym_shl] = ACTIONS(60),
    [anon_sym_shr] = ACTIONS(60),
    [anon_sym_sar] = ACTIONS(60),
    [anon_sym_log0] = ACTIONS(58),
    [anon_sym_log1] = ACTIONS(58),
    [anon_sym_log2] = ACTIONS(58),
    [anon_sym_log3] = ACTIONS(58),
    [anon_sym_log4] = ACTIONS(58),
    [anon_sym_create] = ACTIONS(60),
    [anon_sym_call] = ACTIONS(60),
    [anon_sym_callcode] = ACTIONS(60),
    [anon_sym_return] = ACTIONS(60),
    [anon_sym_delegatecall] = ACTIONS(60),
    [anon_sym_create2] = ACTIONS(58),
    [anon_sym_staticcall] = ACTIONS(60),
    [anon_sym_revert] = ACTIONS(60),
    [anon_sym_invalid] = ACTIONS(60),
    [anon_sym_selfdestruct] = ACTIONS(60),
    [aux_sym__label_token1] = ACTIONS(60),
    [sym_hex] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_stop] = ACTIONS(64),
    [anon_sym_add] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_sdiv] = ACTIONS(64),
    [anon_sym_mod] = ACTIONS(64),
    [anon_sym_smod] = ACTIONS(64),
    [anon_sym_addmod] = ACTIONS(64),
    [anon_sym_mulmod] = ACTIONS(64),
    [anon_sym_exp] = ACTIONS(64),
    [anon_sym_signextend] = ACTIONS(64),
    [anon_sym_lt] = ACTIONS(64),
    [anon_sym_gt] = ACTIONS(64),
    [anon_sym_slt] = ACTIONS(64),
    [anon_sym_sgt] = ACTIONS(64),
    [anon_sym_eq] = ACTIONS(64),
    [anon_sym_iszero] = ACTIONS(64),
    [anon_sym_and] = ACTIONS(64),
    [anon_sym_or] = ACTIONS(64),
    [anon_sym_xor] = ACTIONS(64),
    [anon_sym_not] = ACTIONS(64),
    [anon_sym_byte] = ACTIONS(64),
    [anon_sym_sha3] = ACTIONS(62),
    [anon_sym_keccak] = ACTIONS(64),
    [anon_sym_address] = ACTIONS(64),
    [anon_sym_balance] = ACTIONS(64),
    [anon_sym_origin] = ACTIONS(64),
    [anon_sym_caller] = ACTIONS(64),
    [anon_sym_callvalue] = ACTIONS(64),
    [anon_sym_calldataload] = ACTIONS(64),
    [anon_sym_calldatasize] = ACTIONS(64),
    [anon_sym_calldatacopy] = ACTIONS(64),
    [anon_sym_codesize] = ACTIONS(64),
    [anon_sym_codecopy] = ACTIONS(64),
    [anon_sym_gasprice] = ACTIONS(64),
    [anon_sym_extcodesize] = ACTIONS(64),
    [anon_sym_extcodecopy] = ACTIONS(64),
    [anon_sym_returndatasize] = ACTIONS(64),
    [anon_sym_returndatacopy] = ACTIONS(64),
    [anon_sym_blockhash] = ACTIONS(64),
    [anon_sym_coinbase] = ACTIONS(64),
    [anon_sym_timestamp] = ACTIONS(64),
    [anon_sym_number] = ACTIONS(64),
    [anon_sym_difficulty] = ACTIONS(64),
    [anon_sym_gaslimit] = ACTIONS(64),
    [anon_sym_chainid] = ACTIONS(64),
    [anon_sym_selfbalance] = ACTIONS(64),
    [anon_sym_basefee] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_mload] = ACTIONS(64),
    [anon_sym_mstore] = ACTIONS(64),
    [anon_sym_mstore8] = ACTIONS(62),
    [anon_sym_sload] = ACTIONS(64),
    [anon_sym_sstore] = ACTIONS(64),
    [anon_sym_jump] = ACTIONS(64),
    [anon_sym_jumpi] = ACTIONS(64),
    [anon_sym_getpc] = ACTIONS(64),
    [anon_sym_msize] = ACTIONS(64),
    [anon_sym_gas] = ACTIONS(64),
    [anon_sym_jumpdest] = ACTIONS(64),
    [anon_sym_push1] = ACTIONS(64),
    [anon_sym_push2] = ACTIONS(64),
    [anon_sym_push3] = ACTIONS(64),
    [anon_sym_push4] = ACTIONS(62),
    [anon_sym_push5] = ACTIONS(62),
    [anon_sym_push6] = ACTIONS(62),
    [anon_sym_push7] = ACTIONS(62),
    [anon_sym_push8] = ACTIONS(62),
    [anon_sym_push9] = ACTIONS(62),
    [anon_sym_push10] = ACTIONS(62),
    [anon_sym_push11] = ACTIONS(62),
    [anon_sym_push12] = ACTIONS(62),
    [anon_sym_push13] = ACTIONS(62),
    [anon_sym_push14] = ACTIONS(62),
    [anon_sym_push15] = ACTIONS(62),
    [anon_sym_push16] = ACTIONS(62),
    [anon_sym_push17] = ACTIONS(62),
    [anon_sym_push18] = ACTIONS(62),
    [anon_sym_push19] = ACTIONS(62),
    [anon_sym_push20] = ACTIONS(62),
    [anon_sym_push21] = ACTIONS(62),
    [anon_sym_push22] = ACTIONS(62),
    [anon_sym_push23] = ACTIONS(62),
    [anon_sym_push24] = ACTIONS(62),
    [anon_sym_push25] = ACTIONS(62),
    [anon_sym_push26] = ACTIONS(62),
    [anon_sym_push27] = ACTIONS(62),
    [anon_sym_push28] = ACTIONS(62),
    [anon_sym_push29] = ACTIONS(62),
    [anon_sym_push30] = ACTIONS(62),
    [anon_sym_push31] = ACTIONS(62),
    [anon_sym_push32] = ACTIONS(62),
    [anon_sym_dup1] = ACTIONS(64),
    [anon_sym_dup2] = ACTIONS(62),
    [anon_sym_dup3] = ACTIONS(62),
    [anon_sym_dup4] = ACTIONS(62),
    [anon_sym_dup5] = ACTIONS(62),
    [anon_sym_dup6] = ACTIONS(62),
    [anon_sym_dup7] = ACTIONS(62),
    [anon_sym_dup8] = ACTIONS(62),
    [anon_sym_dup9] = ACTIONS(62),
    [anon_sym_dup10] = ACTIONS(62),
    [anon_sym_dup11] = ACTIONS(62),
    [anon_sym_dup12] = ACTIONS(62),
    [anon_sym_dup13] = ACTIONS(62),
    [anon_sym_dup14] = ACTIONS(62),
    [anon_sym_dup15] = ACTIONS(62),
    [anon_sym_dup16] = ACTIONS(62),
    [anon_sym_swap1] = ACTIONS(64),
    [anon_sym_swap2] = ACTIONS(62),
    [anon_sym_swap3] = ACTIONS(62),
    [anon_sym_swap4] = ACTIONS(62),
    [anon_sym_swap5] = ACTIONS(62),
    [anon_sym_swap6] = ACTIONS(62),
    [anon_sym_swap7] = ACTIONS(62),
    [anon_sym_swap8] = ACTIONS(62),
    [anon_sym_swap9] = ACTIONS(62),
    [anon_sym_swap10] = ACTIONS(62),
    [anon_sym_swap11] = ACTIONS(62),
    [anon_sym_swap12] = ACTIONS(62),
    [anon_sym_swap13] = ACTIONS(62),
    [anon_sym_swap14] = ACTIONS(62),
    [anon_sym_swap15] = ACTIONS(62),
    [anon_sym_swap16] = ACTIONS(62),
    [anon_sym_shl] = ACTIONS(64),
    [anon_sym_shr] = ACTIONS(64),
    [anon_sym_sar] = ACTIONS(64),
    [anon_sym_log0] = ACTIONS(62),
    [anon_sym_log1] = ACTIONS(62),
    [anon_sym_log2] = ACTIONS(62),
    [anon_sym_log3] = ACTIONS(62),
    [anon_sym_log4] = ACTIONS(62),
    [anon_sym_create] = ACTIONS(64),
    [anon_sym_call] = ACTIONS(64),
    [anon_sym_callcode] = ACTIONS(64),
    [anon_sym_return] = ACTIONS(64),
    [anon_sym_delegatecall] = ACTIONS(64),
    [anon_sym_create2] = ACTIONS(62),
    [anon_sym_staticcall] = ACTIONS(64),
    [anon_sym_revert] = ACTIONS(64),
    [anon_sym_invalid] = ACTIONS(64),
    [anon_sym_selfdestruct] = ACTIONS(64),
    [aux_sym__label_token1] = ACTIONS(64),
    [sym_hex] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_stop] = ACTIONS(68),
    [anon_sym_add] = ACTIONS(68),
    [anon_sym_mul] = ACTIONS(68),
    [anon_sym_sub] = ACTIONS(68),
    [anon_sym_div] = ACTIONS(68),
    [anon_sym_sdiv] = ACTIONS(68),
    [anon_sym_mod] = ACTIONS(68),
    [anon_sym_smod] = ACTIONS(68),
    [anon_sym_addmod] = ACTIONS(68),
    [anon_sym_mulmod] = ACTIONS(68),
    [anon_sym_exp] = ACTIONS(68),
    [anon_sym_signextend] = ACTIONS(68),
    [anon_sym_lt] = ACTIONS(68),
    [anon_sym_gt] = ACTIONS(68),
    [anon_sym_slt] = ACTIONS(68),
    [anon_sym_sgt] = ACTIONS(68),
    [anon_sym_eq] = ACTIONS(68),
    [anon_sym_iszero] = ACTIONS(68),
    [anon_sym_and] = ACTIONS(68),
    [anon_sym_or] = ACTIONS(68),
    [anon_sym_xor] = ACTIONS(68),
    [anon_sym_not] = ACTIONS(68),
    [anon_sym_byte] = ACTIONS(68),
    [anon_sym_sha3] = ACTIONS(66),
    [anon_sym_keccak] = ACTIONS(68),
    [anon_sym_address] = ACTIONS(68),
    [anon_sym_balance] = ACTIONS(68),
    [anon_sym_origin] = ACTIONS(68),
    [anon_sym_caller] = ACTIONS(68),
    [anon_sym_callvalue] = ACTIONS(68),
    [anon_sym_calldataload] = ACTIONS(68),
    [anon_sym_calldatasize] = ACTIONS(68),
    [anon_sym_calldatacopy] = ACTIONS(68),
    [anon_sym_codesize] = ACTIONS(68),
    [anon_sym_codecopy] = ACTIONS(68),
    [anon_sym_gasprice] = ACTIONS(68),
    [anon_sym_extcodesize] = ACTIONS(68),
    [anon_sym_extcodecopy] = ACTIONS(68),
    [anon_sym_returndatasize] = ACTIONS(68),
    [anon_sym_returndatacopy] = ACTIONS(68),
    [anon_sym_blockhash] = ACTIONS(68),
    [anon_sym_coinbase] = ACTIONS(68),
    [anon_sym_timestamp] = ACTIONS(68),
    [anon_sym_number] = ACTIONS(68),
    [anon_sym_difficulty] = ACTIONS(68),
    [anon_sym_gaslimit] = ACTIONS(68),
    [anon_sym_chainid] = ACTIONS(68),
    [anon_sym_selfbalance] = ACTIONS(68),
    [anon_sym_basefee] = ACTIONS(68),
    [anon_sym_pop] = ACTIONS(68),
    [anon_sym_mload] = ACTIONS(68),
    [anon_sym_mstore] = ACTIONS(68),
    [anon_sym_mstore8] = ACTIONS(66),
    [anon_sym_sload] = ACTIONS(68),
    [anon_sym_sstore] = ACTIONS(68),
    [anon_sym_jump] = ACTIONS(68),
    [anon_sym_jumpi] = ACTIONS(68),
    [anon_sym_getpc] = ACTIONS(68),
    [anon_sym_msize] = ACTIONS(68),
    [anon_sym_gas] = ACTIONS(68),
    [anon_sym_jumpdest] = ACTIONS(68),
    [anon_sym_push1] = ACTIONS(68),
    [anon_sym_push2] = ACTIONS(68),
    [anon_sym_push3] = ACTIONS(68),
    [anon_sym_push4] = ACTIONS(66),
    [anon_sym_push5] = ACTIONS(66),
    [anon_sym_push6] = ACTIONS(66),
    [anon_sym_push7] = ACTIONS(66),
    [anon_sym_push8] = ACTIONS(66),
    [anon_sym_push9] = ACTIONS(66),
    [anon_sym_push10] = ACTIONS(66),
    [anon_sym_push11] = ACTIONS(66),
    [anon_sym_push12] = ACTIONS(66),
    [anon_sym_push13] = ACTIONS(66),
    [anon_sym_push14] = ACTIONS(66),
    [anon_sym_push15] = ACTIONS(66),
    [anon_sym_push16] = ACTIONS(66),
    [anon_sym_push17] = ACTIONS(66),
    [anon_sym_push18] = ACTIONS(66),
    [anon_sym_push19] = ACTIONS(66),
    [anon_sym_push20] = ACTIONS(66),
    [anon_sym_push21] = ACTIONS(66),
    [anon_sym_push22] = ACTIONS(66),
    [anon_sym_push23] = ACTIONS(66),
    [anon_sym_push24] = ACTIONS(66),
    [anon_sym_push25] = ACTIONS(66),
    [anon_sym_push26] = ACTIONS(66),
    [anon_sym_push27] = ACTIONS(66),
    [anon_sym_push28] = ACTIONS(66),
    [anon_sym_push29] = ACTIONS(66),
    [anon_sym_push30] = ACTIONS(66),
    [anon_sym_push31] = ACTIONS(66),
    [anon_sym_push32] = ACTIONS(66),
    [anon_sym_dup1] = ACTIONS(68),
    [anon_sym_dup2] = ACTIONS(66),
    [anon_sym_dup3] = ACTIONS(66),
    [anon_sym_dup4] = ACTIONS(66),
    [anon_sym_dup5] = ACTIONS(66),
    [anon_sym_dup6] = ACTIONS(66),
    [anon_sym_dup7] = ACTIONS(66),
    [anon_sym_dup8] = ACTIONS(66),
    [anon_sym_dup9] = ACTIONS(66),
    [anon_sym_dup10] = ACTIONS(66),
    [anon_sym_dup11] = ACTIONS(66),
    [anon_sym_dup12] = ACTIONS(66),
    [anon_sym_dup13] = ACTIONS(66),
    [anon_sym_dup14] = ACTIONS(66),
    [anon_sym_dup15] = ACTIONS(66),
    [anon_sym_dup16] = ACTIONS(66),
    [anon_sym_swap1] = ACTIONS(68),
    [anon_sym_swap2] = ACTIONS(66),
    [anon_sym_swap3] = ACTIONS(66),
    [anon_sym_swap4] = ACTIONS(66),
    [anon_sym_swap5] = ACTIONS(66),
    [anon_sym_swap6] = ACTIONS(66),
    [anon_sym_swap7] = ACTIONS(66),
    [anon_sym_swap8] = ACTIONS(66),
    [anon_sym_swap9] = ACTIONS(66),
    [anon_sym_swap10] = ACTIONS(66),
    [anon_sym_swap11] = ACTIONS(66),
    [anon_sym_swap12] = ACTIONS(66),
    [anon_sym_swap13] = ACTIONS(66),
    [anon_sym_swap14] = ACTIONS(66),
    [anon_sym_swap15] = ACTIONS(66),
    [anon_sym_swap16] = ACTIONS(66),
    [anon_sym_shl] = ACTIONS(68),
    [anon_sym_shr] = ACTIONS(68),
    [anon_sym_sar] = ACTIONS(68),
    [anon_sym_log0] = ACTIONS(66),
    [anon_sym_log1] = ACTIONS(66),
    [anon_sym_log2] = ACTIONS(66),
    [anon_sym_log3] = ACTIONS(66),
    [anon_sym_log4] = ACTIONS(66),
    [anon_sym_create] = ACTIONS(68),
    [anon_sym_call] = ACTIONS(68),
    [anon_sym_callcode] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(68),
    [anon_sym_delegatecall] = ACTIONS(68),
    [anon_sym_create2] = ACTIONS(66),
    [anon_sym_staticcall] = ACTIONS(68),
    [anon_sym_revert] = ACTIONS(68),
    [anon_sym_invalid] = ACTIONS(68),
    [anon_sym_selfdestruct] = ACTIONS(68),
    [aux_sym__label_token1] = ACTIONS(68),
    [sym_hex] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 14,
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
    ACTIONS(72), 14,
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
    ACTIONS(74), 9,
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
    STATE(32), 1,
      sym_val_parameters,
    STATE(43), 1,
      sym_keyword,
    ACTIONS(76), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [73] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_val_parameters,
    STATE(43), 1,
      sym_keyword,
    ACTIONS(76), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [91] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym_val_parameters,
    STATE(43), 1,
      sym_keyword,
    ACTIONS(76), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_keyword,
    ACTIONS(76), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_def_val,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(35), 3,
      sym_keyword_definition,
      sym_interface_definition,
      sym_constant_definition,
  [143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_def_val,
    STATE(19), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(35), 3,
      sym_keyword_definition,
      sym_interface_definition,
      sym_constant_definition,
  [162] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym__label_token1,
    STATE(22), 1,
      sym__declaration,
    STATE(29), 1,
      sym_identifier,
    STATE(31), 1,
      sym__def_const,
    STATE(44), 1,
      sym__def_params,
    STATE(45), 1,
      sym__def,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_macro,
      anon_sym_fn,
      anon_sym_takes,
      anon_sym_returns,
      anon_sym_function,
      anon_sym_constant,
  [196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_visibility,
    ACTIONS(91), 4,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 5,
      anon_sym_EQ,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [223] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym__label_token1,
    ACTIONS(97), 1,
      sym_hex,
    STATE(30), 1,
      sym_constant,
    STATE(40), 1,
      sym_const,
    STATE(49), 1,
      sym_identifier,
  [242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      sym__single_parameter,
    STATE(27), 1,
      aux_sym_parameters_repeat1,
    STATE(46), 1,
      sym_parameter,
  [258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym__single_parameter,
    STATE(26), 1,
      aux_sym_parameters_repeat1,
    STATE(46), 1,
      sym_parameter,
  [274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym__single_parameter,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameters_repeat1,
    STATE(46), 1,
      sym_parameter,
  [290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_parameters,
  [312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      sym__single_parameter,
  [354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      aux_sym__label_token1,
      anon_sym_LPAREN,
  [370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym__label_token1,
    STATE(47), 1,
      sym_identifier,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_parameters,
  [430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [446] = 2,
    ACTIONS(140), 1,
      aux_sym_parameters_token1,
    ACTIONS(142), 1,
      sym_comment,
  [453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN_RPAREN,
  [467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN_RPAREN,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [481] = 2,
    ACTIONS(142), 1,
      sym_comment,
    ACTIONS(152), 1,
      aux_sym_parameters_token1,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LPAREN_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 20,
  [SMALL_STATE(13)] = 40,
  [SMALL_STATE(14)] = 55,
  [SMALL_STATE(15)] = 73,
  [SMALL_STATE(16)] = 91,
  [SMALL_STATE(17)] = 109,
  [SMALL_STATE(18)] = 124,
  [SMALL_STATE(19)] = 143,
  [SMALL_STATE(20)] = 162,
  [SMALL_STATE(21)] = 184,
  [SMALL_STATE(22)] = 196,
  [SMALL_STATE(23)] = 212,
  [SMALL_STATE(24)] = 223,
  [SMALL_STATE(25)] = 242,
  [SMALL_STATE(26)] = 258,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 290,
  [SMALL_STATE(29)] = 299,
  [SMALL_STATE(30)] = 312,
  [SMALL_STATE(31)] = 320,
  [SMALL_STATE(32)] = 328,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 346,
  [SMALL_STATE(35)] = 354,
  [SMALL_STATE(36)] = 362,
  [SMALL_STATE(37)] = 370,
  [SMALL_STATE(38)] = 378,
  [SMALL_STATE(39)] = 386,
  [SMALL_STATE(40)] = 394,
  [SMALL_STATE(41)] = 402,
  [SMALL_STATE(42)] = 410,
  [SMALL_STATE(43)] = 420,
  [SMALL_STATE(44)] = 430,
  [SMALL_STATE(45)] = 438,
  [SMALL_STATE(46)] = 446,
  [SMALL_STATE(47)] = 453,
  [SMALL_STATE(48)] = 460,
  [SMALL_STATE(49)] = 467,
  [SMALL_STATE(50)] = 474,
  [SMALL_STATE(51)] = 481,
  [SMALL_STATE(52)] = 488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_access, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_access, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_call, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_call, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__destination, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__destination, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_parameters, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(51),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_const, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_params, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
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
