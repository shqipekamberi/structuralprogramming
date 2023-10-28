#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int hours, minutes, time;
    int seconds=360;
    hours =seconds /60;
    minutes= seconds /180;
    seconds = seconds/ 360;
    cout<< "Time:"<<hours;
    cout<<"/"<<minutes;
    cout<<"/"<<seconds;
    
    return 0;

    
}