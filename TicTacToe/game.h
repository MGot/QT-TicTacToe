#ifndef GAME_H
#define GAME_H

#include "player.h"

class Game
{
public:
    Game(Player*,Player*);
    virtual ~Game();
    void setBoard(short, short, short);
    void setActualPlayer(Player*);
    int getActualPlayer();

private:
    Player* p1;
    Player* p2;
    Player* actualPlayer;
    short gameBoard[3][3];  // 0 - puste pole, 1 - krzyżyk, 2 - kółko

signals:

public slots:

};

#endif // GAME_H
