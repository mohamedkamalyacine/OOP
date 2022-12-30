#include <iostream>
#include "GeoShape.h"

using namespace std;

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

    }
    Rect(float x, float y) : GeoShape (x,y)
    {

    }
    float calculateArea()
    {
        return d1*d2;
    }
};
class Circle : private GeoShape
{
public:
    Circle()
    {
        cout<<"this is the circle constructor"<<endl;
    }
    ~Circle()
    {
        cout<<"this is the distructor"<<endl;
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
class Square : private Rect
{
public:
    Square()
    {
        cout<<"empty constructor"<<endl;
    }
    Square(float x) : Rect(x,x)
    {

    }
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

int main()
{
    Triangle t(4, 5);
    Rect r(5, 6);
    Circle c(5);

    cout << "Area = " << t.calculateArea() << endl;
    cout << "Area = " << r.calculateArea() << endl;
    cout << "Area = " << c.calculateArea() << endl;
    //cout << "Hello world!" << endl;
    return 0;
}
