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
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 167
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
  anon_sym_POUNDdefineconstant = 6,
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
  sym_parameters = 161,
  anon_sym_view = 162,
  anon_sym_pure = 163,
  anon_sym_payable = 164,
  anon_sym_nonpayable = 165,
  sym_comment = 166,
  sym_source_file = 167,
  sym_definition = 168,
  sym__declaration = 169,
  sym__def = 170,
  sym__def_params = 171,
  sym__def_const = 172,
  sym_macro_definition = 173,
  sym_function_definition = 174,
  sym_interface_definition = 175,
  sym_constant_definition = 176,
  sym_return_parameters = 177,
  sym_block = 178,
  sym__statement = 179,
  sym_opcode = 180,
  sym_label = 181,
  sym__label = 182,
  sym__destination = 183,
  sym_const_access = 184,
  sym_macro_call = 185,
  sym_const = 186,
  sym_identifier = 187,
  sym_visibility = 188,
  sym_constant = 189,
  aux_sym_source_file_repeat1 = 190,
  aux_sym_block_repeat1 = 191,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = " = ",
  [sym_def_val] = "def_val",
  [anon_sym_POUNDdefinemacro] = "#define macro ",
  [anon_sym_POUNDdefinefn] = "#define fn ",
  [anon_sym_POUNDdefinefunction] = "#define function ",
  [anon_sym_POUNDdefineconstant] = "#define constant ",
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
  [sym_parameters] = "parameters",
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
  [sym_visibility] = "visibility",
  [sym_constant] = "constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_def_val] = sym_def_val,
  [anon_sym_POUNDdefinemacro] = anon_sym_POUNDdefinemacro,
  [anon_sym_POUNDdefinefn] = anon_sym_POUNDdefinefn,
  [anon_sym_POUNDdefinefunction] = anon_sym_POUNDdefinefunction,
  [anon_sym_POUNDdefineconstant] = anon_sym_POUNDdefineconstant,
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
  [sym_parameters] = sym_parameters,
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
  [sym_visibility] = sym_visibility,
  [sym_constant] = sym_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_POUNDdefineconstant] = {
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
  [sym_parameters] = {
    .visible = true,
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
      if (eof) ADVANCE(98);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '[') ADVANCE(531);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'g') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'j') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == 'x') ADVANCE(435);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '[') ADVANCE(531);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'g') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'j') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == 'x') ADVANCE(435);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '[') ADVANCE(531);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'g') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'j') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == 'x') ADVANCE(435);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(533);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(544);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(543);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 90:
      if (lookahead == 'w') ADVANCE(535);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '[') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'g') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'j') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == 'x') ADVANCE(435);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_def_val);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_POUNDdefinemacro);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_POUNDdefinefn);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_POUNDdefinefunction);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_POUNDdefineconstant);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_takes_parameters);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_returns_parameters);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_stop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'm') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'm') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_div);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_sdiv);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_smod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_addmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_mulmod);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_exp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_signextend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_lt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_gt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_slt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_iszero);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_and);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'i') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_sha3);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_keccak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_address);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_balance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_origin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_caller);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_callvalue);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_calldataload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_calldatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_calldatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_codesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_codecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_gasprice);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_extcodesize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_extcodecopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_returndatasize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_returndatacopy);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_blockhash);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_coinbase);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_difficulty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_gaslimit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_chainid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_selfbalance);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_basefee);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_mload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_mstore);
      if (lookahead == '8') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_mstore8);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_sload);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_sstore);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_jumpi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_getpc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_msize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_gas);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 'p') ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_jumpdest);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_push1);
      if (lookahead == '0') ADVANCE(180);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead == '2') ADVANCE(182);
      if (lookahead == '3') ADVANCE(183);
      if (lookahead == '4') ADVANCE(184);
      if (lookahead == '5') ADVANCE(185);
      if (lookahead == '6') ADVANCE(186);
      if (lookahead == '7') ADVANCE(187);
      if (lookahead == '8') ADVANCE(188);
      if (lookahead == '9') ADVANCE(189);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_push2);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == '1') ADVANCE(191);
      if (lookahead == '2') ADVANCE(192);
      if (lookahead == '3') ADVANCE(193);
      if (lookahead == '4') ADVANCE(194);
      if (lookahead == '5') ADVANCE(195);
      if (lookahead == '6') ADVANCE(196);
      if (lookahead == '7') ADVANCE(197);
      if (lookahead == '8') ADVANCE(198);
      if (lookahead == '9') ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_push3);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == '2') ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_push4);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_push5);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_push6);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_push7);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_push8);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_push9);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_push10);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_push11);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_push12);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_push13);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_push14);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_push15);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_push16);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_push17);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_push18);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_push19);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_push20);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_push21);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_push22);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_push23);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_push24);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_push25);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_push26);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_push27);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_push28);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_push29);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_push30);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_push31);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_push32);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_dup1);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == '1') ADVANCE(213);
      if (lookahead == '2') ADVANCE(214);
      if (lookahead == '3') ADVANCE(215);
      if (lookahead == '4') ADVANCE(216);
      if (lookahead == '5') ADVANCE(217);
      if (lookahead == '6') ADVANCE(218);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_dup2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_dup3);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_dup4);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_dup5);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_dup6);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_dup7);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_dup8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_dup9);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_dup10);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_dup11);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_dup12);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_dup13);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_dup14);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_dup15);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_dup16);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_swap1);
      if (lookahead == '0') ADVANCE(228);
      if (lookahead == '1') ADVANCE(229);
      if (lookahead == '2') ADVANCE(230);
      if (lookahead == '3') ADVANCE(231);
      if (lookahead == '4') ADVANCE(232);
      if (lookahead == '5') ADVANCE(233);
      if (lookahead == '6') ADVANCE(234);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_swap2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_swap3);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_swap4);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_swap5);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_swap6);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_swap7);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_swap8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_swap9);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_swap10);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_swap11);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_swap12);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_swap13);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_swap14);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_swap15);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_swap16);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_shl);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_shr);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_sar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_log0);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_log1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_log2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_log3);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_log4);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '2') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead == 'v') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_callcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == 'd') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_delegatecall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_create2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_staticcall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_revert);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_invalid);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_selfdestruct);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '0') ADVANCE(238);
      if (lookahead == '1') ADVANCE(239);
      if (lookahead == '2') ADVANCE(240);
      if (lookahead == '3') ADVANCE(241);
      if (lookahead == '4') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == '3') ADVANCE(205);
      if (lookahead == '4') ADVANCE(206);
      if (lookahead == '5') ADVANCE(207);
      if (lookahead == '6') ADVANCE(208);
      if (lookahead == '7') ADVANCE(209);
      if (lookahead == '8') ADVANCE(210);
      if (lookahead == '9') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(171);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '3') ADVANCE(173);
      if (lookahead == '4') ADVANCE(174);
      if (lookahead == '5') ADVANCE(175);
      if (lookahead == '6') ADVANCE(176);
      if (lookahead == '7') ADVANCE(177);
      if (lookahead == '8') ADVANCE(178);
      if (lookahead == '9') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(220);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '4') ADVANCE(222);
      if (lookahead == '5') ADVANCE(223);
      if (lookahead == '6') ADVANCE(224);
      if (lookahead == '7') ADVANCE(225);
      if (lookahead == '8') ADVANCE(226);
      if (lookahead == '9') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == '3') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == 't') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'u') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'g') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(436);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'w') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'o') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(502);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'a') ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == 'd') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead == 's') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 's') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == 's') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 's') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'c') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'd') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'e') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'v') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'f') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'g') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'h') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 't') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'i') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'k') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 's') ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'l') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'm') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead == 's') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead == 't') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'n') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 't') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'u') ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 'u') ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == 't') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'p') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'q') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == 's') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'r') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 's') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 't') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'u') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'v') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'w') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'x') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'y') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(528);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(528);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(528);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(528);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(528);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (lookahead == 'z') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__label_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_parameters);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_view);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_view);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_payable);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_payable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_nonpayable);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_nonpayable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(544);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 97},
  [2] = {.lex_state = 97},
  [3] = {.lex_state = 97},
  [4] = {.lex_state = 97},
  [5] = {.lex_state = 97},
  [6] = {.lex_state = 97},
  [7] = {.lex_state = 97},
  [8] = {.lex_state = 97},
  [9] = {.lex_state = 97},
  [10] = {.lex_state = 97},
  [11] = {.lex_state = 97},
  [12] = {.lex_state = 97},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 97},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 97},
  [17] = {.lex_state = 97},
  [18] = {.lex_state = 97},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 97},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 97},
  [23] = {.lex_state = 97},
  [24] = {.lex_state = 97},
  [25] = {.lex_state = 97},
  [26] = {.lex_state = 97},
  [27] = {.lex_state = 97},
  [28] = {.lex_state = 97},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 97},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 97},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 97},
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
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_parameters] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_payable] = ACTIONS(1),
    [anon_sym_nonpayable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_definition] = STATE(12),
    [sym_macro_definition] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym_interface_definition] = STATE(23),
    [sym_constant_definition] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDdefinemacro] = ACTIONS(7),
    [anon_sym_POUNDdefinefn] = ACTIONS(9),
    [anon_sym_POUNDdefinefunction] = ACTIONS(11),
    [anon_sym_POUNDdefineconstant] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_opcode] = STATE(3),
    [sym_label] = STATE(3),
    [sym__label] = STATE(7),
    [sym__destination] = STATE(7),
    [sym_const_access] = STATE(3),
    [sym_macro_call] = STATE(3),
    [sym_identifier] = STATE(40),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_stop] = ACTIONS(17),
    [anon_sym_add] = ACTIONS(17),
    [anon_sym_mul] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_div] = ACTIONS(17),
    [anon_sym_sdiv] = ACTIONS(17),
    [anon_sym_mod] = ACTIONS(17),
    [anon_sym_smod] = ACTIONS(17),
    [anon_sym_addmod] = ACTIONS(17),
    [anon_sym_mulmod] = ACTIONS(17),
    [anon_sym_exp] = ACTIONS(17),
    [anon_sym_signextend] = ACTIONS(17),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_slt] = ACTIONS(17),
    [anon_sym_sgt] = ACTIONS(17),
    [anon_sym_eq] = ACTIONS(17),
    [anon_sym_iszero] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_xor] = ACTIONS(17),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_byte] = ACTIONS(17),
    [anon_sym_sha3] = ACTIONS(19),
    [anon_sym_keccak] = ACTIONS(17),
    [anon_sym_address] = ACTIONS(17),
    [anon_sym_balance] = ACTIONS(17),
    [anon_sym_origin] = ACTIONS(17),
    [anon_sym_caller] = ACTIONS(17),
    [anon_sym_callvalue] = ACTIONS(17),
    [anon_sym_calldataload] = ACTIONS(17),
    [anon_sym_calldatasize] = ACTIONS(17),
    [anon_sym_calldatacopy] = ACTIONS(17),
    [anon_sym_codesize] = ACTIONS(17),
    [anon_sym_codecopy] = ACTIONS(17),
    [anon_sym_gasprice] = ACTIONS(17),
    [anon_sym_extcodesize] = ACTIONS(17),
    [anon_sym_extcodecopy] = ACTIONS(17),
    [anon_sym_returndatasize] = ACTIONS(17),
    [anon_sym_returndatacopy] = ACTIONS(17),
    [anon_sym_blockhash] = ACTIONS(17),
    [anon_sym_coinbase] = ACTIONS(17),
    [anon_sym_timestamp] = ACTIONS(17),
    [anon_sym_number] = ACTIONS(17),
    [anon_sym_difficulty] = ACTIONS(17),
    [anon_sym_gaslimit] = ACTIONS(17),
    [anon_sym_chainid] = ACTIONS(17),
    [anon_sym_selfbalance] = ACTIONS(17),
    [anon_sym_basefee] = ACTIONS(17),
    [anon_sym_pop] = ACTIONS(17),
    [anon_sym_mload] = ACTIONS(17),
    [anon_sym_mstore] = ACTIONS(17),
    [anon_sym_mstore8] = ACTIONS(19),
    [anon_sym_sload] = ACTIONS(17),
    [anon_sym_sstore] = ACTIONS(17),
    [anon_sym_jump] = ACTIONS(17),
    [anon_sym_jumpi] = ACTIONS(17),
    [anon_sym_getpc] = ACTIONS(17),
    [anon_sym_msize] = ACTIONS(17),
    [anon_sym_gas] = ACTIONS(17),
    [anon_sym_jumpdest] = ACTIONS(17),
    [anon_sym_push1] = ACTIONS(17),
    [anon_sym_push2] = ACTIONS(17),
    [anon_sym_push3] = ACTIONS(17),
    [anon_sym_push4] = ACTIONS(19),
    [anon_sym_push5] = ACTIONS(19),
    [anon_sym_push6] = ACTIONS(19),
    [anon_sym_push7] = ACTIONS(19),
    [anon_sym_push8] = ACTIONS(19),
    [anon_sym_push9] = ACTIONS(19),
    [anon_sym_push10] = ACTIONS(19),
    [anon_sym_push11] = ACTIONS(19),
    [anon_sym_push12] = ACTIONS(19),
    [anon_sym_push13] = ACTIONS(19),
    [anon_sym_push14] = ACTIONS(19),
    [anon_sym_push15] = ACTIONS(19),
    [anon_sym_push16] = ACTIONS(19),
    [anon_sym_push17] = ACTIONS(19),
    [anon_sym_push18] = ACTIONS(19),
    [anon_sym_push19] = ACTIONS(19),
    [anon_sym_push20] = ACTIONS(19),
    [anon_sym_push21] = ACTIONS(19),
    [anon_sym_push22] = ACTIONS(19),
    [anon_sym_push23] = ACTIONS(19),
    [anon_sym_push24] = ACTIONS(19),
    [anon_sym_push25] = ACTIONS(19),
    [anon_sym_push26] = ACTIONS(19),
    [anon_sym_push27] = ACTIONS(19),
    [anon_sym_push28] = ACTIONS(19),
    [anon_sym_push29] = ACTIONS(19),
    [anon_sym_push30] = ACTIONS(19),
    [anon_sym_push31] = ACTIONS(19),
    [anon_sym_push32] = ACTIONS(19),
    [anon_sym_dup1] = ACTIONS(17),
    [anon_sym_dup2] = ACTIONS(19),
    [anon_sym_dup3] = ACTIONS(19),
    [anon_sym_dup4] = ACTIONS(19),
    [anon_sym_dup5] = ACTIONS(19),
    [anon_sym_dup6] = ACTIONS(19),
    [anon_sym_dup7] = ACTIONS(19),
    [anon_sym_dup8] = ACTIONS(19),
    [anon_sym_dup9] = ACTIONS(19),
    [anon_sym_dup10] = ACTIONS(19),
    [anon_sym_dup11] = ACTIONS(19),
    [anon_sym_dup12] = ACTIONS(19),
    [anon_sym_dup13] = ACTIONS(19),
    [anon_sym_dup14] = ACTIONS(19),
    [anon_sym_dup15] = ACTIONS(19),
    [anon_sym_dup16] = ACTIONS(19),
    [anon_sym_swap1] = ACTIONS(17),
    [anon_sym_swap2] = ACTIONS(19),
    [anon_sym_swap3] = ACTIONS(19),
    [anon_sym_swap4] = ACTIONS(19),
    [anon_sym_swap5] = ACTIONS(19),
    [anon_sym_swap6] = ACTIONS(19),
    [anon_sym_swap7] = ACTIONS(19),
    [anon_sym_swap8] = ACTIONS(19),
    [anon_sym_swap9] = ACTIONS(19),
    [anon_sym_swap10] = ACTIONS(19),
    [anon_sym_swap11] = ACTIONS(19),
    [anon_sym_swap12] = ACTIONS(19),
    [anon_sym_swap13] = ACTIONS(19),
    [anon_sym_swap14] = ACTIONS(19),
    [anon_sym_swap15] = ACTIONS(19),
    [anon_sym_swap16] = ACTIONS(19),
    [anon_sym_shl] = ACTIONS(17),
    [anon_sym_shr] = ACTIONS(17),
    [anon_sym_sar] = ACTIONS(17),
    [anon_sym_log0] = ACTIONS(19),
    [anon_sym_log1] = ACTIONS(19),
    [anon_sym_log2] = ACTIONS(19),
    [anon_sym_log3] = ACTIONS(19),
    [anon_sym_log4] = ACTIONS(19),
    [anon_sym_create] = ACTIONS(17),
    [anon_sym_call] = ACTIONS(17),
    [anon_sym_callcode] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_delegatecall] = ACTIONS(17),
    [anon_sym_create2] = ACTIONS(19),
    [anon_sym_staticcall] = ACTIONS(17),
    [anon_sym_revert] = ACTIONS(17),
    [anon_sym_invalid] = ACTIONS(17),
    [anon_sym_selfdestruct] = ACTIONS(17),
    [aux_sym__label_token1] = ACTIONS(21),
    [sym_hex] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym_label] = STATE(4),
    [sym__label] = STATE(7),
    [sym__destination] = STATE(7),
    [sym_const_access] = STATE(4),
    [sym_macro_call] = STATE(4),
    [sym_identifier] = STATE(40),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_stop] = ACTIONS(17),
    [anon_sym_add] = ACTIONS(17),
    [anon_sym_mul] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_div] = ACTIONS(17),
    [anon_sym_sdiv] = ACTIONS(17),
    [anon_sym_mod] = ACTIONS(17),
    [anon_sym_smod] = ACTIONS(17),
    [anon_sym_addmod] = ACTIONS(17),
    [anon_sym_mulmod] = ACTIONS(17),
    [anon_sym_exp] = ACTIONS(17),
    [anon_sym_signextend] = ACTIONS(17),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_slt] = ACTIONS(17),
    [anon_sym_sgt] = ACTIONS(17),
    [anon_sym_eq] = ACTIONS(17),
    [anon_sym_iszero] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_xor] = ACTIONS(17),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_byte] = ACTIONS(17),
    [anon_sym_sha3] = ACTIONS(19),
    [anon_sym_keccak] = ACTIONS(17),
    [anon_sym_address] = ACTIONS(17),
    [anon_sym_balance] = ACTIONS(17),
    [anon_sym_origin] = ACTIONS(17),
    [anon_sym_caller] = ACTIONS(17),
    [anon_sym_callvalue] = ACTIONS(17),
    [anon_sym_calldataload] = ACTIONS(17),
    [anon_sym_calldatasize] = ACTIONS(17),
    [anon_sym_calldatacopy] = ACTIONS(17),
    [anon_sym_codesize] = ACTIONS(17),
    [anon_sym_codecopy] = ACTIONS(17),
    [anon_sym_gasprice] = ACTIONS(17),
    [anon_sym_extcodesize] = ACTIONS(17),
    [anon_sym_extcodecopy] = ACTIONS(17),
    [anon_sym_returndatasize] = ACTIONS(17),
    [anon_sym_returndatacopy] = ACTIONS(17),
    [anon_sym_blockhash] = ACTIONS(17),
    [anon_sym_coinbase] = ACTIONS(17),
    [anon_sym_timestamp] = ACTIONS(17),
    [anon_sym_number] = ACTIONS(17),
    [anon_sym_difficulty] = ACTIONS(17),
    [anon_sym_gaslimit] = ACTIONS(17),
    [anon_sym_chainid] = ACTIONS(17),
    [anon_sym_selfbalance] = ACTIONS(17),
    [anon_sym_basefee] = ACTIONS(17),
    [anon_sym_pop] = ACTIONS(17),
    [anon_sym_mload] = ACTIONS(17),
    [anon_sym_mstore] = ACTIONS(17),
    [anon_sym_mstore8] = ACTIONS(19),
    [anon_sym_sload] = ACTIONS(17),
    [anon_sym_sstore] = ACTIONS(17),
    [anon_sym_jump] = ACTIONS(17),
    [anon_sym_jumpi] = ACTIONS(17),
    [anon_sym_getpc] = ACTIONS(17),
    [anon_sym_msize] = ACTIONS(17),
    [anon_sym_gas] = ACTIONS(17),
    [anon_sym_jumpdest] = ACTIONS(17),
    [anon_sym_push1] = ACTIONS(17),
    [anon_sym_push2] = ACTIONS(17),
    [anon_sym_push3] = ACTIONS(17),
    [anon_sym_push4] = ACTIONS(19),
    [anon_sym_push5] = ACTIONS(19),
    [anon_sym_push6] = ACTIONS(19),
    [anon_sym_push7] = ACTIONS(19),
    [anon_sym_push8] = ACTIONS(19),
    [anon_sym_push9] = ACTIONS(19),
    [anon_sym_push10] = ACTIONS(19),
    [anon_sym_push11] = ACTIONS(19),
    [anon_sym_push12] = ACTIONS(19),
    [anon_sym_push13] = ACTIONS(19),
    [anon_sym_push14] = ACTIONS(19),
    [anon_sym_push15] = ACTIONS(19),
    [anon_sym_push16] = ACTIONS(19),
    [anon_sym_push17] = ACTIONS(19),
    [anon_sym_push18] = ACTIONS(19),
    [anon_sym_push19] = ACTIONS(19),
    [anon_sym_push20] = ACTIONS(19),
    [anon_sym_push21] = ACTIONS(19),
    [anon_sym_push22] = ACTIONS(19),
    [anon_sym_push23] = ACTIONS(19),
    [anon_sym_push24] = ACTIONS(19),
    [anon_sym_push25] = ACTIONS(19),
    [anon_sym_push26] = ACTIONS(19),
    [anon_sym_push27] = ACTIONS(19),
    [anon_sym_push28] = ACTIONS(19),
    [anon_sym_push29] = ACTIONS(19),
    [anon_sym_push30] = ACTIONS(19),
    [anon_sym_push31] = ACTIONS(19),
    [anon_sym_push32] = ACTIONS(19),
    [anon_sym_dup1] = ACTIONS(17),
    [anon_sym_dup2] = ACTIONS(19),
    [anon_sym_dup3] = ACTIONS(19),
    [anon_sym_dup4] = ACTIONS(19),
    [anon_sym_dup5] = ACTIONS(19),
    [anon_sym_dup6] = ACTIONS(19),
    [anon_sym_dup7] = ACTIONS(19),
    [anon_sym_dup8] = ACTIONS(19),
    [anon_sym_dup9] = ACTIONS(19),
    [anon_sym_dup10] = ACTIONS(19),
    [anon_sym_dup11] = ACTIONS(19),
    [anon_sym_dup12] = ACTIONS(19),
    [anon_sym_dup13] = ACTIONS(19),
    [anon_sym_dup14] = ACTIONS(19),
    [anon_sym_dup15] = ACTIONS(19),
    [anon_sym_dup16] = ACTIONS(19),
    [anon_sym_swap1] = ACTIONS(17),
    [anon_sym_swap2] = ACTIONS(19),
    [anon_sym_swap3] = ACTIONS(19),
    [anon_sym_swap4] = ACTIONS(19),
    [anon_sym_swap5] = ACTIONS(19),
    [anon_sym_swap6] = ACTIONS(19),
    [anon_sym_swap7] = ACTIONS(19),
    [anon_sym_swap8] = ACTIONS(19),
    [anon_sym_swap9] = ACTIONS(19),
    [anon_sym_swap10] = ACTIONS(19),
    [anon_sym_swap11] = ACTIONS(19),
    [anon_sym_swap12] = ACTIONS(19),
    [anon_sym_swap13] = ACTIONS(19),
    [anon_sym_swap14] = ACTIONS(19),
    [anon_sym_swap15] = ACTIONS(19),
    [anon_sym_swap16] = ACTIONS(19),
    [anon_sym_shl] = ACTIONS(17),
    [anon_sym_shr] = ACTIONS(17),
    [anon_sym_sar] = ACTIONS(17),
    [anon_sym_log0] = ACTIONS(19),
    [anon_sym_log1] = ACTIONS(19),
    [anon_sym_log2] = ACTIONS(19),
    [anon_sym_log3] = ACTIONS(19),
    [anon_sym_log4] = ACTIONS(19),
    [anon_sym_create] = ACTIONS(17),
    [anon_sym_call] = ACTIONS(17),
    [anon_sym_callcode] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_delegatecall] = ACTIONS(17),
    [anon_sym_create2] = ACTIONS(19),
    [anon_sym_staticcall] = ACTIONS(17),
    [anon_sym_revert] = ACTIONS(17),
    [anon_sym_invalid] = ACTIONS(17),
    [anon_sym_selfdestruct] = ACTIONS(17),
    [aux_sym__label_token1] = ACTIONS(21),
    [sym_hex] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym_label] = STATE(4),
    [sym__label] = STATE(7),
    [sym__destination] = STATE(7),
    [sym_const_access] = STATE(4),
    [sym_macro_call] = STATE(4),
    [sym_identifier] = STATE(40),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_stop] = ACTIONS(33),
    [anon_sym_add] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(33),
    [anon_sym_sdiv] = ACTIONS(33),
    [anon_sym_mod] = ACTIONS(33),
    [anon_sym_smod] = ACTIONS(33),
    [anon_sym_addmod] = ACTIONS(33),
    [anon_sym_mulmod] = ACTIONS(33),
    [anon_sym_exp] = ACTIONS(33),
    [anon_sym_signextend] = ACTIONS(33),
    [anon_sym_lt] = ACTIONS(33),
    [anon_sym_gt] = ACTIONS(33),
    [anon_sym_slt] = ACTIONS(33),
    [anon_sym_sgt] = ACTIONS(33),
    [anon_sym_eq] = ACTIONS(33),
    [anon_sym_iszero] = ACTIONS(33),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_byte] = ACTIONS(33),
    [anon_sym_sha3] = ACTIONS(36),
    [anon_sym_keccak] = ACTIONS(33),
    [anon_sym_address] = ACTIONS(33),
    [anon_sym_balance] = ACTIONS(33),
    [anon_sym_origin] = ACTIONS(33),
    [anon_sym_caller] = ACTIONS(33),
    [anon_sym_callvalue] = ACTIONS(33),
    [anon_sym_calldataload] = ACTIONS(33),
    [anon_sym_calldatasize] = ACTIONS(33),
    [anon_sym_calldatacopy] = ACTIONS(33),
    [anon_sym_codesize] = ACTIONS(33),
    [anon_sym_codecopy] = ACTIONS(33),
    [anon_sym_gasprice] = ACTIONS(33),
    [anon_sym_extcodesize] = ACTIONS(33),
    [anon_sym_extcodecopy] = ACTIONS(33),
    [anon_sym_returndatasize] = ACTIONS(33),
    [anon_sym_returndatacopy] = ACTIONS(33),
    [anon_sym_blockhash] = ACTIONS(33),
    [anon_sym_coinbase] = ACTIONS(33),
    [anon_sym_timestamp] = ACTIONS(33),
    [anon_sym_number] = ACTIONS(33),
    [anon_sym_difficulty] = ACTIONS(33),
    [anon_sym_gaslimit] = ACTIONS(33),
    [anon_sym_chainid] = ACTIONS(33),
    [anon_sym_selfbalance] = ACTIONS(33),
    [anon_sym_basefee] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_mload] = ACTIONS(33),
    [anon_sym_mstore] = ACTIONS(33),
    [anon_sym_mstore8] = ACTIONS(36),
    [anon_sym_sload] = ACTIONS(33),
    [anon_sym_sstore] = ACTIONS(33),
    [anon_sym_jump] = ACTIONS(33),
    [anon_sym_jumpi] = ACTIONS(33),
    [anon_sym_getpc] = ACTIONS(33),
    [anon_sym_msize] = ACTIONS(33),
    [anon_sym_gas] = ACTIONS(33),
    [anon_sym_jumpdest] = ACTIONS(33),
    [anon_sym_push1] = ACTIONS(33),
    [anon_sym_push2] = ACTIONS(33),
    [anon_sym_push3] = ACTIONS(33),
    [anon_sym_push4] = ACTIONS(36),
    [anon_sym_push5] = ACTIONS(36),
    [anon_sym_push6] = ACTIONS(36),
    [anon_sym_push7] = ACTIONS(36),
    [anon_sym_push8] = ACTIONS(36),
    [anon_sym_push9] = ACTIONS(36),
    [anon_sym_push10] = ACTIONS(36),
    [anon_sym_push11] = ACTIONS(36),
    [anon_sym_push12] = ACTIONS(36),
    [anon_sym_push13] = ACTIONS(36),
    [anon_sym_push14] = ACTIONS(36),
    [anon_sym_push15] = ACTIONS(36),
    [anon_sym_push16] = ACTIONS(36),
    [anon_sym_push17] = ACTIONS(36),
    [anon_sym_push18] = ACTIONS(36),
    [anon_sym_push19] = ACTIONS(36),
    [anon_sym_push20] = ACTIONS(36),
    [anon_sym_push21] = ACTIONS(36),
    [anon_sym_push22] = ACTIONS(36),
    [anon_sym_push23] = ACTIONS(36),
    [anon_sym_push24] = ACTIONS(36),
    [anon_sym_push25] = ACTIONS(36),
    [anon_sym_push26] = ACTIONS(36),
    [anon_sym_push27] = ACTIONS(36),
    [anon_sym_push28] = ACTIONS(36),
    [anon_sym_push29] = ACTIONS(36),
    [anon_sym_push30] = ACTIONS(36),
    [anon_sym_push31] = ACTIONS(36),
    [anon_sym_push32] = ACTIONS(36),
    [anon_sym_dup1] = ACTIONS(33),
    [anon_sym_dup2] = ACTIONS(36),
    [anon_sym_dup3] = ACTIONS(36),
    [anon_sym_dup4] = ACTIONS(36),
    [anon_sym_dup5] = ACTIONS(36),
    [anon_sym_dup6] = ACTIONS(36),
    [anon_sym_dup7] = ACTIONS(36),
    [anon_sym_dup8] = ACTIONS(36),
    [anon_sym_dup9] = ACTIONS(36),
    [anon_sym_dup10] = ACTIONS(36),
    [anon_sym_dup11] = ACTIONS(36),
    [anon_sym_dup12] = ACTIONS(36),
    [anon_sym_dup13] = ACTIONS(36),
    [anon_sym_dup14] = ACTIONS(36),
    [anon_sym_dup15] = ACTIONS(36),
    [anon_sym_dup16] = ACTIONS(36),
    [anon_sym_swap1] = ACTIONS(33),
    [anon_sym_swap2] = ACTIONS(36),
    [anon_sym_swap3] = ACTIONS(36),
    [anon_sym_swap4] = ACTIONS(36),
    [anon_sym_swap5] = ACTIONS(36),
    [anon_sym_swap6] = ACTIONS(36),
    [anon_sym_swap7] = ACTIONS(36),
    [anon_sym_swap8] = ACTIONS(36),
    [anon_sym_swap9] = ACTIONS(36),
    [anon_sym_swap10] = ACTIONS(36),
    [anon_sym_swap11] = ACTIONS(36),
    [anon_sym_swap12] = ACTIONS(36),
    [anon_sym_swap13] = ACTIONS(36),
    [anon_sym_swap14] = ACTIONS(36),
    [anon_sym_swap15] = ACTIONS(36),
    [anon_sym_swap16] = ACTIONS(36),
    [anon_sym_shl] = ACTIONS(33),
    [anon_sym_shr] = ACTIONS(33),
    [anon_sym_sar] = ACTIONS(33),
    [anon_sym_log0] = ACTIONS(36),
    [anon_sym_log1] = ACTIONS(36),
    [anon_sym_log2] = ACTIONS(36),
    [anon_sym_log3] = ACTIONS(36),
    [anon_sym_log4] = ACTIONS(36),
    [anon_sym_create] = ACTIONS(33),
    [anon_sym_call] = ACTIONS(33),
    [anon_sym_callcode] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(33),
    [anon_sym_delegatecall] = ACTIONS(33),
    [anon_sym_create2] = ACTIONS(36),
    [anon_sym_staticcall] = ACTIONS(33),
    [anon_sym_revert] = ACTIONS(33),
    [anon_sym_invalid] = ACTIONS(33),
    [anon_sym_selfdestruct] = ACTIONS(33),
    [aux_sym__label_token1] = ACTIONS(39),
    [sym_hex] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_stop] = ACTIONS(50),
    [anon_sym_add] = ACTIONS(50),
    [anon_sym_mul] = ACTIONS(50),
    [anon_sym_sub] = ACTIONS(50),
    [anon_sym_div] = ACTIONS(50),
    [anon_sym_sdiv] = ACTIONS(50),
    [anon_sym_mod] = ACTIONS(50),
    [anon_sym_smod] = ACTIONS(50),
    [anon_sym_addmod] = ACTIONS(50),
    [anon_sym_mulmod] = ACTIONS(50),
    [anon_sym_exp] = ACTIONS(50),
    [anon_sym_signextend] = ACTIONS(50),
    [anon_sym_lt] = ACTIONS(50),
    [anon_sym_gt] = ACTIONS(50),
    [anon_sym_slt] = ACTIONS(50),
    [anon_sym_sgt] = ACTIONS(50),
    [anon_sym_eq] = ACTIONS(50),
    [anon_sym_iszero] = ACTIONS(50),
    [anon_sym_and] = ACTIONS(50),
    [anon_sym_or] = ACTIONS(50),
    [anon_sym_xor] = ACTIONS(50),
    [anon_sym_not] = ACTIONS(50),
    [anon_sym_byte] = ACTIONS(50),
    [anon_sym_sha3] = ACTIONS(48),
    [anon_sym_keccak] = ACTIONS(50),
    [anon_sym_address] = ACTIONS(50),
    [anon_sym_balance] = ACTIONS(50),
    [anon_sym_origin] = ACTIONS(50),
    [anon_sym_caller] = ACTIONS(50),
    [anon_sym_callvalue] = ACTIONS(50),
    [anon_sym_calldataload] = ACTIONS(50),
    [anon_sym_calldatasize] = ACTIONS(50),
    [anon_sym_calldatacopy] = ACTIONS(50),
    [anon_sym_codesize] = ACTIONS(50),
    [anon_sym_codecopy] = ACTIONS(50),
    [anon_sym_gasprice] = ACTIONS(50),
    [anon_sym_extcodesize] = ACTIONS(50),
    [anon_sym_extcodecopy] = ACTIONS(50),
    [anon_sym_returndatasize] = ACTIONS(50),
    [anon_sym_returndatacopy] = ACTIONS(50),
    [anon_sym_blockhash] = ACTIONS(50),
    [anon_sym_coinbase] = ACTIONS(50),
    [anon_sym_timestamp] = ACTIONS(50),
    [anon_sym_number] = ACTIONS(50),
    [anon_sym_difficulty] = ACTIONS(50),
    [anon_sym_gaslimit] = ACTIONS(50),
    [anon_sym_chainid] = ACTIONS(50),
    [anon_sym_selfbalance] = ACTIONS(50),
    [anon_sym_basefee] = ACTIONS(50),
    [anon_sym_pop] = ACTIONS(50),
    [anon_sym_mload] = ACTIONS(50),
    [anon_sym_mstore] = ACTIONS(50),
    [anon_sym_mstore8] = ACTIONS(48),
    [anon_sym_sload] = ACTIONS(50),
    [anon_sym_sstore] = ACTIONS(50),
    [anon_sym_jump] = ACTIONS(50),
    [anon_sym_jumpi] = ACTIONS(50),
    [anon_sym_getpc] = ACTIONS(50),
    [anon_sym_msize] = ACTIONS(50),
    [anon_sym_gas] = ACTIONS(50),
    [anon_sym_jumpdest] = ACTIONS(50),
    [anon_sym_push1] = ACTIONS(50),
    [anon_sym_push2] = ACTIONS(50),
    [anon_sym_push3] = ACTIONS(50),
    [anon_sym_push4] = ACTIONS(48),
    [anon_sym_push5] = ACTIONS(48),
    [anon_sym_push6] = ACTIONS(48),
    [anon_sym_push7] = ACTIONS(48),
    [anon_sym_push8] = ACTIONS(48),
    [anon_sym_push9] = ACTIONS(48),
    [anon_sym_push10] = ACTIONS(48),
    [anon_sym_push11] = ACTIONS(48),
    [anon_sym_push12] = ACTIONS(48),
    [anon_sym_push13] = ACTIONS(48),
    [anon_sym_push14] = ACTIONS(48),
    [anon_sym_push15] = ACTIONS(48),
    [anon_sym_push16] = ACTIONS(48),
    [anon_sym_push17] = ACTIONS(48),
    [anon_sym_push18] = ACTIONS(48),
    [anon_sym_push19] = ACTIONS(48),
    [anon_sym_push20] = ACTIONS(48),
    [anon_sym_push21] = ACTIONS(48),
    [anon_sym_push22] = ACTIONS(48),
    [anon_sym_push23] = ACTIONS(48),
    [anon_sym_push24] = ACTIONS(48),
    [anon_sym_push25] = ACTIONS(48),
    [anon_sym_push26] = ACTIONS(48),
    [anon_sym_push27] = ACTIONS(48),
    [anon_sym_push28] = ACTIONS(48),
    [anon_sym_push29] = ACTIONS(48),
    [anon_sym_push30] = ACTIONS(48),
    [anon_sym_push31] = ACTIONS(48),
    [anon_sym_push32] = ACTIONS(48),
    [anon_sym_dup1] = ACTIONS(50),
    [anon_sym_dup2] = ACTIONS(48),
    [anon_sym_dup3] = ACTIONS(48),
    [anon_sym_dup4] = ACTIONS(48),
    [anon_sym_dup5] = ACTIONS(48),
    [anon_sym_dup6] = ACTIONS(48),
    [anon_sym_dup7] = ACTIONS(48),
    [anon_sym_dup8] = ACTIONS(48),
    [anon_sym_dup9] = ACTIONS(48),
    [anon_sym_dup10] = ACTIONS(48),
    [anon_sym_dup11] = ACTIONS(48),
    [anon_sym_dup12] = ACTIONS(48),
    [anon_sym_dup13] = ACTIONS(48),
    [anon_sym_dup14] = ACTIONS(48),
    [anon_sym_dup15] = ACTIONS(48),
    [anon_sym_dup16] = ACTIONS(48),
    [anon_sym_swap1] = ACTIONS(50),
    [anon_sym_swap2] = ACTIONS(48),
    [anon_sym_swap3] = ACTIONS(48),
    [anon_sym_swap4] = ACTIONS(48),
    [anon_sym_swap5] = ACTIONS(48),
    [anon_sym_swap6] = ACTIONS(48),
    [anon_sym_swap7] = ACTIONS(48),
    [anon_sym_swap8] = ACTIONS(48),
    [anon_sym_swap9] = ACTIONS(48),
    [anon_sym_swap10] = ACTIONS(48),
    [anon_sym_swap11] = ACTIONS(48),
    [anon_sym_swap12] = ACTIONS(48),
    [anon_sym_swap13] = ACTIONS(48),
    [anon_sym_swap14] = ACTIONS(48),
    [anon_sym_swap15] = ACTIONS(48),
    [anon_sym_swap16] = ACTIONS(48),
    [anon_sym_shl] = ACTIONS(50),
    [anon_sym_shr] = ACTIONS(50),
    [anon_sym_sar] = ACTIONS(50),
    [anon_sym_log0] = ACTIONS(48),
    [anon_sym_log1] = ACTIONS(48),
    [anon_sym_log2] = ACTIONS(48),
    [anon_sym_log3] = ACTIONS(48),
    [anon_sym_log4] = ACTIONS(48),
    [anon_sym_create] = ACTIONS(50),
    [anon_sym_call] = ACTIONS(50),
    [anon_sym_callcode] = ACTIONS(50),
    [anon_sym_return] = ACTIONS(50),
    [anon_sym_delegatecall] = ACTIONS(50),
    [anon_sym_create2] = ACTIONS(48),
    [anon_sym_staticcall] = ACTIONS(50),
    [anon_sym_revert] = ACTIONS(50),
    [anon_sym_invalid] = ACTIONS(50),
    [anon_sym_selfdestruct] = ACTIONS(50),
    [aux_sym__label_token1] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(52),
    [sym_hex] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_stop] = ACTIONS(58),
    [anon_sym_add] = ACTIONS(58),
    [anon_sym_mul] = ACTIONS(58),
    [anon_sym_sub] = ACTIONS(58),
    [anon_sym_div] = ACTIONS(58),
    [anon_sym_sdiv] = ACTIONS(58),
    [anon_sym_mod] = ACTIONS(58),
    [anon_sym_smod] = ACTIONS(58),
    [anon_sym_addmod] = ACTIONS(58),
    [anon_sym_mulmod] = ACTIONS(58),
    [anon_sym_exp] = ACTIONS(58),
    [anon_sym_signextend] = ACTIONS(58),
    [anon_sym_lt] = ACTIONS(58),
    [anon_sym_gt] = ACTIONS(58),
    [anon_sym_slt] = ACTIONS(58),
    [anon_sym_sgt] = ACTIONS(58),
    [anon_sym_eq] = ACTIONS(58),
    [anon_sym_iszero] = ACTIONS(58),
    [anon_sym_and] = ACTIONS(58),
    [anon_sym_or] = ACTIONS(58),
    [anon_sym_xor] = ACTIONS(58),
    [anon_sym_not] = ACTIONS(58),
    [anon_sym_byte] = ACTIONS(58),
    [anon_sym_sha3] = ACTIONS(56),
    [anon_sym_keccak] = ACTIONS(58),
    [anon_sym_address] = ACTIONS(58),
    [anon_sym_balance] = ACTIONS(58),
    [anon_sym_origin] = ACTIONS(58),
    [anon_sym_caller] = ACTIONS(58),
    [anon_sym_callvalue] = ACTIONS(58),
    [anon_sym_calldataload] = ACTIONS(58),
    [anon_sym_calldatasize] = ACTIONS(58),
    [anon_sym_calldatacopy] = ACTIONS(58),
    [anon_sym_codesize] = ACTIONS(58),
    [anon_sym_codecopy] = ACTIONS(58),
    [anon_sym_gasprice] = ACTIONS(58),
    [anon_sym_extcodesize] = ACTIONS(58),
    [anon_sym_extcodecopy] = ACTIONS(58),
    [anon_sym_returndatasize] = ACTIONS(58),
    [anon_sym_returndatacopy] = ACTIONS(58),
    [anon_sym_blockhash] = ACTIONS(58),
    [anon_sym_coinbase] = ACTIONS(58),
    [anon_sym_timestamp] = ACTIONS(58),
    [anon_sym_number] = ACTIONS(58),
    [anon_sym_difficulty] = ACTIONS(58),
    [anon_sym_gaslimit] = ACTIONS(58),
    [anon_sym_chainid] = ACTIONS(58),
    [anon_sym_selfbalance] = ACTIONS(58),
    [anon_sym_basefee] = ACTIONS(58),
    [anon_sym_pop] = ACTIONS(58),
    [anon_sym_mload] = ACTIONS(58),
    [anon_sym_mstore] = ACTIONS(58),
    [anon_sym_mstore8] = ACTIONS(56),
    [anon_sym_sload] = ACTIONS(58),
    [anon_sym_sstore] = ACTIONS(58),
    [anon_sym_jump] = ACTIONS(58),
    [anon_sym_jumpi] = ACTIONS(58),
    [anon_sym_getpc] = ACTIONS(58),
    [anon_sym_msize] = ACTIONS(58),
    [anon_sym_gas] = ACTIONS(58),
    [anon_sym_jumpdest] = ACTIONS(58),
    [anon_sym_push1] = ACTIONS(58),
    [anon_sym_push2] = ACTIONS(58),
    [anon_sym_push3] = ACTIONS(58),
    [anon_sym_push4] = ACTIONS(56),
    [anon_sym_push5] = ACTIONS(56),
    [anon_sym_push6] = ACTIONS(56),
    [anon_sym_push7] = ACTIONS(56),
    [anon_sym_push8] = ACTIONS(56),
    [anon_sym_push9] = ACTIONS(56),
    [anon_sym_push10] = ACTIONS(56),
    [anon_sym_push11] = ACTIONS(56),
    [anon_sym_push12] = ACTIONS(56),
    [anon_sym_push13] = ACTIONS(56),
    [anon_sym_push14] = ACTIONS(56),
    [anon_sym_push15] = ACTIONS(56),
    [anon_sym_push16] = ACTIONS(56),
    [anon_sym_push17] = ACTIONS(56),
    [anon_sym_push18] = ACTIONS(56),
    [anon_sym_push19] = ACTIONS(56),
    [anon_sym_push20] = ACTIONS(56),
    [anon_sym_push21] = ACTIONS(56),
    [anon_sym_push22] = ACTIONS(56),
    [anon_sym_push23] = ACTIONS(56),
    [anon_sym_push24] = ACTIONS(56),
    [anon_sym_push25] = ACTIONS(56),
    [anon_sym_push26] = ACTIONS(56),
    [anon_sym_push27] = ACTIONS(56),
    [anon_sym_push28] = ACTIONS(56),
    [anon_sym_push29] = ACTIONS(56),
    [anon_sym_push30] = ACTIONS(56),
    [anon_sym_push31] = ACTIONS(56),
    [anon_sym_push32] = ACTIONS(56),
    [anon_sym_dup1] = ACTIONS(58),
    [anon_sym_dup2] = ACTIONS(56),
    [anon_sym_dup3] = ACTIONS(56),
    [anon_sym_dup4] = ACTIONS(56),
    [anon_sym_dup5] = ACTIONS(56),
    [anon_sym_dup6] = ACTIONS(56),
    [anon_sym_dup7] = ACTIONS(56),
    [anon_sym_dup8] = ACTIONS(56),
    [anon_sym_dup9] = ACTIONS(56),
    [anon_sym_dup10] = ACTIONS(56),
    [anon_sym_dup11] = ACTIONS(56),
    [anon_sym_dup12] = ACTIONS(56),
    [anon_sym_dup13] = ACTIONS(56),
    [anon_sym_dup14] = ACTIONS(56),
    [anon_sym_dup15] = ACTIONS(56),
    [anon_sym_dup16] = ACTIONS(56),
    [anon_sym_swap1] = ACTIONS(58),
    [anon_sym_swap2] = ACTIONS(56),
    [anon_sym_swap3] = ACTIONS(56),
    [anon_sym_swap4] = ACTIONS(56),
    [anon_sym_swap5] = ACTIONS(56),
    [anon_sym_swap6] = ACTIONS(56),
    [anon_sym_swap7] = ACTIONS(56),
    [anon_sym_swap8] = ACTIONS(56),
    [anon_sym_swap9] = ACTIONS(56),
    [anon_sym_swap10] = ACTIONS(56),
    [anon_sym_swap11] = ACTIONS(56),
    [anon_sym_swap12] = ACTIONS(56),
    [anon_sym_swap13] = ACTIONS(56),
    [anon_sym_swap14] = ACTIONS(56),
    [anon_sym_swap15] = ACTIONS(56),
    [anon_sym_swap16] = ACTIONS(56),
    [anon_sym_shl] = ACTIONS(58),
    [anon_sym_shr] = ACTIONS(58),
    [anon_sym_sar] = ACTIONS(58),
    [anon_sym_log0] = ACTIONS(56),
    [anon_sym_log1] = ACTIONS(56),
    [anon_sym_log2] = ACTIONS(56),
    [anon_sym_log3] = ACTIONS(56),
    [anon_sym_log4] = ACTIONS(56),
    [anon_sym_create] = ACTIONS(58),
    [anon_sym_call] = ACTIONS(58),
    [anon_sym_callcode] = ACTIONS(58),
    [anon_sym_return] = ACTIONS(58),
    [anon_sym_delegatecall] = ACTIONS(58),
    [anon_sym_create2] = ACTIONS(56),
    [anon_sym_staticcall] = ACTIONS(58),
    [anon_sym_revert] = ACTIONS(58),
    [anon_sym_invalid] = ACTIONS(58),
    [anon_sym_selfdestruct] = ACTIONS(58),
    [aux_sym__label_token1] = ACTIONS(58),
    [sym_hex] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_stop] = ACTIONS(62),
    [anon_sym_add] = ACTIONS(62),
    [anon_sym_mul] = ACTIONS(62),
    [anon_sym_sub] = ACTIONS(62),
    [anon_sym_div] = ACTIONS(62),
    [anon_sym_sdiv] = ACTIONS(62),
    [anon_sym_mod] = ACTIONS(62),
    [anon_sym_smod] = ACTIONS(62),
    [anon_sym_addmod] = ACTIONS(62),
    [anon_sym_mulmod] = ACTIONS(62),
    [anon_sym_exp] = ACTIONS(62),
    [anon_sym_signextend] = ACTIONS(62),
    [anon_sym_lt] = ACTIONS(62),
    [anon_sym_gt] = ACTIONS(62),
    [anon_sym_slt] = ACTIONS(62),
    [anon_sym_sgt] = ACTIONS(62),
    [anon_sym_eq] = ACTIONS(62),
    [anon_sym_iszero] = ACTIONS(62),
    [anon_sym_and] = ACTIONS(62),
    [anon_sym_or] = ACTIONS(62),
    [anon_sym_xor] = ACTIONS(62),
    [anon_sym_not] = ACTIONS(62),
    [anon_sym_byte] = ACTIONS(62),
    [anon_sym_sha3] = ACTIONS(60),
    [anon_sym_keccak] = ACTIONS(62),
    [anon_sym_address] = ACTIONS(62),
    [anon_sym_balance] = ACTIONS(62),
    [anon_sym_origin] = ACTIONS(62),
    [anon_sym_caller] = ACTIONS(62),
    [anon_sym_callvalue] = ACTIONS(62),
    [anon_sym_calldataload] = ACTIONS(62),
    [anon_sym_calldatasize] = ACTIONS(62),
    [anon_sym_calldatacopy] = ACTIONS(62),
    [anon_sym_codesize] = ACTIONS(62),
    [anon_sym_codecopy] = ACTIONS(62),
    [anon_sym_gasprice] = ACTIONS(62),
    [anon_sym_extcodesize] = ACTIONS(62),
    [anon_sym_extcodecopy] = ACTIONS(62),
    [anon_sym_returndatasize] = ACTIONS(62),
    [anon_sym_returndatacopy] = ACTIONS(62),
    [anon_sym_blockhash] = ACTIONS(62),
    [anon_sym_coinbase] = ACTIONS(62),
    [anon_sym_timestamp] = ACTIONS(62),
    [anon_sym_number] = ACTIONS(62),
    [anon_sym_difficulty] = ACTIONS(62),
    [anon_sym_gaslimit] = ACTIONS(62),
    [anon_sym_chainid] = ACTIONS(62),
    [anon_sym_selfbalance] = ACTIONS(62),
    [anon_sym_basefee] = ACTIONS(62),
    [anon_sym_pop] = ACTIONS(62),
    [anon_sym_mload] = ACTIONS(62),
    [anon_sym_mstore] = ACTIONS(62),
    [anon_sym_mstore8] = ACTIONS(60),
    [anon_sym_sload] = ACTIONS(62),
    [anon_sym_sstore] = ACTIONS(62),
    [anon_sym_jump] = ACTIONS(62),
    [anon_sym_jumpi] = ACTIONS(62),
    [anon_sym_getpc] = ACTIONS(62),
    [anon_sym_msize] = ACTIONS(62),
    [anon_sym_gas] = ACTIONS(62),
    [anon_sym_jumpdest] = ACTIONS(62),
    [anon_sym_push1] = ACTIONS(62),
    [anon_sym_push2] = ACTIONS(62),
    [anon_sym_push3] = ACTIONS(62),
    [anon_sym_push4] = ACTIONS(60),
    [anon_sym_push5] = ACTIONS(60),
    [anon_sym_push6] = ACTIONS(60),
    [anon_sym_push7] = ACTIONS(60),
    [anon_sym_push8] = ACTIONS(60),
    [anon_sym_push9] = ACTIONS(60),
    [anon_sym_push10] = ACTIONS(60),
    [anon_sym_push11] = ACTIONS(60),
    [anon_sym_push12] = ACTIONS(60),
    [anon_sym_push13] = ACTIONS(60),
    [anon_sym_push14] = ACTIONS(60),
    [anon_sym_push15] = ACTIONS(60),
    [anon_sym_push16] = ACTIONS(60),
    [anon_sym_push17] = ACTIONS(60),
    [anon_sym_push18] = ACTIONS(60),
    [anon_sym_push19] = ACTIONS(60),
    [anon_sym_push20] = ACTIONS(60),
    [anon_sym_push21] = ACTIONS(60),
    [anon_sym_push22] = ACTIONS(60),
    [anon_sym_push23] = ACTIONS(60),
    [anon_sym_push24] = ACTIONS(60),
    [anon_sym_push25] = ACTIONS(60),
    [anon_sym_push26] = ACTIONS(60),
    [anon_sym_push27] = ACTIONS(60),
    [anon_sym_push28] = ACTIONS(60),
    [anon_sym_push29] = ACTIONS(60),
    [anon_sym_push30] = ACTIONS(60),
    [anon_sym_push31] = ACTIONS(60),
    [anon_sym_push32] = ACTIONS(60),
    [anon_sym_dup1] = ACTIONS(62),
    [anon_sym_dup2] = ACTIONS(60),
    [anon_sym_dup3] = ACTIONS(60),
    [anon_sym_dup4] = ACTIONS(60),
    [anon_sym_dup5] = ACTIONS(60),
    [anon_sym_dup6] = ACTIONS(60),
    [anon_sym_dup7] = ACTIONS(60),
    [anon_sym_dup8] = ACTIONS(60),
    [anon_sym_dup9] = ACTIONS(60),
    [anon_sym_dup10] = ACTIONS(60),
    [anon_sym_dup11] = ACTIONS(60),
    [anon_sym_dup12] = ACTIONS(60),
    [anon_sym_dup13] = ACTIONS(60),
    [anon_sym_dup14] = ACTIONS(60),
    [anon_sym_dup15] = ACTIONS(60),
    [anon_sym_dup16] = ACTIONS(60),
    [anon_sym_swap1] = ACTIONS(62),
    [anon_sym_swap2] = ACTIONS(60),
    [anon_sym_swap3] = ACTIONS(60),
    [anon_sym_swap4] = ACTIONS(60),
    [anon_sym_swap5] = ACTIONS(60),
    [anon_sym_swap6] = ACTIONS(60),
    [anon_sym_swap7] = ACTIONS(60),
    [anon_sym_swap8] = ACTIONS(60),
    [anon_sym_swap9] = ACTIONS(60),
    [anon_sym_swap10] = ACTIONS(60),
    [anon_sym_swap11] = ACTIONS(60),
    [anon_sym_swap12] = ACTIONS(60),
    [anon_sym_swap13] = ACTIONS(60),
    [anon_sym_swap14] = ACTIONS(60),
    [anon_sym_swap15] = ACTIONS(60),
    [anon_sym_swap16] = ACTIONS(60),
    [anon_sym_shl] = ACTIONS(62),
    [anon_sym_shr] = ACTIONS(62),
    [anon_sym_sar] = ACTIONS(62),
    [anon_sym_log0] = ACTIONS(60),
    [anon_sym_log1] = ACTIONS(60),
    [anon_sym_log2] = ACTIONS(60),
    [anon_sym_log3] = ACTIONS(60),
    [anon_sym_log4] = ACTIONS(60),
    [anon_sym_create] = ACTIONS(62),
    [anon_sym_call] = ACTIONS(62),
    [anon_sym_callcode] = ACTIONS(62),
    [anon_sym_return] = ACTIONS(62),
    [anon_sym_delegatecall] = ACTIONS(62),
    [anon_sym_create2] = ACTIONS(60),
    [anon_sym_staticcall] = ACTIONS(62),
    [anon_sym_revert] = ACTIONS(62),
    [anon_sym_invalid] = ACTIONS(62),
    [anon_sym_selfdestruct] = ACTIONS(62),
    [aux_sym__label_token1] = ACTIONS(62),
    [sym_hex] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_stop] = ACTIONS(66),
    [anon_sym_add] = ACTIONS(66),
    [anon_sym_mul] = ACTIONS(66),
    [anon_sym_sub] = ACTIONS(66),
    [anon_sym_div] = ACTIONS(66),
    [anon_sym_sdiv] = ACTIONS(66),
    [anon_sym_mod] = ACTIONS(66),
    [anon_sym_smod] = ACTIONS(66),
    [anon_sym_addmod] = ACTIONS(66),
    [anon_sym_mulmod] = ACTIONS(66),
    [anon_sym_exp] = ACTIONS(66),
    [anon_sym_signextend] = ACTIONS(66),
    [anon_sym_lt] = ACTIONS(66),
    [anon_sym_gt] = ACTIONS(66),
    [anon_sym_slt] = ACTIONS(66),
    [anon_sym_sgt] = ACTIONS(66),
    [anon_sym_eq] = ACTIONS(66),
    [anon_sym_iszero] = ACTIONS(66),
    [anon_sym_and] = ACTIONS(66),
    [anon_sym_or] = ACTIONS(66),
    [anon_sym_xor] = ACTIONS(66),
    [anon_sym_not] = ACTIONS(66),
    [anon_sym_byte] = ACTIONS(66),
    [anon_sym_sha3] = ACTIONS(64),
    [anon_sym_keccak] = ACTIONS(66),
    [anon_sym_address] = ACTIONS(66),
    [anon_sym_balance] = ACTIONS(66),
    [anon_sym_origin] = ACTIONS(66),
    [anon_sym_caller] = ACTIONS(66),
    [anon_sym_callvalue] = ACTIONS(66),
    [anon_sym_calldataload] = ACTIONS(66),
    [anon_sym_calldatasize] = ACTIONS(66),
    [anon_sym_calldatacopy] = ACTIONS(66),
    [anon_sym_codesize] = ACTIONS(66),
    [anon_sym_codecopy] = ACTIONS(66),
    [anon_sym_gasprice] = ACTIONS(66),
    [anon_sym_extcodesize] = ACTIONS(66),
    [anon_sym_extcodecopy] = ACTIONS(66),
    [anon_sym_returndatasize] = ACTIONS(66),
    [anon_sym_returndatacopy] = ACTIONS(66),
    [anon_sym_blockhash] = ACTIONS(66),
    [anon_sym_coinbase] = ACTIONS(66),
    [anon_sym_timestamp] = ACTIONS(66),
    [anon_sym_number] = ACTIONS(66),
    [anon_sym_difficulty] = ACTIONS(66),
    [anon_sym_gaslimit] = ACTIONS(66),
    [anon_sym_chainid] = ACTIONS(66),
    [anon_sym_selfbalance] = ACTIONS(66),
    [anon_sym_basefee] = ACTIONS(66),
    [anon_sym_pop] = ACTIONS(66),
    [anon_sym_mload] = ACTIONS(66),
    [anon_sym_mstore] = ACTIONS(66),
    [anon_sym_mstore8] = ACTIONS(64),
    [anon_sym_sload] = ACTIONS(66),
    [anon_sym_sstore] = ACTIONS(66),
    [anon_sym_jump] = ACTIONS(66),
    [anon_sym_jumpi] = ACTIONS(66),
    [anon_sym_getpc] = ACTIONS(66),
    [anon_sym_msize] = ACTIONS(66),
    [anon_sym_gas] = ACTIONS(66),
    [anon_sym_jumpdest] = ACTIONS(66),
    [anon_sym_push1] = ACTIONS(66),
    [anon_sym_push2] = ACTIONS(66),
    [anon_sym_push3] = ACTIONS(66),
    [anon_sym_push4] = ACTIONS(64),
    [anon_sym_push5] = ACTIONS(64),
    [anon_sym_push6] = ACTIONS(64),
    [anon_sym_push7] = ACTIONS(64),
    [anon_sym_push8] = ACTIONS(64),
    [anon_sym_push9] = ACTIONS(64),
    [anon_sym_push10] = ACTIONS(64),
    [anon_sym_push11] = ACTIONS(64),
    [anon_sym_push12] = ACTIONS(64),
    [anon_sym_push13] = ACTIONS(64),
    [anon_sym_push14] = ACTIONS(64),
    [anon_sym_push15] = ACTIONS(64),
    [anon_sym_push16] = ACTIONS(64),
    [anon_sym_push17] = ACTIONS(64),
    [anon_sym_push18] = ACTIONS(64),
    [anon_sym_push19] = ACTIONS(64),
    [anon_sym_push20] = ACTIONS(64),
    [anon_sym_push21] = ACTIONS(64),
    [anon_sym_push22] = ACTIONS(64),
    [anon_sym_push23] = ACTIONS(64),
    [anon_sym_push24] = ACTIONS(64),
    [anon_sym_push25] = ACTIONS(64),
    [anon_sym_push26] = ACTIONS(64),
    [anon_sym_push27] = ACTIONS(64),
    [anon_sym_push28] = ACTIONS(64),
    [anon_sym_push29] = ACTIONS(64),
    [anon_sym_push30] = ACTIONS(64),
    [anon_sym_push31] = ACTIONS(64),
    [anon_sym_push32] = ACTIONS(64),
    [anon_sym_dup1] = ACTIONS(66),
    [anon_sym_dup2] = ACTIONS(64),
    [anon_sym_dup3] = ACTIONS(64),
    [anon_sym_dup4] = ACTIONS(64),
    [anon_sym_dup5] = ACTIONS(64),
    [anon_sym_dup6] = ACTIONS(64),
    [anon_sym_dup7] = ACTIONS(64),
    [anon_sym_dup8] = ACTIONS(64),
    [anon_sym_dup9] = ACTIONS(64),
    [anon_sym_dup10] = ACTIONS(64),
    [anon_sym_dup11] = ACTIONS(64),
    [anon_sym_dup12] = ACTIONS(64),
    [anon_sym_dup13] = ACTIONS(64),
    [anon_sym_dup14] = ACTIONS(64),
    [anon_sym_dup15] = ACTIONS(64),
    [anon_sym_dup16] = ACTIONS(64),
    [anon_sym_swap1] = ACTIONS(66),
    [anon_sym_swap2] = ACTIONS(64),
    [anon_sym_swap3] = ACTIONS(64),
    [anon_sym_swap4] = ACTIONS(64),
    [anon_sym_swap5] = ACTIONS(64),
    [anon_sym_swap6] = ACTIONS(64),
    [anon_sym_swap7] = ACTIONS(64),
    [anon_sym_swap8] = ACTIONS(64),
    [anon_sym_swap9] = ACTIONS(64),
    [anon_sym_swap10] = ACTIONS(64),
    [anon_sym_swap11] = ACTIONS(64),
    [anon_sym_swap12] = ACTIONS(64),
    [anon_sym_swap13] = ACTIONS(64),
    [anon_sym_swap14] = ACTIONS(64),
    [anon_sym_swap15] = ACTIONS(64),
    [anon_sym_swap16] = ACTIONS(64),
    [anon_sym_shl] = ACTIONS(66),
    [anon_sym_shr] = ACTIONS(66),
    [anon_sym_sar] = ACTIONS(66),
    [anon_sym_log0] = ACTIONS(64),
    [anon_sym_log1] = ACTIONS(64),
    [anon_sym_log2] = ACTIONS(64),
    [anon_sym_log3] = ACTIONS(64),
    [anon_sym_log4] = ACTIONS(64),
    [anon_sym_create] = ACTIONS(66),
    [anon_sym_call] = ACTIONS(66),
    [anon_sym_callcode] = ACTIONS(66),
    [anon_sym_return] = ACTIONS(66),
    [anon_sym_delegatecall] = ACTIONS(66),
    [anon_sym_create2] = ACTIONS(64),
    [anon_sym_staticcall] = ACTIONS(66),
    [anon_sym_revert] = ACTIONS(66),
    [anon_sym_invalid] = ACTIONS(66),
    [anon_sym_selfdestruct] = ACTIONS(66),
    [aux_sym__label_token1] = ACTIONS(66),
    [sym_hex] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_stop] = ACTIONS(70),
    [anon_sym_add] = ACTIONS(70),
    [anon_sym_mul] = ACTIONS(70),
    [anon_sym_sub] = ACTIONS(70),
    [anon_sym_div] = ACTIONS(70),
    [anon_sym_sdiv] = ACTIONS(70),
    [anon_sym_mod] = ACTIONS(70),
    [anon_sym_smod] = ACTIONS(70),
    [anon_sym_addmod] = ACTIONS(70),
    [anon_sym_mulmod] = ACTIONS(70),
    [anon_sym_exp] = ACTIONS(70),
    [anon_sym_signextend] = ACTIONS(70),
    [anon_sym_lt] = ACTIONS(70),
    [anon_sym_gt] = ACTIONS(70),
    [anon_sym_slt] = ACTIONS(70),
    [anon_sym_sgt] = ACTIONS(70),
    [anon_sym_eq] = ACTIONS(70),
    [anon_sym_iszero] = ACTIONS(70),
    [anon_sym_and] = ACTIONS(70),
    [anon_sym_or] = ACTIONS(70),
    [anon_sym_xor] = ACTIONS(70),
    [anon_sym_not] = ACTIONS(70),
    [anon_sym_byte] = ACTIONS(70),
    [anon_sym_sha3] = ACTIONS(68),
    [anon_sym_keccak] = ACTIONS(70),
    [anon_sym_address] = ACTIONS(70),
    [anon_sym_balance] = ACTIONS(70),
    [anon_sym_origin] = ACTIONS(70),
    [anon_sym_caller] = ACTIONS(70),
    [anon_sym_callvalue] = ACTIONS(70),
    [anon_sym_calldataload] = ACTIONS(70),
    [anon_sym_calldatasize] = ACTIONS(70),
    [anon_sym_calldatacopy] = ACTIONS(70),
    [anon_sym_codesize] = ACTIONS(70),
    [anon_sym_codecopy] = ACTIONS(70),
    [anon_sym_gasprice] = ACTIONS(70),
    [anon_sym_extcodesize] = ACTIONS(70),
    [anon_sym_extcodecopy] = ACTIONS(70),
    [anon_sym_returndatasize] = ACTIONS(70),
    [anon_sym_returndatacopy] = ACTIONS(70),
    [anon_sym_blockhash] = ACTIONS(70),
    [anon_sym_coinbase] = ACTIONS(70),
    [anon_sym_timestamp] = ACTIONS(70),
    [anon_sym_number] = ACTIONS(70),
    [anon_sym_difficulty] = ACTIONS(70),
    [anon_sym_gaslimit] = ACTIONS(70),
    [anon_sym_chainid] = ACTIONS(70),
    [anon_sym_selfbalance] = ACTIONS(70),
    [anon_sym_basefee] = ACTIONS(70),
    [anon_sym_pop] = ACTIONS(70),
    [anon_sym_mload] = ACTIONS(70),
    [anon_sym_mstore] = ACTIONS(70),
    [anon_sym_mstore8] = ACTIONS(68),
    [anon_sym_sload] = ACTIONS(70),
    [anon_sym_sstore] = ACTIONS(70),
    [anon_sym_jump] = ACTIONS(70),
    [anon_sym_jumpi] = ACTIONS(70),
    [anon_sym_getpc] = ACTIONS(70),
    [anon_sym_msize] = ACTIONS(70),
    [anon_sym_gas] = ACTIONS(70),
    [anon_sym_jumpdest] = ACTIONS(70),
    [anon_sym_push1] = ACTIONS(70),
    [anon_sym_push2] = ACTIONS(70),
    [anon_sym_push3] = ACTIONS(70),
    [anon_sym_push4] = ACTIONS(68),
    [anon_sym_push5] = ACTIONS(68),
    [anon_sym_push6] = ACTIONS(68),
    [anon_sym_push7] = ACTIONS(68),
    [anon_sym_push8] = ACTIONS(68),
    [anon_sym_push9] = ACTIONS(68),
    [anon_sym_push10] = ACTIONS(68),
    [anon_sym_push11] = ACTIONS(68),
    [anon_sym_push12] = ACTIONS(68),
    [anon_sym_push13] = ACTIONS(68),
    [anon_sym_push14] = ACTIONS(68),
    [anon_sym_push15] = ACTIONS(68),
    [anon_sym_push16] = ACTIONS(68),
    [anon_sym_push17] = ACTIONS(68),
    [anon_sym_push18] = ACTIONS(68),
    [anon_sym_push19] = ACTIONS(68),
    [anon_sym_push20] = ACTIONS(68),
    [anon_sym_push21] = ACTIONS(68),
    [anon_sym_push22] = ACTIONS(68),
    [anon_sym_push23] = ACTIONS(68),
    [anon_sym_push24] = ACTIONS(68),
    [anon_sym_push25] = ACTIONS(68),
    [anon_sym_push26] = ACTIONS(68),
    [anon_sym_push27] = ACTIONS(68),
    [anon_sym_push28] = ACTIONS(68),
    [anon_sym_push29] = ACTIONS(68),
    [anon_sym_push30] = ACTIONS(68),
    [anon_sym_push31] = ACTIONS(68),
    [anon_sym_push32] = ACTIONS(68),
    [anon_sym_dup1] = ACTIONS(70),
    [anon_sym_dup2] = ACTIONS(68),
    [anon_sym_dup3] = ACTIONS(68),
    [anon_sym_dup4] = ACTIONS(68),
    [anon_sym_dup5] = ACTIONS(68),
    [anon_sym_dup6] = ACTIONS(68),
    [anon_sym_dup7] = ACTIONS(68),
    [anon_sym_dup8] = ACTIONS(68),
    [anon_sym_dup9] = ACTIONS(68),
    [anon_sym_dup10] = ACTIONS(68),
    [anon_sym_dup11] = ACTIONS(68),
    [anon_sym_dup12] = ACTIONS(68),
    [anon_sym_dup13] = ACTIONS(68),
    [anon_sym_dup14] = ACTIONS(68),
    [anon_sym_dup15] = ACTIONS(68),
    [anon_sym_dup16] = ACTIONS(68),
    [anon_sym_swap1] = ACTIONS(70),
    [anon_sym_swap2] = ACTIONS(68),
    [anon_sym_swap3] = ACTIONS(68),
    [anon_sym_swap4] = ACTIONS(68),
    [anon_sym_swap5] = ACTIONS(68),
    [anon_sym_swap6] = ACTIONS(68),
    [anon_sym_swap7] = ACTIONS(68),
    [anon_sym_swap8] = ACTIONS(68),
    [anon_sym_swap9] = ACTIONS(68),
    [anon_sym_swap10] = ACTIONS(68),
    [anon_sym_swap11] = ACTIONS(68),
    [anon_sym_swap12] = ACTIONS(68),
    [anon_sym_swap13] = ACTIONS(68),
    [anon_sym_swap14] = ACTIONS(68),
    [anon_sym_swap15] = ACTIONS(68),
    [anon_sym_swap16] = ACTIONS(68),
    [anon_sym_shl] = ACTIONS(70),
    [anon_sym_shr] = ACTIONS(70),
    [anon_sym_sar] = ACTIONS(70),
    [anon_sym_log0] = ACTIONS(68),
    [anon_sym_log1] = ACTIONS(68),
    [anon_sym_log2] = ACTIONS(68),
    [anon_sym_log3] = ACTIONS(68),
    [anon_sym_log4] = ACTIONS(68),
    [anon_sym_create] = ACTIONS(70),
    [anon_sym_call] = ACTIONS(70),
    [anon_sym_callcode] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_delegatecall] = ACTIONS(70),
    [anon_sym_create2] = ACTIONS(68),
    [anon_sym_staticcall] = ACTIONS(70),
    [anon_sym_revert] = ACTIONS(70),
    [anon_sym_invalid] = ACTIONS(70),
    [anon_sym_selfdestruct] = ACTIONS(70),
    [aux_sym__label_token1] = ACTIONS(70),
    [sym_hex] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_stop] = ACTIONS(74),
    [anon_sym_add] = ACTIONS(74),
    [anon_sym_mul] = ACTIONS(74),
    [anon_sym_sub] = ACTIONS(74),
    [anon_sym_div] = ACTIONS(74),
    [anon_sym_sdiv] = ACTIONS(74),
    [anon_sym_mod] = ACTIONS(74),
    [anon_sym_smod] = ACTIONS(74),
    [anon_sym_addmod] = ACTIONS(74),
    [anon_sym_mulmod] = ACTIONS(74),
    [anon_sym_exp] = ACTIONS(74),
    [anon_sym_signextend] = ACTIONS(74),
    [anon_sym_lt] = ACTIONS(74),
    [anon_sym_gt] = ACTIONS(74),
    [anon_sym_slt] = ACTIONS(74),
    [anon_sym_sgt] = ACTIONS(74),
    [anon_sym_eq] = ACTIONS(74),
    [anon_sym_iszero] = ACTIONS(74),
    [anon_sym_and] = ACTIONS(74),
    [anon_sym_or] = ACTIONS(74),
    [anon_sym_xor] = ACTIONS(74),
    [anon_sym_not] = ACTIONS(74),
    [anon_sym_byte] = ACTIONS(74),
    [anon_sym_sha3] = ACTIONS(72),
    [anon_sym_keccak] = ACTIONS(74),
    [anon_sym_address] = ACTIONS(74),
    [anon_sym_balance] = ACTIONS(74),
    [anon_sym_origin] = ACTIONS(74),
    [anon_sym_caller] = ACTIONS(74),
    [anon_sym_callvalue] = ACTIONS(74),
    [anon_sym_calldataload] = ACTIONS(74),
    [anon_sym_calldatasize] = ACTIONS(74),
    [anon_sym_calldatacopy] = ACTIONS(74),
    [anon_sym_codesize] = ACTIONS(74),
    [anon_sym_codecopy] = ACTIONS(74),
    [anon_sym_gasprice] = ACTIONS(74),
    [anon_sym_extcodesize] = ACTIONS(74),
    [anon_sym_extcodecopy] = ACTIONS(74),
    [anon_sym_returndatasize] = ACTIONS(74),
    [anon_sym_returndatacopy] = ACTIONS(74),
    [anon_sym_blockhash] = ACTIONS(74),
    [anon_sym_coinbase] = ACTIONS(74),
    [anon_sym_timestamp] = ACTIONS(74),
    [anon_sym_number] = ACTIONS(74),
    [anon_sym_difficulty] = ACTIONS(74),
    [anon_sym_gaslimit] = ACTIONS(74),
    [anon_sym_chainid] = ACTIONS(74),
    [anon_sym_selfbalance] = ACTIONS(74),
    [anon_sym_basefee] = ACTIONS(74),
    [anon_sym_pop] = ACTIONS(74),
    [anon_sym_mload] = ACTIONS(74),
    [anon_sym_mstore] = ACTIONS(74),
    [anon_sym_mstore8] = ACTIONS(72),
    [anon_sym_sload] = ACTIONS(74),
    [anon_sym_sstore] = ACTIONS(74),
    [anon_sym_jump] = ACTIONS(74),
    [anon_sym_jumpi] = ACTIONS(74),
    [anon_sym_getpc] = ACTIONS(74),
    [anon_sym_msize] = ACTIONS(74),
    [anon_sym_gas] = ACTIONS(74),
    [anon_sym_jumpdest] = ACTIONS(74),
    [anon_sym_push1] = ACTIONS(74),
    [anon_sym_push2] = ACTIONS(74),
    [anon_sym_push3] = ACTIONS(74),
    [anon_sym_push4] = ACTIONS(72),
    [anon_sym_push5] = ACTIONS(72),
    [anon_sym_push6] = ACTIONS(72),
    [anon_sym_push7] = ACTIONS(72),
    [anon_sym_push8] = ACTIONS(72),
    [anon_sym_push9] = ACTIONS(72),
    [anon_sym_push10] = ACTIONS(72),
    [anon_sym_push11] = ACTIONS(72),
    [anon_sym_push12] = ACTIONS(72),
    [anon_sym_push13] = ACTIONS(72),
    [anon_sym_push14] = ACTIONS(72),
    [anon_sym_push15] = ACTIONS(72),
    [anon_sym_push16] = ACTIONS(72),
    [anon_sym_push17] = ACTIONS(72),
    [anon_sym_push18] = ACTIONS(72),
    [anon_sym_push19] = ACTIONS(72),
    [anon_sym_push20] = ACTIONS(72),
    [anon_sym_push21] = ACTIONS(72),
    [anon_sym_push22] = ACTIONS(72),
    [anon_sym_push23] = ACTIONS(72),
    [anon_sym_push24] = ACTIONS(72),
    [anon_sym_push25] = ACTIONS(72),
    [anon_sym_push26] = ACTIONS(72),
    [anon_sym_push27] = ACTIONS(72),
    [anon_sym_push28] = ACTIONS(72),
    [anon_sym_push29] = ACTIONS(72),
    [anon_sym_push30] = ACTIONS(72),
    [anon_sym_push31] = ACTIONS(72),
    [anon_sym_push32] = ACTIONS(72),
    [anon_sym_dup1] = ACTIONS(74),
    [anon_sym_dup2] = ACTIONS(72),
    [anon_sym_dup3] = ACTIONS(72),
    [anon_sym_dup4] = ACTIONS(72),
    [anon_sym_dup5] = ACTIONS(72),
    [anon_sym_dup6] = ACTIONS(72),
    [anon_sym_dup7] = ACTIONS(72),
    [anon_sym_dup8] = ACTIONS(72),
    [anon_sym_dup9] = ACTIONS(72),
    [anon_sym_dup10] = ACTIONS(72),
    [anon_sym_dup11] = ACTIONS(72),
    [anon_sym_dup12] = ACTIONS(72),
    [anon_sym_dup13] = ACTIONS(72),
    [anon_sym_dup14] = ACTIONS(72),
    [anon_sym_dup15] = ACTIONS(72),
    [anon_sym_dup16] = ACTIONS(72),
    [anon_sym_swap1] = ACTIONS(74),
    [anon_sym_swap2] = ACTIONS(72),
    [anon_sym_swap3] = ACTIONS(72),
    [anon_sym_swap4] = ACTIONS(72),
    [anon_sym_swap5] = ACTIONS(72),
    [anon_sym_swap6] = ACTIONS(72),
    [anon_sym_swap7] = ACTIONS(72),
    [anon_sym_swap8] = ACTIONS(72),
    [anon_sym_swap9] = ACTIONS(72),
    [anon_sym_swap10] = ACTIONS(72),
    [anon_sym_swap11] = ACTIONS(72),
    [anon_sym_swap12] = ACTIONS(72),
    [anon_sym_swap13] = ACTIONS(72),
    [anon_sym_swap14] = ACTIONS(72),
    [anon_sym_swap15] = ACTIONS(72),
    [anon_sym_swap16] = ACTIONS(72),
    [anon_sym_shl] = ACTIONS(74),
    [anon_sym_shr] = ACTIONS(74),
    [anon_sym_sar] = ACTIONS(74),
    [anon_sym_log0] = ACTIONS(72),
    [anon_sym_log1] = ACTIONS(72),
    [anon_sym_log2] = ACTIONS(72),
    [anon_sym_log3] = ACTIONS(72),
    [anon_sym_log4] = ACTIONS(72),
    [anon_sym_create] = ACTIONS(74),
    [anon_sym_call] = ACTIONS(74),
    [anon_sym_callcode] = ACTIONS(74),
    [anon_sym_return] = ACTIONS(74),
    [anon_sym_delegatecall] = ACTIONS(74),
    [anon_sym_create2] = ACTIONS(72),
    [anon_sym_staticcall] = ACTIONS(74),
    [anon_sym_revert] = ACTIONS(74),
    [anon_sym_invalid] = ACTIONS(74),
    [anon_sym_selfdestruct] = ACTIONS(74),
    [aux_sym__label_token1] = ACTIONS(74),
    [sym_hex] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_POUNDdefinemacro,
    ACTIONS(81), 1,
      anon_sym_POUNDdefinefn,
    ACTIONS(84), 1,
      anon_sym_POUNDdefinefunction,
    ACTIONS(87), 1,
      anon_sym_POUNDdefineconstant,
    STATE(11), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(23), 4,
      sym_macro_definition,
      sym_function_definition,
      sym_interface_definition,
      sym_constant_definition,
  [29] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDdefinemacro,
    ACTIONS(9), 1,
      anon_sym_POUNDdefinefn,
    ACTIONS(11), 1,
      anon_sym_POUNDdefinefunction,
    ACTIONS(13), 1,
      anon_sym_POUNDdefineconstant,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(23), 4,
      sym_macro_definition,
      sym_function_definition,
      sym_interface_definition,
      sym_constant_definition,
  [58] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [80] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 1,
      sym_visibility,
    ACTIONS(96), 4,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [93] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 5,
      anon_sym_EQ,
      anon_sym_view,
      anon_sym_pure,
      anon_sym_payable,
      anon_sym_nonpayable,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym__label_token1,
    ACTIONS(110), 1,
      sym_hex,
    STATE(13), 1,
      sym_const,
    STATE(25), 1,
      sym_constant,
    STATE(38), 1,
      sym_identifier,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_POUNDdefinemacro,
      anon_sym_POUNDdefinefn,
      anon_sym_POUNDdefinefunction,
      anon_sym_POUNDdefineconstant,
  [244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym__label_token1,
    STATE(20), 1,
      sym__def,
    STATE(37), 1,
      sym_identifier,
    STATE(47), 1,
      sym__declaration,
  [260] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym__label_token1,
    STATE(22), 1,
      sym__def,
    STATE(37), 1,
      sym_identifier,
    STATE(47), 1,
      sym__declaration,
  [276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym__label_token1,
    STATE(15), 1,
      sym__declaration,
    STATE(16), 1,
      sym__def_params,
    STATE(37), 1,
      sym_identifier,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      anon_sym_EQ,
      anon_sym_RBRACK,
      sym_parameters,
  [301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym__label_token1,
    STATE(17), 1,
      sym__def_const,
    STATE(46), 1,
      sym_identifier,
  [314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_returns,
    STATE(24), 1,
      sym_return_parameters,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym__label_token1,
    STATE(43), 1,
      sym_identifier,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_parameters,
  [351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN_RPAREN,
  [358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LPAREN_RPAREN,
  [372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_parameters,
  [379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_returns_parameters,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_returns,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_takes_parameters,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_EQ,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_EQ,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LPAREN_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 29,
  [SMALL_STATE(13)] = 58,
  [SMALL_STATE(14)] = 69,
  [SMALL_STATE(15)] = 80,
  [SMALL_STATE(16)] = 93,
  [SMALL_STATE(17)] = 104,
  [SMALL_STATE(18)] = 115,
  [SMALL_STATE(19)] = 126,
  [SMALL_STATE(20)] = 137,
  [SMALL_STATE(21)] = 148,
  [SMALL_STATE(22)] = 167,
  [SMALL_STATE(23)] = 178,
  [SMALL_STATE(24)] = 189,
  [SMALL_STATE(25)] = 200,
  [SMALL_STATE(26)] = 211,
  [SMALL_STATE(27)] = 222,
  [SMALL_STATE(28)] = 233,
  [SMALL_STATE(29)] = 244,
  [SMALL_STATE(30)] = 260,
  [SMALL_STATE(31)] = 276,
  [SMALL_STATE(32)] = 292,
  [SMALL_STATE(33)] = 301,
  [SMALL_STATE(34)] = 314,
  [SMALL_STATE(35)] = 324,
  [SMALL_STATE(36)] = 334,
  [SMALL_STATE(37)] = 344,
  [SMALL_STATE(38)] = 351,
  [SMALL_STATE(39)] = 358,
  [SMALL_STATE(40)] = 365,
  [SMALL_STATE(41)] = 372,
  [SMALL_STATE(42)] = 379,
  [SMALL_STATE(43)] = 386,
  [SMALL_STATE(44)] = 393,
  [SMALL_STATE(45)] = 400,
  [SMALL_STATE(46)] = 407,
  [SMALL_STATE(47)] = 414,
  [SMALL_STATE(48)] = 421,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_access, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_access, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__destination, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__destination, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_call, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_call, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_params, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def_const, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_parameters, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__def, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
