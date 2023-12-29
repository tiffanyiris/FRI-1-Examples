#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	vector<int> a;

	cout << "a.size(): " << a.size() << endl;
	for(int i = 0; i < 10; i++) {
		a.push_back(i);
		cout << "a.push_back(i): " << endl;
	}

	cout << "a.size(): " << a.size() << endl;

	for(int i = 0; i < 10; i++) {
		cout << "a[i]: " << a[i] << endl;
	}

	a.pop_back();
	cout << "a.size(): " << a.size() << endl;
	for(int i = 0; i < a.size(); i++) {
		cout << "a[i]: " << a[i] << endl;
	}

	a.erase(a.begin() + 2);
	for(int i = 0; i < a.size(); i++) {
		cout << "a[i]: " << a[i] << endl;
	}

	return 0;
}


