#include "pch.h"
#include "Unit.h"
#include <iostream>

void Unit::GetDamaged(int damage)
{
	while (damage-- > 0)
	{
		HP--;
	}
}

void Unit::PrintStatus()
{
	std::cout << "I am marine and my hp is " << HP << std::endl;
}
