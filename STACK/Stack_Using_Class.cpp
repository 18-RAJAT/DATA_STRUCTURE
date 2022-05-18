#include<bits/stdc++.h>
using namespace std;

class Stack
{
public:
int* arr;
int top;
int size;

Stack(int size)
{
    this->size = size;
    arr = new int[size];
    top  = -1;
}

void push(int element)
{
    if(size - top > 1)
    {
        top++;
        arr[top] = element;
    }
    else
    {
        cout<<"Overflow"<<endl;
    }
}

void pop()
{
    if(top >= 0)
    {
        top--;
    }
    else
    {
        cout<<"Underflow"<<endl;
    }
}

int peek()
{
    if(top >= 0)
    {
        return arr[top];
    }
    else
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
}

bool isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
};

int main()
{
    Stack stk(4); //Size

    stk.push(11);
    stk.push(15);
    stk.push(17);
    stk.push(21);

    cout<<"TOP ELEMENT :"<<stk.peek()<<endl;

    stk.pop();

    if(stk.isEmpty())
    {
        cout<<"Stack empty"<<endl;
    }
    else
    {
        cout<<"Stack is Not empty"<<endl;
    }
}
