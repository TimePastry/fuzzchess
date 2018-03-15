#include "board.h"
#include <sstream>
#include "asciiPrinter.h"

board::board()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            tiles[i][j] = new tile(i, j);
        }
    }
}

string board::toString() const
{
    asciiPrinter printer;
    return printer.printBoard(this);
}
