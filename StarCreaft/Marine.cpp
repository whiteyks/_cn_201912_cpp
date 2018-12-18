#include "pch.h"
#include "Marine.h"
#include <iostream>
using namespace std;

Marine::Marine()
{
	X = 1;
	Y = 1;
	HP = 50;
}

Marine::~Marine()
{
}

void Marine::Move(int x, int y)
{
	X = x;
	Y = y;
}

void Marine::PrintLocation()
{
	std::cout << "X:" << X << " Y:" << Y << endl;
}