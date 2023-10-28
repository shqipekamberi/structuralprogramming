#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double weight, height;
    float BMI;
    cout <<"Wheight:";
    cin >> weight;
    cout<<"Height:";
    cin>> height;

    BMI=weight /pow(height,2);
    cout<<"BMI is:"<< BMI << endl;
    return 0;

}