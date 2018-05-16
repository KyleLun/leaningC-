#include "stdafx.h"
#include <iostream>
#include <list>

using namespace std;

int main() {
	list <int> c;
	list <int>::iterator c_iter;

	c.push_back(1);
	c.push_back(5);
	c.push_back(2);
	c.push_back(8);
	c.push_back(-1);
	c.push_back(9);
	c.push_back(12);

	cout << "Before sorting: " << endl;
	for (c_iter = c.begin(); c_iter != c.end(); c_iter ++) {
		cout << *c_iter << " ";
	}
	cout << endl;

	c.sort();

	cout << "After sorting:" << endl;
	for (c_iter = c.begin(); c_iter != c.end(); c_iter++) {
		cout << *c_iter << " ";
	}
	cout << endl;

	c.sort(greater<int>());

	cout << "After sorting:" << endl;
	for (c_iter = c.begin(); c_iter != c.end(); c_iter++) {
		cout << *c_iter << " ";
	}
	cout << endl;

	return 0;
}
