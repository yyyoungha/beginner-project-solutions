#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int COUNT = 25;

double mean(const vector<int>& array, int n) 
{
	int dec;
	cout << "how many decimal places you want the answer to be rounded to? ";
	cin >> dec;

	cout.setf(ios::fixed);
	cout.precision(dec);
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += array[i];
	return sum / n;
}

pair<int, int> median(vector<int>& sorted_array, int n)
{
	if (n % 2 == 0) return { sorted_array[n / 2 - 1], sorted_array[n / 2] };
	return { sorted_array[n / 2], NULL };
}

vector<int> mode(const vector<int>& sorted_array, int n)
{
	vector<int> res;
	vector<int> d(n);
	d[0] = 1;
	int mx = 0;
	for (int i = 0; i + 1 < n; i++) {
		if (sorted_array[i] == sorted_array[i + 1])
			d[i + 1] = d[i] + 1;
		else
			d[i + 1] = 1;
		if (d[i + 1] > mx) mx = d[i + 1];
	}

	for (int j = 0; j < n; j++)
		if (d[j] == mx) res.push_back(sorted_array[j]);
	return res;
}

void print(const vector<int>& a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main() 
{
	vector<int> a(COUNT);
	srand(time(NULL));
	for (int i = 0; i < COUNT; i++)
		a[i] = rand() % 100;
	sort(a.begin(), a.end());

	cout << "numbers : ";
	print(a, COUNT);
	cout << "mean : " << mean(a, COUNT) << endl;
	pair<int, int> medians = median(a, COUNT);
	cout << "median : " << medians.first << " " << (medians.second == NULL ? "" : to_string(medians.second)) << endl;
	vector<int> modes = mode(a, COUNT);
	cout << "mode : ";
	print(modes, modes.size());

	return 0;
}