#ifndef RECT_H
#define RECT_H

#include "Point.h"
#include "Shape.h"

class Rect : public Shape
{
private:
    Point ul;
    Point lr;

public:
    Rect();
    Rect(int, int, int, int);
    void draw();
    ~Rect();
};

#endif // RECT_H
