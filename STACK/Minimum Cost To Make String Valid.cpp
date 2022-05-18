#include<stack>
int findMinimumCost(string str)
{
    //odd condition
    if(str.length()%2==1){return -1;}
    stack<char>s;
    for(int i=0;i<str.length();++i)
    {
        char ch=star[i];
        if(ch=='{')s.push(ch);
        else
        {
            //Ch is closed brace 
            if(!s.empty() and s.top()=='{'){s.pop();}
            else{s.push(ch);}
        }
    }
    //Stack contains invalid expression then
    int a=0,b=0;
    while(!s.empty())
    {
        if(s.top()=='{'){b++;}
        else{a++;}
        s.pop();
    }
    int answer = (a+1)/2 + (b+1)/2;
    return answer;
}