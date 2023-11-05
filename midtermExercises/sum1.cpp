#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	char c;
	int sum = 0, count = 0;

	cout << "\nJep karakterin e pare, per fund jep '!':";
	cin >> c;
	
		while (c != '!')
		{
			if (isdigit(c))
				switch (c) {
				case '0':sum = sum + 0; count++; break;
				case '1':sum = sum + 1; count++; break;
				case '2':sum = sum + 2; count++; break;
				case '3':sum = sum + 3; count++; break;
				case '4':sum = sum + 4; count++; break;
				case '5':sum = sum + 5; count++; break;
				case '6':sum = sum + 6; count++; break;
				case '7':sum = sum + 7; count++; break;
				case '8':sum = sum + 8; count++; break;
				case '9':sum = sum + 9; count++; break;
				default: cout << "\nInvalid value"; break;
				}
			cout << "\nJep karakterin e ardhshem, per fund jep '!':";
			cin >> c;
		}
		cout << "\nShuma e karaktereve/shifrave:" << sum << endl
			<< "\nNumri i karaktereve/shifrave:" << count;
	cin.get();
	return 0;
}

