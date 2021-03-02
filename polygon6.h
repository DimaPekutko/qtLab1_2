#ifndef POLYGON6_H
#define POLYGON6_H

#include "polygon5.h"

class Polygon6 : public Polygon5
{
public:
    Polygon6();
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

#endif // POLYGON6_H
