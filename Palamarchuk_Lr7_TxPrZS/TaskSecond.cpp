#include "TaskSecond.h"

TaskSecond :: TaskSecond(float x, float a, float b, float c)
{
	_x = x;
	_a = a;
	_b = b;
	_c = c;
	_rez = exp(c * x) * (x + sqrt(x + a)) / (x - sqrt(abs(x - b)));
}

float* TaskSecond :: outputAllFields()
{
	float* fields = new float[5]{ _x, _a, _b, _c, _rez };
	return fields;
}

void TaskSecond :: outputFieldsToFile()
{
	ofstream write_info;
	write_info.open("file1.txt");
	write_info << "x: " << _x << "\na: " << _a << "\nb: " << _b << "\nc: " << _c << "\n_rez: " << _rez;
	write_info.close();
	cout << "Writing into file1.txt completed";
}

void TaskSecond :: inputFieldsFromFile()
{
	stringstream ss;
	string temp_line;

	ifstream show_info;
	show_info.open("file1.txt");
	while (getline(show_info, temp_line))
	{
		ss << temp_line << endl;
	}

	cout << "Info from file1.txt:\n" << ss.str();
}
