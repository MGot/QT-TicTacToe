#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "game.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{

    ui->setupUi(this);
    this->setFixedSize(200,300);
    Game game(new Player(1,0), new Player(2,1));
    //ui->playerLabel->setText(QString::number(game.getActualPlayer()));
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::on_exitButton_clicked()
{
    close();
}

void GameWindow::on_oneButton_clicked()
{

}
