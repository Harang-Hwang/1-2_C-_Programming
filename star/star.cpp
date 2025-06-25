#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
	int i, j;
	for (i = 1; i < 6; i++) {
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (i = 1; i < 7; i++) {
		for (j = 6; j > i; j--) {
			cout << " ";
		}
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (i = 1; i < 7; i++) {
		for (j = 6; j > i; j--) {
			cout << " ";
		}

		for (j = 0; j < i; j++) {
			cout << "*";
		}
		for (j = 0; j < i - 1; j++) {
			cout << "*";
		}
		for (j = 6; j < i; j--) {
			cout << " ";
		}
		cout << endl;
	}

}