#include <iostream>
#include "Stack.h"

using namespace std;

int Stack::counter = 0;

Stack::Stack(int n=5)
{
    top = 0;
    arrSize = n;
    s = new int[arrSize];

    counter++;

    for(int i=0; i<arrSize; i++)
    {
        s[i] = 0;
    }

    cout << "Hello from Stack's Constructor, Array size = " << arrSize << endl;
    cout << "Number of objects = " << counter << endl;
}

Stack::~Stack()
{
    delete[] s;
    counter--;
    cout << "This is Destructor" << endl;
}

void Stack::display()
{
    for(int i=0; i<arrSize; i++)
    {
        cout << s[i] << endl;
    }
}

void Stack::push(int num)
{
    if( top == arrSize )
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        s[top] = num;
        top++;
    }
}

int Stack::pop()
{
    int returnVal;

    if( top == 0 )
    {
        cout << "Stack is Empty" << endl;
        returnVal = -1;
    }
    else
    {
        top--;
        returnVal = s[top];
    }

    return returnVal;
}

int Stack::getCount()
{
    return counter;
}
