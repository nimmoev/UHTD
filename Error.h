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
extern const int ERROR_NETLIST_EMPTY;           // 0x07
extern const int ERROR_GATELIST_EMPTY;          // 0x08
extern const int ERROR_WIRELIST_EMPTY;          // 0x09
extern const int ERROR_NODE_INVALID_TYPE;       // 0x0A
extern const int ERROR_GATETYPE_INVALID_TYPE;   // 0x0B

const int ERROR_NONINT_PRESENT = 0x30;
const int ERROR_EMPTY_STR = 0x31;
const int ERROR_INT_OUT_OF_RANGE = 0x32;
const int ERROR_STATE_ALREADY_SET = 0x33;
const int ERROR_STATE_NOT_SET = 0x34;
const int ERROR_STATE_CONTROLLED = 0x35;

#endif
