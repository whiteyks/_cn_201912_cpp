#pragma once
#include "Unit.h"

struct Marine : public Unit
{
protected:
	void PrintName() override;

public:
	Marine();
};


