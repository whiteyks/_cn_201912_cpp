#pragma once

#include <iostream>
#include "Result.h"
using namespace std;
#define DIGIT 3

void PrintNumbers(const char* prefix, const int* numbers);

int CountInArray(const int* answers, int value);

bool HasDuplicateNumber(const int* answers);

void InputGuesses(int guesses[]);

void CalculateResult(Result* result, const int answers[], const int guesses[]);

void PrintResult(const Result* result);

void GenerateAnswers(int answers[]);