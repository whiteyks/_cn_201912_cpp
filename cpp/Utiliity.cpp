#include "pch.h"
#include "header.h"

void PrintNumbers(const char* prefix, const int* numbers)
{
	cout << prefix;
	for (int i = 0; i < DIGIT; i++)
		cout << numbers[i] << ' ';
	cout << endl;
}

int CountInArray(const int* answers, int value)
{
	int count = 0;
	for (int i = 0; i < DIGIT; i++)
		if (answers[i] == value)
			count++;

	return count;
}

bool HasDuplicateNumber(const int* answers)
{
	for (int i = 0; i < DIGIT; i++)
	{
		if (CountInArray(answers, answers[i]) > 1)
			return true;
	}

	return false;
}
