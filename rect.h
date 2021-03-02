#ifndef RECT_H
#define RECT_H

#include "triangle.h"
#include <QGraphicsRectItem>

class Rect : public Triangle
{
public:
    Rect();
    void makeShape();
    int getPerimetr();
    int getSquare();
    void setMassCenter();
    int getSide();
    void setSide(int side);
    void makeRotate(int angle);
    void moveX(int speed);
private:
    int rotationAngle = 0;
    int side = 60;
};

#endif // RECT_H
