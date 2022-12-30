#include <iostream>
#include "Base.h"
#include "Derived.h"
#include "SecondDerived.h"

using namespace std;

int main()
{
    //Base b(5,4);
    //Derived o1(10, 20, 30);
    SecondDerived s1(1, 2, 3, 4);

//    s1.setD();

    cout << "a * b * c * d = " << s1.productABCD() << endl;
    /*b.setA(3);
    b.setB(7);
    cout << "a * b = " << b.productAB() << endl;*/
    return 0;
}
