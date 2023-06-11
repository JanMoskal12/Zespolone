#include "zespolona.h"

#include <iostream>

using namespace std;

zespolona::zespolona(double x, double y)
{
    _x = x;
    _y = y;
}

double zespolona :: x() const{
    return _x;
}

double zespolona :: y() const{
    return _y;
}

ostream &operator<<(ostream &os, zespolona z){
    if(z.x() == 0 && z.y() == 0)
    os << 0 << '\n';
    else if(z.x() == 0)
    os << z.y() << "i" << '\n';
    else if(z.y() == 0)
    os << z.x() << '\n';
    else
    os << z.x() << "+" << z.y() << "i" << '\n';
    return os;
}
