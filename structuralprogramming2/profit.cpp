#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double employees, salary, sold, price;
    double gross, net;
    cout<<"Number of employees:";
    cin>> employees;
    cout<<"Salary:";
    cin >> salary;
    cout<<"Total number of sold products:";
    cin >>sold;
    cout<<"Price:";
    cin>>price;
    cout<<"The gross profit is:";
    gross = sold+price;
    cout<<"The net profit:";
    net=gross-(employees+salary);
    return 0;
}