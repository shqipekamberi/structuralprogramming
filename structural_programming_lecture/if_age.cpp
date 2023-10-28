#include <iostream>
using namespace std;

int main()
{
    int birth_year, age;
    cout<<"Enter your birthyear: ";
    cin>>birth_year;
    age = 2021 - birth_year;
    cout<<"Your age is: "<<age<<endl;

    if(age % 2 == 0)
    {
        cout<<"Your age is even!";
    } 
    else 
    {
        cout<<"Your age is odd!";
    }

    return 0;
    
}