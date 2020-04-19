#include "Complex.h"
using namespace complexnumbers;

int main() {

	Complex c1(2,3);
	Complex c2 = c1;
	Complex c3;
	cin >> c3;
	cout << c3 / c1 << endl;
	if (c1 == c2)
		cout << "Equal" << endl;
	else
		cout << "Not equal" << endl;
}