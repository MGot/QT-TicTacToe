#ifndef HUMAN_H
#define HUMAN_H

#include <QObject>
#include "player.h"

class Human : public Player
{
public:
    Human(int, int);
    virtual ~Human();

signals:

public slots:
};

#endif // HUMAN_H
