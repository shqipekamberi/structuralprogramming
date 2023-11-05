#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hour, sec, min, sec1, secLeft;
    cout <<"Input time in seconds: ";
    cin >> sec1;

    hour = sec1 / 3600;
    secLeft = sec1 - hour * 3600;
    min = secLeft / 60;
    sec = secLeft - min * 60;

    cout << hour << ":" << min << ":" << sec <<endl;

    return 0;
}