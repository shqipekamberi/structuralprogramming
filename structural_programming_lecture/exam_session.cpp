#include <iostream>
using namespace std;

int main()
{
    int choose;
    cout<<"Choose an exam session(1 - January, 2 - April, 3 - June, 4 - September): ";
    cin>>choose;
    if(choose == 1)
    {
        cout<<"Exams available in January: Computer Sience, Linear Algebra, English";
    }
    else if (choose == 2)
    {
        cout<<"Exams availible in April: Mathematics, Structural Proframming, Macedonian";
    }
    else if (choose == 3)
    {
        cout<<"Exams available in June: Art, It-Skills, Music";
    }
    else if (choose == 4)
    {
        cout<<"Exams availible in September: History, Geography, Physics";
    }
    else
    {
        cout<<"Invalid choice";
    }

    return 0;

}