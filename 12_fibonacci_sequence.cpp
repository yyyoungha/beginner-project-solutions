#include <iostream>
using namespace std;

const int MAX_SIZE = 101;
long long fib[MAX_SIZE];

long long fibonacci_loop(int n)
{
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	return fib[n];
}

long long fibonacci_recursion(int n)
{
	if (n == 0 || n == 1) return n;
	if (fib[n] != 0) return fib[n];
	return fib[n] = fibonacci_recursion(n - 1) + fibonacci_recursion(n - 2);
}

int main()
{
	fibonacci_loop(10);
	cout << "First 10 numbers of fibonacci sequence : ";
	for (int i = 0; i < 10; i++)
		cout << fib[i] << " ";
	cout << endl << endl;

	int n;
	cout << "Input N to find the value of the N-th term in fibonacci sequence : ";
	cin >> n;
	fibonacci_recursion(n);
	cout << "N-th term in fibonacci sequence is : " << fib[n] << endl;
	return 0;
}