#include "pch.h"
#include "Unit.h"
#include <iostream>
using namespace std;

void Unit::GetDamaged(int damage)
{
	while (damage-- > 0)
	{
		HP--;
	}
}

void Unit::PrintStatus()
{
	PrintName();
	cout << " and ";
	PrintHP();
	cout << endl;
}

int Unit::GetHP()
{
	return HP;
}

void Unit::MoveTo(int x, int y)
{
	X = x;
	Y = y;
}

void Unit::PrintHP()
{
	cout << "my hp is " << HP;
}
