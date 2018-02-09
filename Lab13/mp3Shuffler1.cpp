// Lab 13
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    srand(time(0));
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Make a program to get random line from inputfile" << endl << endl;
    
    ifstream fin;
    fin.open("songs.txt");
    if (!fin.good()) throw "I/O error";
    
    const int MAX_SONGS = 200;
    string songs[MAX_SONGS];
    int nSongs = 0;
    
    while (fin.good())
    {
        string aSong;
        getline(fin, aSong);
        if (nSongs < MAX_SONGS)
            songs[nSongs++] = aSong;
    }
    fin.close();
    
    char con;
    while (true)
    {
        int number = rand() % nSongs;
        cout << "play a song [Y/N]?: ";
        cin >> con;
        cin.ignore(1000, 10);
        
        if (con == 'Y' || con == 'y')
        {
            cout << songs[number] << endl << endl;
        }
        if (con == 'N' || con == 'n')
        {
            break;
        }
    }
    
    
    
    cout << endl;
}
