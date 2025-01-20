#ifndef INPUTTESTS_H
#define INPUTTESTS_H

#include <string>
#include <vector>

#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "Error.h"
#include "Input.h"

// To add a new test, follow these instructions:
//  1. Declare a parameter-less function of type void in header file
//  2. Define a parameter-less function of type void in source file
//  3. Append the test function to INPUT_UTL in source file as a UnitTest

extern UnitTestList INPUT_UTL;

void IsCharInList_ShouldFail();
void IsCharInList_ShouldSucceed();
void IsStrInList_ShouldFail();
void IsStrInList_ShouldSucceed();

void LexicalAnalysis_ShouldFailStrEmpty();
void LexicalAnalysisINV_ShouldSucceed();
void LexicalAnalysisWire_ShouldReturnWire();
void LexicalAnalysisWireAndGate_ShouldReturnWireAndGate();
void LexicalAnalysisINV_ShouldReturnINVToken();
void LexicalAnalysisAND_ShouldReturn2InputANDToken();
void LexicalAnalysisOR_ShouldReturn2InputORToken();
void LexicalAnalysisNAND_ShouldReturn2InputNANDToken();
void LexicalAnalysisNOR_ShouldReturn2InputNORToken();
void LexicalAnalysisXOR_ShouldReturn2InputXORToken();
void LexicalAnalysisXNOR_ShouldReturn2InputXNORToken();
void LexicalAnalysisAND_ShouldReturn3InputANDToken();
void LexicalAnalysisOR_ShouldReturn3InputORToken();
void LexicalAnalysisNAND_ShouldReturn3InputNANDToken();
void LexicalAnalysisNOR_ShouldReturn3InputNORToken();
void LexicalAnalysisXOR_ShouldReturn3InputXORToken();
void LexicalAnalysisXNOR_ShouldReturn3InputXNORToken();

#endif
