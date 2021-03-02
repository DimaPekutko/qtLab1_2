#include "polygon5.h"

#include <math.h>
#include <QDebug>

Polygon5::Polygon5()
{

}

void Polygon5::makeShape() {
    QGraphicsLineItem *line1 = new QGraphicsLineItem();
    QGraphicsLineItem *line2 = new QGraphicsLineItem();
    QGraphicsLineItem *line3 = new QGraphicsLineItem();
    QGraphicsLineItem *line4 = new QGraphicsLineItem();
    QGraphicsLineItem *line5 = new QGraphicsLineItem();
    line1->setLine(0,0,side,0);
    line2->setLine(0,0,-side/3,-side*2/3);
    line3->setLine(side,0,side+side/3,-side*2/3);
    line4->setLine(-side/3,-side*2/3,side/2,-side*1.25);
    line5->setLine(side+side/3,-side*2/3,side/2,-side*1.25);
    this->addToGroup(line1);
    this->addToGroup(line2);
    this->addToGroup(line3);
    this->addToGroup(line4);
    this->addToGroup(line5);
    this->setPos(100,335);
}

int Polygon5::getPerimetr() {
    return side*5;
}

int Polygon5::getSquare() {
    return (int)((sqrt(25+10*sqrt(5))*side*side)/4);
}

void Polygon5::setMassCenter() {
    qDebug() << "rect!";
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem();
    int x = this->x()+60/2;
    int y = this->y()-60/2;
    qDebug() << this << " " << this->scenePos();
    circle->setRect(x,y,1,1);
    this->addToGroup(circle);
}

void Polygon5::setSide(int editSide) {
    float scale = (float)editSide/side;
    scale = this->scale()*scale;
    this->setScale(scale);
    this->side = editSide;
}


void Polygon5::makeRotate(int angle) {
    this->rotationAngle += angle;
    int x = 60/2;
    int y = -60/2;
    qDebug() << "side=" << side;
    QPointF *point = new QPointF(x,y);
    this->setTransformOriginPoint(*point);
    this->setRotation(this->rotationAngle);
}
