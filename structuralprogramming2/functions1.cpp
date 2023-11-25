#include <iostream>
using namespace std;

int powerfunc(int, int);

int main()
{
    int a, power;
    cout << "Input the base number: ";
    cin >> a;
    cout << "Input the number of the power you want to raise the number to: ";
    cin >> power;

    cout << powerfunc(a, power);
    return 0;
    
}

int powerfunc(int a, int b)
{
    int p = 1;
    for(int i = 1; i <= b; i++)
        p *= a;
    return p;
}