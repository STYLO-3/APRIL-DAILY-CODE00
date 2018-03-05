#include <iostream>
#include <windows.h>
using namespace std;
int pointless(int m, int n);
int main() {
	int input;
	int a;
	int b;
	cout << "give me one number" << endl;
	cin >> a;
	cout << " another one " << endl;
	cin >> b;
	cout << pointless(a, b);
	system("pause");
}







int pointless (int m,int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}
	Beep(n * 100, n * 566);
	return m*n;


  }