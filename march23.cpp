#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main() {
	int tries = 0;
	int guess;
	int num;
	srand(time(NULL));
	cout << "I've stored a number between 1-100 guess it goofy" << endl;
	while (1) {
		int num = rand() % 100;


		cin >> guess;
		if (num < guess) {
			cout << "Too highhhhhhhhhhhhhhhhhhhhhhhhhhh" << endl;
			tries++;
		}
		else if (num == guess)
			cout << "You guessed the number!" << endl;
		else {
			cout << "Too Low guess again" << endl;
			tries++;
		}
	}
}