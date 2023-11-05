#include <iostream>
using namespace std;

int main()
{
    int width, length;
    char symbol;
    cout << "Input the * symbol: ";
    cin >> symbol;
    cout << "\nInput width of rectangle: ";
    cin >> width;
    cout << "\nInput  length of rectangle: ";
    cin >> length;

    for (int i = 1; i < width; i++)
     for (int j = 1; j < length; j++)
     {
        cout << symbol;
     }
     cout << endl;
    return 0;
}