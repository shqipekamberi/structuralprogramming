#include <iostream>
using namespace std;

int main() {
    char inputChar;

    cout << "Enter a character: ";
    cin >> inputChar;

    cout << "Character: " << inputChar << endl;
    cout << "ASCII code: " << int(inputChar) << endl;

    return 0;
}