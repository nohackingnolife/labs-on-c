#pragma once
#include <iostream>

class RandomFromTo
{
private:
	int _from, _to;

public:
	RandomFromTo(int from, int to);

	int GenerateNumber();
};
