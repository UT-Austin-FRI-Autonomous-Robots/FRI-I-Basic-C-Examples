#include <iostream>

using namespace std;

//int - return value
//int a - formal parameter
//int b - formal parameter
int addTwoInts(int a, int b) {
	return a + b;
}

//Changes to a variable inside a function do not affect the variables outside of
//	that function
//This is part of what is called "scoping"
int scopingDemo(int a, int b) {
	a = a + 2;
	b = b + 5;
	return a + b;	//Return statement, returns the value after it.
}

int main(int argc, char **argv) {
	int a = 2;
	int b = 10;

	cout << "addTwoInts(a, b):	" << addTwoInts(a, b) << endl;

	cout << a << endl;
	cout << b << endl;

	return 0;
}
