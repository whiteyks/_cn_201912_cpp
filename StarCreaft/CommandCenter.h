#pragma once
#include "Flyable.h"

class CommandCenter : public Flyable
{
private:
	int X;
	int Y;
public:
	void Move(int x, int y);

	void Fly(int x, int y) override;
};

