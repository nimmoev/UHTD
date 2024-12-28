#ifndef ATPG_H
#define ATPG_H

#include <algorithm>
#include <stack>

#include "BasicGateLib/BasicGateLib.h"

void ATPGEntry(std::vector<Node*> netList);
int TopSort(std::vector<Node*> inputNetList, std::vector<Node*> &outputNetList);
void TopSortSub(int ctr, Node* node, std::vector<Node*> inputNetList, std::vector<int> idList, std::vector<bool> &visited, std::stack<Node*> &netListStack);

#endif