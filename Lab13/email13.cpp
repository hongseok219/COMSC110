// Lab 13
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool isValidEmailCharacter(char c)
{
    if (('A' <= c && c <='Z') || ('a' <= c && c <='z') || ('0' <= c && c <='9') || c == '.' || c == '-' || c == '+')
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
    string inputDesktop = "/Users/hyominjeon/Desktop/Lab13/" + inputFilename;
    fin.open(inputDesktop.c_str());
    if (!fin.good()) throw "I/O error";
    
    
    while (true)
    {
        if(!fin.good()) break;
        string line;
        getline(fin, line);
        
        bool hasDot = false;
        int countDot = 0;
        
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == '@')
            {
                string s;
                string e;
                
                for (int j = i - 1; j >= 0; j--)
                {
                    if (!isValidEmailCharacter(line[j]))
                    {
                        s = line.substr(j + 1, i - j - 1);
                        break;
                    }
                    else if (j == 0)
                    {
                        s = line.substr(0, i);
                    }
                }
                
                for (int k = i + 1; k < line.length() - 1; k++)
                {
                    if (!isValidEmailCharacter(line[k]))
                    {
                        e = line.substr(i + 1 , k - i - 1);
                        break;
                    }
                    if (line[k] == '.')
                    {
                        countDot++;
                        hasDot = true;
                    }

                    if (k == line.length() - 2)
                    {
                        e = line.substr(i + 1 , k - i + 1);
                    }
                }
                
                if (hasDot && s.length() > 0 && e.length() > 0)
                {
                    cout << s << "@" << e << endl;
                    hasDot = false;
                }
            }
        }
        
    }
    fin.close();
    
    cout << endl;
}
