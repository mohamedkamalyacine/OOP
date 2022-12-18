#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{

    Complex c1, c2, res;
    c1.setReal();
    c1.setImg();
    c1.print();

    c2.setReal();
    c2.setImg();
    c2.print();

    c1.add(c2);
    c1.print();
//    res.print();
    //cout << "Hello world!" << endl;
    return 0;
}
