#pragma once
#include "Unit.h"

class ProtossUnit : public Unit
{
protected:
	int Shield;
	
	void PrintName() override;

public:
	void GetDamaged(int damage) override;

	void PrintHP() override;
};

