#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
	string input;
	string food[5];
	bool hasBepsi = false;

	cout << "What is your favorite daank?" << endl;

	for (int i = 0; i < 5; i++) {
		cin >> input;
		food[i] = input;
	}
	for (int i = 0; i < 5; i++) {
		if (food[i] == "Bepsi" || food[i] == "Bepsi")
			hasBepsi = true;
	}
	if (hasBepsi == true)
		cout << "AAAHH...bepsi" << endl;
	else
		cout << "do you even drink bro!" << endl;
	system("pause");