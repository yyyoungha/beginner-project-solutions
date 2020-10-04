#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <ctime>
using namespace std;

const string EXIT = "exit";

vector<string> possible = {
"-> It is certain.",
"-> It is decidedly so.",
"-> Without a doubt.",
"-> Yes, definitely.",
"-> You may rely on it.",
"-> As I see it, yes.",
"-> Most likely.",
"-> Outlook good.",
"-> Yes.",
"-> Signs point to yes.",
"-> Reply hazy, try again.",
"-> Ask again later.",
"-> Better not tell you now.",
"-> Cannot predict now.",
"-> Concentrate and ask again.",
"-> Don't count on it.",
"-> My reply is no.",
"-> My sources say no.",
"-> Outlook not so good.",
"-> Very doubtful."
};

int main()
{
	srand(time(0));
	string s;
	int psz = possible.size();
	while (true) {
		cout << "Question(\"" << EXIT << "\" to exit) : ";
		getline(cin, s);

		if (s.compare(EXIT) == 0) break;
		cout << "Thinking";
		for (int i = 0; i < 3; i++) {
			cout << ".";
			Sleep(1000);
		}
		cout << endl << possible[rand() % psz] << endl << endl;
	}
	return 0;
}