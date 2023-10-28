#include <iostream>
using namespace std;

int main()
{
    char roman_numeral;
    int arabic_equivalent ;
    cout<<"Enter a Roman numeral(I, V, X, L, C ,D, M):";
    cin>>roman_numeral;

    if(roman_numeral == 'I')
    {
        arabic_equivalent = 1;
    }
    else if (roman_numeral == 'V')
    {
        arabic_equivalent = 5;
    }
    else if (roman_numeral == 'X')
    {
        arabic_equivalent = 10;
    }
    else if (roman_numeral == 'L')
    {
        arabic_equivalent = 50;
    }
    else if (roman_numeral == 'C')
    {
        arabic_equivalent = 100;
    }
    else if (roman_numeral == 'D')
    {
        arabic_equivalent = 500;
    }
    else if (roman_numeral == 'M')
    {
        arabic_equivalent = 1000;
    }
    else
    {
        cout<<"Invalid Roman numeral.";
        return 1;
    }

    cout<<"Arabic equivalent: "<<arabic_equivalent;

    return 0;
}