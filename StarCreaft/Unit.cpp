#include "pch.h"
#include "Unit.h"
#include <iostream>

Unit::Unit()
{
}


Unit::~Unit()
{
}

void Unit::Move(int x, int y)
{
	X = x;
	Y = y;
}

void Unit::PrintLocation()
{
	std::cout << "X:" << X << " Y:" << Y << std::endl;
}
