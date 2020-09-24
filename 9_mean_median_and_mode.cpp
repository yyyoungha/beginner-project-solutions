#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

const int COUNT = 10;

double mean(const vector<int>& a, int n) 
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}

int median(vector<int>& a, int n)
{
	sort(a.begin(), a.end());
	return a[n / 2];
}

int mode(const vector<int>& a, int n)
{
	int mx = 0, curr = 0, val;
	for (int i = 0; i + 1 < n; i++)
		if (a[i] == a[i + 1]) curr++;
		else {
			if (mx < curr) {
				mx = curr;
				val = a[i];
			}
			curr = 1;
		}
	return val;
}

void print(const vector<int>& a, int n)
{
	cout << "numbers : ";
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

	print(a, COUNT);
	cout << "mean : " << mean(a, COUNT) << endl;
	cout << "median : " << median(a, COUNT) << endl;
	cout << "mode : " << mode(a, COUNT) << endl;

	return 0;
}