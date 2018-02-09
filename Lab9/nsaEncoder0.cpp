// Lab9
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Make a program that makes a secret message" << endl << endl;

    cout << "Enter a line of text: ";
	string userInput;
	getline(cin, userInput);
	for (int i = 0; i < userInput.length(); i++)
		userInput[i]++;
	cout << userInput << endl;
	cout << endl;
}