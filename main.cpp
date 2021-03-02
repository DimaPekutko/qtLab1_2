#include "mainwindow.h"
#include "shape.h"
#include "triangle.h"
#include "rect.h"
#include "polygon5.h"
#include "polygon6.h"
#include "circle.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Shape *shape = new Shape();
    Triangle *triangle = new Triangle();
    Rect *rect = new Rect();
    Polygon5 *polygon5 = new Polygon5();
    Polygon6 *polygon6 = new Polygon6();
    Circle *circle = new Circle();
    MainWindow w;
    w.show();
    //w.addItem(shape);
    w.addItem(triangle);
    w.addItem(rect);
    w.addItem(polygon5);
    w.addItem(polygon6);
    w.addItem(circle);
    return a.exec();
}
