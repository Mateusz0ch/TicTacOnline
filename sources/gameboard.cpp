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
int GameBoard::isEnd()
{
    for (int i = 0, val = 0; i < SIZE; i++)
    {
        val = 0;
        for (int j = 0; j < SIZE; j++)
        {
            val += tab[i][j];
        }
        std::cout << val << std::endl;
        switch (val)
        {
        case 3:
            std::cout << "User1 won" << std::endl;
            return 1;
            break;
        case -3:
            std::cout << "User2 won" << std::endl;
            return -1;
            break;
        default:
            break;
        }
    }
    std::cout << "Noone won" << std::endl;
    return 0;
}
