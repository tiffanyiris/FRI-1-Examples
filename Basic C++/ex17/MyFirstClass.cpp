#include "MyFirstClass.h"
#include <iostream>

using namespace std;

MyFirstClass::MyFirstClass() : _a(10), _b(new int[5]), _size(0), _maxSize(5) {}

MyFirstClass::~MyFirstClass() {
	delete[] _b;
}

void MyFirstClass::insertInt(int val) {
	if(_size < _maxSize) {
		cout << "Inserting:	" << val << "	at:	" << _size << endl;
		_b[_size++] = val;
	} else {
		cout << "Cannot insert. Already max size." << endl;
	}
}

void MyFirstClass::print() {
	for(size_t i = 0; i < _size; i++) {
		cout << "_b[" << i << "]:	" << _b[i] << endl;
	}
}
