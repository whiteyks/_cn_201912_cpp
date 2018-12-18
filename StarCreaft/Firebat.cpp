#include "pch.h"
#include "Firebat.h"
#include <iostream>
using namespace std;

Firebat* Firebat_Create()
{
	Firebat* firebat = (Firebat*)malloc(sizeof(Firebat));
	firebat->X = 1;
	firebat->Y = 1;
	firebat->HP = 60;

	return firebat;
}

void Firebat_Destroy(Firebat* firebat)
{
	free(firebat);
}

void Firebat_Move(Firebat* firebat, int x, int y)
{
	firebat->X = x;
	firebat->Y = y;
}

void Firebat_PrintLocation(Firebat* firebat)
{
	std::cout << "X:" << firebat->X << " Y:" << firebat->Y << endl;
}