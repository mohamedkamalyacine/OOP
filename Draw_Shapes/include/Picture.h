#ifndef PICTURE_H
#define PICTURE_H

#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Rect.h"
#include "Circle.h"

class Picture
{
private:
    int cNum;
    int rNum;
    int lNum;
    Line *ptrLine;
    Rect *ptrRect;
    Circle *ptrCircle;

public:
    Picture();
    Picture(int, int, int, Circle *, Rect *, Line *);
    void setCircles(int, Circle *);
    void setRects(int, Rect *);
    void setLines(int, Line *);
    void paint();
    ~Picture();
};

#endif // PICTURE_H
