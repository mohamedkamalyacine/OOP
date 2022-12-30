#ifndef GEOSHAPE_H
#define GEOSHAPE_H


class GeoShape
{
protected:
    float d1;
    float d2;

public:
    GeoShape();
    GeoShape(float);
    GeoShape(float, float);
    void setD1(float);
    void setD2(float);
    int getD1();
    int getD2();
    float calculateArea();
    ~GeoShape();
};

#endif // GEOSHAPE_H
