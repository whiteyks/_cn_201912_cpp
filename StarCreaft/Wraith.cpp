#include "pch.h"
#include "Wraith.h"
#include <ostream>
#include <iostream>

void Wraith::PrintName()
{
	std::cout << "I am wraith" << std::endl;
}

void Wraith::Fly(int x, int y)
{
	MoveTo(x, y);
}
