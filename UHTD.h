#ifndef UHTD_H
#define UHTD_H

#include <iostream>
#include <string>

#include "ATPG.h"
#include "BasicGateLib/BasicGateLib.h"
#include "Frontend.h"

extern bool g_UHTD_Quit;
extern std::vector<Node*> g_UHTD_NetList;

int main();

#endif 
