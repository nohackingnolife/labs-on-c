// Palamarchuk_Lr3_TxPrZS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

float task_1(int k) {
	cout << "k = " << k;
	float summ = 0;
	for (int i = 1; i <= k; i++)
	{
		summ += 1 / (pow(2, sqrt(i)) - 1);
	}
	cout << "\nSumm = " << summ << endl;
	return summ;
}

void task_2(int k) {
	cout << "k = " << k;
	float summ = 0;
	int i = 1;
	while (i <= k)
	{
		summ += 1 / (pow(2, sqrt(i)) - 1);
		i++;
	}
	cout << "\nSumm = " << summ << endl;
}

void task_3(int K, int x_min, int x_max) {
    int *X = new int[K];
	int numbers_list_length = x_max - x_min + 1;
	int *numbers_list = new int[numbers_list_length];

	for (int i = 0; i < numbers_list_length; i++)
	{
		numbers_list[i] = x_min;
		x_min++;
	}

	int X_length = K;
	cout << X_length;
	cout << "array X: ";
	int rand_number;
	for (int i = 0; i < X_length; i++)
	{
		X[i] = numbers_list[rand() % numbers_list_length];
		cout << X[i] << " ";
	}
	
	int *Y = new int[X_length];
	int Y_length = X_length;
	cout << "\narray Y: ";
	for (int i = 0; i < Y_length; i++)
	{
		Y[i] = X[i];
		cout << Y[i] << " ";
	}

	cout << "\nY`s length is " << Y_length << endl;

	delete[] X;
	delete[] numbers_list;
	delete[] Y;
}

void task_5_1(float ms, float sv) {
	float a1, a2, R, Fi;
	for (int i = 0; i < 100; i++)
	{
		a1 = (rand() % 100 + 1) / 100.0;
		R = sqrt(-2 * log(a1));

		a2 = (rand() % 100 + 1) / 100.0;
		Fi = 2 * 3.14 * a2;

		cout << R * sin(Fi) * sv + ms << endl;
	}
	system("pause");
}

void task_5_2(float ms, float sv) {
	float a1, a2, R, Fi, U1, U2;
	for (int i = 0; i < 100; i++)
	{
		a1 = (rand() % 100 + 1) / 100.0;
		R = sqrt(-2 * log(a1));

		a2 = (rand() % 100 + 1) / 100.0;
		Fi = 2 * 3.14 * a2;

		U1 = R * cos(Fi);
		U2 = R * sin(Fi);


		if (i % 2 == 0) cout << ms + sv * U1 << endl;
		else cout << ms + sv * U2 << endl;
	}
	system("pause");
}

void task_5_3(float ms, float sv) {
	float a1, a2, R, Fi, U1, U2, V1, V2, S;
	for (int i = 0; i < 100; i++)
	{
		a1 = (rand() % 100 + 1) / 100.0;
		V1 = 2 * a1 - 1;

		a2 = (rand() % 100 + 1) / 100.0;
		V2 = 2 * a2 - 1;

		S = pow(V1, 2) + pow(V2, 2);
		if (S >= 1)
		{
			i--;
			continue;
		}

		R = sqrt(-(2 * log(S)) / S);

		U1 = V1 * R;
		U2 = V2 * R;

		if (i % 2 == 0) cout << ms + sv * U1 << endl;
		else cout << ms + sv * U2 << endl;
	}
	system("pause");
}

int main()
{
	srand(time(0));

	cout << "Task 1\n";
	task_1(10); task_1(20); task_1(30);

	cout << "\nTask 2\n";
	task_2(10); task_2(20); task_2(30);

	cout << "\nTask 3\n";
	task_3(12, 5, 15);
	
	task_5_3(0, 0.01);
	task_5_3(0, 0.1);
	task_5_3(0, 0.25);
	task_5_3(0, 0.35);
	task_5_3(0, 0.4);
}
