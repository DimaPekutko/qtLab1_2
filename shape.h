#ifndef SHAPE_H
#define SHAPE_H

#include <QGraphicsItemGroup>

class Shape : public QGraphicsItemGroup
{
public:
    Shape();
    virtual void makeShape();
    virtual int getPerimetr();
    virtual int getSquare();
    virtual void setMassCenter();
    virtual int getSide();
    virtual void setSide(int side);
    virtual void makeRotate(int angle);
    virtual void moveX(int speed);
};

#endif // SHAPE_H
