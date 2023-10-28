#include<iostream>
using namespace std;

int main()
{ 
    string destination, weather;
    cout<<"Enter the destination:";
    cin>>weather;
    cout<<"Enter the weather:";
    cin>>weather;

    if(destination=="beach"&&weather=="sunny")
    {
        cout<<"Wear swimwear and sunscreen!";
    }
    else if(destination== "mountain"&&weather=="rainy")
    {
        cout<<"Wear jacket!";
    }
    else {
        if (weather=="snow")
        cout<<"Wear jacket";
        else if (weather == "rainy")
        cout<<"Get umbrella";
        else
        cout<<"sunny";
    }
    return 0;

}