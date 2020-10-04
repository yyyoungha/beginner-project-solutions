#include <iostream>
#include <string>
using namespace std;

string adj, noun1, noun2, noun3, verb;

void getInput() {
	cout << "----- Mad Libs Story Maker -----" << endl;
	cout << "Adjective : ";
	cin >> adj;
	cout << "Noun 1 : ";
	cin >> noun1;
	cout << "Noun 2 (plural) : ";
	cin >> noun2;
	cout << "Noun 3 : ";
	cin >> noun3;
	cout << "Verb (ending in -ed)  : ";
	cin >> verb;
	cout << endl;
}

void printStory() {
	// "There Was an Old Woman ad-Lib", Mad takes, accessed [Sep 21. 2020], https://www.madtakes.com/libs/019.html.
	cout << "There was an " << adj << " woman who lived in a/an " << noun1 << "." << endl
		<< "She had so many "<< noun2 << " she didn`t know what to do." << endl
		<< "She gave them some broth without any " << noun3 << "." << endl
		<< "She " << verb << " them all soundly and put them to bed." << endl << endl;
}

int main() {
	getInput();
	printStory();
	return 0;
}