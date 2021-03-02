#ifndef POLYGON5_H
#define POLYGON5_H

#include "rect.h"

class Polygon5 : public Rect
{
public:
    Polygon5();
    void makeShape();
    int getPerimetr();
    int getSquare();
    void setMassCenter();
    void setSide(int side);
    void makeRotate(int angle);
private:
    int rotationAngle = 0;
    int side = 60;
};

#endif // POLYGON5_H
