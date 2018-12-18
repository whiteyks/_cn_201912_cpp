#include "pch.h"
#include <iostream>
#include "Marine.h"
#include "Firebat.h"

void GoAndCome(Marine* marine)
{
	Marine_Move(marine, 100, 100);
	Marine_PrintLocation(marine);
	Marine_Move(marine, 1, 1);
	Marine_PrintLocation(marine);
}

void GoAndCome(Firebat* firebat)
{
	Firebat_Move(firebat, 100, 100);
	Firebat_PrintLocation(firebat);
	Firebat_Move(firebat, 1, 1);
	Firebat_PrintLocation(firebat);
}

int main()
{
	Marine* marine = new Marine();
	marine->Move(1,2);
	marine->PrintLocation();

	Firebat* firebat = Firebat_Create();
	Firebat_Move(firebat, 3, 4);
	Firebat_PrintLocation(firebat);
	Firebat_Destroy(firebat);

	// 1. 속성값을 임의로 변경 가능
	marine->X = -100;

	// 2. Marine과 Marine_Move 같은 함수가 연결 되어있지 않음

	// 3. Marine과 Firebat을 추상화할 수 없음
}


