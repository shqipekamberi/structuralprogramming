#include <iostream>
using namespace std;

void print(string a)
{
    cout << a;
}
void print(int a)
{
    cout << a;
}
void print(double a)
{
    cout << a;
}

int main()
{
    print("shqipe\n");
    print(5);
    print(3.14);
}