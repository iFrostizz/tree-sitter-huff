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
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 198
#define ALIAS_COUNT 0
#define TOKEN_COUNT 170
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  sym_def_val = 2,
  anon_sym_macro = 3,
  anon_sym_fn = 4,
  anon_sym_function = 5,
  anon_sym_constant = 6,
  anon_sym_returns = 7,
  sym_takes_parameters = 8,
  sym_returns_parameters = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_stop = 12,
  anon_sym_add = 13,
  anon_sym_mul = 14,
  anon_sym_sub = 15,
  anon_sym_div = 16,
  anon_sym_sdiv = 17,
  anon_sym_mod = 18,
  anon_sym_smod = 19,
  anon_sym_addmod = 20,
  anon_sym_mulmod = 21,
  anon_sym_exp = 22,
  anon_sym_signextend = 23,
  anon_sym_lt = 24,
  anon_sym_gt = 25,
  anon_sym_slt = 26,
  anon_sym_sgt = 27,
  anon_sym_eq = 28,
  anon_sym_iszero = 29,
  anon_sym_and = 30,
  anon_sym_or = 31,
  anon_sym_xor = 32,
  anon_sym_not = 33,
  anon_sym_byte = 34,
  anon_sym_sha3 = 35,
  anon_sym_keccak = 36,
  anon_sym_address = 37,
  anon_sym_balance = 38,
  anon_sym_origin = 39,
  anon_sym_caller = 40,
  anon_sym_callvalue = 41,
  anon_sym_calldataload = 42,
  anon_sym_calldatasize = 43,
  anon_sym_calldatacopy = 44,
  anon_sym_codesize = 45,
  anon_sym_codecopy = 46,
  anon_sym_gasprice = 47,
  anon_sym_extcodesize = 48,
  anon_sym_extcodecopy = 49,
  anon_sym_returndatasize = 50,
  anon_sym_returndatacopy = 51,
  anon_sym_blockhash = 52,
  anon_sym_coinbase = 53,
  anon_sym_timestamp = 54,
  anon_sym_number = 55,
  anon_sym_difficulty = 56,
  anon_sym_gaslimit = 57,
  anon_sym_chainid = 58,
  anon_sym_selfbalance = 59,
  anon_sym_basefee = 60,
  anon_sym_pop = 61,
  anon_sym_mload = 62,
  anon_sym_mstore = 63,
  anon_sym_mstore8 = 64,
  anon_sym_sload = 65,
  anon_sym_sstore = 66,
  anon_sym_jump = 67,
  anon_sym_jumpi = 68,
  anon_sym_getpc = 69,
  anon_sym_msize = 70,
  anon_sym_gas = 71,
  anon_sym_jumpdest = 72,
  anon_sym_push1 = 73,
  anon_sym_push2 = 74,
  anon_sym_push3 = 75,
  anon_sym_push4 = 76,
  anon_sym_push5 = 77,
  anon_sym_push6 = 78,
  anon_sym_push7 = 79,
  anon_sym_push8 = 80,
  anon_sym_push9 = 81,
  anon_sym_push10 = 82,
  anon_sym_push11 = 83,
  anon_sym_push12 = 84,
  anon_sym_push13 = 85,
  anon_sym_push14 = 86,
  anon_sym_push15 = 87,
  anon_sym_push16 = 88,
  anon_sym_push17 = 89,
  anon_sym_push18 = 90,
  anon_sym_push19 = 91,
  anon_sym_push20 = 92,
  anon_sym_push21 = 93,
  anon_sym_push22 = 94,
  anon_sym_push23 = 95,
  anon_sym_push24 = 96,
  anon_sym_push25 = 97,
  anon_sym_push26 = 98,
  anon_sym_push27 = 99,
  anon_sym_push28 = 100,
  anon_sym_push29 = 101,
  anon_sym_push30 = 102,
  anon_sym_push31 = 103,
  anon_sym_push32 = 104,
  anon_sym_dup1 = 105,
  anon_sym_dup2 = 106,
  anon_sym_dup3 = 107,
  anon_sym_dup4 = 108,
  anon_sym_dup5 = 109,
  anon_sym_dup6 = 110,
  anon_sym_dup7 = 111,
  anon_sym_dup8 = 112,
  anon_sym_dup9 = 113,
  anon_sym_dup10 = 114,
  anon_sym_dup11 = 115,
  anon_sym_dup12 = 116,
  anon_sym_dup13 = 117,
  anon_sym_dup14 = 118,
  anon_sym_dup15 = 119,
  anon_sym_dup16 = 120,
  anon_sym_swap1 = 121,
  anon_sym_swap2 = 122,
  anon_sym_swap3 = 123,
  anon_sym_swap4 = 124,
  anon_sym_swap5 = 125,
  anon_sym_swap6 = 126,
  anon_sym_swap7 = 127,
  anon_sym_swap8 = 128,
  anon_sym_swap9 = 129,
  anon_sym_swap10 = 130,
  anon_sym_swap11 = 131,
  anon_sym_swap12 = 132,
  anon_sym_swap13 = 133,
  anon_sym_swap14 = 134,
  anon_sym_swap15 = 135,
  anon_sym_swap16 = 136,
  anon_sym_shl = 137,
  anon_sym_shr = 138,
  anon_sym_sar = 139,
  anon_sym_log0 = 140,
  anon_sym_log1 = 141,
  anon_sym_log2 = 142,
  anon_sym_log3 = 143,
  anon_sym_log4 = 144,
  anon_sym_create = 145,
  anon_sym_call = 146,
  anon_sym_callcode = 147,
  anon_sym_return = 148,
  anon_sym_delegatecall = 149,
  anon_sym_create2 = 150,
  anon_sym_staticcall = 151,
  anon_sym_revert = 152,
  anon_sym_invalid = 153,
  anon_sym_selfdestruct = 154,
  aux_sym__label_token1 = 155,
  anon_sym_COLON = 156,
  sym_hex = 157,
  anon_sym_LBRACK = 158,
  anon_sym_RBRACK = 159,
  anon_sym_LPAREN_RPAREN = 160,
  anon_sym_LPAREN = 161,
  aux_sym_parameters_token1 = 162,
  anon_sym_RPAREN = 163,
  sym__single_parameter = 164,
  anon_sym_view = 165,
  anon_sym_pure = 166,
  anon_sym_payable = 167,
  anon_sym_nonpayable = 168,
  sym_comment = 169,
  sym_source_file = 170,
  sym_definition = 171,
  sym__declaration = 172,
  sym__def = 173,
  sym__def_params = 174,
  sym__def_const = 175,
  sym_macro_definition = 176,
  sym_function_definition = 177,
  sym_interface_definition = 178,
  sym_constant_definition = 179,
  sym_return_parameters = 180,
  sym_block = 181,
  sym__statement = 182,
  sym_opcode = 183,
  sym_label = 184,
  sym__label = 185,
  sym__destination = 186,
  sym_const_access = 187,
  sym_macro_call = 188,
  sym_const = 189,
  sym_identifier = 190,
  sym_parameters = 191,
  sym_parameter = 192,
  sym_visibility = 193,
  sym_constant = 194,
  aux_sym_source_file_repeat1 = 195,
  aux_sym_block_repeat1 = 196,
  aux_sym_parameters_repeat1 = 197,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = " = ",
  [sym_def_val] = "def_val",
  [anon_sym_macro] = " macro ",
  [anon_sym_fn] = " fn ",
  [anon_sym_function] = " function ",
  [anon_sym_constant] = " constant ",
  [anon_sym_returns] = " returns ",
  [sym_takes_parameters] = "takes_parameters",
  [sym_returns_parameters] = "returns_parameters",
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
  [sym__def] = "_def",
  [sym__def_params] = "_def_params",
  [sym__def_const] = "_def_const",
  [sym_macro_definition] = "macro_definition",
  [sym_function_definition] = "function_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_return_parameters] = "return_parameters",
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
  [anon_sym_function] = anon_sym_function,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_returns] = anon_sym_returns,
  [sym_takes_parameters] = sym_takes_parameters,
  [sym_returns_parameters] = sym_returns_parameters,
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
  [sym__def] = sym__def,
  [sym__def_params] = sym__def_params,
  [sym__def_const] = sym__def_const,
  [sym_macro_definition] = sym_macro_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_return_parameters] = sym_return_parameters,
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
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
  [sym__def] = {
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
  [sym_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_parameters] = {
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
      if (eof) ADVANCE(90);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(526);
      if (lookahead == ')') ADVANCE(529);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ':') ADVANCE(521);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == ']') ADVANCE(524);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'j') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(373);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(526);
      if (lookahead == ')') ADVANCE(529);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ':') ADVANCE(521);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == ']') ADVANCE(524);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'j') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(373);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(526);
      if (lookahead == ')') ADVANCE(529);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ':') ADVANCE(521);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == ']') ADVANCE(524);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'j') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(373);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(48);
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
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ':') ADVANCE(521);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'j') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(321);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(529);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(525);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(540);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(539);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'w') ADVANCE(531);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(89)
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_def_val);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_takes_parameters);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_returns_parameters);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'm') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'm') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_div);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_sdiv);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_smod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_addmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_mulmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_exp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_signextend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_lt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_gt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_slt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_iszero);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_and);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'i') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_sha3);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_keccak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_address);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_balance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_origin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_caller);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_callvalue);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_calldataload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_calldatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_calldatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_codesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_codecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_gasprice);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_extcodesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_extcodecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_returndatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_returndatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_blockhash);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_coinbase);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_difficulty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_gaslimit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_chainid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_selfbalance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_basefee);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_mload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_mstore);
      if (lookahead == '8') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_mstore8);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_sload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_sstore);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == 'd') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_jumpi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_getpc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_msize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_gas);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == 'p') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_jumpdest);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_push1);
      if (lookahead == '0') ADVANCE(172);
      if (lookahead == '1') ADVANCE(173);
      if (lookahead == '2') ADVANCE(174);
      if (lookahead == '3') ADVANCE(175);
      if (lookahead == '4') ADVANCE(176);
      if (lookahead == '5') ADVANCE(177);
      if (lookahead == '6') ADVANCE(178);
      if (lookahead == '7') ADVANCE(179);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == '9') ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_push2);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '1') ADVANCE(183);
      if (lookahead == '2') ADVANCE(184);
      if (lookahead == '3') ADVANCE(185);
      if (lookahead == '4') ADVANCE(186);
      if (lookahead == '5') ADVANCE(187);
      if (lookahead == '6') ADVANCE(188);
      if (lookahead == '7') ADVANCE(189);
      if (lookahead == '8') ADVANCE(190);
      if (lookahead == '9') ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_push3);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_push4);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_push5);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_push6);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_push7);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_push8);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_push9);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_push10);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_push11);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_push12);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_push13);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_push14);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_push15);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_push16);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_push17);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_push18);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_push19);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_push20);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_push21);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_push22);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_push23);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_push24);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_push25);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_push26);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_push27);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_push28);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_push29);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_push30);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_push31);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_push32);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_dup1);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '1') ADVANCE(205);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == '3') ADVANCE(207);
      if (lookahead == '4') ADVANCE(208);
      if (lookahead == '5') ADVANCE(209);
      if (lookahead == '6') ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_dup2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_dup3);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_dup4);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_dup5);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_dup6);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_dup7);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_dup8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_dup9);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_dup10);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_dup11);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_dup12);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_dup13);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_dup14);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_dup15);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_dup16);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_swap1);
      if (lookahead == '0') ADVANCE(220);
      if (lookahead == '1') ADVANCE(221);
      if (lookahead == '2') ADVANCE(222);
      if (lookahead == '3') ADVANCE(223);
      if (lookahead == '4') ADVANCE(224);
      if (lookahead == '5') ADVANCE(225);
      if (lookahead == '6') ADVANCE(226);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_swap2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_swap3);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_swap4);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_swap5);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_swap6);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_swap7);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_swap8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_swap9);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_swap10);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_swap11);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_swap12);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_swap13);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_swap14);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_swap15);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_swap16);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_shl);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_shr);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_sar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_log0);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_log1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_log2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_log3);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_log4);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '2') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'c') ADVANCE(437);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'v') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_callcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 'd') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_delegatecall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_create2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_staticcall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_revert);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_invalid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_selfdestruct);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead == '2') ADVANCE(232);
      if (lookahead == '3') ADVANCE(233);
      if (lookahead == '4') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '2') ADVANCE(196);
      if (lookahead == '3') ADVANCE(197);
      if (lookahead == '4') ADVANCE(198);
      if (lookahead == '5') ADVANCE(199);
      if (lookahead == '6') ADVANCE(200);
      if (lookahead == '7') ADVANCE(201);
      if (lookahead == '8') ADVANCE(202);
      if (lookahead == '9') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(163);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '3') ADVANCE(165);
      if (lookahead == '4') ADVANCE(166);
      if (lookahead == '5') ADVANCE(167);
      if (lookahead == '6') ADVANCE(168);
      if (lookahead == '7') ADVANCE(169);
      if (lookahead == '8') ADVANCE(170);
      if (lookahead == '9') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(211);
      if (lookahead == '2') ADVANCE(212);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '4') ADVANCE(214);
      if (lookahead == '5') ADVANCE(215);
      if (lookahead == '6') ADVANCE(216);
      if (lookahead == '7') ADVANCE(217);
      if (lookahead == '8') ADVANCE(218);
      if (lookahead == '9') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '3') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead == 'y') ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == 't') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 'u') ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'g') ADVANCE(480);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == 'm') ADVANCE(428);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == 'u') ADVANCE(282);
      if (lookahead == 'w') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead == 's') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(436);
      if (lookahead == 's') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(438);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == 's') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 's') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(362);
      if (lookahead == 'v') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == 't') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead == 'u') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 's') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(502);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead == 's') ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 't') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == 't') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 'u') ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == 't') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'u') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 't') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'q') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == 's') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == 'v') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'w') ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'x') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(520);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(520);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(520);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(520);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(520);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_parameters_token1);
      if (lookahead == ',') ADVANCE(527);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__single_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_view);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_payable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_nonpayable);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_nonpayable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(540);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 89},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 528},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 528},
  [51] = {.lex_state = 89},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_def_val] = ACTIONS(1),
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
    [aux_sym__label_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(56),
    [sym_definition] = STATE(12),
    [sym_macro_definition] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_interface_definition] = STATE(29),
    [sym_constant_definition] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_def_val] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym_label] = STATE(4),
    [sym__label] = STATE(9),
    [sym__destination] = STATE(9),
    [sym_const_access] = STATE(4),
    [sym_macro_call] = STATE(4),
    [sym_identifier] = STATE(49),
    [aux_sym_block_repeat1] = STATE(4),
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
    [anon_sym_sha3] = ACTIONS(13),
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
    [anon_sym_mstore8] = ACTIONS(13),
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
    [anon_sym_push4] = ACTIONS(13),
    [anon_sym_push5] = ACTIONS(13),
    [anon_sym_push6] = ACTIONS(13),
    [anon_sym_push7] = ACTIONS(13),
    [anon_sym_push8] = ACTIONS(13),
    [anon_sym_push9] = ACTIONS(13),
    [anon_sym_push10] = ACTIONS(13),
    [anon_sym_push11] = ACTIONS(13),
    [anon_sym_push12] = ACTIONS(13),
    [anon_sym_push13] = ACTIONS(13),
    [anon_sym_push14] = ACTIONS(13),
    [anon_sym_push15] = ACTIONS(13),
    [anon_sym_push16] = ACTIONS(13),
    [anon_sym_push17] = ACTIONS(13),
    [anon_sym_push18] = ACTIONS(13),
    [anon_sym_push19] = ACTIONS(13),
    [anon_sym_push20] = ACTIONS(13),
    [anon_sym_push21] = ACTIONS(13),
    [anon_sym_push22] = ACTIONS(13),
    [anon_sym_push23] = ACTIONS(13),
    [anon_sym_push24] = ACTIONS(13),
    [anon_sym_push25] = ACTIONS(13),
    [anon_sym_push26] = ACTIONS(13),
    [anon_sym_push27] = ACTIONS(13),
    [anon_sym_push28] = ACTIONS(13),
    [anon_sym_push29] = ACTIONS(13),
    [anon_sym_push30] = ACTIONS(13),
    [anon_sym_push31] = ACTIONS(13),
    [anon_sym_push32] = ACTIONS(13),
    [anon_sym_dup1] = ACTIONS(11),
    [anon_sym_dup2] = ACTIONS(13),
    [anon_sym_dup3] = ACTIONS(13),
    [anon_sym_dup4] = ACTIONS(13),
    [anon_sym_dup5] = ACTIONS(13),
    [anon_sym_dup6] = ACTIONS(13),
    [anon_sym_dup7] = ACTIONS(13),
    [anon_sym_dup8] = ACTIONS(13),
    [anon_sym_dup9] = ACTIONS(13),
    [anon_sym_dup10] = ACTIONS(13),
    [anon_sym_dup11] = ACTIONS(13),
    [anon_sym_dup12] = ACTIONS(13),
    [anon_sym_dup13] = ACTIONS(13),
    [anon_sym_dup14] = ACTIONS(13),
    [anon_sym_dup15] = ACTIONS(13),
    [anon_sym_dup16] = ACTIONS(13),
    [anon_sym_swap1] = ACTIONS(11),
    [anon_sym_swap2] = ACTIONS(13),
    [anon_sym_swap3] = ACTIONS(13),
    [anon_sym_swap4] = ACTIONS(13),
    [anon_sym_swap5] = ACTIONS(13),
    [anon_sym_swap6] = ACTIONS(13),
    [anon_sym_swap7] = ACTIONS(13),
    [anon_sym_swap8] = ACTIONS(13),
    [anon_sym_swap9] = ACTIONS(13),
    [anon_sym_swap10] = ACTIONS(13),
    [anon_sym_swap11] = ACTIONS(13),
    [anon_sym_swap12] = ACTIONS(13),
    [anon_sym_swap13] = ACTIONS(13),
    [anon_sym_swap14] = ACTIONS(13),
    [anon_sym_swap15] = ACTIONS(13),
    [anon_sym_swap16] = ACTIONS(13),
    [anon_sym_shl] = ACTIONS(11),
    [anon_sym_shr] = ACTIONS(11),
    [anon_sym_sar] = ACTIONS(11),
    [anon_sym_log0] = ACTIONS(13),
    [anon_sym_log1] = ACTIONS(13),
    [anon_sym_log2] = ACTIONS(13),
    [anon_sym_log3] = ACTIONS(13),
    [anon_sym_log4] = ACTIONS(13),
    [anon_sym_create] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_callcode] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_delegatecall] = ACTIONS(11),
    [anon_sym_create2] = ACTIONS(13),
    [anon_sym_staticcall] = ACTIONS(11),
    [anon_sym_revert] = ACTIONS(11),
    [anon_sym_invalid] = ACTIONS(11),
    [anon_sym_selfdestruct] = ACTIONS(11),
    [aux_sym__label_token1] = ACTIONS(15),
    [sym_hex] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
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
    [sym_identifier] = STATE(49),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_RBRACE] = ACTIONS(21),
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
    [anon_sym_sha3] = ACTIONS(13),
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
    [anon_sym_mstore8] = ACTIONS(13),
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
    [anon_sym_push4] = ACTIONS(13),
    [anon_sym_push5] = ACTIONS(13),
    [anon_sym_push6] = ACTIONS(13),
    [anon_sym_push7] = ACTIONS(13),
    [anon_sym_push8] = ACTIONS(13),
    [anon_sym_push9] = ACTIONS(13),
    [anon_sym_push10] = ACTIONS(13),
    [anon_sym_push11] = ACTIONS(13),
    [anon_sym_push12] = ACTIONS(13),
    [anon_sym_push13] = ACTIONS(13),
    [anon_sym_push14] = ACTIONS(13),
    [anon_sym_push15] = ACTIONS(13),
    [anon_sym_push16] = ACTIONS(13),
    [anon_sym_push17] = ACTIONS(13),
    [anon_sym_push18] = ACTIONS(13),
    [anon_sym_push19] = ACTIONS(13),
    [anon_sym_push20] = ACTIONS(13),
    [anon_sym_push21] = ACTIONS(13),
    [anon_sym_push22] = ACTIONS(13),
    [anon_sym_push23] = ACTIONS(13),
    [anon_sym_push24] = ACTIONS(13),
    [anon_sym_push25] = ACTIONS(13),
    [anon_sym_push26] = ACTIONS(13),
    [anon_sym_push27] = ACTIONS(13),
    [anon_sym_push28] = ACTIONS(13),
    [anon_sym_push29] = ACTIONS(13),
    [anon_sym_push30] = ACTIONS(13),
    [anon_sym_push31] = ACTIONS(13),
    [anon_sym_push32] = ACTIONS(13),
    [anon_sym_dup1] = ACTIONS(11),
    [anon_sym_dup2] = ACTIONS(13),
    [anon_sym_dup3] = ACTIONS(13),
    [anon_sym_dup4] = ACTIONS(13),
    [anon_sym_dup5] = ACTIONS(13),
    [anon_sym_dup6] = ACTIONS(13),
    [anon_sym_dup7] = ACTIONS(13),
    [anon_sym_dup8] = ACTIONS(13),
    [anon_sym_dup9] = ACTIONS(13),
    [anon_sym_dup10] = ACTIONS(13),
    [anon_sym_dup11] = ACTIONS(13),
    [anon_sym_dup12] = ACTIONS(13),
    [anon_sym_dup13] = ACTIONS(13),
    [anon_sym_dup14] = ACTIONS(13),
    [anon_sym_dup15] = ACTIONS(13),
    [anon_sym_dup16] = ACTIONS(13),
    [anon_sym_swap1] = ACTIONS(11),
    [anon_sym_swap2] = ACTIONS(13),
    [anon_sym_swap3] = ACTIONS(13),
    [anon_sym_swap4] = ACTIONS(13),
    [anon_sym_swap5] = ACTIONS(13),
    [anon_sym_swap6] = ACTIONS(13),
    [anon_sym_swap7] = ACTIONS(13),
    [anon_sym_swap8] = ACTIONS(13),
    [anon_sym_swap9] = ACTIONS(13),
    [anon_sym_swap10] = ACTIONS(13),
    [anon_sym_swap11] = ACTIONS(13),
    [anon_sym_swap12] = ACTIONS(13),
    [anon_sym_swap13] = ACTIONS(13),
    [anon_sym_swap14] = ACTIONS(13),
    [anon_sym_swap15] = ACTIONS(13),
    [anon_sym_swap16] = ACTIONS(13),
    [anon_sym_shl] = ACTIONS(11),
    [anon_sym_shr] = ACTIONS(11),
    [anon_sym_sar] = ACTIONS(11),
    [anon_sym_log0] = ACTIONS(13),
    [anon_sym_log1] = ACTIONS(13),
    [anon_sym_log2] = ACTIONS(13),
    [anon_sym_log3] = ACTIONS(13),
    [anon_sym_log4] = ACTIONS(13),
    [anon_sym_create] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_callcode] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_delegatecall] = ACTIONS(11),
    [anon_sym_create2] = ACTIONS(13),
    [anon_sym_staticcall] = ACTIONS(11),
    [anon_sym_revert] = ACTIONS(11),
    [anon_sym_invalid] = ACTIONS(11),
    [anon_sym_selfdestruct] = ACTIONS(11),
    [aux_sym__label_token1] = ACTIONS(15),
    [sym_hex] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym_label] = STATE(4),
    [sym__label] = STATE(9),
    [sym__destination] = STATE(9),
    [sym_const_access] = STATE(4),
    [sym_macro_call] = STATE(4),
    [sym_identifier] = STATE(49),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_stop] = ACTIONS(27),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_sdiv] = ACTIONS(27),
    [anon_sym_mod] = ACTIONS(27),
    [anon_sym_smod] = ACTIONS(27),
    [anon_sym_addmod] = ACTIONS(27),
    [anon_sym_mulmod] = ACTIONS(27),
    [anon_sym_exp] = ACTIONS(27),
    [anon_sym_signextend] = ACTIONS(27),
    [anon_sym_lt] = ACTIONS(27),
    [anon_sym_gt] = ACTIONS(27),
    [anon_sym_slt] = ACTIONS(27),
    [anon_sym_sgt] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(27),
    [anon_sym_iszero] = ACTIONS(27),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(27),
    [anon_sym_xor] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(27),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_sha3] = ACTIONS(30),
    [anon_sym_keccak] = ACTIONS(27),
    [anon_sym_address] = ACTIONS(27),
    [anon_sym_balance] = ACTIONS(27),
    [anon_sym_origin] = ACTIONS(27),
    [anon_sym_caller] = ACTIONS(27),
    [anon_sym_callvalue] = ACTIONS(27),
    [anon_sym_calldataload] = ACTIONS(27),
    [anon_sym_calldatasize] = ACTIONS(27),
    [anon_sym_calldatacopy] = ACTIONS(27),
    [anon_sym_codesize] = ACTIONS(27),
    [anon_sym_codecopy] = ACTIONS(27),
    [anon_sym_gasprice] = ACTIONS(27),
    [anon_sym_extcodesize] = ACTIONS(27),
    [anon_sym_extcodecopy] = ACTIONS(27),
    [anon_sym_returndatasize] = ACTIONS(27),
    [anon_sym_returndatacopy] = ACTIONS(27),
    [anon_sym_blockhash] = ACTIONS(27),
    [anon_sym_coinbase] = ACTIONS(27),
    [anon_sym_timestamp] = ACTIONS(27),
    [anon_sym_number] = ACTIONS(27),
    [anon_sym_difficulty] = ACTIONS(27),
    [anon_sym_gaslimit] = ACTIONS(27),
    [anon_sym_chainid] = ACTIONS(27),
    [anon_sym_selfbalance] = ACTIONS(27),
    [anon_sym_basefee] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_mload] = ACTIONS(27),
    [anon_sym_mstore] = ACTIONS(27),
    [anon_sym_mstore8] = ACTIONS(30),
    [anon_sym_sload] = ACTIONS(27),
    [anon_sym_sstore] = ACTIONS(27),
    [anon_sym_jump] = ACTIONS(27),
    [anon_sym_jumpi] = ACTIONS(27),
    [anon_sym_getpc] = ACTIONS(27),
    [anon_sym_msize] = ACTIONS(27),
    [anon_sym_gas] = ACTIONS(27),
    [anon_sym_jumpdest] = ACTIONS(27),
    [anon_sym_push1] = ACTIONS(27),
    [anon_sym_push2] = ACTIONS(27),
    [anon_sym_push3] = ACTIONS(27),
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
    [anon_sym_dup1] = ACTIONS(27),
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
    [anon_sym_swap1] = ACTIONS(27),
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
    [anon_sym_shl] = ACTIONS(27),
    [anon_sym_shr] = ACTIONS(27),
    [anon_sym_sar] = ACTIONS(27),
    [anon_sym_log0] = ACTIONS(30),
    [anon_sym_log1] = ACTIONS(30),
    [anon_sym_log2] = ACTIONS(30),
    [anon_sym_log3] = ACTIONS(30),
    [anon_sym_log4] = ACTIONS(30),
    [anon_sym_create] = ACTIONS(27),
    [anon_sym_call] = ACTIONS(27),
    [anon_sym_callcode] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_delegatecall] = ACTIONS(27),
    [anon_sym_create2] = ACTIONS(30),
    [anon_sym_staticcall] = ACTIONS(27),
    [anon_sym_revert] = ACTIONS(27),
    [anon_sym_invalid] = ACTIONS(27),
    [anon_sym_selfdestruct] = ACTIONS(27),
    [aux_sym__label_token1] = ACTIONS(33),
    [sym_hex] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(39),
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
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym_def_val,
    STATE(11), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(29), 4,
      sym_macro_definition,
      sym_function_definition,
      sym_interface_definition,
      sym_constant_definition,
  [20] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_def_val,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(29), 4,
      sym_macro_definition,
      sym_function_definition,
      sym_interface_definition,
      sym_constant_definition,
  [40] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_def_val,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [53] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_def_val,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [66] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym_visibility,
    ACTIONS(81), 4,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [79] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 5,
      anon_sym_EQ,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [90] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym__label_token1,
    ACTIONS(87), 1,
      sym_hex,
    STATE(33), 1,
      sym_const,
    STATE(35), 1,
      sym_constant,
    STATE(54), 1,
      sym_identifier,
  [109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym__label_token1,
    STATE(38), 1,
      sym_identifier,
    STATE(41), 1,
      sym__def,
    STATE(55), 1,
      sym__declaration,
  [125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym__label_token1,
    STATE(15), 1,
      sym__declaration,
    STATE(38), 1,
      sym_identifier,
    STATE(42), 1,
      sym__def_params,
  [141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_macro,
    ACTIONS(93), 1,
      anon_sym_fn,
    ACTIONS(95), 1,
      anon_sym_function,
    ACTIONS(97), 1,
      anon_sym_constant,
  [157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym__label_token1,
    STATE(34), 1,
      sym__def,
    STATE(38), 1,
      sym_identifier,
    STATE(55), 1,
      sym__declaration,
  [173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      sym__single_parameter,
    STATE(24), 1,
      aux_sym_parameters_repeat1,
    STATE(48), 1,
      sym_parameter,
  [189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym__single_parameter,
    STATE(23), 1,
      aux_sym_parameters_repeat1,
    STATE(48), 1,
      sym_parameter,
  [205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym__single_parameter,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_parameters_repeat1,
    STATE(48), 1,
      sym_parameter,
  [221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym__label_token1,
    STATE(45), 1,
      sym__def_const,
    STATE(47), 1,
      sym_identifier,
  [234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym__label_token1,
    STATE(52), 1,
      sym_identifier,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameters,
  [287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      sym__single_parameter,
  [337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_parameters,
  [347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_returns,
    STATE(32), 1,
      sym_return_parameters,
  [357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_def_val,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_takes_parameters,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_EQ,
  [419] = 2,
    ACTIONS(146), 1,
      aux_sym_parameters_token1,
    ACTIONS(148), 1,
      sym_comment,
  [426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LPAREN_RPAREN,
  [433] = 2,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(152), 1,
      aux_sym_parameters_token1,
  [440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_returns,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
  [454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_returns_parameters,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LPAREN_RPAREN,
  [468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_EQ,
  [475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LPAREN_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 20,
  [SMALL_STATE(13)] = 40,
  [SMALL_STATE(14)] = 53,
  [SMALL_STATE(15)] = 66,
  [SMALL_STATE(16)] = 79,
  [SMALL_STATE(17)] = 90,
  [SMALL_STATE(18)] = 109,
  [SMALL_STATE(19)] = 125,
  [SMALL_STATE(20)] = 141,
  [SMALL_STATE(21)] = 157,
  [SMALL_STATE(22)] = 173,
  [SMALL_STATE(23)] = 189,
  [SMALL_STATE(24)] = 205,
  [SMALL_STATE(25)] = 221,
  [SMALL_STATE(26)] = 234,
  [SMALL_STATE(27)] = 243,
  [SMALL_STATE(28)] = 251,
  [SMALL_STATE(29)] = 261,
  [SMALL_STATE(30)] = 269,
  [SMALL_STATE(31)] = 277,
  [SMALL_STATE(32)] = 287,
  [SMALL_STATE(33)] = 295,
  [SMALL_STATE(34)] = 303,
  [SMALL_STATE(35)] = 311,
  [SMALL_STATE(36)] = 319,
  [SMALL_STATE(37)] = 329,
  [SMALL_STATE(38)] = 337,
  [SMALL_STATE(39)] = 347,
  [SMALL_STATE(40)] = 357,
  [SMALL_STATE(41)] = 365,
  [SMALL_STATE(42)] = 373,
  [SMALL_STATE(43)] = 381,
  [SMALL_STATE(44)] = 389,
  [SMALL_STATE(45)] = 397,
  [SMALL_STATE(46)] = 405,
  [SMALL_STATE(47)] = 412,
  [SMALL_STATE(48)] = 419,
  [SMALL_STATE(49)] = 426,
  [SMALL_STATE(50)] = 433,
  [SMALL_STATE(51)] = 440,
  [SMALL_STATE(52)] = 447,
  [SMALL_STATE(53)] = 454,
  [SMALL_STATE(54)] = 461,
  [SMALL_STATE(55)] = 468,
  [SMALL_STATE(56)] = 475,
  [SMALL_STATE(57)] = 482,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_call, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_call, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__destination, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__destination, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_access, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_access, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_params, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_const, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_parameters, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
