#include <iostream>
using namespace std;

int sum(int n);

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << sum(n);
    return 0;
}

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}