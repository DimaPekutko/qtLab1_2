#include "customshape.h"

#include <QDebug>

CustomShape::CustomShape()
{

}

void CustomShape::makeShape() {

}

int CustomShape::getPerimetr() {
    return 0;
}

int CustomShape::getSquare() {
    return (int)(0);
}

void CustomShape::setMassCenter() {
    qDebug() << "rect!";
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    int x = this->x()+60;
    int y = this->y()+60;
    qDebug() << this << " " << this->scenePos();
    circle->setRect(x,y,1,1);
    //this->addToGroup(circle);
}

void CustomShape::setSide(int editSide) {
    float scale = (float)editSide/side;
    scale = this->scale()*scale;
    this->setScale(scale);
    this->side = editSide;
}

void CustomShape::makeRotate(int angle) {
    this->rotationAngle += angle;
    int x = 60;
    int y = 60;
    qDebug() << "side=" << side;
    QPointF *point = new QPointF(x,y);
    this->setTransformOriginPoint(*point);
    this->setRotation(this->rotationAngle);
}

void CustomShape::moveX(int speed) {
    this->setPos(x()+speed, y());
}
