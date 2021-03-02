#include "customscene.h"

#include <QDebug>

CustomScene::CustomScene()
{
    shape = new CustomShape();
    this->addItem(shape);
}

void CustomScene::updateShape() {
    shape = new CustomShape();
    this->addItem(shape);
}

CustomShape* CustomScene::getShape() {
    return shape;
}

void CustomScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    int x = event->scenePos().x();
    int y = event->scenePos().y();
    circle->setRect(x,y,3,3);
    shape->addToGroup(circle);
}
