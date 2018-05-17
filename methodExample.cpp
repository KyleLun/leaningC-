#include "stdafx.h"
#include <iostream>

using namespace std;


int map(int * arr, int size, int(*f)(int*, int)) {
	return (*f)(arr, size);
}

int map(int * arr, int number, int size, int(*f)(int*, int, int)) {
	return (*f)(arr, number, size);
}

int oddNumber(int *a, int size) {
	int i = 0;
	int j = 0;
	while (i < size) {
		if (a[i] % 2 != 0) {
			a[j] = a[i];
			j++;
		}
		i++;
	}

	return j;
}

int addOne(int *a, int size) {
	int i = 0;
	while (i < size) {
		a[i] = a[i] + 1;
		i++;
	}

	return i;
}

int add(int* a, int number, int size) {
	int i = 0;
	while (i < size) {
		a[i] = a[i] + number;
		i++;
	}

	return i;
}

int less(int* a, int number, int size) {
	int i = 0;
	while (i < size) {
		a[i] = a[i] - number;
		i++;
	}

	return i;
}

int op(int* a, int number, int size, int(*o)(int, int)) {
	int i = 0;
	while (i < size) {
		a[i] = (*o)(a[i], number);
		i++;
	}

	return i;
}

int add(int a, int b) {
	return (a + b);
}

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	int length = map(x, 5, addOne);
	int i = 0;
	while (i < length) {
		cout << x[i] << " ";
		i++;
	}
    cout << endl << "-------------------" << endl;

	int x1[] = { 1, 2, 3, 4, 5, 6, 9 };
	int length1 = map(x1, 2, 7, add);
	int j = 0;
	while (j < length1) {
		cout << x1[j] << " ";
		j++;
	}

	cout << endl << "-------------------" << endl;

	int x2[] = { 1, 2, 3, 4, 5, 6, 9, 12 };
	int length2 = op(x2, 1, 8, add);
	int k = 0;
	while (k < length2) {
		cout << x2[k] << " ";
		k++;
	}

	cout << endl << "-------------------" << endl;

	return 0;
}