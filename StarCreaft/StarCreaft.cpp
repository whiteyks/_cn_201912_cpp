#include "pch.h"
#include <iostream>
#include "Marine.h"
#include "Firebat.h"
#include "Tank.h"

void GoAndCome(Unit* unit)
{
	unit->Move(100, 100);
	unit->PlaySound();
	unit->Move(1, 1);
}

int main()
{
	Unit* units[3];
	units[0] = new Marine();
	units[1] = new Firebat();

	Tank* tank = new Tank();
	tank->ChangeToSeigeMode();
	
	units[2] = tank;



	for (int i = 0; i < 3; i++)
		GoAndCome(units[i]);


	// 1. 속성값을 임의로 변경 가능

	// 2. Marine과 Marine_Move 같은 함수가 연결 되어있지 않음

	// 3. Marine과 Firebat에 중복되는 코드가 많음

	// 4. Marine과 Firebat을 추상화할 수 없음
}


