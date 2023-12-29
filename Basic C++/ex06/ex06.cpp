#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	//Loops, our first control structure!!

	//for loop
	//	i = 0 	- Initializer
	//	i < 10 	- Comparison
	//	i++		- Increment
	for(int i = 0; i < 10; i++) {
		cout << "Inside for loop	- i:	" << i << endl;
	}
	
	//while loop
	int i = 0;
	//	i < 10 	- Comparison
	while(i < 10) {
		cout << "Inside while loop	- i:	" << i << endl;
		i++;
	}

	//do loop
	i = 0;
	//	i < 10 	- Comparison
	do {
		cout << "Inside do loop	- i:	" << i << endl;
		i++;
	} while(i < 10);

	//The difference between while and do is that do does the inside of the loop
	//	once before doing the comparison

	//The section inside {}'s is called a "block"
	//You probably wont do this, but you can have a loop with no block under it.
	//	But only if it is only 1 line!

	for(int i = 0; i < 10; i++)
		cout << "Inside for loop	- i:	" << i << endl;

	return 0;
}
