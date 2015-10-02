#ifndef PLAYER_H
#define PLAYER_H
#include <QObject>

class Player
{
public:
    Player();
    virtual ~Player();
    int getPlayerNumber()
    {
        return number;
    }
protected:
    int number;

signals:

public slots:
};

#endif // PLAYER_H
