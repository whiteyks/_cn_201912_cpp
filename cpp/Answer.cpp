#include "pch.h"
#include "header.h"
#include "Answer.h"
#include <iostream>
using namespace std;

void Answer::Generate()
{
	while (true)
	{
		for (int i = 0; i < DIGIT; i++)
			_numbers[i] = rand() % 10;

		if (HasDuplicateNumber() == false)
			break;
	}

	Print("[Á¤´ä]");
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





