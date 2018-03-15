#include "asciiPrinter.h"
#include <iostream>
#include <sstream>

using std::cout;
using std::endl;
using std::stringstream;
using std::string;

string asciiPrinter::printBoard(const board* b)
{
    stringstream ss;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            // black is even
            if((i + j) % 2)
            {
                ss << "\033[0m ";
            } 
            else
            {
                ss << "\033[47m ";
            }
        }
        ss << endl;
    }
    return ss.str();
}
