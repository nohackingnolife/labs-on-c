#pragma once
#include "headers.h"

class TaskOne
{
public:
	TaskOne(float x, float a, float b, float c);

	float _x;
	float _a;
	float _b;
	float _c;
	float _rez;

	float calculate();
};
