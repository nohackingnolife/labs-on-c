#include "RandomFromTo.h"

RandomFromTo::RandomFromTo(int from, int to)
{
	srand(time(0));
	_from = from;
	_to = to;
}

int RandomFromTo::GenerateNumber()
{
	return _from + rand() % (_to - _from + 1);
}
