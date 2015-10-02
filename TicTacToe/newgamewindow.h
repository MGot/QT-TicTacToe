#ifndef NEWGAMEWINDOW_H
#define NEWGAMEWINDOW_H

#include <QMainWindow>
#include "gamewindow.h"

namespace Ui {
class NewGameWindow;
}

class NewGameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewGameWindow(QWidget *parent = 0);
    ~NewGameWindow();

private slots:


    void on_onePlayerButton_clicked();

    void on_twoPlayersButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::NewGameWindow *ui;
    GameWindow new_game;
};

#endif // NEWGAMEWINDOW_H
