#include <iostream>
#include <conio.h>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Rect.h"
#include "Circle.h"
#include "Picture.h"

using namespace std;

int main()
{
    Line l1;
    Line l2(5, 6, 7, 8);
    Rect r1;
    Circle c1;
    Picture p1;

    /*int gd = DETECT, gm, x, y;

    initgraph(&gd, &gm, "D:\Programs\CodeBlocks\MinGW\include");
    setlinestyle(0, 0, 3);
    outtextxy(300,150,"LINE()");
    line(150, 150, 450, 200);
    getch();
    closegraph();*/
    return 0;
}
