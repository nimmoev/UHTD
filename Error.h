#ifndef ERRORCODES_H
#define ERRORCODES_H

#include "BasicGateLib/BasicGateLib.h"

// Error codes from BasicGateLib
extern const int ERROR_NONE;                // 0x00
extern const int ERROR_GENERIC;             // 0x01
extern const int ERROR_NOT_IMPLEMENTED;     // 0x02
extern const int ERROR_WIRE_IS_NULL;        // 0x03
extern const int ERROR_GATE_IS_NULL;        // 0x04
extern const int ERROR_CONNECT_INPUT;       // 0x05
extern const int ERROR_CONNECT_OUTPUT;      // 0x06

const int ERROR_NONINT_PRESENT = 0x30;
const int ERROR_EMPTY_STR = 0x31;
const int ERROR_INT_OUT_OF_RANGE = 0x32;

#endif