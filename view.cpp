#include "view.h"

#include <QDebug>

View::View(QGraphicsView *view)
{
    this->element = new QGraphicsView();
}

void View::mousePressEvent(QMouseEvent *event) {
    qDebug() << event;
    qDebug() << "222";
}
