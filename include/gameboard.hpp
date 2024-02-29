#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP
#define SIZE 3
#include <iostream>

class GameBoard
{
public:
    int tab[SIZE][SIZE];
    void initBoard();
    void drawBoard();
    int isEnd();
};

#endif