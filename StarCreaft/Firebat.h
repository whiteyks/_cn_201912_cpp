#pragma once
struct Firebat
{
	int X;
	int Y;
	int HP;
};

Firebat* Firebat_Create();

void Firebat_Destroy(Firebat* marine);

void Firebat_Move(Firebat* marine, int x, int y);

void Firebat_PrintLocation(Firebat* marine);

