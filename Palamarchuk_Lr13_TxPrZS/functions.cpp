#pragma once
#include "functions.h"

double firstFunction(double x)
{
	return sqrt(pow(sin(x), 2) + pow(cos(x), 4));
}

double secondFunction(double x)
{
	return pow(log(x), 2) + sqrt(x);
}

double thirdFunction(double x)
{
	return pow(tan(x), 2) + sqrt(x);
}
