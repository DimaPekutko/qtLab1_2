#ifndef CUSTOMSHAPE_H
#define CUSTOMSHAPE_H

#include "shape.h"

class CustomShape : public Shape
{
public:
    CustomShape();
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

#endif // CUSTOMSHAPE_H
