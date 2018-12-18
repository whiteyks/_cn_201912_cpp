#include "pch.h"
#include "Tank.h"
#include <iostream>

Tank::Tank()
{
	X = 1;
	Y = 1;
	HP = 150;
}

Tank::~Tank()
{
}

void Tank::ChangeToSeigeMode()
{
	IsSeiged = true;
}

void Tank::Move(int x, int y)
{
	if (IsSeiged == false)
	{
		X = x;
		Y = y;
	}
}

void Tank::PlaySound()
{
	std::cout << "Yeah Sir" << std::endl;
}
