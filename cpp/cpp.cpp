#include "pch.h"
#include <iostream>
using namespace std;
#define DIGIT 3

int main()
{
	// 0~9 사이의 중복되지 않는 난수 3가지를 골라서 정답을 생성
	int answers[DIGIT];

	while (true)
	{
		for (int i = 0; i < DIGIT; i++)
			answers[i] = rand() % 10;

		if (answers[0] != answers[1] && answers[1] != answers[2])
			break;
	}

	cout << "[정답]";
	for (int i = 0; i < DIGIT; i++)
		cout << answers[i] << ' ';
	cout << endl;

	int tryCount = 0;

	while (true)
	{
		tryCount++;

		// 사용자로부터 3개의 숫자(추측)를 입력 받음
		cout << "추측을 입력하세요" << endl;
		int guess0, guess1, guess2;

		cin >> guess0;
		cin >> guess1;
		cin >> guess2;

		cout << "[추측]";
		cout << guess0 << ' ';
		cout << guess1 << ' ';
		cout << guess2 << ' ';
		cout << endl;


		// 정답과 추측을 비교하여 결과 판정
		int strike = 0, ball = 0, out = 0;

		// guess0 검사
		if (guess0 == answer0)
			strike++;
		else if (guess0 == answer1 || guess0 == answer2)
			ball++;
		else
			out++;

		// guess1 검사
		if (guess1 == answer1)
			strike++;
		else if (guess1 == answer2 || guess1 == answer0)
			ball++;
		else
			out++;

		// guess2 검사
		if (guess2 == answer2)
			strike++;
		else if (guess2 == answer0 || guess2 == answer1)
			ball++;
		else
			out++;


		// 결과를 화면에 출력
		cout << "[결과] S:" << strike << " B: " << ball << " O:" << out << endl;

		// 추측이 결과와 다르면 2번 단계로 돌아가서 반복
		if (strike == 3)
			break;
	}

	// 정답을 맞추는데 소요된 횟수를 출력하고 종료
	cout << "[횟수] " << tryCount << endl;
}
