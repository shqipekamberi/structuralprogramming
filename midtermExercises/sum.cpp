#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char c;
    int sum = 0;
    cout << "Input the first character (to end give !): ";
    cin >> c;

    while (c != '!')
    {
        if (isdigit(c))
        {
            if (c == '1')
            sum = sum + 1;
            if (c == '2')
            sum = sum + 2;
            if (c == '3')
            sum = sum + 3;
            if (c == '4')
            sum = sum + 4;
            if (c == '5')
            sum = sum + 5;
            
        }
        cout << "\nInput the next char (to end enter !): ";
        cin >> c;

        cout << "\nThe sum of digit charcters is: " << sum << endl;
        return 0;
    }
}

