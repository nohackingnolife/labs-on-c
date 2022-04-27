#pragma once
#include "cmath"

double func(double x)
{
	return x >= 2 ? 1 / (12.3 * x * x - 9 * x + 1.5) : sqrt(4 - x * x);
}
