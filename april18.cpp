#include <iostream> //library with cin/cout
#include <fstream> //library for FILE input/output
using namespace std; //cheat code for libraries
int main()//starting point of your program
{
	ifstream inFile; //get set up to read a file
	char input; //set up variables
	int SavedRoom;
	int room = 0;
	inFile.open("save.txt"); //open the specific file
	inFile >> SavedRoom; //grab from infile put into saved room
	inFile.close();

	cout << "would you like to load your data?" << endl;
	cin >> input;
	if (input == 'y')
		room = SavedRoom; //writes over the 0

	while (input != 'q') //game loop
	{
		cout << "you are in room " << room << endl;
		system("pause");
	}

	return 0;
}

 
 