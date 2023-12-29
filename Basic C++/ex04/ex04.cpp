#include <iostream> //C++ - style include file, no .h at the end

using namespace std;

int main(int argc, char **argv) {
	int a;	//Variable declaration
	int b;	//Variable declaration
	std::cout << "Declared	a:	" << a << std::endl;
	std::cout << "Declared	b:	" << b << std::endl;

	a = 0;	//Assignment
	b = 1;	//Assignment
	std::cout << "Assigned a:	" << a << std::endl;
	std::cout << "Assigned b:	" << b << std::endl;

	a = a + b;	//Addition
	std::cout << "Added a + b:	" << a << std::endl;

	a++;	//Increment
	std::cout << "Increment a:	" << a << std::endl; //2

	//Post-Increment
	std::cout << "Post-Increment a:	" << a++ << std::endl; 	//2
	std::cout << "Post-Increment a:	" << a << std::endl;	//3

	//Pre-Increment
	std::cout << "Pre-Increment a:	" << ++a << std::endl;	//4
	std::cout << "Pre-Increment a:	" << a << std::endl;	//4

	a = a + 10;	//Addition									
	std::cout << "a + 10:	" << a << std::endl;
	

	return 0;
}
