// PointersAndDynamicArrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	using namespace std;

	int size, i;
	int *p, q;
	cout << "Enter the size of the array: ";
	Array: "";

	cin >> size;
	p = new int[size];
	for (i = 0; i < size; i++)
		p[i] = i;
	for (i = 0; i < size; i++)
		cout << p[i] << endl;

	int *pointer, *pointer2;
	cout << &size << endl;
	system("pause");

	p = &i;
	cout << p;

    return 0;
}