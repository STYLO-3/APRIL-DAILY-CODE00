#include<iostream>
#include<ctime>
using namespace std;
char disaster();
int main() {

	srand(time(NULL));
	while (1) {
		cout << "is a disaster gonna happen?" << endl;
		disaster();
		system("pause");
	} //While Loop

} //Main Loop
char disaster() {
	int natural = rand() % 100 + 1;
	if (natural < 10) {
		cout << "fire!" << endl;
		return'f';
	} //#1
	else if (natural < 25) {
		cout << "radroaches!" << endl;
		return'r';
	} //#2
	else if (natural < 37) {
		cout << "raider attack!" << endl;
		return'a';
	} //#3
	else if (natural, 40) {
		cout << "mole rats!" << endl;
		return'm';
	}//#4
	else if (natural < 60) {
		cout << "nothing happens" << endl;
		return'n';
	}//#5
}//End of Definition