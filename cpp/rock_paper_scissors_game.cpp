#include <iostream>
#include <ctime>
using namespace std;

enum hand {rock, paper, scissors};

inline string itoh(int a) {
	if (a == rock) return "rock";
	if (a == paper) return "paper";
	return "scissors";
}

int main()
{
	srand(time(NULL));
	int pwin = 0, cwin = 0;
	int phand, chand;
	char res;
	do {
		cout << endl;
		cout << "Pick a number rock(1), paper(2) or scissors(3) : ";
		cin >> phand;
		phand--;
		chand = rand() % 3;

		cout << endl << "Player's pick :  " << itoh(phand) << endl;
		cout << "Computer's pick : " << itoh(chand) << endl;

		if ((phand + 1) % 3 == chand) {
			cout << "Computer win!" << endl;
			cwin++;
		}
		else if ((chand + 1) % 3 == phand) {
			cout << "You win!" << endl;
			pwin++;
		}
		else cout << "Draw." << endl;

		cout << "Player " << pwin << " / " << "Computer " << cwin << endl << endl;

		cout << "Try again? (y/n) : ";
		cin >> res;

	} while (res == 'y');

	return 0;
}