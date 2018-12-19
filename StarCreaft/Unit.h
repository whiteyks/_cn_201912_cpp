#pragma once
class Unit
{
protected:
	int HP;
	int X;
	int Y;

	// abstract void PrintName();
	virtual void PrintName() = 0;
	virtual void PrintHP();

public:
	virtual void GetDamaged(int damage);
	void PrintStatus();
	int GetHP();
	void MoveTo(int x, int y);
};

