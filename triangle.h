#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
public:
    Triangle();
    void makeShape() override;
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

#endif // TRIANGLE_H
