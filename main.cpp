#include <iostream>
#include "sources/gameboard.cpp"

int main()
{
    std::cout << "TicTacToe game" << std::endl;
    GameBoard gm;
    gm.initBoard();
    gm.drawBoard();
}