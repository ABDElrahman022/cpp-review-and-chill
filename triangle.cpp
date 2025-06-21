#include <iostream>
using namespace std;

void main() {

	/*
		To draw a pyramid like the one below when the height is 5:
			*
		   ***
		  *****
		 *******
		*********
	*/
	int h;
	cout << "Enter the height of the triangle: ";
	cin >> h;
	//1st
	for (int row = 1; row <= h; row++) {
		int star = (row * 2) - 1;
		int space = (h - row);

		while (space > 0) {
			cout << " ";
			space = space - 1;
		}
		while (star > 0) {
			cout << "*";
			star = star -1;
		}
		cout << endl;
	}
	//2nd
	for (int row = 1; row <= h; row++) {
		for (int space = h - row; space > 0; space--) {
			cout << " ";
		}
		for (int star = (row * 2) - 1; star > 0; star--) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl<< "inverted pyramid" << endl;

	/*
		This code prints an inverted pyramid pattern based on the given height.
		For example, if height = 5, the output will be:

		*********
		 *******
		  *****
		   ***
			*
	*/
	//1st
	for (int row = 1; row <= h; row++) {
		int space = row - 1;
		while (space > 0) {
			cout << " ";
			space--;
		}
		int star = ((h - row) * 2) + 1;
		while (star > 0) {
			cout << "*";
			star--;
		}
		cout << endl;
	}
	//2nd
	for (int row = 1; row <= h; row++) {
		for (int space = 0; space < row-1; space++) {
			cout << " ";
		}
		for (int star = ((h-row) * 2) + 1; star >0; star--) {
			cout << "*";
		}
		cout << endl;
	}

}