#include <iostream>
#include "Complex.h"
using namespace std;

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
        cout<<real<<img<<"i"<<endl;
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
