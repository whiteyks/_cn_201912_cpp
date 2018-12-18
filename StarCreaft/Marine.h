#pragma once

struct Marine
{
private:
	int X;
	int Y;
	int HP;

public:
	Marine();

	~Marine();

	void Move(int x, int y);

	void PrintLocation();
};


