#include <iostream>
using namespace std;

int main()
{
    int n, n1=0, n2=1, result=0;
    cin>>n;

    while (n>0)
    {
        result = n1+n2;
        n1 = n2;
        n2 = result;
        n--;
    }
    cout<<"Results: "<<result;
    return 0;

}