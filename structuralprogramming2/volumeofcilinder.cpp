#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r, h;
    float Pi=3.14, V;
    cout<<"Enter r:";
    cin>>r;
    cout<<"Enter h:";
    cin>>h;
    V=pow(r,2)*Pi*h;
    cout<<"The volume is:"<<V<<endl;
    
    return 0;


}