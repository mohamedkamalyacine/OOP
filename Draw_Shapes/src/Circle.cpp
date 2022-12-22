#include <iostream>
#include <graphics.h>
#include "Point.h"
//#include "Line.h"
//#include "Rect.h"
#include "Circle.h"

using namespace std;

Circle::Circle() : center()
{
    radius = 0;
    cout << "Circle Default Constructor" << endl;
}

Circle::Circle(int m, int n, int r) : center(m, n)
{
    radius = r;
    cout << "Circle Copy Constructor" << endl;
}

void Circle::draw()
{
    circle(center.getX(), center.getY(), radius);
}

Circle::~Circle()
{
    //dtor
}
