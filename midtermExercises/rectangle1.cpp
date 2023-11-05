#include <iostream>
using namespace std;

int main()
{
    double width1, width2, length1, length2, surface1, surface2;
    cout << "Input width of first rectangle: ";
    cin >> width1;
    cout << "Input length of the first rectangle: ";
    cin >> length1;
    cout << "Ipnut width of the second rectangle: ";
    cin >> width2;
    cout << "Input length of the second rectangle: ";
    cin >> length2;

    surface1 = width1 * length1;
    surface2 = width2 * length2;

    if (surface1 > surface2)
    {
        cout << "The first rectangle has a greater surface: " << surface1 << endl;
    }
    else if (surface1 < surface2)
    {
        cout << "The second rectangle has a greater surface: " << surface2 << endl;
    }
    else
    {
        cout << "The surfaces are equal!" << endl;
    }
    return 0;

}