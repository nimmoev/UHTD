#include "UHTD.h"

bool g_quit = false;
std::vector<Node*> g_netList;

// Entrance point for Unified Hardware Trojan Detection Toolset
int main() {
    std::string input;
    int promptCtr, choice, error;
    do {
        error = ERROR_NONE;
        // Output basic prompt
        std::cout << "Enter number to choose a tool from below:" << std::endl;
        for (promptCtr = 0; promptCtr < toolPrompts.size(); promptCtr++) { 
            std::cout << promptCtr + 1 << ": " + toolPrompts.at(promptCtr) << std::endl;
        }

        // Receive input for prompt, verify it is an integer within our range
        input = GetInput();
        if (ParseStrToRangedNum(input, toolPrompts.size(), &choice) != ERROR_NONE) { 
            std::cout << "Choice is not a valid integer." << std::endl;
            continue;
        }

        // Call tool based upon the choice
        switch(choice) { 
            case IMPORT:
                std::cout << "Import Not Implemented." << std::endl;
                break;
            case ATPG:
                error = ATPGEntry(g_netList);
                ATPGResult(error);
                break;
            case COTD:
                std::cout << "ComputeControllabilityObservability not implemented." << std::endl;
                break;
            case QUIT: 
                g_quit = true;
                break;
            default:
                std::cout << "Choice is a valid integer but not a valid tool." << std::endl;
                break;
        }
    } while (!g_quit);
    return 0;
}
