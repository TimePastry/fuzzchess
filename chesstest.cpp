#include <iostream>
#include "board.h"

using namespace std;

int main()
{
    board b;
    //cout << "\033[33;1;46;1mYellow!\033[0m" << endl;
    cout << b.toString() << endl;

    //reset text color before doing anything else
    cout << "\033[0m";
    return 0;
}

