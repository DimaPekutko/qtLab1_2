#include "polygon6.h"

#include <QGraphicsLineItem>
#include <math.h>
#include <QDebug>

Polygon6::Polygon6()
{

}
void Polygon6::makeShape() {
    QGraphicsLineItem *line1 = new QGraphicsLineItem();
    QGraphicsLineItem *line2 = new QGraphicsLineItem();
    QGraphicsLineItem *line3 = new QGraphicsLineItem();
    QGraphicsLineItem *line4 = new QGraphicsLineItem();
    QGraphicsLineItem *line5 = new QGraphicsLineItem();
    QGraphicsLineItem *line6 = new QGraphicsLineItem();
    line1->setLine(0,0,side,0);
    line2->setLine(0,0,-side/3,-side*0.75);
    line3->setLine(side,0,side+side/3,-side*0.75);
    line4->setLine(-side/3,-side*0.75,0,-side*1.5);
    line5->setLine(side+side/3,-side*0.75,side,-side*1.5);
    line6->setLine(0,-side*1.5,side,-side*1.5);
    this->addToGroup(line1);
    this->addToGroup(line2);
    this->addToGroup(line3);
    this->addToGroup(line4);
    this->addToGroup(line5);
    this->addToGroup(line6);
    this->setPos(100,485);
}

int Polygon6::getPerimetr() {
    return side*6;
}

int Polygon6::getSquare() {
    return (int)((3*1.7*side*side)/2);
}

void Polygon6::setMassCenter() {
    qDebug() << "rect!";
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    int x = this->x()+60/2;
    int y = this->y()-88/2;
    qDebug() << this << " " << this->scenePos();
    circle->setRect(x,y,1,1);
    this->addToGroup(circle);
}

void Polygon6::setSide(int editSide) {
    float scale = (float)editSide/side;
    scale = this->scale()*scale;
    this->setScale(scale);
    this->side = editSide;
}

void Polygon6::makeRotate(int angle) {
    this->rotationAngle += angle;
    int x = 60/2;
    int y = -88/2;
    qDebug() << "side=" << side;
    QPointF *point = new QPointF(x,y);
    this->setTransformOriginPoint(*point);
    this->setRotation(this->rotationAngle);
}
