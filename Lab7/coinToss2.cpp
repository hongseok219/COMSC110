// Lab7
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0));

    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Modify coinToss1 that user can specify 
    the number of coin tosses to perform" << endl << endl;

	int userNumber;
	cout << "Enter the number of tosses to perform: ";
	cin >> userNumber;
	cin.ignore(1000,10);
	for (int i=0; i<userNumber; i++)
	{
		int number = rand() % 2;
		if (number == 0)
			cout << "Heads" << endl;
		else
			cout << "Tails" << endl;
	}

return 0;
}