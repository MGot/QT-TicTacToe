#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

public slots:

private slots:
    void on_exitButton_clicked();

    void on_oneButton_clicked();

private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
