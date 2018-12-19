#include "pch.h"
#include "ProtossUnit.h"
#include <iostream>

void ProtossUnit::PrintName()
{
	std::cout << "we are protoss" << std::endl;
}

void ProtossUnit::GetDamaged(int damage)
{
	while (damage-- > 0)
	{
		if (Shield > 0)
			Shield--;
		else
			HP--;
	}
}

void ProtossUnit::PrintHP()
{
	std::cout << "my hp is " << HP << " and my shiled is " << Shield;
}
