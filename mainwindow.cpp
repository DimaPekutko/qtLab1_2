#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new Scene();
    customScene = new CustomScene();

    view = ui->graphicsView;
    view->setFixedSize(view->width(), view->height());
    view->setSceneRect(0, 0, view->width(), view->height());
    view->fitInView(0, 0, view->width(), view->height(), Qt::KeepAspectRatio);
    view->setScene(scene);

    customView = ui->graphicsView_2;
    customView->setFixedSize(customView->width(), customView->height());
    customView->setSceneRect(0, 0, customView->width(), customView->height());
    customView->fitInView(0, 0, customView->width(), customView->height(), Qt::KeepAspectRatio);
    customView->setScene(customScene);
}

void MainWindow::addItem(Shape* item) {
    item->setFlag(QGraphicsItem::ItemIsFocusable);
    item->setFocus();
    item->makeShape();
    scene->addItem(item);
    scene->addToList(item);
    qDebug() << scene->focusItem();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    scene->getSelectedItem()->moveX(-30);
}

void MainWindow::on_pushButton_2_clicked()
{
    scene->getSelectedItem()->moveX(30);
}

void MainWindow::on_rotate_clicked()
{
    scene->getSelectedItem()->makeRotate(30);
}

void MainWindow::on_get_per_clicked()
{
    int per = scene->getSelectedItem()->getPerimetr();
    ui->per_label->setText(QString::number(per));
}

void MainWindow::on_get_square_clicked()
{
    int square = scene->getSelectedItem()->getSquare();
    ui->square_label->setText(QString::number(square));
}

void MainWindow::on_get_square_2_clicked()
{
    view->scale(1.5,1.5);
}

void MainWindow::on_get_square_3_clicked()
{
    view->scale(0.5,0.5);
}

void MainWindow::on_get_square_4_clicked()
{
    scene->getSelectedItem()->setMassCenter();
}

void MainWindow::on_get_square_5_clicked()
{
    int editSide =  ui->side_edit->text().toInt();
    if(editSide)
        scene->getSelectedItem()->setSide(editSide);
}

void MainWindow::on_pushButton_3_clicked()
{
    CustomShape *shape = new CustomShape();
    shape = customScene->getShape();
    this->addItem(shape);
    customScene->updateShape();
}
