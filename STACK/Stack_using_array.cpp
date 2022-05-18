#include<bits/stdc++.h>
using namespace std;

#define size 100
int arr[size];
int top = -1;

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

void push(int element)
{
    if(top == size - 1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        top++;
        arr[top] = element;
    }
}

void pop()
{
   if(isEmpty())
   {
       cout<<"Stack is empty:"<<endl;
   }
   else
    {
        top--;
        cout<<"pop element is:"<<top<<endl;
    }
}

void peek()
{
    if(isEmpty())
    {
        cout<<"Stack is empty:"<<endl;
    }
    else
    {
        cout<<"Top element is :"<<arr[top]<<endl;
    }
}

void display()
{
  if(isEmpty())
  {
      cout<<"Stack is empty:"<<endl;
  }
  else
  {
      for(int i=0;i<=top;++i)
      {
          cout<<"Elements are :"<<arr[i]<<endl;
      }
  }
}

int main()
{
    int flag = 1;
    int choice;
    int element;

    while(flag == 1)
    {
        cout<<"\n 1.PUSH 2.POP 3.PEEK 4.DISPLAY 5.EXIT";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the value you want to push into the stack is :\t";
            cout<<endl; 
            cin>>element;
            push(element);
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            flag = 0;
            break;
        }
    }

    return 0;
}


//--------------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------------//



#include<bits/stdc++.h>
using namespace std;

#define size 100
int arr[size];
int top=-1;

bool isEmpty()
{
    if(top==-1){return true;}
    else{return false;}
}
void push(int element)
{
    if(top==size-1){cout<<"Stack is full"<<endl;}
    else{top++;arr[top]=element;}
}
int pop()
{
    if(isEmpty){cout<<"Empty:"<<endl;}
    else{top--;cout<<"element poped:"<<top<<endl;}
}

void peek()
{
    if(isEmpty){cout<<"Stack is Empty"<<endl;}
    else{cout<<"Top element is :"<<arr[top]<<endl;}
}

void display()
{
  if(isEmpty()) {cout<<"Stack is empty:"<<endl;}
  else {for(int i=0;i<=top;++i){cout<<"Elements are :"<<arr[i]<<endl;}}
}

int main()
{
 int flag=1;int choice;int element;
 while(flag==1)
 {
    cout<<"\n 1.push 2.pop 3.peek 4.display 5.exit";
        cout<<endl;
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            cout<<"enter the element"<<endl;
            cin>>element;
            push(element);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            peek();
            break;
            
            case 4:
            display();
            break;
            
            case 5:
            flag=0;
            break;
        }
 }   
}