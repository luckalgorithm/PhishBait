#include <iostream>

#include "phishbait.hpp"

using namespace PhishBait;

const std::string PhishBait::phishBaitVersion = "v1.0.0";

int main()
{
    clearTerminal();
    while(true)
    {
        int choice;
        clearTerminal();
        homeDisplay(choice);
        switch(choice)
        {
            case 0:
                clearTerminal();
                return 0;
            case 1:
                openFile("../../TackleBox/Demo/demo.html");
                break;
        }
    }
    return 0;
}