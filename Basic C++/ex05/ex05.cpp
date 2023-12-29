#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {
	int a = 10.5;
	float b = 10.5f;
	long c = 10.6;
	double d = 10.5;
	
	cout << "a:	" << a << endl;
	cout << "b:	" << b << endl;
	cout << "c:	" << c << endl;
	cout << "d:	" << d << endl;

	cout << "a + b:	" << (a + b) << endl;
	cout << "b + a:	" << (b + a) << endl;	

	return 0;
}
