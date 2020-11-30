#ifndef JUEGO_H
#define JUEGO_H

#include <QGraphicsView>
#include <QGraphicsScene>

class Juego : public QGraphicsView
{
    Q_OBJECT
public:
    Juego(QWidget *parent = nullptr);
    QGraphicsScene *Escenario;
};
#endif // JUEGO_H
