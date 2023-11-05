#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = (rand () % 10) + 1;
    int guessedNumber;

    cout << "Guess the Number Game!\n";
    cout << "Try to guess the correct number(between 1 and 10).\n";

    while (true)
    {
        cout << "Guess a number(1-10): ";
        cin >> guessedNumber;

        if (guessedNumber < 1 || guessedNumber > 10)
        {
            cout << "Error! Enter a valid number between 1-10!\n";
        }
        else if (guessedNumber == randomNumber)
        {
            cout << "Congrats!\n";
            break;
        }
        else
        {
            cout << "Try again!\n";
        }
    }
    return 0;
}