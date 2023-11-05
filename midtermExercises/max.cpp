#include <iostream>
using namespace std;

int main()
{
    int n, num, max = INT_MIN;
    cout << "\nInput the number of integer values: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nInput an integer number: ";
        cin >> num;

        if (num > max)
            max = num;
    }
    cout << "\nMaximum of given numbers is :" << max << endl;

    return 0;

}