#include "pch.h"
#include "NumberContainer.h"
#include <iostream>
using namespace std;

void NumberContainer::Print(const char* prefix)
{
	cout << prefix;
	for (int i = 0; i < DIGIT; i++)
		cout << _numbers[i] << ' ';
	cout << endl;
}

int NumberContainer::At(int index) const 
{
	return _numbers[index];
}