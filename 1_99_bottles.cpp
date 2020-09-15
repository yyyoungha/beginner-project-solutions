#include <iostream>
#include <string>
using namespace std;

inline string bottle(int n) 
{
	if (n == 0) return "No more bottles";
	else if (n == 1) return to_string(n) + " bottle";
	else if (n == -1) return "99 bottles";
	return to_string(n) + " bottles";
}

int main() 
{
	for (int n = 99; n >= 0; n--) {
		string b = bottle(n);
		cout << b << " of beer on the wall, " << b << " of beer." << endl;

		if (n != 0)
			cout << "Take one down, pass it around, ";
		else 
			cout << "Go to the store and buy some more, ";

		cout << bottle(n - 1) << " of beer on the wall." << endl << endl;
	}
	return 0;
} 
