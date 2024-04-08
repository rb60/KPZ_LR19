#include "planedrawer.h"

PlaneDrawer::PlaneDrawer() {}

void PlaneDrawer::draw(QPaintDevice *canvas)
{
    QPainter* p = new QPainter(canvas);
    drawTale(p);
    drawWing(p);
    drawMotor(p);
    p->end();
    delete p;
}

void PlaneDrawer::drawTale(QPainter *p)
{
    p->drawImage(0,0,QImage(":/images/tale.png"));
}

void PlaneDrawer::drawWing(QPainter *p)
{
    p->drawImage(0,0,QImage(":/images/wing.png"));
}

void PlaneDrawer::drawMotor(QPainter *p)
{
    p->drawImage(0,0,QImage(":/images/motor.png"));
}

void ExtraMotorPlane::drawMotor(QPainter *p)
{
    p->drawImage(0,0,QImage(":/images/extraMotor.png"));
}

void ExtraWingPlane::drawWing(QPainter *p)
{
    p->drawImage(0,0,QImage(":/images/extraWing.png"));
}
