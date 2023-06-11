#ifndef ZESPOLONA_H
#define ZESPOLONA_H

#include <iostream>


class zespolona
{
    public:

        zespolona(double x = 0, double y = 0);

    private:

        double _x;
        double _y;

};
ostream &operator<<(ostream &os, zespolona z);

#endif // ZESPOLONA_H
