#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    planes.append(new PlaneDrawer());
    planes.append(new ExtraMotorPlane());
    planes.append(new ExtraWingPlane());

    ui->comboBox->addItem("Plane");
    ui->comboBox->addItem("ExtraEnginePlane");
    ui->comboBox->addItem("ExtraWingPlane");

    connect(ui->comboBox, &QComboBox::currentIndexChanged, this, &MainWindow::changePlane);
}

void MainWindow::paintEvent(QPaintEvent *pe)
{
    if(currnetPlane != nullptr)
        currnetPlane->draw(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    for (int i = 0; i < planes.size(); ++i)
    {
        delete planes[i];
    }
}

void MainWindow::changePlane(int index)
{
    if(index >= 0 && index < planes.size())
        currnetPlane = planes[index];
    update();
}
