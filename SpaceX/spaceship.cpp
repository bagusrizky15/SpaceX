// implementasi class spaceship
// nama file spaship.cpp

#include "spaceship.h"
SpaceShip::SpaceShip(int texture)
{
    _texture = texture;
    
    _x = 190; //posisi x, ditengah layar (widt 380)
    _y = 150;
    _dx = _x;
    _dy = _y;
    
    _shield = 4;
    _fuel = 50;
    _life = true;
}

//fungsi update()
//mengupdate state _x dan _y untuk pergerakan

void SpaceShip::update()
{
    //kecepatan diambil dari jarak pesawat ke tujuan dikali dengan angka untuk smoothing:0.05
    
    double _vx = (_dx - _x) *0.05;
    double _vy = (_dy - _y)*0.05;
    
    //update posisi berdasarkan kecepatannya
    _x += _vx;
    _y += _vy;
    
    
}

//fungsi draw
//render

void SpaceShip::draw()
{
    slSprite(_texture, _x, _y, 64, 63);
}
//fungsi move to 
//menggerakan pesawat dengan cara set destination x dan y (_dx dan _dy)
void SpaceShip::move_to(double dx, double dy){
    _dx = dx;
    _dy = dy;
}