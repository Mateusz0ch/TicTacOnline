#include "../include/gameboard.hpp"

int GameBoard::tab[3][3] = {{1, 0, 1}, {0, -1, 0}, {0, -1, 0}};
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