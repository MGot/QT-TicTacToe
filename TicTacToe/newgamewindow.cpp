#include "newgamewindow.h"
#include "ui_newgamewindow.h"
#include "gamewindow.h"

NewGameWindow::NewGameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewGameWindow)
{
    ui->setupUi(this);
    this->setFixedSize(250,250);
}

NewGameWindow::~NewGameWindow()
{
    delete ui;
}
void NewGameWindow::on_onePlayerButton_clicked()
{
    new_game.show();
    close();
}

void NewGameWindow::on_twoPlayersButton_clicked()
{

}

void NewGameWindow::on_exitButton_clicked()
{
    close();
}
