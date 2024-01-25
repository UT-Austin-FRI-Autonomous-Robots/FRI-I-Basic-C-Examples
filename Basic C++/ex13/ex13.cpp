#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	int choice = 2;

	switch(choice) {
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		default:
			cout << "C" << endl;
			break;
	}

	return 0;
}


