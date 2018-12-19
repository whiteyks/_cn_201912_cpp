#pragma once
#include "header.h"

class Guess
{
private:
	int _numbers[DIGIT];
	void PrintNumbers(const char* prefix);

public:
	void Input();

	int At(int index);
};
