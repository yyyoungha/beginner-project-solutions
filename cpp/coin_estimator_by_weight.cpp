#include <iostream>

using namespace std;

double mass[4] = { 2.5, 5.0, 2.268, 5.67 };
double value[4] = { 0.01, 0.05, 0.1, 0.25 };
int coins_per_wrapper[4] = { 50, 40, 50, 40 };

int main() {
	int type;
	cout << "Choose the type of coin you have [pennies(1), nickels(2), dimes(3), and quarters(4)] : ";
	cin >> type;
	type--;

	double weight;
	cout << "Input the total weight of coin you have  : ";
	cin >> weight;

	int count = weight / mass[type];
	cout << endl << "You have " << count << " coins." << endl;
	cout << "You need " << count / coins_per_wrapper[type] << " coin wrappers." << endl;
	cout << "Estimated total value of all of your money : $" << count * value[type] << endl;

	return 0;
}