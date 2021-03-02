#ifndef CUSTOMSCENE_H
#define CUSTOMSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

#include "customshape.h"

class CustomScene : public QGraphicsScene
{
public:
    CustomScene();
    CustomShape* getShape();
    void updateShape();
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
private:
    CustomShape *shape;
};

#endif // CUSTOMSCENE_H
