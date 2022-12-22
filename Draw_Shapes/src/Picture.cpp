#include <iostream>
#include <graphics.h>
#include "Point.h"
#include "Line.h"
#include "Rect.h"
#include "Circle.h"
#include "Picture.h"

using namespace std;

Picture::Picture()
{
    cNum = 0;
    rNum = 0;
    lNum = 0;
    ptrCircle = NULL;
    ptrRect = NULL;
    ptrLine = NULL;

    cout << "Picture Default Constructor" << endl;
}

Picture::Picture(int cn, int rn, int ln, Circle *pC, Rect *pR, Line *pL)
{
    cNum = cn;
    rNum = rn;
    lNum = ln;
    ptrCircle = pC;
    ptrRect = pR;
    ptrLine = pL;
}

void Picture::setLines(int ln, Line *lptr)
{
    lNum = ln;
    ptrLine = lptr;
}

void Picture::setRects(int rn, Rect *rptr)
{
    rNum = rn;
    ptrRect = rptr;
}

void Picture::setCircles(int cn, Circle *cptr)
{
    cNum = cn;
    ptrCircle = cptr;
}

void Picture::paint()
{
    int i;
    for(i=0; i<cNum; i++)
    {
        ptrCircle[i].draw();
    }

    for(i=0; i<rNum; i++)
    {
        ptrRect[i].draw();
    }

    for(i=0; i<lNum; i++)
    {
        ptrLine[i].draw();
    }
}

Picture::~Picture()
{
    //dtor
}
