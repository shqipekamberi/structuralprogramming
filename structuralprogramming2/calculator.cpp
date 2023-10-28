#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"First number:";
    cin>>num1;
    cout<<"\n Second number:";
    cin>>num2;
    char op;
    cout<<"Enter operator:";
    cin>>op;

    if(op=='+')
    {
        cout<<num1+num2;
    }
    else if(op=='-')
    {
        cout<<num1-num2;
    }
    else if(op=='*')
    {
    cout<<num1*num2;
    }
    else if(op=='/')
    {
        cout<<num1/num2;
        }
    else if(num1/0)
    {
        cout<<"Error";
    }
    
    
    
return 0;

}