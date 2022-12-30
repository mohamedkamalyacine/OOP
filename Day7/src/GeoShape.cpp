#include "GeoShape.h"

GeoShape::GeoShape()
{
    d1 = d2 = 0;
}

GeoShape::GeoShape(float x)
{
    d1 = d2 = x;
}

GeoShape::GeoShape(float x, float y)
{
    d1 = x;
    d2 = y;
}

void GeoShape::setD1(float x)
{
    d1 = x;
}

int GeoShape::getD1()
{
    return d1;
}

void GeoShape::setD2(float y)
{
    d1 = y;
}

int GeoShape::getD2()
{
    return d2;
}

float GeoShape::calculateArea()
{
    return 0;
}

GeoShape::~GeoShape()
{
    //dtor
}
