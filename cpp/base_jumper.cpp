#include <iostream>
using namespace std;

int ctoi(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    if (c >= 'a' && c <= 'z')
        return (int)c - 'a' + 10;
    return (int)c - 'A' + 10;
}

char itoc(int i)
{
    if (i >= 0 && i <= 9)
        return char(i + '0');
    return char(i + 'A' - 10);
}

string convert(const string& str, const int base_in, const int base_out) 
{
    long long decimal = 0;
    long long power = 1;

    for (int i = str.length() - 1; i >= 0; i--) {
        if (ctoi(str[i]) >= base_in) {
            return "Invalid";
        }
        decimal += ctoi(str[i]) * power;
        power = power * base_in;
    }

    string res;
    while (decimal != 0) {
        long long remainder = decimal % base_out;
        decimal /= base_out;
        res += itoc(remainder);
    }
    reverse(res.begin(), res.end());
    return res;
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

        res = convert(num, base_in, base_out);
        if (res.compare("Invalid") == 0) {
            cout << "Error: Invalid Number." << endl;
        }
        else {
            cout << num << " (base " << base_in << ") -> ";
            cout << res << " (base " << base_out << ")" << endl;
        }

        cout << "Continue? (y/n) ";
        cin >> res;
        if (res.compare("y") != 0) break;
        cout << endl;
    }

	return 0;
}