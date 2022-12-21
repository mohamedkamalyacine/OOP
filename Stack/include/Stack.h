#ifndef STACK_H
#define STACK_H


class Stack
{
private:
    int top;
    int arrSize;
    int *s;
    static int counter;

public:
    Stack(int n);
    Stack(Stack &z);    //Copy Constructor
    ~Stack();
    void display();
    void push(int);
    int pop();
    static int getCount();
    friend void viewContent(Stack x);     //Friend function, passing object by value
    //friend void viewContent(Stack &x);      //Friend function, passing object by reference
    void operator =(Stack s); //Operator Overloading
};

void gotoxy(int x,int y);
void SetColor(int ForgC);

#endif // STACK_H
