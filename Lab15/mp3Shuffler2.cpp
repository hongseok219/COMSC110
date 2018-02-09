// Lab 15
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <deque>
#include <string>

using namespace std;

struct PlayedSong
{
    string title;
};


int main()
{
    srand(time(0));
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Modify mp3Shuffler1 to use a collection to find songs played in the last 5" << endl << endl;
    
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

    deque<PlayedSong> playedSongs;
    char con;
    while (true)
    {
        cout << "play a song [Y/N]?: ";
        cin >> con;
        cin.ignore(1000, 10);
        
        if (con == 'Y' || con == 'y')
        {
            int number;
            while (true)
            {
                bool isPlayed = false;
                number = rand() % nSongs;
                for (int i = 0; i < playedSongs.size(); i++)
                {
                    if (playedSongs[i].title == songs[number])
                        isPlayed = true;
                }
                if (!isPlayed) break;
            }
            cout << songs[number] << endl << endl;
            if (playedSongs.size() >= 5)
            {
                playedSongs.pop_front();
            }
            PlayedSong aPlayedSong;
            aPlayedSong.title = songs[number];
            playedSongs.push_back(aPlayedSong);
        }
        if (con == 'N' || con == 'n')
        {
            break;
        }
    }
    
    
    
    cout << endl;
}

