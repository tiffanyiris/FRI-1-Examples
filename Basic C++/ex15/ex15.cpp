#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char **argv) {	
	int e[10];
	for(int i = 0; i < 10; i++) {
		e[i] = i + 10;
	}

	//for(int i = 0; i < 100; i++) {
	//	e[i] = i + 10;
	//d}

	for(int i = 0; i < 10; i++)
		cout << e[i] << endl;

	int *f = NULL;
	f = (int *) malloc(10 * sizeof(int));
	for(int i = 0; i < 10; i++) {
		f[i] = i + 10;
	}
	for(int i = 0; i < 10; i++)
		cout << f[i] << endl;
	free(f);

	cout << "===" << endl;
	f = (int *) malloc(20 * sizeof(int));
	for(int i = 0; i < 20; i++) {
		f[i] = i + 20;
	}
	for(int i = 0; i < 20; i++)
		cout << f[i] << endl;
	free(f);

	cout << "===" << endl;
	int *g = new int[10];
	for(int i = 0; i < 10; i++) {
		g[i] = i + 10;
	}
	for(int i = 0; i < 10; i++)
		cout << g[i] << endl;
	delete[] g;

	cout << "===" << endl;
	g = new int[20];
	for(int i = 0; i < 20; i++) {
		g[i] = i + 20;
	}
	for(int i = 0; i < 20; i++)
		cout << g[i] << endl;
	delete[] g;


	cout << "===" << endl;
	int a[10];
	for(int i = 0; i < 10; i++) {
		a[i] = 1000 + (i * 2);
	}

	g = new int[10];
	memcpy(g, a, 10 * sizeof(int));
	for(int i = 0; i < 10; i++)
		cout << "a[" << i << "]:	" << a[i] << endl;
	cout << "---" << endl;
	for(int i = 0; i < 10; i++)
		cout << "g[" << i << "]:	" << g[i] << endl;

	

	return 0;
}
