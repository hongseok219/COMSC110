// Lab11
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
    cout << "Description: Modify nsaDecoder1 to use a repeating sequence or number" << endl << endl;

	
	string secret = "secret.txt";
	ifstream fin;
	fin.open(secret.c_str());
	if (!fin.good()) throw "I/O error";
	
	const int SIZE = 5;
	int cycle[SIZE] = {-1, -2, -3, -4, -5};
	int i;
	int counter = 0;

	while (true)
	{
		if(!fin.good()) break;
		string lineFromFile;
		getline(fin, lineFromFile);
		for (i = 0; i < lineFromFile.length(); i++)
		{
			int index = counter % SIZE;
			lineFromFile[i] += cycle[index];
			counter++;
		}
		cout << lineFromFile << endl;
	}

	fin.close();
	
	cout << endl;
}