#pragma once
class Unit
{
protected:
	int X;
	int Y;
	int HP;

public:
	Unit();
	~Unit();

	// 재정의 가능한
	virtual void Move(int x, int y);

	void PrintLocation();

	virtual void PlaySound() = 0;
	// abstract void PlaySound() = 0;
};

