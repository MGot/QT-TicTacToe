#include "game.h"

Game::Game(Player* p1, Player* p2) : p1(p1), p2(p2), actualPlayer(p1)
{
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            gameBoard[i][j] = 0;
}

Game::~Game()
{
    delete p1;
    delete p2;
    delete actualPlayer;
}

void Game::setBoard(short X, short Y, short sign)
{
    gameBoard[X][Y] = sign;
}

void Game::setActualPlayer(Player* p)
{
    actualPlayer = p;
}

int Game::getActualPlayer()
{
    return actualPlayer->number;
}
