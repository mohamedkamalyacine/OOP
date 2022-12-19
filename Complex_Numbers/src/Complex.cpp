#include <iostream>
#include <math.h>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    real = 0;
    img = 0;
}

Complex::~Complex()
{
    cout << "the object life time is ended" << endl;
}

Complex::Complex(float r)
{
    real=img=r;
}

Complex::Complex(float r, float i)
{
    real = r;
    img = i;
}

void Complex::setReal()
{
    cout<<"Enter the Real Part: ";
    cin>>real;
}

void Complex::setImg()
{
    cout<<"Enter the Imaginary Part: ";
    cin>>img;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImg()
{
    return img;
}

void Complex::print()
{
    if(img>0)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    else
    {
        cout<<real<<"-"<<fabs(img)<<"i"<<endl;
    }
}

void Complex::add(Complex c)
{
    //Complex temp;
    real = real+c.real;
    img = img+c.img;
    //return temp;
}

void Complex::sub(Complex c)
{
    //Complex temp;
    real = real+c.real;
    img = img+c.img;
    //return temp;
}

void Complex::setComplex(float r, float i)
{
    real = r;
    img = i;
}
