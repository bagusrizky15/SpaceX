#pragma once
//nama file spaceship.h
//deklarasi class SpaceShip
#include <sl.h>

class SpaceShip
{
    public :
    SpaceShip(int texture);
    void update();
    void draw();
    void move_to(double dx, double dy);
    
    private :
    int _texture; //resource image
    double _x; //posisi x
    double _y;
    double _dx;
    double _dy;
    
    int _shield;
    int _fuel;
    bool _life;
};