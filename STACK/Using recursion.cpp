#include<bits/stdc++.h>
using namespace std;

void printStk(stack<int>stk)
{
    if(stk.empty())
    return;

    int temp = stk.top();

    stk.pop();

    printStk(stk);
    cout<<"TOP VALUE IS : "<<temp<<" "<<endl;

    stk.push(temp);
}

int main()
{
    stack<int>stk;
    
    stk.push(10);
    stk.push(5);
    stk.push(19);
    stk.push(30);
    stk.push(22);
    stk.push(57);

    printStk(stk);
    stk.pop();
    return 0;
}