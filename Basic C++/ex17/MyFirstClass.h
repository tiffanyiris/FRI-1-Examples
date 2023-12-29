#ifndef MY_FIRST_CLASS_H
#define MY_FIRST_CLASS_H

class MyFirstClass {
public:
	MyFirstClass();
	~MyFirstClass();

	void insertInt(int val);

	void print();

	int _a;

protected:
	int *_b;
	size_t _size;
	size_t _maxSize;
};

#endif
