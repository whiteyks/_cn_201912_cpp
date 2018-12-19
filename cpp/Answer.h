#pragma once
#include "header.h"

class Answer
{
private:
	int _numbers[DIGIT];

	bool HasDuplicateNumber();
	int CountInArray(int value);
	void PrintNumbers(const char* prefix);

public:
	void Generate();
	int At(int index) const;
};
