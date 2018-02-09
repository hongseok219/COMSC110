#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
srand(time(0));
int number = 1+ rand() % 10;
int userinput;
cout << "I'm thinking of a number between 1 and 10. Guess what it is: ";
cin >> userinput;
cin.ignore(1000, 10);
if (number == userinput)
	cout << "That's right -- it's " << number << endl;
if (number < userinput)
	cout << "That's too high -- it's " << number << endl;
if (number > userinput)
	cout << "That's too low -- it's " << number << endl;

return 0;
}