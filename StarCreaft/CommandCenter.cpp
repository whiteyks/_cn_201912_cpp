#include "pch.h"
#include "CommandCenter.h"

void CommandCenter::Move(int x, int y)
{
	X = x;
	Y = y;
}

void CommandCenter::Fly(int x, int y)
{
	Move(x, y);
}
