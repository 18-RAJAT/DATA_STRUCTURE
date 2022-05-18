#include<bits/stdc++.h>
using namespace std;

int matchingPair(int a,int b)
{
    if(a == '{' and b == '}')
    {
        return 1;
    }
    else
    if(a == '[' and b == ']')
    {
        return 1;
    }
    else
    if(a == '(' and b == ')')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    stack<char>stk;
    string s;
    cout<<"Enter the brackets :\t";
    cin>>s;

    for(int i=0;i<s.length();++i)
    {
            if(s[i] == '(' or s[i] == '{' or s[i] == '[')
            {
                stk.push(s[i]);
            } 
            else if(stk.empty() or !matchingPair(stk.top(),s[i]))
            {
                cout<<"NOT A MATCHING PAIR:"<<endl;
            }
            else
            {
                stk.pop();
            }
    }

    if(stk.empty())
    {
        cout<<"BRACKETS ARE BALANCED AND MATCHED :"<<endl;
    }
    return 0;
}

