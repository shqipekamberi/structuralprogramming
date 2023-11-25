#include <iostream>
using namespace std;

double area(double r)
{
    double pi = 3.14;
    return pi * (r * r);
}
double area(double width, double lenght)
{
   return lenght * width;
}

int main()
{
    cout << area(5.12);
    cout << endl;
    cout << area(5, 4);
}