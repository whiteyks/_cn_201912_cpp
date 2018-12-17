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
		int guesses[DIGIT];

		for (int i = 0; i < DIGIT; i++)
			cin >> guesses[i];

		cout << "[추측]";
		for (int i = 0; i < DIGIT; i++)
			cout << guesses[i] << ' ';
		cout << endl;


		// 정답과 추측을 비교하여 결과 판정
		int strike = 0, ball = 0, out = 0;

		for (int i = 0; i < DIGIT; i++)
		{
			int j = (i + 1) % DIGIT;
			int k = (i + 2) % DIGIT;

			if (guesses[i] == answers[i])
				strike++;
			else if (guesses[i] == answers[j] || guesses[i] == answers[k])
				ball++;
			else
				out++;
		}

		// 결과를 화면에 출력
		cout << "[결과] S:" << strike << " B: " << ball << " O:" << out << endl;

		// 추측이 결과와 다르면 2번 단계로 돌아가서 반복
		if (strike == 3)
			break;
	}

	// 정답을 맞추는데 소요된 횟수를 출력하고 종료
	cout << "[횟수] " << tryCount << endl;
}
