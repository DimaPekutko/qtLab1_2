#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QList>
#include <QDebug>

#include "shape.h"

class Scene : public QGraphicsScene
{
public:
    Scene();
    void addToList(Shape *shape);
    Shape* getSelectedItem();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
private:
    QList <Shape*> shapeList;
    int focusedShapeIndex = 0;
};

#endif // SCENE_H
