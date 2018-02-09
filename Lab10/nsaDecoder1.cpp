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
    cout << "Description: Modify nsaDecoder0 to output file" << endl << endl;

	
	string secret = "secret.txt";
	ifstream fin;
	fin.open(secret.c_str());
	if (!fin.good()) throw "I/O error";
	
	while (true)
	{
		if(!fin.good()) break;
		string lineFromFile;
		getline(fin, lineFromFile);
		for (int i = 0; i < lineFromFile.length(); i++)
			lineFromFile[i]--;
		cout << lineFromFile << endl;
	}
	fin.close();
	
	cout << endl;
}