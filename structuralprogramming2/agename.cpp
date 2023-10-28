#include <iostream>
#include <string>
using namespace std;

int main()
{string name;
    int currentYear, birthYear, age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter the current year: ";
    cin >> currentYear;

    cout << "Enter the year you were born: ";
    cin >> birthYear;

    age = currentYear - birthYear;

    cout << "My name is: " << name << endl;
    cout << "Born on: " << birthYear << endl;
    cout << "Age: " << age << endl;

    return 0;
    }