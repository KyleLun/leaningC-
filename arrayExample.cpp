#include "stdafx.h"
#include <iostream>

using namespace std;

int** moreThan(int* arr, int size, int low) {
	int* ret[2];
	int * values = new int[size];
	int moreThanNum = 0;
	int lessThanNum = size - 1;
	for (int i = 0; i < size; i ++) {
		int v = arr[i];
		if (v >= low) {
			values[moreThanNum] = v;
			moreThanNum ++;
		}
		else {
			values[lessThanNum] = v;
			lessThanNum--;
		}
	}

	ret[0] = (int*)moreThanNum;
	ret[1] = values;

	return ret;
}

int main() {
	cout << "start....." << endl;

	int v[] = { 1,2,3,4,5,6 };
	int size = 6;
	int low = 3;

	int** r = moreThan(v, size, low);
	int length = (int)r[0];
	int* values = r[1];

	cout << "More than " << low << ": ";
	for (int i = 0; i < length; i ++) {
		cout << values[i] << "  ";
	}
	cout << endl;

	cout << "Less than " << low << ": ";
	for (int i = length; i < size; i++) {
		cout << values[i] << "  ";
	}

	delete[] values;
	cout << endl;

}
