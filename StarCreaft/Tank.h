#pragma once
#include "Unit.h"

class Tank : public Unit
{
private:
	bool IsSeiged;

public:
	Tank();
	~Tank();
	void ChangeToSeigeMode();
	void Move(int x, int y) override;
	void PlaySound() override;
};

