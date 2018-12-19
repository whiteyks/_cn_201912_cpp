#include "pch.h"
#include "header.h"
#include "Guess.h"
#include "Answer.h"
#include "Result.h"
#include <iostream>
using namespace std;

Result::Result()
{
	_strike = 0;
	_ball = 0;
	_out = 0;
}

void Result::Calculate(const Answer* answer, const Guess* guess)
{
	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % DIGIT;
		int k = (i + 2) % DIGIT;

		if (guess->At(i) == answer->At(i))
			_strike++;
		else if (guess->At(i) == answer->At(j) || guess->At(i) == answer->At(k))
			_ball++;
		else
			_out++;
	}
}

void Result::Print()
{
	std::cout << "[°á°ú] S:" << _strike << " B:" << _ball << " O:" << _out << std::endl;
}

bool Result::IsCorrect()
{
	return _strike == DIGIT;
}

