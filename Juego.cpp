#include "Juego.h"
#include <windows.h>

Juego::Juego(QWidget *parent)
{
    int Ancho = GetSystemMetrics(SM_CXSCREEN);
    int Alto = GetSystemMetrics(SM_CYSCREEN);
    setFixedSize(Ancho,Alto);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    Escenario = new QGraphicsScene;
    Escenario->setSceneRect(0,0,Ancho,Alto);
    setScene(Escenario);
}


