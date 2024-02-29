#include <iostream>
#include "sources/gameboard.cpp"

int main()
{
    const int row = 2;
    std::cout << "TicTacToe game" << std::endl;
    GameBoard gm;
    gm.initBoard();
    gm.tab[0][0] = 1;
    gm.tab[1][0] = 1;
    gm.tab[2][0] = 0;
    gm.drawBoard();
    gm.isEnd();
}