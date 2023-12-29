#include <iostream>
#include <cstdlib>

using namespace std;

int addTwoVariables(int a, int b) {
	a += 10;
	b += 20;
	return a + b;
}

int addTwoPointers(int *a, int *b) {
	*a += 10;
	*b += 20;
	return *a + *b;
}

int addTwoReferences(int &a, int &b) {
	a += 1000;
	b += 2000;
	return a + b;
}

int main(int argc, char **argv) {
	int a = 4;
	int b = 5;

	cout << "a:	" << a << endl;
	cout << "b:	" << b << endl;

	cout << "===" << endl;
	cout << "addTwoVariables(a, b):	 " << addTwoVariables(a, b) << endl;
	cout << "a:	" << a << endl;
	cout << "b:	" << b << endl;

	cout << "===" << endl;
	cout << "addTwoVariables(&a, &b):	 " << addTwoPointers(&a, &b) << endl;
	cout << "a:	" << a << endl;
	cout << "b:	" << b << endl;

	cout << "===" << endl;
	cout << "addTwoReferences(a, b):	 " << addTwoReferences(a, b) << endl;
	cout << "a:	" << a << endl;
	cout << "b:	" << b << endl;
	

	return 0;
}
