#include "MathFunc.h"

float* MathFunc(int size, System::Windows::Forms::DataGridView^ dataGridView1)
{
	int i = 0;
	for (; ; i++)
	{
		if (i == dataGridView1->ColumnCount)
		{
			break;
		}
		if (System::Convert::ToString(dataGridView1->Rows[i]->Cells[i]->Value) != "")
		{
			continue;
		}
		else
		{
			break;
		}
	}

	if (size != i)
	{
		throw gcnew IndexOutOfRangeException;
	}

	int* xMax = new int[size]; //initialize arrays after checking textbox
	int* xMin = new int[size];

	for (i = 0; i < size; i++)
	{
		xMax[i] = 0;
	}

	for (int row = 0; row < size; row++)
	{
		int min;

		for (int col = 0; col < size; col++)
		{
			int value = System::Convert::ToInt32(dataGridView1->Rows[row]->Cells[col]->Value);
			if (value > 100 || value < 10)
			{
				throw gcnew ArgumentOutOfRangeException;
			}

			if (value > xMax[row])
			{
				xMax[row] = value;
			}

			if (col == 0)
			{
				min = value;
			}

			if (value <= min)
			{
				min = value;
				xMin[row] = min;
			}
		}
	}

	float* x = new float[size];

	for (int i = 0; i < size; i++)
	{
		x[i] = xMax[i] + (xMax[i] - xMin[i]) * (rand() % 1000 / 1000.0);
	}

	float mx, d;

	float xSum = 0;
	for (int i = 0; i < size; i++)
	{
		xSum += x[i];
	}
	mx = 1.0 / size * xSum;

	xSum = 0;
	for (int i = 0; i < size; i++)
	{
		xSum += pow((x[i] - mx), 2);
	}

	d = 1.0 / (size - 1) * xSum;

	float* arr = new float[2 + size];
	arr[0] = mx;
	arr[1] = d;
	for (int i = 0; i < size; i++)
	{
		arr[2 + i] = ceil(x[i]);
	}

	delete[] xMax;
	delete[] xMin;
	delete[] x;

	return arr;
}
