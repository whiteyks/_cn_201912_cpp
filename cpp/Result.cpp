#include "pch.h"
#include "header.h"

void CalculateResult(Result* result, const int answers[], const int guesses[])
{
	for (int i = 0; i < DIGIT; i++)
	{
		int j = (i + 1) % DIGIT;
		int k = (i + 2) % DIGIT;

		if (guesses[i] == answers[i])
			result->strike++;
		else if (guesses[i] == answers[j] || guesses[i] == answers[k])
			result->ball++;
		else
			result->out++;
	}
}

void PrintResult(const Result* result)
{
	std::cout << "[°á°ú] S:" << result->strike << " B:" << result->ball << " O:" << result->out << std::endl;
}

