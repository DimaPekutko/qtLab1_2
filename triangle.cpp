#include "triangle.h"

#include <QDebug>

Triangle::Triangle()
{

}

void Triangle::makeShape() {
    QGraphicsLineItem *line1 = new QGraphicsLineItem();
    QGraphicsLineItem *line2 = new QGraphicsLineItem();
    QGraphicsLineItem *line3 = new QGraphicsLineItem();
    line1->setLine(0,0,side/2,-(side*2/3));
    line2->setLine(side/2,-(side*2/3),side,0);
    line3->setLine(0,0,side,0);
    this->addToGroup(line1);
    this->addToGroup(line2);
    this->addToGroup(line3);
    this->setPos(100,100);
}

int Triangle::getPerimetr() {
    return side*3;
}

int Triangle::getSquare() {
    return (int)((side*side*1.7)/4);
}

void Triangle::setMassCenter() {
    qDebug() << "tri";
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    int x = this->x()+60/2;
    int y = this->y()-60/3;
    circle->setRect(x,y,1,1);
    this->addToGroup(circle);
}

int Triangle::getSide() {
    return this->side;
}

void Triangle::setSide(int editSide) {
    float scale = (float)editSide/side;
    scale = this->scale()*scale;
    this->setScale(scale);
    this->side = editSide;
}

void Triangle::makeRotate(int angle) {
    this->rotationAngle += angle;
    int x = 60/2;
    int y = -60/3;
    QPointF *point = new QPointF(x,y);
    this->setTransformOriginPoint(*point);
    qDebug() << this->x();
    this->setRotation(this->rotationAngle);
}
void Triangle::moveX(int speed) {
    this->setPos(x()+speed, y());
}
