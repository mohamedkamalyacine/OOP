#include "Derived.h"

Derived::Derived() : Base()
{
    c = 0;
}

Derived::Derived(int n) : Base(n)
{
    c = n;
}

Derived::Derived(int x, int y, int z) : Base(x, y)
{
    c = z;
}

void Derived::setC(int z)
{
    c = z;
}

int Derived::getC()
{
    return c;
}

int Derived::productABC()
{
    //return a*b*c;  //Wrong
    return c * productAB();
}

Derived::~Derived()
{
    //dtor
}
