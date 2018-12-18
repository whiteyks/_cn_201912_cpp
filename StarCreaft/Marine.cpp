#include "pch.h"
#include "Marine.h"
#include <iostream>
using namespace std;

Marine::Marine()
{
	X = 1;
	Y = 1;
	HP = 50;
}

Marine::~Marine()
{
}

void Marine::PlaySound()
{
	cout << "You wanna piece of me boy?" << endl;
}

