#include<iostream>
using namespace std;
 
 int main()
 {

    int num1, num2, sum, diff, product, mod;
    double division;
    cout <<"\n Insert first integer: ";
    cin >> num1;
    cout <<"\n Insert the second number: ";
    cin >> num2;

    sum = num1+ num2;
    diff = num1 - num2;
    division = (double)num1/ num2;
    mod = num1 % num2;
    product = num1* num2;

    cout<<"\n Sum="<< num1<<" + "<< num2<<" = "<< num1+num2;
    //or <<sum;
    cout<<"\n Difference ="<< num1<<" - "<< num2<<" = "<< num1-num2;
    // or <<diff;
    cout<<"\n Product="<< num1<<" * "<< num2<<" = "<< num1*num2;
    // or <<product;
    cout<<"\n Division="<<num1<<" / "<< num2<<" = "<< num1/num2;
    // or <<division;
    cout<<"\n Modules="<< num1<<" % "<< num2<<" = "<< num1%num2;
    // or <<mod;

    cin.get();
 }