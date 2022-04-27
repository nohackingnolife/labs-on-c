#pragma once
#include "headers.h"

class TaskSecond
{
public:
	TaskSecond(float x, float a, float b, float c);

	float _x;
	float _a;
	float _b;
	float _c;
	float _rez;

	float* outputAllFields();

	void outputFieldsToFile();
	void inputFieldsFromFile();
};
