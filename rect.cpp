#include "rect.h"

#include <QDebug>

Rect::Rect()
{

}

void Rect::makeShape() {
    QGraphicsRectItem *rect = new QGraphicsRectItem();
    rect->setRect(0,0,side,side);
    this->addToGroup(rect);
    this->setPos(100,150);
}

int Rect::getPerimetr() {
    return side*4;
}

int Rect::getSquare() {
    return (int)(side*side);
}

void Rect::setMassCenter() {
    qDebug() << "rect!";
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    int x = this->x()+60/2;
    int y = this->y()+60/2;
    qDebug() << this << " " << this->scenePos();
    circle->setRect(x,y,1,1);
    this->addToGroup(circle);
}

int Rect::getSide() {
    return this->side;
}

void Rect::setSide(int editSide) {
    float scale = (float)editSide/side;
    scale = this->scale()*scale;
    this->setScale(scale);
    this->side = editSide;
}

void Rect::makeRotate(int angle) {
    this->rotationAngle += angle;
    int x = 60/2;
    int y = 60/2;
    qDebug() << "side=" << side;
    QPointF *point = new QPointF(x,y);
    this->setTransformOriginPoint(*point);
    this->setRotation(this->rotationAngle);
}

void Rect::moveX(int speed) {
    this->setPos(x()+speed, y());
}
