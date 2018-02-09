// Final Term Project
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>

using namespace std;

class toLower {public: char operator()(char c) const {return tolower(c);}};

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
// Make bool function to find valid email
int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Make a program to find valid email from input file and write at output file and console screen" << endl << endl;
    
    string I = "fileContainingEmails.txt";
    string O = "copyPasteMyEmails.txt";
    
    string inputFilename = I;
    string outputFilename = O;
    cout << "Enter input filename [default: " << I << "]: ";
    getline(cin, inputFilename);
    outputFilename = inputFilename;
    if (inputFilename == "")
    {
        inputFilename = I;
        outputFilename = O;
    }
    // If input filename is empty follow default value
    cout << "Enter output filename [default: " << outputFilename << "]: ";
    getline(cin, outputFilename);
    if (outputFilename == "")
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

    // Get the name of Input file and Output file
    
    ifstream fin;
    fin.open(inputFilename.c_str());
    if (!fin.good()) throw "I/O error";

    const int MAX_EMAIL = 1000;
    string emails[MAX_EMAIL];
    // Make a list <emails[]>
    int nEmail = 0;
    int countEmail = 0;
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
                // Find the length of word before @
                // Check whether the word is valid or not
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

                // Find the length of word before @
                // Check whether the word is valid or not
                // Check whether the word has dot or not
                
                string lcLine = s + "@" + e;
                transform(lcLine.begin(), lcLine.end(), lcLine.begin(), toLower());
                // Make a new string to modify new email to lowercase
  
                bool getSameEmail = false;
                for (int i = 0; i < nEmail; i++)
                {
                    string templine = emails[i];
                    transform(templine.begin(), templine.end(), templine.begin(), toLower());
                    // Make a new string to modify value in list to lowercase
                    if (lcLine == templine)
                        getSameEmail = true;
                    // compare two lowercase string to find same email
                }
                // Make a bool to check whether new email already exist or not
                if (hasDot && s.length() > 0 && e.length() > 0 && !getSameEmail)
                {
                    cout << s << "@" << e << endl;
                    hasDot = false;
                    emails[nEmail++] = s + "@" + e;
                    countEmail++;
                }
                // If new email has no problem, add to list "emails"
            }
        }
    }
    fin.close();
    if (countEmail == 0)
    {
        cout << "Sorry, no email addresses were found in the file " << inputFilename << endl;
    }
    // If there is no valid email in infut file show the message
    else
    {
        cout << countEmail << " email addresses were found, and copied to the file " << outputFilename << endl;
        cout << "Open the output file and copy/paste its contents into the to, cc, or bcc field of any email message." << endl;
        cout << "It is best to use the bcc field so that everyone's email address does not appear in the message, to protect their privacy." << endl;
        ofstream fout;
        
        fout.open(outputFilename.c_str());
        for (int i = 0; i < nEmail; i++)
        {
            if(i == 0)
            {
                fout << emails[i];
            }
            else
                fout << "; " << emails[i];
        }
        fout.close();
    }
    // If there are more than one valid email in infut file, open the output file and output text
    cout << endl;
}