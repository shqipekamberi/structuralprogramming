#include <iostream>
using namespace std;

bool isEven(int);
void func2 (int);

int main()
{
    func2(4);
}

bool isEven (int n)
{
   
    if (n % 2 == 0)
        return true ;
    else
        return false ;

}
void func2 (int n)
{
     if(isEven(n))
        cout << "The number " << n << " is even\n";
    else
        cout << "The number " << n << " is odd\n";
}