#include "scene.h"

Scene::Scene()
{

}

void Scene::addToList(Shape *shape) {
    shapeList.append(shape);
}

Shape* Scene::getSelectedItem() {
    return shapeList[focusedShapeIndex];
}


void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    QGraphicsRectItem *rect = new QGraphicsRectItem();
    rect->setRect(event->scenePos().x(), event->scenePos().y(),10,10);
    for(int i = 0; i < shapeList.length(); i++) {
        if(shapeList[i]->collidesWithItem(rect)) {
            focusedShapeIndex = i;
        }
    }
}
