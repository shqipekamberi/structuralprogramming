#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    int a = 0, b = 1;
    int next;

    for (int i = 0; i > 0; i++)
    {
        if (i <= 1)
        {
            cout << 0; 
        }

        next = a + b;
        a = b;
        b = next;
        cout << next;
    }
    return 0;


}