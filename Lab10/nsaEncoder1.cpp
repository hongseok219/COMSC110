// Lab10
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: codeblocks

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Modify nsEncoder0 to output file" << endl << endl;

	cout << "Enter name of file to decode:" << endl;
	string userInput;
	ifstream fin;
	getline(cin, userInput);
	fin.open(userInput.c_str());
	if (!fin.good()) throw "I/O error";

	ofstream fout;
	fout.open("secret.txt", ios::app);
	if (!fout.good()) throw "I/O error";

	while (true)
	{
		if(!fin.good()) break;
		string lineFromFile;
		getline(fin, lineFromFile);
		for (int i = 0; i < lineFromFile.length(); i++)
			lineFromFile[i]++;
		fout << lineFromFile << endl;
	}

	fin.close();
	fout.close();

	cout << endl;
}