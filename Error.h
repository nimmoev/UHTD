#ifndef ERRORCODES_H
#define ERRORCODES_H

#include "BasicGateLib/BasicGateLib.h"

// Error codes from BasicGateLib

extern const int ERROR_NONE;                    // 0x00
extern const int ERROR_GENERIC;                 // 0x01
extern const int ERROR_NOT_IMPLEMENTED;         // 0x02
extern const int ERROR_WIRE_IS_NULL;            // 0x03
extern const int ERROR_GATE_IS_NULL;            // 0x04
extern const int ERROR_CONNECT_INPUT;           // 0x05
extern const int ERROR_CONNECT_OUTPUT;          // 0x06

// Error codes from Frontend

const int ERROR_NONINT_PRESENT = 0x20;
const int ERROR_EMPTY_STR = 0x21;
const int ERROR_INT_OUT_OF_RANGE = 0x22;

// Error codes from Input

const int ERROR_UNKNOWN_TOKENTYPE = 0x40;

// Error codes from ATPG

const int ERROR_ATPG_CASE_WIRE_IS_NULL = 0x60;
const int ERROR_ATPG_NETLIST_EMPTY = 0x61;
const int ERROR_ATPG_TRANSFERNETLIST_GATETYPE_UNSUPPORTED = 0x62;
const int ERROR_ATPG_NODE_INVALID_TYPE = 0x63;
const int ERROR_ATPG_JUSTIFY_WIRE_IS_NULL = 0x64;
const int ERROR_ATPG_STATE_ALREADY_SET = 0x65;
const int ERROR_ATPG_STATE_CONTROLLED = 0x66;
const int ERROR_ATPG_JUSTIFY_GATETYPE_UNSUPPORTED = 0x67;
const int ERROR_ATPG_PROPOGATE_WIRE_IS_NULL = 0x68;
const int ERROR_ATPG_STATE_NOT_SET = 0x69;
const int ERROR_ATPG_PROPOGATE_GATETYPE_UNSUPPORTED = 0x6A;

#endif
