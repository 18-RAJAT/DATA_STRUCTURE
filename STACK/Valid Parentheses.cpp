bool isValidParenthesis(string expression)
{
    stack<char>s; 
    for(int i=0;i<expression.length();++i)
    {
        char ch=expression[i];
        //If opening bracket,stack push
        //And If closing  bracket check and pop the character
        if(ch=='(' or ch=='{' or ch=='['){s.push(ch);}
         else
         {
             //for closing bracket
             if(!s.empty()) {
                  char top = s.top();
                  if((ch==')' and top=='(') or (ch=='}' and top=='{') or (ch==']' and top=='[')) {s.pop();}
                  else {return false;}
             }
            else{return false;}
        }
    }
    if(s.empty()){return true;}
    else{return false;}
}