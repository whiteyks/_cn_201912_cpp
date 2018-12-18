#include "pch.h"
#include <iostream>
#include "..\cpp/Result.h"

// 반환값 복사시 오버헤드 발생
Result Take0()
{
	Result result {1,2,3};
	return result;
}

Result* Take2()
{
	Result result {1,2,3};
	return &result;
}

void Take4(Result* result)
{
	result->strike = 1;
	result->ball = 2;
	result->out = 3;
}

void foo()
{
	Result take0 = Take0();
	Result* take2 = Take2();

	Result take4;
	Take4(&take4);
}
