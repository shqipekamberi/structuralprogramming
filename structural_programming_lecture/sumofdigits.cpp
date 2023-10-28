#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=356;
    int d1, d2, d3;
    d1=356/100;
    d2=(356/10)%10;
    d3=356%10;
    cout<<"the sum is="<<d1 + d2 + d3 <<endl;

    return 0;
}