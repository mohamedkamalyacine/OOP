#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
    //cout << "Point Default Constructor" << endl;
}

Point::Point(int a, int b)
{
    x = a;
    y = b;
}

void Point::setX(int a)
{
    x = a;
}

void Point::setY(int b)
{
    y = b;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

Point::~Point()
{
    //dtor
}
