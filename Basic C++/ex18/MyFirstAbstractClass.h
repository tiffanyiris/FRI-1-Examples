#ifndef MY_FIRST_ABSTRACT_CLASS_H
#define MY_FIRST_ABSTRACT_CLASS_H

#include <cstdlib>

using namespace std;

class MyFirstAbstractClass {
public:
	MyFirstAbstractClass(int a);
	~MyFirstAbstractClass();

	virtual void insertInt(int val) = 0;
	virtual int getIntAt(size_t index) = 0;
	virtual size_t getSize() = 0;

	void print();

	int _a;
};

#endif
