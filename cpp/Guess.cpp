#include "pch.h"
#include "header.h"

void InputGuesses(int guesses[])
{
	cout << "������ �Է��ϼ���" << endl;

	for (int i = 0; i < DIGIT; i++)
		cin >> guesses[i];

	PrintNumbers("[����]", guesses);
}
