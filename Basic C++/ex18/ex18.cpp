#include "MyFirstChildClass.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	MyFirstChildClass a(9);
	for(int i = 0; i < 10; i++) a.insertInt(i);
	a.print();

	MyFirstChildClass b(a);
	b.print();
	//cout << "a._b:	" << a._b << endl;

	return 0;
}
