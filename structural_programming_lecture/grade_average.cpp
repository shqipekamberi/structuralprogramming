#include <iostream>
using namespace std;

int main()
{
    int n, grade;
    cout<<"Input the number of grades: ";
    cin>>n;
    int count = 1;
    int sum = 0;
    while (count<=n)
    {
        cout<< "\nInput the "<<count<<" grade: ";
        cin >> grade;
        sum = sum + grade;
        count = count + 1;
    }
    double ave = (double) sum / (count - 1);
    cout << "\n The average of grades: "<< ave <<endl;

    return 0;
}
