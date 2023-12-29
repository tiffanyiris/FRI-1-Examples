#include "MyFirstChildClass.h"
#include <iostream>

using namespace std;

MyFirstChildClass::MyFirstChildClass(size_t maxSize) : MyFirstAbstractClass(10)
	, _b(new int[maxSize]), _size(0), _maxSize(maxSize){}

MyFirstChildClass::MyFirstChildClass(MyFirstChildClass &mfcc) : MyFirstAbstractClass(mfcc._a)
	, _b(new int[mfcc._maxSize]), _size(mfcc._size), _maxSize(mfcc._maxSize) {
	for(size_t i = 0; i < _maxSize; i++) _b[i] = mfcc._b[i];
}

MyFirstChildClass::~MyFirstChildClass() {
	delete[] _b;
}

void MyFirstChildClass::insertInt(int val) {
	if(_size < _maxSize) _b[_size++] = val;
	else cout << "MyFirstChildClass is full.. discarding" << endl;
}

int MyFirstChildClass::getIntAt(size_t index) {
	return _b[index];
}

size_t MyFirstChildClass::getSize() {
	return _size;
}
