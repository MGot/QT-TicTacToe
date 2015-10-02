#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    this->setFixedSize(200,200);
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::on_exitButton_clicked()
{
    close();
}
