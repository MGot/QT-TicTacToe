#ifndef PLAYER_H
#define PLAYER_H
#include <QObject>

class Player
{
public:
    int number;
    Player(int,int);

    virtual ~Player();
    int getPlayerNumber()
    {
        return number;
    }
protected:
    int sign;

signals:

public slots:
};

#endif // PLAYER_H
