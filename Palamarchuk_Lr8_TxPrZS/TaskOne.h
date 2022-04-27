#pragma once
#include "includes.h"

class Pair
{
public:
	void SetNumberOne(int number);

	void SetNumberTwo(int number);

	int GetNumberOne();

	int GetNumberTwo();

	int Multiplication();

protected:
	int numberOne;
	int numberTwo;
};

class RightAngled : public Pair
{
public:
	int Hypotenuse();

	float TriangleSquare();
};
