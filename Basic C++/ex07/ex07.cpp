#include <iostream>

using namespace std;

//Our first function!
//void - return value
void runForLoop() {
	for(int i = 0; i < 10; i++) {
		cout << "Inside for loop	- i:	" << i << endl;
	}
}

//int - return value
//int a - formal parameter
//int b - formal parameter
int addTwoInts(int a, int b) {
	return a + b;
}

int main(int argc, char **argv) {
	runForLoop();
	runForLoop();

	/*
	//1, 5 - actual parameters
	cout << "addTwoInts(1, 5):	" << addTwoInts(1, 5) << endl;

	int a = 2;
	int b = 10;
	cout << "addTwoInts(a, b):	" << addTwoInts(a, b) << endl;
	*/

	return 0;
}
