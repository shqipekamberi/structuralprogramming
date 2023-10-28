#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter 3 digit number"<<endl;
    cin>>num;

    cout<< num/100<<"\t";
    num=num%100;
    cout<<num/10<<"\t";
    cout<<num%10<< "\t\'";

    return 0;
}