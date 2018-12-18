#pragma once
#include "Unit.h"

struct Firebat : public Unit
{
public:
	Firebat();

	~Firebat();

	void PlaySound() override;
};


