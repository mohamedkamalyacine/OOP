#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

//using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    void print();
    float getReal();
    float getImg();
    void setReal();
    void setImg();
    void add(Complex c);
    void sub(Complex c);
};

#endif // COMPLEX_H_INCLUDED
