#include <iostream>
using namespace std;

int main()
{
    double alfa, beta, gama;
    cout << "Input first angle: ";
    cin >> alfa;
    cout << "Input second amgle: ";
    cin >> beta;
    cout << "Input third angle: ";
    cin >> gama;
    
    if (alfa + beta + gama == 180)
    {
        cout << "A triangle is formed!" << endl;
        
        if (alfa == 90 || beta == 90 || gama == 90 )
        {
            cout << "The triangle has 90 degree angle!";
        }
        else if (alfa > 90 || beta > 90 || gama > 90)
        {
            cout << "The triangle has a wide angle!";
        }
        else if (alfa < 90 || beta < 90 || gama < 90)
        {
            cout << "The triangle has a tight angle!";
        }
    }
    else
    {
        cout << "These angles don't form a triangle!" << endl;
    }

    return 0;

}