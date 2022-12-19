#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{

    Stack s1(5);
    //Stack s2(5);
    s1.push(15);
    s1.push(30);
    s1.push(20);
    s1.push(40);
    s1.push(60);
    s1.display();

    cout<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<s1.pop()<<endl;
    }

    cout << "Objects Number = " << Stack::getCount() << endl;

    return 0;
}
