//prime number
#include <iostream>
using namespace std;

bool checkPrime(int n);

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (checkPrime(n))
    {
        cout << "Number is prime!\n";
    }
    else
    {
        cout << "Not prime!\n";
    }
    return 0;

}
bool checkPrime(int n)
{
    bool isPrime = true;
    if (n == 1 || n == 0)
    {
        isPrime = false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}