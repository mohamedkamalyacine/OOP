#include <conio.h>
#include <iostream>
#include<windows.h>
#include <dos.h>
#include <dir.h>
#include "Stack.h"

using namespace std;

int main()
{

    Stack s1(3);
    s1.push(15);
    s1.push(30);
    s1.push(20);
    viewContent(s1);

    cout << endl;

    Stack s2(3);
    s2 = s1;
    cout << "S2 Content: " << endl;
    viewContent(s2);
    //s1.push(40);
    //s1.push(60);
    //s1.display();

    //cout << "Objects Number = " << Stack::getCount() << endl;
    //cout<<endl;

    /*for(int i=0; i<5; i++)
    {
        cout<<s1.pop()<<endl;
    }*/

    //viewContent(s1);
    //cout << "Objects Number = " << Stack::getCount() << endl;

    return 0;
}
