#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int z, y, x;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;

    if(x >= 0)
    {
         z=y-y+1;
         cout<<"\n"<<z;
    }
    

    else if(x < 0)
      {  
        z=y*10+10;
        cout<<"\n"<<z;
      }
    
    return 0;


}