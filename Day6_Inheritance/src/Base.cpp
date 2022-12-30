#include "Base.h"

Base::Base()
{
    a = b = 0;
}

Base::Base(int n)
{
    a = b = n;
}

Base::Base(int x, int y)
{
    a = x;
    y = b;
}

void Base::setA(int x)
{
    a = x;
}

void Base::setB(int y)
{
    b = y;
}

int Base::getA()
{
    return a;
}

int Base::getB()
{
    return b;
}

int Base::productAB()
{
    return a * b;
}

Base::~Base()
{
    //Do Nothing
}
