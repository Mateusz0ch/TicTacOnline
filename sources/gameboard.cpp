#include "../include/gameboard.hpp"

void GameBoard::initBoard()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            tab[i][j] = 0;
        }
    }
}
void GameBoard::drawBoard()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            switch (tab[i][j])
            {
            case 0:
                std::cout << "-";
                break;
            case 1:
                std::cout << "X";
                break;
            case -1:
                std::cout << "O";
                break;
            }
            std::cout << " ";
        };
        std::cout << std::endl;
    }
}