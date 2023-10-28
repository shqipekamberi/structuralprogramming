#include<iostream>
using namespace std;

int main()
{
    int age;
    bool is_student;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18)
    {
        cout<<"Are you a student (0 for no, 1 for yes)";
        cin>>is_student;
    
    if(is_student)
    
        cout<<"Price is 8";
    
    else
    
        cout<<"Price is 12";
    }
    else if (age < 18)
    {
        cout<<"Price is 5";
    }
    else{
        cout<<"Error";
    }
    return 0;

}