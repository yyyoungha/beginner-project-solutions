#include <iostream>
#include <ctime>
using namespace std;

void print_how_to()
{
	cout << endl;
	cout << "----- How To Play -----" << endl;
	cout << "1. The computer will come up with a number between one and one hundred." << endl
		<< "2. You must then continue to guess numbers until you guesses the correct number." << endl
		<< "3. For every guess, the computer will either say \"Too high\" or \"Too low\"" << endl
		<< "and then ask for another input." << endl;
}

int main()
{
	cout << "Higher Lower Guessing Game" << endl;
	print_how_to();
	srand((unsigned int)time(NULL));

	while (true)
	{
		cout << endl;
		int random_number = rand() % 100 + 1;
		int guess, count = 1;
		while (true)
		{
			cout << "Player Guess : ";
			cin >> guess;

			if (random_number < guess)
				cout << "Computer : Too high." << endl;
			else if (random_number > guess)
				cout << "Computer : Too low." << endl;
			else break;
			count++;
		}

		string s;
		cout << "\nCongratulations! The answer was " << random_number << ".\n";
		cout << "\tPlay again? (y/n) ";
		cin >> s;
		if (s == "Y" || s == "y") continue;
		break;
	}

	return 0;
}