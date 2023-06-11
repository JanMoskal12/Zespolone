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
    os << z.x() << "+" << z.y() << "i" << '\n';
    return os;
}
