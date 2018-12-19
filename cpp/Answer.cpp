#include "pch.h"
#include "header.h"
#include "Answer.h"

void Answer::Generate()
{
	while (true)
	{
		for (int i = 0; i < DIGIT; i++)
			_numbers[i] = rand() % 10;

		if (HasDuplicateNumber() == false)
			break;
	}

	PrintNumbers("[Á¤´ä]");
}

bool Answer::HasDuplicateNumber()
{
	for (int i = 0; i < DIGIT; i++)
	{
		if (CountInArray(_numbers[i]) > 1)
			return true;
	}

	return false;
}

int Answer::CountInArray(int value)
{
	int count = 0;
	for (int i = 0; i < DIGIT; i++)
		if (_numbers[i] == value)
			count++;

	return count;
}

void Answer::PrintNumbers(const char* prefix)
{
	cout << prefix;
	for (int i = 0; i < DIGIT; i++)
		cout << _numbers[i] << ' ';
	cout << endl;
}


