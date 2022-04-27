// Palamarchuk_Lr1_TxPrZS.cpp

#include <iostream>
#include <typeinfo>

using namespace std;

void task_1()
{
	cout << "Task 1\n";
	double x;
	cout << "Write double number: "; cin >> x;
	int new_x = int(x);
	cout << "Integer number: " << new_x << endl;
}

void task_2()
{
	cout << "\nTask 2\n";
	int x;
	cout << "Write integer number: "; cin >> x;
	double new_x = (double)x;
	cout << "Double number: " << new_x << ", Type of new_x is " << typeid(new_x).name() << endl;
}

void task_3()
{
	cout << "\nTask 3, devision\n";
	double n_1, n_2;
	cout << "Write number 1: "; cin >> n_1;
	cout << "Write number 2: "; cin >> n_2;
	cout << "Division's result: " << n_1 / n_2 << endl;
}

void task_4()
{
	cout << "\nTask 4, remainder of the devision\n";
	int n_1, n_2;
	cout << "Write number 1: "; cin >> n_1;
	cout << "Write number 2: "; cin >> n_2;
	cout << "Remainder of the division: " << n_1 % n_2 << endl;
}

void task_5()
{
	cout << "\nTask 5, arithmetic mean\n";
	int n_1, n_2;
	cout << "Write number 1: "; cin >> n_1;
	cout << "Write number 2: "; cin >> n_2;
	cout << "Arithmetic mean: " << (double)(n_1 + n_2) / 2 << endl;
}

void task_6()
{
	cout << "\nTask 6, wallet converter\n";
	double uah;
	cout << "Write UAH`s amount: "; cin >> uah;
	double usd_price = 28.61;
	double eur_price = 31.95;
	double rub_price = 0.37;
	cout << "USD: " << uah / usd_price << endl;
	cout << "EUR: " << uah / eur_price << endl;
	cout << "RUB: " << uah / rub_price << endl;
}

void task_7()
{
	cout << "\nTask 7, squaring\n";
	int number;
	cout << "Write number: "; cin >> number;
	cout << "Squaring: " << number * number << endl;
}

void task_8()
{
	cout << "\nTask 8, sum and multiplication\n";
	int n_1, n_2, n_3;
	cout << "Write number 1: "; cin >> n_1;
	cout << "Write number 2: "; cin >> n_2;
	cout << "Write number 3: "; cin >> n_3;
	cout << "Sum: " << n_1 + n_2 + n_3 << endl << "Multiplication: " << n_1 * n_2 * n_3 << endl;
}

void task_9()
{
	cout << "\nTask 9\n";
	cout << "(a + b - f / a) + f * a * a - (a + b)\n";
	double a, b, f;
	while (true)
	{
		cout << "Write a: "; cin >> a;
		if (a == 0) cout << "a can not be 0\n";
		else break;
	}
	cout << "Write b: "; cin >> b;
	cout << "Write f: "; cin >> f;
	double result = (a + b - f / a) + f * a * a - (a + b);
	cout << "Result: " << result << endl;
}

void task_10()
{
	cout << "\nTask 10, inches to centimeters\n";
	double inches;
	cout << "Write inches: "; cin >> inches;
	cout << "Converting inches to centimeters...\n";
	cout << "Centimeters: " << inches * 2.54 << endl;
}

int main()
{
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
	task_6();
	task_7();
	task_8();
	task_9();
	task_10();
}
