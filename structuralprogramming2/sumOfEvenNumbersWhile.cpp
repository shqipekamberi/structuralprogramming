#include <iostream>
using namespace std;

int main()
{
    int n, evenNum = 2, sum = 0;
    cout << "Enter a number (bigger than 0): ";
    cin >> n;

    while(evenNum <= n)
    {
        if (evenNum % 2 == 0)
        {
            sum = sum + evenNum;
        }
        evenNum ++;
        
    }

    cout << "The sum of the even numbers is :" << sum << endl;

    return 0;

}