#include "TaskOne.h"

void Pair::SetNumberOne(int number)
{
	numberOne = number;
}

void Pair::SetNumberTwo(int number)
{
	numberTwo = number;
}

int Pair::GetNumberOne()
{
	return numberOne;
}

int Pair::GetNumberTwo()
{
	return numberTwo;
}

int Pair::Multiplication()
{
	return numberOne * numberTwo;
}

int RightAngled::Hypotenuse()
{
	return sqrt(numberOne * numberOne + numberTwo * numberTwo);
}
	
float RightAngled::TriangleSquare()
{
	return numberOne * numberTwo / 2;
}
