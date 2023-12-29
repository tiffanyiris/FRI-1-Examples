#include <iostream>

//"Uses" the std namespace
//Now anything prefixed with std:: can be written without
using namespace std;

int main(int argc, char **argv) {
	cout << "Here is some text" << endl;
	cout << "Here is some other text" << endl;

	//You can still use std:: at the start, though, if you want
	//Useful if you use two namespaces that declare the same thing

	std::cout << "Here is some text" << std::endl;
	std::cout << "Here is some other text" << std::endl;

	return 0;
}
