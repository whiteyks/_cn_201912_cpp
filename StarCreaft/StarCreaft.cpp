#include "pch.h"
#include <iostream>
#include "Marine.h"
#include "Firebat.h"
#include "Zealot.h"

void GetAttackedRandomly(Unit* m)
{
	int damage = rand() % 10 + 1;
	m->GetDamaged(damage);
	m->PrintStatus();
}

int main()
{
	Unit* m = new Marine();
	GetAttackedRandomly(m);
	
	GetAttackedRandomly(new Firebat());
	
	GetAttackedRandomly(new Zealot());

}


