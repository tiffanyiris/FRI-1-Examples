#include <iostream>
#include <vector>

using namespace std;

class MyFirstClass {
public:
	MyFirstClass() : _a(10), _b(new int[5]), _size(0), _maxSize(5) {}

	~MyFirstClass() {
		delete[] _b;
	}

	void insertInt(int val) {
		if(_size < _maxSize) {
			cout << "Inserting:	" << val << "	at:	" << _size << endl;
			_b[_size++] = val;
		} else {
			cout << "Cannot insert. Already max size." << endl;
		}
	}

	void print() {
		for(int i = 0; i < _size; i++) {
			cout << "_b[" << i << "]:	" << _b[i] << endl;
		}
	}

	void printReverse() {
		for(int i = _size - 1; i >= 0; i--) {
			cout << "_b[" << i << "]:	" << _b[i] << endl;
		}
	}

	int _a;

protected:
	int *_b;
	int _size;
	int _maxSize;
};

int main(int argc, char **argv) {
	MyFirstClass a;
	for(int i = 0; i < 10; i++) a.insertInt(i);
	a.print();
	a.printReverse();

	cout << "a._a:	" << a._a << endl;
	//cout << "a._b:	" << a._b << endl;

	return 0;
}
