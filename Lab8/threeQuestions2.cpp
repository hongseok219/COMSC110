// Lab 8
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <string>

using namespace std;

void quiz(string answer1, string answer2)
{
	string userInput;
	getline(cin, userInput);

	if (answer1 == userInput || answer2 == userInput)
		cout << "Correct!" << endl;
	else
		cout << "Incorrect!" << endl;
}

int main()
{
  cout << "Programmer: Hongseok Jang" << endl;
  cout << "Description: Make a answer of three question checking program" << endl << endl;

	cout << "1. Who founded Microsoft: ";
	quiz("Bill Gates", "Gates");

	cout << "2. Who founded Apple: ";
	quiz("Steve Jobs", "Jobs");

	cout << "3. Who founded Facebook: ";
	quiz("Mark Zuckerberg", "Zuckerberg");

}
