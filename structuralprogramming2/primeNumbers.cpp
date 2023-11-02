#include <iostream>
using namespace std;

int main()
{
    int i = 1, n, flag = 0;
    cout << "Enter a natural number: ";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }
    cout << "The prime numbers from 1 to " << flag << endl;

    return 0;

}