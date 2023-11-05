#include <iostream>
using namespace std;

int main()
{
    int n, num, count = 0, key, max = INT_MIN;

    cout << "Input the number of integer values: ";
    cin >> n;
    cout << "\nInput the key you search: ";
    cin >> key;

    for (int i = 0; i <= n; i++)
    {
        cout << "\nInput an integer number: ";
        cin >> num;

        if (num == key)
        {
            count++;
        }
    }
    cout << "The number of occurrence of given key " << key << " is: " << count << endl;

    return 0;
}