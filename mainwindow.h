#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QList>
#include <QGraphicsItem>

#include "shape.h"
#include "customshape.h"
#include "scene.h"
#include "customscene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void addItem(Shape *shape);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_rotate_clicked();

    void on_get_square_clicked();

    void on_get_per_clicked();

    void on_get_square_3_clicked();

    void on_zoom_in_clicked();

    void on_zoom_out_clicked();

    void on_pushButton_4_clicked();

    void on_get_square_2_clicked();

    void on_get_square_4_clicked();

    void on_get_square_5_clicked();

    void on_pushButton_3_clicked();

private:
    QList <QGraphicsItem*> list;
    Scene *scene;
    CustomScene *customScene;
    QGraphicsView *view;
    QGraphicsView *customView;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
