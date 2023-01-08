#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : public Shape
{
private:
    Point center;
    int radius;

public:
    Circle();
    Circle(int, int, int);
    void draw();
    ~Circle();
};

#endif // CIRCLE_H
