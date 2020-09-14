#include <iostream>

using namespace std;

bool check(int x)
{
	int sum = 0;
	int y = x;
	int digit = 0;
	while (y > 0) {
		y /= 10;
		digit++;
	}
	y = x;
	while (y > 0) {
		sum = sum + pow(y % 10, digit);
		y /= 10;
	}
	return sum == x;
}

int main()
{
	int n;
	cout << "Input a number to check whether a given number is armstrong number or not : ";
	cin >> n;
	cout << n << " is" << (check(n) ? "" : " not") << " an armstrong number." << endl;
	return 0;
}