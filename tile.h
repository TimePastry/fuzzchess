#pragma once
#include "piece.h"

class tile
{
    private:
        int x, y;
        piece* occupying;
    public:
        tile(int x_, int y_) : x(x_), y(y_), occupying(nullptr) {};
};
