#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Input a name: ";
    cin >> name;
    int counter = 0;

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a')
        {
            counter++;
        }
        cout << counter;
    }
    return 0;
}