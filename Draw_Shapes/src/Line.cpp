#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"

using namespace std;

Line::Line() : startPoint(), endPoint()
{
    cout << "Line Constructor" << endl;
}

Line::Line(int x1, int y1, int x2, int y2) : startPoint(x1, y1), endPoint(x2, y2)
{
    cout << "Line Copy Constructor" << endl;
}

void Line::draw()
{
    line(startPoint.getX(), startPoint.getY(), endPoint.getX(), endPoint.getY());
}

Line::~Line()
{
    //dtor
}
