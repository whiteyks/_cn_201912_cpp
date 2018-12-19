#pragma once
#include "header.h"

class NumberContainer
{
protected:
	int _numbers[DIGIT];
	void Print(const char* prefix);

public:
	int At(int index) const;
};

