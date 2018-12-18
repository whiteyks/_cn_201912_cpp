﻿#include "pch.h"
#include <iostream>
#include "header.h"

int main()
{
	// 0~9 사이의 중복되지 않는 난수 3가지를 골라서 정답을 생성
	int answers[DIGIT];
	GenerateAnswers(answers);

	int tryCount = 0;

	while (true)
	{
		tryCount++;

		// 사용자로부터 3개의 숫자(추측)를 입력 받음
		int guesses[DIGIT];
		InputGuesses(guesses);


		// 정답과 추측을 비교하여 결과 판정
		Result result{ 0,0,0 };
		CalculateResult(&result, answers, guesses);

		// 결과를 화면에 출력
		PrintResult(&result);

		// 추측이 결과와 다르면 2번 단계로 돌아가서 반복
		if (result.strike == DIGIT)
			break;
	}

	// 정답을 맞추는데 소요된 횟수를 출력하고 종료
	cout << "[횟수] " << tryCount << endl;
}
