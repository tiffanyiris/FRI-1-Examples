#ifndef MY_FIRST_CHILD_CLASS_H
#define MY_FIRST_CHILD_CLASS_H

#include "MyFirstAbstractClass.h"

class MyFirstChildClass : public MyFirstAbstractClass {
public:
	MyFirstChildClass(size_t maxSize);
	MyFirstChildClass(MyFirstChildClass &mfcc);
	~MyFirstChildClass();

	void insertInt(int val);
	int getIntAt(size_t index);
	size_t getSize();

protected:
	int *_b;
	size_t _size;
	size_t _maxSize;
};

#endif
