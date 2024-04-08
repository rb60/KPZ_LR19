#ifndef PLANEDRAWER_H
#define PLANEDRAWER_H
#include <QPaintDevice>
#include <QPainter>

class PlaneDrawer
{    
public:
    PlaneDrawer();
    void draw(QPaintDevice* canvas);
    virtual void drawTale(QPainter* p);
    virtual void drawWing(QPainter* p);
    virtual void drawMotor(QPainter* p);
};

class ExtraMotorPlane : public PlaneDrawer
{
public:
    void drawMotor(QPainter* p) override;
};

class ExtraWingPlane : public PlaneDrawer
{
public:
    void drawWing(QPainter* p) override;
};

#endif // PLANEDRAWER_H
