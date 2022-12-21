#include <iostream>
#include<windows.h>
#include <dos.h>
#include <dir.h>
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
    //cout << "Number of objects = " << counter << endl;
}

//Copy Constructor
Stack::Stack(Stack &z)
{
    top = z.top;
    arrSize = z.arrSize;
    s = new int[arrSize];   //New Memory Allocation

    for(int i=0; i<arrSize; i++)
    {
        s[i] = z.s[i];
    }

    counter++;
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

//Friend function, passing object by reference
/*void viewContent(Stack &x)
{
    int newTop = x.top;
    while(newTop != 0)
    {
        newTop--;
        cout << x.s[newTop] << endl;
        //newTop;
    }
    cout << "After calling viewContent function accepts Reference, Objects Number = " << Stack::getCount() << endl;
}*/

//Friend Function -- pass object by value
void viewContent(Stack x)
{
    int newTop = x.top;
    while(newTop != 0)
    {
        newTop--;
        cout << x.s[newTop] << endl;
        //newTop;
    }
    //cout << "After calling viewContent function -- call by value, Objects Number = " << Stack::getCount() << endl;
}

void Stack::operator =(const Stack &s)
{
    delete[] this->s;   //Delete Dynamic Allocation of the Array at the caller side
    this->top = s.top;
    this->arrSize = s.arrSize;
    this->s = new int[arrSize];

    for(int i=0; i<arrSize; i++)
    {
        this->s[i] = s.s[i];
    }
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}







