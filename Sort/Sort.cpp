#include "pch.h"
#include <iostream>
#include "SelectionSort.h"

using namespace std;

void PrintArray(int* ar, int size)
{
	for (int i = 0; i < size; i++)
		cout << ar[i] << ' ';

	cout << endl;
}

bool Ascending(int lhs, int rhs)
{
	return lhs > rhs;
}

bool Descending(int lhs, int rhs)
{
	return lhs < rhs;
}

int main()
{
	short s = 1;
	short (*ps) = &s;
	short s2 = *ps;

	bool (*pf)(int, int) = Ascending;
	// bool (*pf)(int, int) = &Ascending;
	bool b = pf(1,2);
	// bool b = (*pf)(1,2);

	short (*pa)[3];

	short ar2[2][3];
	*(*(ar2 + 1) + 2) = 3;
	ar2[1][2] = 3;


	short *pb[3];



	int ar[] = {3,5,1,2};

	PrintArray(ar, 4);

	Sort(ar, 4, Ascending);

	PrintArray(ar, 4);
}
