#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int num1 = 0, num2=0;
    char op;
    cout << "First number: ";
    cin >> num1;
    cout << "\nSecond number: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> op;

    if(op == '+') 
        cout << num1 + num2 << endl;
    else if(op == '-')
        cout << num1 - num2 << endl;
    else if(op == '*')
        cout << num1 * num2 << endl;
    else if(op == '/' && num2 != 0)
            cout << num1 / num2 << endl;
    else
            cout << "Error: you cannot divide by zero!" << endl;
    return -1;
}
