#include <iostream>

using namespace std;

int cashier(int& change, const int value)
{
	int res = change / value;
	change %= value;
	return res;
}

int main() {
	double money, price;
	while (true) {
		cout << "The amount of money given to you (-1 to leave work): $";
		cin >> money;

		if (money < 0) {
			cout << "Yay! I'm getting off work!" << endl;
			break;
		}

		cout << "The price of the item : $";
		cin >> price;

		if (money < price) {
			cout << "Not enough money." << endl;
			return 0;
		}

		int change = (money - price) * 100;
		int quarter = 0, dime = 0, nickel = 0, penny = 0;
		quarter = cashier(change, 25);
		dime = cashier(change, 10);
		nickel = cashier(change, 5);
		penny = cashier(change, 1);
		cout << "You need " << quarter << " quarters, " << dime << " dimes, " << nickel << " nickels, " << penny << " pennies." << endl << endl;
	}
	return 0;
}