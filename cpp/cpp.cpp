#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// srand(time(NULL));

	// 0~9 사이의 중복되지 않는 난수 3가지를 골라서 정답을 생성
	int answer0, answer1, answer2;

	while (true)
	{
		answer0 = rand() % 10;
		answer1 = rand() % 10;
		answer2 = rand() % 10;

		if (answer0 != answer1 && answer1 != answer2)
			break;
	}

	cout << "[정답]";
	cout << answer0 << ' ';
	cout << answer1 << ' ';
	cout << answer2 << ' ';
	cout << endl;


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

		
	// 결과를 화면에 출력
		
	// 추측이 결과와 다르면 2번 단계로 돌아가서 반복
		
	// 정답을 맞추는데 소요된 횟수를 출력하고 종료
}
