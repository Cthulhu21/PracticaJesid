#include "Juego.h"
#include <windows.h>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>


Juego::Juego(QWidget *parent)
{
    int Ancho=GetSystemMetrics(SM_CXSCREEN);
    int Alto=GetSystemMetrics(SM_CYSCREEN);
    setFixedSize(Ancho, Alto-70);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    Escenario = new QGraphicsScene;
    Escenario->setSceneRect(0, 0, Ancho, Alto);
    setScene(Escenario);

    QGraphicsRectItem *Rectangulo= new QGraphicsRectItem(100,100,100,100);
    Rectangulo->setBrush(Qt::darkCyan);
    Escenario->addItem(Rectangulo);
    setBackgroundBrush(QBrush(Qt::red));

    QGraphicsTextItem *Texto = new QGraphicsTextItem("Menú");
    Texto->setPos(300, 300);
    Escenario->addItem(Texto);
}

