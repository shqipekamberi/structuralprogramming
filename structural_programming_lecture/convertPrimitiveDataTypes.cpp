#include <iostream>
using namespace std; //mesoe cka eshte namespace std

int main(){

    int x = 1;
    double d = 2.3;

    double x1 = x;
    int d1 = d;

    string num = "3.99werwer";
    int n = stoi(num); // parse string to int
    double n2 = stod(num); // parse string to double

    cout << x << endl;
    cout << x1 << endl;
    cout << d << endl;
    cout << d1 << endl;
    cout << n << endl;
    cout << n2 << endl;

    cout << INT_MIN << "\t" << INT_MAX << endl;
    cout << __DBL_MIN__ << "\t" << __DBL_MAX__ << endl;
    cout << UCHAR_MAX << endl;
    cout << __FLT_MIN__ << "\t" << __FLT_MAX__ << endl;

}