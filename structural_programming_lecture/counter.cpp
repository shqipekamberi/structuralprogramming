#include <iostream>
using namespace std;

int main()
{
    int input_number, zero = 0, pos_number = 0, neg_number = 0;
    int flag = 0;

    while (flag != -1)
    {
        cout << "\nInput the next number: ";
        cin >>  input_number;
        if(cin.fail()){
            cout << "The number you entered is not int!" << endl;
            
            return 0;
        }
        if (input_number == 0)
            zero++;
        else if(input_number > 0) 
            pos_number++;
        else
            neg_number++;

        cout << "\nDo you have another number (yes/0, no/-1): ";
        cin >> flag;
        
    }

    cout << "Positive numbers: " << pos_number << endl;
    cout << "Negative numbers: " << neg_number << endl;
    cout << "Total zoros added: " << zero << endl;
    
    return 0;
}