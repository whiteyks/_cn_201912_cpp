#include "pch.h"
#include "header.h"

void GenerateAnswers(int answers[])
{
	while (true)
	{
		for (int i = 0; i < DIGIT; i++)
			answers[i] = rand() % 10;

		if (HasDuplicateNumber(answers) == false)
			break;
	}

	PrintNumbers("[Á¤´ä]", answers);
}

