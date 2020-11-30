#include "Juego.h"
#include <QApplication>

Juego *Game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game = new Juego;
    Game->show();
    int B;
    return a.exec();
}
