#include<iostream>
#include<ctime>
#include<string>
using namespace std;
char input = 'y';
string adj[]{ "FILTER","jesus","Fluffy","weeping","Lil","jump","crazy ","booty","ritorical","Teeny","Ancient","Gabby","Jaunty","Vivacious","Tawdry", "Testy", "Wacky", "Old" };
string noun[]{ "Mount Kilimanjaro","Violin","flock","religion","tablecloth","Bench","Fish","Banana","Bortnite","pigtails","milk","Flipper","pen","Spoop" };
int main() {
	srand(time(NULL));
	cout << "Do you want to know your Rap name?" << endl;
	while (input == 'y') {
		cin >> input;

		int ad = rand() % 15;
		int nouns = rand() % 10;
		cout << adj[ad] << endl;
		cout << noun[nouns] << endl;
	}