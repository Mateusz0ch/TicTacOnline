#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP
#define SIZE 3
#include <iostream>

class GameBoard
{
public:
    static int tab[SIZE][SIZE];
    static void drawBoard();
};

#endif