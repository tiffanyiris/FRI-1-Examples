#include "MyFirstClass.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	MyFirstClass a;
	for(int i = 0; i < 10; i++) a.insertInt(i);
	a.print();

	cout << "a._a:	" << a._a << endl;
	//cout << "a._b:	" << a._b << endl;

	return 0;
}
