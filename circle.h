#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
    Circle();
    void makeShape();
    int getPerimetr();
    int getSquare();
    void setMassCenter();
    void setSide(int side);
    void makeRotate(int angle);
    void moveX(int speed);
private:
    int rotationAngle = 0;
    int side = 60;
};

#endif // CIRCLE_H
