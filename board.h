#pragma once
#include <iostream>
#include <string>
#include "tile.h"

using namespace std;

class board
{
    private:
        tile* tiles[8][8];
    public:
        board();
        string toString() const;
};
