#include <iostream>
#include "sources/gameboard.cpp"

int main()
{
    const int row = 2;
    std::cout << "TicTacToe game" << std::endl;
    GameBoard gm;
    gm.initBoard();
    gm.tab[row][0] = 1;
    gm.tab[row][1] = 1;
    gm.tab[row][2] = 1;
    gm.drawBoard();
    gm.isEnd();
}