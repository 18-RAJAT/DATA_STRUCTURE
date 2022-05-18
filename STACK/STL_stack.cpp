#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creating a stack
    stack<int>stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);

    
    //pop
    stk.pop();
    stk.pop();
    stk.pop();

    cout<<"Topmost element is :"<<stk.top()<<endl;

    if(stk.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of the stack is :"<<stk.size()<<endl;
}