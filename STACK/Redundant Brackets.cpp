#include<stack>
bool findRedundantBrackets(string &s)
{
    stack<char> stk;
    for(int i=0;i<s.length();++i)
    {
        char ch=s[i];
        if(ch=='(' or ch=='+' or ch=='-' or ch=='*' or ch=='/')
        {
            stk.push(ch);
        }
        else
        {
          if(ch==')')
          {
              bool isRedundent=true;

              while(stk.top()!='(')
              {
                  char top=stk.top();
                  if(top=='+' or top=='-' or top=='*' or top=='/')
                  {
                  isRedundent=false;
                  }
              stk.pop();
          }
          if(isRedundent==true)return true;
          stk.pop();        
        }
    }
}
    return false;
}