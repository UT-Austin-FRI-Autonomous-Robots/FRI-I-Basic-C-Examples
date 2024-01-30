#include <iostream>

using namespace std;

int add(int a, int b) {
	return a+;
}

int main(int argc, char **argv) {
	int (*operationPtr)(int,int) = add;
	int sum = (operationPtr(3,4));
	cout << sum << endl;

	return 0;
}