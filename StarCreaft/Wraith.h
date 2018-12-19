#pragma once
#include "Unit.h"
#include "Flyable.h"

class Wraith : public Unit, public Flyable
{
protected:

	void PrintName() override;

public:
	void Fly(int x, int y) override;
};

