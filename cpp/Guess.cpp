#include "pch.h"
#include "header.h"
#include "Guess.h"
#include <iostream>
using namespace std;

void Guess::Input()
{
	cout << "������ �Է��ϼ���" << endl;

	for (int i = 0; i < DIGIT; i++)
		cin >> _numbers[i];

	Print("[����]");
}

