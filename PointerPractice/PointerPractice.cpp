#include "pch.h"
#include <iostream>
#include "..\cpp/Result.h"

using namespace  std;

// 지역변수 사용
int* Take1(int a, int b)
{
	int ar[2];
	ar[0] = a + b;
	ar[1] = a - b;

	return ar;
}

// 정적변수 사용
int* Take2(int a, int b)
{
	static int ar[2];
	ar[0] = a + b;
	ar[1] = a - b;

	return ar;
}

// 힙 사용
int* Take3(int a, int b)
{
	int* ar = (int*)malloc(sizeof(int) * 2);
	ar[0] = a + b;
	ar[1] = a - b;

	return ar;
}


// 호출하는 곳에서 공간 할당
void Take4(int a, int b, int* ar)
{
	*(ar+0) = a + b;
	*(ar+1) = a - b;
}

int main()
{
	int* take1 = Take1(1, 2);
	cout << take1[0] << endl;
	cout << take1[1] << endl;

	int* take2 = Take2(1, 2);
	cout << take2[0] << endl;
	cout << take2[1] << endl;

	int* take3 = Take3(1, 2);
	cout << take3[0] << endl;
	cout << take3[1] << endl;
	free(take3);

	int take4[2];
	Take4(1, 2, take4);
	cout << take4[0] << endl;
	cout << take4[1] << endl;
}
