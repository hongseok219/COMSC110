// Lab 12
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify email11 to get input file and detect the file which contains @" << endl << endl;
    
    string I = "fileContainingEmails.txt";
    string O = "copyPasteMyEmails.txt";
    
    string inputFilename = I;
    string outputFilename = O;
    cout << "Enter input filename [default: " << I << "]: ";
    getline(cin, inputFilename);
    outputFilename = inputFilename;
    if (inputFilename.empty())
    {
        inputFilename = I;
        outputFilename = O;
    }
    cout << "Enter output filename [default: " << outputFilename << "]: ";
    getline(cin, outputFilename);
    if (outputFilename.empty())
    {
        if (inputFilename == I)
        {
            outputFilename = O;
        }
        else
        {
            outputFilename = inputFilename;
        }
    }
    cout << "Input file: " << inputFilename << endl;
    cout << "Output file: " << outputFilename << endl;
    
    ifstream fin;
    fin.open(inputFilename.c_str());
    if (!fin.good()) throw "I/O error";
    
    while (true)
    {
        if(!fin.good()) break;
        string lineFromFile;
        getline(fin, lineFromFile);
        for (int i = 0; i < lineFromFile.length(); i++)
            if(lineFromFile[i] == '@')
                cout << lineFromFile << endl;
    }
    fin.close();
    
    cout << endl;
}
