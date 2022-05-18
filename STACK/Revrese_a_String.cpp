#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="Eat Sleep Code Repeat";
    stack<char>s;
    for(int i=0;i<str.length();++i)
    {
    char ch=str[i];
    s.push(ch);
    }
    string answer=" ";
    while(!s.empty())
    {
        char ch=s.top();
        answer.push_back(ch);
        s.pop();
    }
    cout<<"Reversed string is :"<<answer<<endl;
}