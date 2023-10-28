#include <iostream>
using namespace std;

int main()
{
    int choose;
    cout<<"Chosse professor from 1-5: ";
    cin>>choose;
    if (choose == 1)
    { cout<<"\nProfessor name: Professor 1";
      cout<<"\nSubject: Introduction to Computer Sciences";
      cout<<"\nFaculty: Faculty of Contemporary Sciences and Technologies";
    }
    else if (choose == 2)
    {
      cout<<"\nProfessor name: Professor 2";
      cout<<"\nSubject: Mathematics";
      cout<<"\nFaculty: Faculty of Business and Economics";
    }
    else if (choose == 3)
    {
      cout<<"\nProfessor name: Professor 3";
      cout<<"\nSubject: Linear Algebra";
      cout<<"\nFaculty: Faculty of Contemporary Sciences and Technologies";
    }
    else if (choose == 4)
    {
      cout<<"\nProfessor name: Professor 4";
      cout<<"\nSubject: Structural Programming";
      cout<<"\nFaculty: Faculty of Contemporary Sciences and Technologies";
    }
    else if (choose == 5)
    {
      cout<<"\nProfessor name: Professor 5";
      cout<<"\nSubject: Basics of design";
      cout<<"\nFaculty: Faculty of Contemporary Sciences and Technologies";
    }
    else if (choose == 0)
    {
        cout<<"\nInvalid choice";
    
    }
    else 
    {
        cout<<"\nInvalid choice";
    }

    return 0;
}