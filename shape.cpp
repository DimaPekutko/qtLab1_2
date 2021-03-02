#include "shape.h"

Shape::Shape()
{

}

void Shape::makeShape() {
    QGraphicsRectItem *rect = new QGraphicsRectItem();
    rect->setRect(0,0,100,100);
    this->addToGroup(rect);
}

int Shape::getPerimetr() {
    return 0;
}
int Shape::getSquare() {
    return 0;
}
void Shape::setMassCenter() {

}
int Shape::getSide() {

}
void Shape::setSide(int side) {

}
void Shape::makeRotate(int angle) {

}
void Shape::moveX(int speed) {

}
