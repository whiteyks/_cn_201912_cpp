#pragma once
class Unit
{
protected:
	int HP;

	// abstract void PrintName();
	virtual void PrintName() = 0;
	virtual void PrintHP();

public:
	virtual void GetDamaged(int damage);
	void PrintStatus();
	int GetHP();
};

