#include "pch.h"
#include "header.h"

void InputGuesses(int guesses[])
{
	cout << "추측을 입력하세요" << endl;

	for (int i = 0; i < DIGIT; i++)
		cin >> guesses[i];

	PrintNumbers("[추측]", guesses);
}
