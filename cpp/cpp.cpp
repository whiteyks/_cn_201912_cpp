#include "pch.h"
#include <iostream>
#include "Result.h"
using namespace std;
#define DIGIT 3

// void PrintNumbers(char* prefix, int numbers[])
void PrintNumbers(const char* prefix, const int* numbers)
{
	cout << prefix;
	for (int i = 0; i < DIGIT; i++)
		cout << numbers[i] << ' ';
	cout << endl;

	int n = 0;
	const int* p1 = &n; // p1++(O), (*p1)++(X)
	int* const p2 = &n; // p2++(X), (*p2)++(O)
	const int* const p3 = &n; // p3++(X), (*p3)++(X)
}

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

	PrintNumbers("[정답]", answers);

	int tryCount = 0;

	while (true)
	{
		tryCount++;

		// 사용자로부터 3개의 숫자(추측)를 입력 받음
		cout << "추측을 입력하세요" << endl;
		int guesses[DIGIT];

		for (int i = 0; i < DIGIT; i++)
			cin >> guesses[i];

		PrintNumbers("[추측]", guesses);


		// 정답과 추측을 비교하여 결과 판정
		Result result {0,0,0};

		for (int i = 0; i < DIGIT; i++)
		{
			int j = (i + 1) % DIGIT;
			int k = (i + 2) % DIGIT;

			if (guesses[i] == answers[i])
				result.strike++;
			else if (guesses[i] == answers[j] || guesses[i] == answers[k])
				result.ball++;
			else
				result.out++;
		}

		// 결과를 화면에 출력
		cout << "[결과] S:" << result.strike << " B:" << result.ball << " O:" << result.out << endl;

		// 추측이 결과와 다르면 2번 단계로 돌아가서 반복
		if (result.strike == DIGIT)
			break;
	}

	// 정답을 맞추는데 소요된 횟수를 출력하고 종료
	cout << "[횟수] " << tryCount << endl;
}
