#pragma once
#include "header.h"
#include "NumberContainer.h"

class Answer : public NumberContainer
{
private:
	bool HasDuplicateNumber();
	int CountInArray(int value);

public:
	void Generate();
	
};
