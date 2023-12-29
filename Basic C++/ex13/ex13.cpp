#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {
	int a;
	int *b;

	cout << "a:	" << a << endl;
	cout << "&a:	" << &a << endl;
	cout << "b:	" << b << endl;
	cout << "*b:	" << *b << endl;

	cout << "===" << endl;

	b = &a;
	b = new int;

	cout << "a:	" << a << endl;
	cout << "&a:	" << &a << endl;
	cout << "b:	" << b << endl;
	cout << "*b:	" << *b << endl;

	cout << "===" << endl;
	int &c = a;
	c = 111;

	cout << "a:	" << a << endl;
	cout << "c:	" << c << endl;

	delete b;

	/*
	cout << "===" << endl;

	int d = 4;
	c = d;

	cout << "a:	" << a << endl;
	cout << "c:	" << c << endl;
	cout << "d:	" << d << endl;

	cout << "===" << endl;
	d = 5;

	cout << "a:	" << a << endl;
	cout << "c:	" << c << endl;
	cout << "d:	" << d << endl;

	cout << "===" << endl;
	//Similarly, I can change a by assigning to the dereferenced b (the variable at address b)
	*b = 1212;
	cout << "a:	" << a << endl;
	cout << "*b:	" << *b << endl;
	*/

	return 0;
}
