#include "TaskOne.h"

TaskOne :: TaskOne(float x, float a, float b, float c)
{
	_x = x;
	_a = a;
	_b = b;
	_c = c;
	_rez = exp(c * x) * (x + sqrt(x + a)) / (x - sqrt(abs(x - b)));
}

float TaskOne :: calculate()
{
	return _rez;
}
