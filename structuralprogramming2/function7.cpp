#include <iostream>
using namespace std;

int mult(int a, int b)
{
   if (a == 0 || b == 0)
   {
    return 0;
   }
   else
   {
    return a + mult(a, b - 1);
   }
}
int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << mult(a, b);
    return 0;
}
