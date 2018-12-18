#include "pch.h"
#include "Firebat.h"
#include <iostream>
using namespace std;

Firebat::Firebat()
{
	X = 1;
	Y = 1;
	HP = 50;
}

Firebat::~Firebat()
{
}

void Firebat::PlaySound()
{
	cout << "Shi~~~~" << endl;
}
