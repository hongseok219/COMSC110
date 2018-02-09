// Lab12
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct PlayingCard
{
    int suit;
    int value;
};

void getPlayingCard(PlayingCard& p)
{
    if (p.value < 11)
        cout << p.value;
    if (p.value == 11)
        cout << "Jack";
    if (p.value == 12)
        cout << "Queen";
    if (p.value == 13)
        cout << "King";
    if (p.value == 14)
        cout << "Ace";
    cout << " of ";
    if (p.suit == 0)
        cout << "Spades";
    if (p.suit == 1)
        cout << "Diamonds";
    if (p.suit == 2)
        cout << "Hearts";
    if (p.suit == 3)
        cout << "Clubs";
}

bool getYesOrNo()
{
    char con;
    bool result = false;
    do
    {
        cout << "Continue? [Y/N] ";
        cin >> con;
        cin.ignore(1000,10);
        if (con == 'Y' || con == 'y') 
        {
            result = true;
            break;    
        }
        if (con == 'N' || con == 'n')
        {
            break;
        }
    }while (true);
    return result;
}

int main()
{
    srand(time(0));
    
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Modify war3 to use object specification" << endl << endl;
    
    PlayingCard human;
    PlayingCard computer;
    int computerWin = 0;
    int humanWin = 0;
    
    do
    {
        human.value = 2 + rand() % 13;
        computer.value = 2 + rand() % 13;
        human.suit = rand() % 4;
        computer.suit = rand() % 4;
        
        cout << "Computer's card is a ";
        getPlayingCard(computer);
        cout << endl;
        cout << "Human's card is a ";
        getPlayingCard(human);
        cout << endl;
        
        if (computer.value > human.value)
        {
            computerWin++;
            cout << "--<< Computer wins! >>--" << endl;
        }
        if (computer.value < human.value)
        {
            humanWin++;
            cout << "--<< Human wins! >>--" << endl;
        }
        if (computer.value == human.value)
        {
            cout << "--<< It's a tie. >>--" << endl;
        }
        cout << "Computer wins: " << computerWin << ", ";
        cout << "Human wins: " << humanWin << endl;
        
        cout << endl;
    } while (getYesOrNo());
    
    cout << endl;
}