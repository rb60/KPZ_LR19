#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "planedrawer.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent* pe) override;
    ~MainWindow();

public slots:
    void changePlane(int index);

private:
    QList<PlaneDrawer*> planes;
    PlaneDrawer* currnetPlane = nullptr;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
