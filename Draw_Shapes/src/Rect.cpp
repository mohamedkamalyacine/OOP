#include <iostream>
#include <graphics.h>
#include "Point.h"
//#include "Line.h"
#include "Rect.h"

using namespace std;

Rect::Rect() : ul(), lr()
{
    cout << "Rect Default Constructor" << endl;
}

Rect::Rect(int x1, int y1, int x2, int y2) : ul(x1, y1), lr(x2, y2)
{
    cout << "Rect Copy Constructor" << endl;
}

void Rect::draw()
{
    rectangle(ul.getX(), ul.getY(), lr.getX(), lr.getY());
}

Rect::~Rect()
{
    //dtor
}
