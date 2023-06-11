#ifndef ZESPOLONA_H
#define ZESPOLONA_H

#include <iostream>

using namespace std;

class zespolona
{
    public:

        zespolona(double x = 0, double y = 0);
        double x() const;
        double y() const;

    private:

        double _x;
        double _y;

};
ostream &operator<<(ostream &os, zespolona z);
zespolona operator+(zespolona a, zespolona b);

#endif // ZESPOLONA_H
