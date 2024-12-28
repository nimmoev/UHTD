#include "ATPG.h"

void ATPGEntry(std::vector<Node*> netList) {
    std::vector<Node*> topSortNetList;
    
    //Instantiate Netlist to ATPG classes

    // Justify 

    // Propogate

    return;
}

int TopSort(std::vector<Node*> inputNetList, std::vector<Node*> &outputNetList) { 
    std::stack<Node*> netListStack;
    std::vector<int> idList;
    std::vector<bool> visitedList;
    int idPos = -1;

    for (int i = 0; i < inputNetList.size(); i++) {
        idList.push_back(inputNetList.at(i)->GetID());
        visitedList.push_back(false);
    }

    for (int i = 0; i < inputNetList.size(); i++) { 
        // Find current node's ID index in idList and visitedList
        idPos = std::distance(idList.begin(), std::find(idList.begin(), idList.end(), inputNetList.at(i)->GetID()));
        if (visitedList.at(idPos) == false) { 
            TopSortSub(idPos, inputNetList.at(i), inputNetList, idList, visitedList, netListStack);
        }
    }

    while(!netListStack.empty()) {
        outputNetList.push_back(netListStack.top());
        netListStack.pop();
    }

    return ERROR_NONE;
}

void TopSortSub(int currPos, Node* node, std::vector<Node*> inputNetList, std::vector<int> idList, std::vector<bool> &visited, std::stack<Node*> &netListStack) {
    Gate* gate = nullptr;
    Wire* wire = nullptr;
    int idPos = -1;
    visited.at(currPos)= true;

    gate = dynamic_cast<Gate*>(node);
    wire = dynamic_cast<Wire*>(node);
    if (gate != nullptr) { 
        idPos = std::distance(idList.begin(), std::find(idList.begin(), idList.end(), gate->GetOutput()->GetID()));
        if (!visited.at(idPos)) {
            TopSortSub(idPos, (Node*)gate->GetOutput(), inputNetList, idList, visited, netListStack);
        }
    }
    else if (wire != nullptr) { 
        for (int i = 0; i < wire->GetOutputs().size(); i++) {
            idPos = std::distance(idList.begin(), std::find(idList.begin(), idList.end(), wire->GetOutputs().at(i)->GetID()));
            if (!visited.at(idPos)) {
                TopSortSub(idPos, (Node*)wire->GetOutputs().at(i), inputNetList, idList, visited, netListStack);
            }
        }
    }
    else {
        std::cout << "ERROR: GATE AND WIRE ARE NULLPTR" << std::endl;
    }

    netListStack.push(node);
}