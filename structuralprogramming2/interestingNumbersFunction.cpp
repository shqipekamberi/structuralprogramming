#include <iostream>
using namespace std;

bool checkInteresting(int n)
{
    bool isInteresting = true;
    for (int i = 1; i <= 1000; i++)
    {
        if (n % i == 0)
        {
            cout << true;
        }
    }
    else false;
}

int main ()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    checkInteresting(num);
    

}
