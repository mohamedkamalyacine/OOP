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
    Picture myPic;

    Circle cArr[3]={Circle(50, 50, 50), Circle(200, 100, 100), Circle(420, 50, 30)};
    Rect rArr[2]={Rect(30, 40, 170, 100), Rect(420, 50, 500, 300)};
    Line lArr[2]={Line(420, 50, 300, 300), Line(40, 500, 500, 400)};

    myPic.setCircles(3, cArr);
    myPic.setRects(3, rArr);
    myPic.setLines(3, lArr);

    myPic.paint();
    /*Line l1;
    Line l2(5, 6, 7, 8);
    Rect r1;
    Circle c1;
    Picture p1;*/

    /*int gd = DETECT, gm, x, y;

    initgraph(&gd, &gm, "D:\Programs\CodeBlocks\MinGW\include");
    setlinestyle(0, 0, 3);
    outtextxy(300,150,"LINE()");
    line(150, 150, 450, 200);
    getch();
    closegraph();*/
    return 0;
}
