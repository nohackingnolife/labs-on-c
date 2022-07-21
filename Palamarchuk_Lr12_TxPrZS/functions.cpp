#include "functions.h"


float mathFunc(float x)
{
	if (x <= 0)
	{
		return firstFunction(x);
	}
	if (x > 0 && x <= 5)
	{
		return secondFunction(x);
	}
	if (x > 5)
	{
		return thirdFunction(x);
	}
}

float firstFunction(float x)
{
	return sqrt(pow(sin(x), 2) + pow(cos(x), 4));
}

float secondFunction(float x)
{
	return pow(log(x), 2) + sqrt(x);
}

float thirdFunction(float x)
{
	return pow(tan(x), 2) + sqrt(x);
}
