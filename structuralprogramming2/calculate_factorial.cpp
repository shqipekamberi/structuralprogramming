#include <iostream>
using namespace std;

int main()
{
    int n;
    int p =1;
    cout<<"Enter n: ";
    cin>>n;

    while(n>=1)
    {
        p=p*n;
        n--;
    }
    cout<<p;
    return 0;
}