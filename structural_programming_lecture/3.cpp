#include <iostream>
using namespace std;

int main()
{
    int n, num1, num2, num3, product;
    cout<<"Enter 3 digit number: ";
    cin>>n;
    if (n < 100 || n > 999)
    {
        cout<<"Invalid number, please enter 3 digit number.";
    }
    else
    {
        num1 = n / 100;
        num2 = (n /10) % 10;
        num3 = n % 10;
        product = num1*num1*num2*num2*num3*num3;

        if(n == product)
        {
            cout<<"The number is equal to the product of the square of its digits.";
        }
        else
        {
            cout<<"The  number is not equal to the product of the square of its digits.";
        }
        return 0;
    }

}