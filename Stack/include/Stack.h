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
    ~Stack();
    void display();
    void push(int);
    int pop();
};

#endif // STACK_H
