#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0));
	int number = 1+ rand() % 100;
	int userinput;
	cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
	while (true)
	{
		cin >> userinput;
		cin.ignore(1000, 10);
		
		if (number < userinput)
			cout << "That's too high -- guess again: ";
		if (number > userinput)
			cout << "That's too low -- guess again: ";
		if (number == userinput) break;
	}
	cout << "That's right -- it's " << number << endl;
	return 0;
}