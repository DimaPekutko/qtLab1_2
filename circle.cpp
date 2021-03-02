#include "circle.h"

#include <QDebug>

Circle::Circle()
{

}

void Circle::makeShape() {
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    circle->setRect(0,0,2*side,2*side);
    this->addToGroup(circle);
    this->setPos(70,530);
}

int Circle::getPerimetr() {
    return 2*3.14*side;
}

int Circle::getSquare() {
    return (int)(3.14*side*side);
}

void Circle::setMassCenter() {
    qDebug() << "rect!";
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    int x = this->x()+60;
    int y = this->y()+60;
    qDebug() << this << " " << this->scenePos();
    circle->setRect(x,y,1,1);
    this->addToGroup(circle);
}

void Circle::setSide(int editSide) {
    float scale = (float)editSide/side;
    scale = this->scale()*scale;
    this->setScale(scale);
    this->side = editSide;
}

void Circle::makeRotate(int angle) {
    this->rotationAngle += angle;
    int x = 60;
    int y = 60;
    qDebug() << "side=" << side;
    QPointF *point = new QPointF(x,y);
    this->setTransformOriginPoint(*point);
    this->setRotation(this->rotationAngle);
}

void Circle::moveX(int speed) {
    this->setPos(x()+speed, y());
}
