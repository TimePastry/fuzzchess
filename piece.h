#pragma once
#include "utils.h"

class piece
{
    private:
       int x,y;
       color_t color;
    public:
       piece(int x_, int y_, color_t color_) : x(x_), y(y_), color(color_) {};
       virtual bool isValidMove() { return true; }
};
