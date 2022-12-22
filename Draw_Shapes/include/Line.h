#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line
{
private:
    Point startPoint;
    Point endPoint;
public:
    Line();
    Line(int, int, int, int);
    void draw();
    ~Line();
};

#endif // LINE_H
