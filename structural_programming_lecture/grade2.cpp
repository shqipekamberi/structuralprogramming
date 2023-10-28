#include <iostream>
using namespace std;

int main()
{
    int points;

    cout<<"\n Input points:";
    cin>>points;

    if(points>=50)
    if(points<65)
    cout<<"6";
    else
    if(points<75)
    cout<<"7";
    else
    if(points<85)
    cout<<"8";
    else
    if(points<95)
    cout<<"9";
    else
    if(points<=100)
    cout<<"10";
    else
    cout<<"invalid!";
    
    else 
    cout<<"Failed!";
}