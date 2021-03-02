#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include "shape.h"
#include <QList>

class View : public QGraphicsView
{
public:
    QGraphicsView *element;
    View(QGraphicsView *view);
    QList <Shape*> list;
    void mousePressEvent(QMouseEvent *event);
};

#endif // VIEW_H
