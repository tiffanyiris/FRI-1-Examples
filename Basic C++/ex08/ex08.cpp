#include <iostream>

using namespace std;

/*
int addTwoInts(int a, int b) {
	return a + b;
}
*/

int addTwoInts(int a, int b);

int main(int argc, char **argv) {
	int a = 2;
	int b = 10;
	cout << "addTwoInts(a, b):	" << addTwoInts(a, b) << endl;

	return 0;
}

int addTwoInts(int a, int b) {
	return a + b;
}
