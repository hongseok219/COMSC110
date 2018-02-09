#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0));
	int number = rand() % 2;
	if (number == 0)
		cout << "Heads" << endl;
	else
		cout << "Tails" << endl;

	return 0;
}