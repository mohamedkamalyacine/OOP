#include <iostream>

using namespace std;

//Abstract class
class GeoShape
{
protected:
    float d1;
    float d2;

public:
    GeoShape()
    {
        cout<<"geo shape constructor"<<endl;
        d1=d2=0;
    }

    GeoShape(float x)
    {
        d1=d2=x;
    }

    GeoShape(float x, float y)
    {
        d1=x;
        d2=y;
    }

    void setD1(float x)
    {
        d1=x;
    }

    int getD1()
    {
        return d1;
    }

    void setD2(float y)
    {
        d2=y;
    }

    int getD2()
    {
        return d2;
    }

    virtual float calculateArea() = 0;
};

class Triangle : public GeoShape
{
public:
    Triangle(float x, float y) : GeoShape (x,y)
    {

    }

    float calculateArea()
    {
        return 0.5*d1*d2;
    }
};

class Rect : public GeoShape
{
public:
    Rect()
    {
        cout<<"Default Rect constructor"<<endl;
    }

    ~Rect()
    {
        //Donothing
    }

    Rect(float x, float y) : GeoShape (x,y)
    {

    }
    float calculateArea()
    {
        return d1*d2;
    }
};
class Circle : public GeoShape
{
public:
    Circle()
    {
        cout<<"Default Circle constructor"<<endl;
    }

    ~Circle()
    {
        //Do nothing
    }

    Circle(float x) : GeoShape (x)
    {

    }

    void setRadius(float r)
    {
        d1=d2=r;
    }

    float getRadius()
    {
        return d1;
    }

    float calculateArea()
    {
        return 22.0/7*d1*d1;
    }
};

class Square : public Rect
{
public:
    Square()
    {}

    Square(float x) : Rect(x,x)
    {}

    void setSQDim (float x)
    {
        d1=d2=x;
    }

    float getSQDim ()
    {
        return d1;
    }

    float calculateArea()
    {
        return Rect::calculateArea();
    }
};

float sumAreas (GeoShape *p1, GeoShape *p2, GeoShape *p3)
{
    return p1->calculateArea() + p2->calculateArea() + p3->calculateArea();
}

int main()
{
    Rect r(5,4);
    Triangle t(6,9);
    Circle c(8);
    cout << "Rect Area = " << r.calculateArea() << endl;
    cout << "Triangle Area = " << t.calculateArea() << endl;
    cout << "Circle Area = " << c.calculateArea() << endl;
    cout<<"Areas Sum = "<<sumAreas(&r,&c,&t)<<endl;
    return 0;

}
