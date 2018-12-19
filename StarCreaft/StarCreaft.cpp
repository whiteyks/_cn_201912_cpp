#include "pch.h"
#include <iostream>
#include "Marine.h"
#include "Firebat.h"
#include "Zealot.h"
#include "Wraith.h"
#include "CommandCenter.h"
#include "Flyable.h"

void FlyToTheMoon(Flyable* flyable)
{
		flyable->Fly(200,200);
}

int main()
{
	Wraith* w = new Wraith();
	FlyToTheMoon(w);

	CommandCenter* center = new CommandCenter();
	FlyToTheMoon(center);
}


