#include "MyFirstAbstractClass.h"
#include <iostream>

using namespace std;

MyFirstAbstractClass::MyFirstAbstractClass(int a) : _a(a) {}

MyFirstAbstractClass::~MyFirstAbstractClass() {}

void MyFirstAbstractClass::print() {
	for(size_t i = 0; i < getSize(); i++) cout << getIntAt(i) << endl;
	cout << "And _a: 	" << _a << endl;
}
