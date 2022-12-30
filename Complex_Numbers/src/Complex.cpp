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

Complex Complex::operator +(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}

Complex Complex::operator -(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}

Complex Complex::operator +(int n)
{
    Complex temp;
    temp.real = real + n;
    temp.img = img + n;
    return temp;
}

Complex Complex::operator -(int n)
{
    Complex temp;
    temp.real = real - n;
    temp.img = img - n;
    return temp;
}

Complex Complex::operator +=(Complex c)
{
    //Complex temp;

    this->real = this->real + c.real;
    this->img = this->img + c.img;

    //temp.real = this->real;
    //temp.img = this->img;
    return *this;
}

Complex Complex::operator -=(Complex c)
{
    //Complex temp;

    this->real = this->real - c.real;
    this->img = this->img - c.img;

    //temp.real = this->real;
    //temp.img = this->img;
    return *this;
}

int Complex::operator ==(Complex c)
{
    if(this->real == c.real && this->img == c.img)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Prefix Operators ++x, --x
Complex Complex::operator++()
{
    real++;
    return *this;
}

Complex Complex::operator--()
{
    real--;
    return *this;
}

//Postfix Operators x++, x--
Complex Complex::operator++(int)
{
    Complex temp = *this; //Save old value
    real++;
    return temp;    //return the old value
}

Complex Complex::operator--(int)
{
    Complex temp = *this; //Save old value
    real--;
    return temp;    //return the old value
}

Complex::operator float()
{
    return real;
}

Complex operator + (float x, Complex c)
{
    Complex temp;
    temp.real = x + c.real;
    temp.img = x + c.img;
    return temp;
}

Complex operator -(float x, Complex c)
{
    Complex temp;
    temp.real = x - c.real;
    temp.img = x - c.img;
    return temp;
}
