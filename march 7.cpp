#include <iostream>
using namespace std;

//declare
int knockback(int D, int w, int p, double s, int b, double r);

int main() {

	//call
	cout << knockback(30, 75, 20, 1.5, 20, 1.2)<<endl;

}

//define
int knockback(int D, int w, int p, double s, int b, double r) {

	int num;
	num= ((((7 * (D + 2) * (D + p) )/(w+100) + 9) * 2 * s) + b) * r;
	cout << "damage calculated is " << num;
	return num;
}