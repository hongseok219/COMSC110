#include <iostream>
using namespace std;

int main()
{
	int usersGuess1;
	int usersGuess2;
	int usersGuess3;

	cout << "Three addition and subtraction problems:" << endl;
	cout << endl;

	cout << "1 + 2 = ";
	cin >> usersGuess1;
	cin.ignore(1000, 10);
	
	if (usersGuess1 == 3)
		cout << "Good work - your answer is correct!" << endl;
	else
		cout << "Nice job, but a better answer is 3" << endl;
	cout << endl;

	cout << "100 - 99 = ";
	cin >> usersGuess2;
	cin.ignore(1000, 10);
	
	if (usersGuess2 == 1)
		cout << "Good work - your answer is correct!" << endl;
	else
		cout << "Nice job, but a better answer is 1" << endl;
	cout << endl;
	
	cout << "12 + 21 = ";
	cin >> usersGuess3;
	cin.ignore(1000, 10);

	if (usersGuess3 == 33)
		cout << "Good work - your answer is correct!" << endl;
	else
		cout << "Nice job, but a better answer is 33" << endl;

return 0;
}