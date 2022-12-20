#include <conio.h>
#include <iostream>
#include<windows.h>
#include <dos.h>
#include <dir.h>
#include "Stack.h"

using namespace std;

int main()
{

    Stack s1(5);
    s1.push(15);
    s1.push(30);
    s1.push(20);
    s1.push(40);
    s1.push(60);
    //s1.display();

    cout << "Objects Number = " << Stack::getCount() << endl;

    cout<<endl;

    /*for(int i=0; i<5; i++)
    {
        cout<<s1.pop()<<endl;
    }*/

    viewContent(s1);
    cout << "Objects Number = " << Stack::getCount() << endl;

    return 0;
}
