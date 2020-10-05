#include <iostream>
using namespace std;

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int toDeci(const string& str, int base)
{
    int len = str.size();
    int power = 1;
    int num = 0;
    int i;

    for (i = len - 1; i >= 0; i--)
    {
        if (val(str[i]) >= base)
        {
            printf("Invalid Number");
            return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}

int main()
{
    string num, res;
    int base_in, base_out;

    while (true) {
        cout << "The number to convert : ";
        cin >> num;
        cout << "The base of given number : ";
        cin >> base_in;
        cout << "The base to convert the number to : ";
        cin >> base_out;

        cout << "Converted number : ";
        cout << toDeci(num, base_in);
        cout << endl;

        cout << "Continue? (y/n) ";
        cin >> res;
        if (res.compare("y") != 0) break;
    }

	return 0;
}