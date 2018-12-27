#include "pch.h"

void Sort(int* ar, int size, bool (*comparer)(int, int))
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (comparer(ar[i], ar[j]))
			// if (ar[i] > ar[j])
			{
				int t = ar[i];
				ar[i] = ar[j];
				ar[j] = t;
			}
		}
	}
}