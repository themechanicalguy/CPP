#include <iostream>
using namespace std;

class Stack
{
private:
    int *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new int[size];
    }
    void push(int x);
    int pop();
};
void Stack::push(int x)
{
    if (top == size - 1)
        cout << "Stack is full";
    else
    {
        top++;
        stk[top] = x;
    }
}
int Stack::pop()
{
    int x = 0;
    if (top == 1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    Stack s(10);
    s.push(10);
    s.push(23);
    s.push(33);
}
