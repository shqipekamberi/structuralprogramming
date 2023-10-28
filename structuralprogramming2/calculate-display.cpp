#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Weight     Height      BMI" << endl;
    cout << fixed << setprecision(2) << weight << "\t" << height << "\t\t" << bmi << endl;

    return 0;
}
