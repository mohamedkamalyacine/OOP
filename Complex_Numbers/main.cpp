#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex c1(5, 3), c2(1.2, 5), c3;
    c1.print();
    c2.print();
    c3.print();

    cout << (float)c1 << endl;;
    float x = (float)c1;

    //c3++;
    //c3.print();
    /*if(c1 == c2)
    {
        cout << "True c1=c2" << endl;
    }
    else
    {
        cout << "False c1 != c2" << endl;
    }*/

    //c1 -= c2;
    //c1.print();

    //c3 += c2 ;
    //c3.print();
    //c3 = 3 - c1;
    //c3.print();

    //c3 = 3 + c1;
    //c3.print();

    //c3 = c1 - 3;
    //c3.print();

    //c3 = c1 + 3;
    //c3.print();

    //c3 = c1 + c2;
    //c3.print();

    //c3 = c1 - c2;
    //c3.print();

    /*Complex c1;
    c1.print();
    Complex c2(5);
    c2.print();
    Complex c3(3.5, 6.6);
    c3.print();
    Complex c4;
    c4.setComplex(4.5, -5.5);
    c4.print();*/
    /*Complex c1, c2, res;
    c1.setReal();
    c1.setImg();
    c1.print();

    c2.setReal();
    c2.setImg();
    c2.print();

    c1.add(c2);
    c1.print();
    //res.print();
    //cout << "Hello world!" << endl;*/
    return 0;
}
