#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
char foodrop (char location);

int main(){
	srand(time(NULL));
	char location = 'd'; //test with d and f
	cout << foodDrop(location) << endl;;
	system("pause");


}
char foodDrop(char location) {

	int num = rand() % 100 + 1;

	if (location == 'f') {
		if (num <= 50) {
			cout << "you got a berry!" << endl;
			return 'b';
		}
		else {
			cout << "you got a mushroom!" << endl;
			return 'm';

		}
	}
	else if (location == 'd') {
		if (num <= 20) {
			cout << "You got a berry!" << endl;
			return 'b';
		}
		else if (num <= 40) {
			cout << "You got a fruit!" << endl;
			return 'f';
		}
		else if (num < 40) {
			cout << "You found some cheese?" << endl;
			return 'c';
		}
	}


	else
		cout << "invalid location" << endl;











}
