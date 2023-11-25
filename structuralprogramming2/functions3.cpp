#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;
    cout << "Input number: ";
    cin >> n;
    cout << factorial (n);
    cout << endl;
}

int factorial(int n)
{
    int p =1;
    while(n >= 1)
    {
        p = p * n;
        n--;
    }
    return p;
}
//for loop
// for 