#pragma once
#include "Guess.h"
#include "Answer.h"

class Result
{
private:
	int _strike;
	int _ball;
	int _out;

public:
	Result();

	void Calculate(const Answer* answer, const Guess* guess);

	void Print();

	bool IsCorrect();
};
