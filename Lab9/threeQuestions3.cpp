// Lab9
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <string>

using namespace std;

bool quiz(string answer1, string answer2)
{
	bool result = false;
	string userInput;
	getline(cin, userInput);

	if (answer1 == userInput || answer2 == userInput)
	{
		cout << "Correct!" << endl;
		result = true;
	}
	else
	{
		cout << "Incorrect!" << endl;
	}
	return result;
}

int main()
{
	int correct = 0;

	cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Modify threeQuestion2 to bool data type" << endl << endl;

	cout << "1. Who founded Microsoft: ";
	if (quiz("Bill Gates", "Gates")) correct++;

	cout << "2. Who founded Apple: ";
	if (quiz("Steve Jobs", "Jobs")) correct++;

	cout << "3. Who founded Facebook: ";
	if(quiz("Mark Zuckerberg", "Zuckerberg")) correct++;

	cout << "That's " << correct << " correct out of 3 questions asked." << endl;

	cout << endl;
}
