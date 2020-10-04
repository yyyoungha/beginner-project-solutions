#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

inline bool isPythagorean(int a, int b, int c) {
	return a * a + b * b == c * c;
}

int main()
{
	vector<int> side(3);
	while (true) {
		cout << "Input the sides of any triangle in any order" << endl;
		cout << "(enter negative numbers to exit) : ";
		cin >> side[0] >> side[1] >> side[2];
		sort(side.begin(), side.end());
		if (side[0] < 0) break;
		cout << "It is" << (isPythagorean(side[0], side[1], side[2]) ? "" : " not") << " a Pythagorean Triple." << endl << endl;
	}
	return 0;
}