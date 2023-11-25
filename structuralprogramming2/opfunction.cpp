#include <iostream>
using namespace std;

void area(double r)
{
    double pi = 3.14;
    cout << r * r * pi;
}
void area(int width, int lenght)
{
    cout << lenght * width;
}

int main ()
{
    double radius;
    cout << "Give the radius: ";
    cin >> radius;
    cout << area(r);

    int length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << area(length, width);

    return 0;
}
