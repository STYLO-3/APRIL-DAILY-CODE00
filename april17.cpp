#include <iostream>
using namespace std;
int main() {
	int help1 = 0; int help2 = 1; int help3 = 1;
	cout << "fibonacci sequence" << endl << help1 << "" << help2 << "";
	while (help3 = help1 < 9)
	{
		help3 = help1 + help2;
		help1 = help2;
		help2 = help3;
		cout << help3 << " ";


	}
	cout << endl;
	return 0;
}