#include <iostream>
using namespace std;

int main()
{
    int n, counter=1;
    cout<<"Enter number: ";
    cin>>n;

    while(counter <= n)
    {
        cout << " " << counter;
        counter++;

        if(counter % 5 == 1)
        {
            cout << endl;
        }

    } 
    return 0;
}