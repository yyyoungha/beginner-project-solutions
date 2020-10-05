#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cout << "Choose a number to create a multiplication table : ";
	cin >> n;

	cout.setf(ios::right);

	cout << "----- 1 to " << n << " multiplication table -----" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << setw(6) << i * j;
		cout << endl;
	}

	return 0;
}