// Lab11
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: make a program that prompt the input and output filenames" << endl << endl;
    
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
    cout << "Output file: " << outputFilename;
    
    
    
    cout << endl;
}