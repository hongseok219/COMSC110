// Lab 13
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

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Make a program to get line from inputfile without blank and duplicates" << endl << endl;
    
    string inputFilename;
    cout << "Enter the name of the file containing names: ";
    getline(cin, inputFilename);

    ifstream fin;
    fin.open(inputFilename.c_str());
    if (!fin.good()) throw "I/O error";
    
    const int MAX_FRIENDS = 5;
    string friends[MAX_FRIENDS];
    int nFriends = 0;
    
    while (fin.good())
    {
        string aFriend;
        getline(fin, aFriend);
        
        string lcFriend;
        lcFriend = aFriend;
        transform(lcFriend.begin(), lcFriend.end(), lcFriend.begin(), toLower());
        
        bool isDuplicate = false;
        for (int i = 0; i < nFriends; i++)
        {
            string tempFriend = friends[i];
            transform(tempFriend.begin(), tempFriend.end(), tempFriend.begin(), toLower());
            
            if (lcFriend == tempFriend)
            {
                isDuplicate = true;
            }
        }
        
        if (aFriend != "" && !isDuplicate)
        {
            if (nFriends < MAX_FRIENDS)
            {
                friends[nFriends++] = aFriend;
            }
        }
    }
    
    fin.close();
    
    for (int i = 0; i < nFriends; i++)
    {
        for (int j = i + 1; j < nFriends; j++)
        {
            string tempFriendI = friends[i];
            transform(tempFriendI.begin(), tempFriendI.end(), tempFriendI.begin(), toLower());
            string tempFriendJ = friends[j];
            transform(tempFriendJ.begin(), tempFriendJ.end(), tempFriendJ.begin(), toLower());
            if (tempFriendI > tempFriendJ)
            {
                string temp = friends[i];
                friends[i] = friends[j];
                friends[j] = temp;
            }
        }
    }
    for (int i = 0; i < nFriends; i++)
        cout << friends[i] << endl;
    
    cout << endl;
}
