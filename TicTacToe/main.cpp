#include "newgamewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NewGameWindow w;
    w.show();

    return a.exec();
}
