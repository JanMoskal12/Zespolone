#include "zespolona.h"
#include <iostream>

zespolona::zespolona(double x, double y)
{
    _x = x;
    _y = y;
}
ostream &operator<<(ostream &os, zespolona z){
    os << z._x << "+" << z._y << "i" << '\n';
    return os;
}
