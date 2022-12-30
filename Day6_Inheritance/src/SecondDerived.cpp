#include "SecondDerived.h"

SecondDerived::SecondDerived() : Derived()
{
    d = 0;
}

SecondDerived::SecondDerived(int n) : Derived(n)
{
    d = n;
}

SecondDerived::SecondDerived(int w, int x, int y, int z) : Derived(w, x, y)
{
    d = z;
}

void SecondDerived::setD(int z)
{
    d = z;
}

int SecondDerived::getD()
{
    return d;
}

int SecondDerived::productABCD()
{
    return productABC() * d;
}

SecondDerived::~SecondDerived()
{
    //dtor
}
