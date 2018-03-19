#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
 string foods[7];
	char Taco = false;

	cout << "whats you're faviorte food ?" << endl << endl;
	
		for (int i = 0; i < 7; i++){
			cin >> input;
			foods[i] = input;
	}

	for (int i = 0; i < 7; i++) {
		if (foods[i] == "Taco")
			cout << "you're so amazzzzzzing baby" << endl;
		Taco = true;

		if (Taco == true)
			cout << "you're so amazzzzzzing baby" << endl;
		else
			cout << "straight trash" << endl;

		system("pause");
	}









}