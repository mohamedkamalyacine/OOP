#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

//using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    Complex();
    Complex(float r);
    Complex(float r, float i);
    void print();
    float getReal();
    float getImg();
    void setReal();
    void setImg();
    void add(Complex c);
    void sub(Complex c);
    void setComplex(float r, float i);
    Complex operator +(Complex c);
    Complex operator -(Complex c);
    Complex operator +(int);
    Complex operator -(int);
    friend Complex operator +(float x, Complex c);
    friend Complex operator -(float x, Complex c);
    Complex operator +=(Complex c);
    Complex operator -=(Complex c);
    int operator ==(Complex c);
    Complex operator ++();  //Prefix
    Complex operator --();  //Prefix
    Complex operator ++(int);  //Postfix
    Complex operator --(int);  //Postfix
    operator float();   //Casting
    ~Complex();
};

#endif // COMPLEX_H_INCLUDED
