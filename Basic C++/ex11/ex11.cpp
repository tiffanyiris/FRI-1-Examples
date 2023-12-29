#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	int a = 9;
	int b = a;

	/*
		a == b -> true
		a != b -> true
		!(a != b) -> true
		a > b
		a >= b
		a < b
		a <= b

	*/

	if(a > b) {
		cout << "a > b" << endl;
	} else if (a == b) {
		cout << "a == b" << endl;
	} else {
		cout << "a < b" << endl;
	}

	for(a = 0; a < 20; a++) {
		if(a > b) {
			cout << "a:	" << a << "	a > b" << endl;
		} else if (a == b) {
			cout << "a:	" << a << "	a == b" << endl;
		} else {
			cout << "a:	" << a << "	a < b" << endl;
		}
	}
	


	return 0;
}
