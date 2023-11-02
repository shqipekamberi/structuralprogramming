#include <iostream>
using namespace std;

int main()
 {
    int n, num = 2, flag = 0;

    cout << "Enter a natural number (n): ";
    cin >> n;
    cout << "Prime numbers between 1 and " << n << " are:" << endl;
 
    if (num <= 1)
    {
        cout<<"Not prime number!";
    }


    while (num <= n) {
        if (n % num == 0) {
            cout << num << " ";
        }
        num++;
    }

    cout << endl;

    return 0;
}