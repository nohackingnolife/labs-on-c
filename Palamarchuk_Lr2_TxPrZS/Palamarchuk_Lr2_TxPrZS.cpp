// Palamarchuk_Lr2_TxPrZS.cpp

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class FirstProblem
{
private:
    float _a, _b, _x;

public:
    FirstProblem(float a, float b, float x) {
        if (a == 0) throw "a can not be 0";
        _a = a;
        _b = b;
        _x = x;
    }

    float task_1() {
        return _b * pow(tan(_x), 2) - _a / pow(sin(_x / _a), 2);
    }

    float task_2() {
        return _a * exp(-sqrt(_a)) * cos(_b * _x / _a);
    }
};

float SecondProblem(float x) {
    if (x >= 2)
    {
        return 1 / (12.3 * x * x - 9 * x + 1.5);
    }
    else
    {
        return sqrt(4 - x * x);
    }
}

void ThirdProblem() {
    string kzz[5] = {
        "Засiб технiчного захисту iнформацii 'Вимiрювально-обчислювальний комплекс 'Ореол-2''",
        "Электронный GSM Ключ Geos RC-30",
        "Электронный ключ защиты USB-TRASSIR",
        "Токен ePass FIDO U2F FIDO2 USB-A K4B",
        "Электронный ключ безопасности Feitian ePass FIDO U2F FIDO2 USB-A A4B"
    };

    for (size_t i = 1; i < sizeof(kzz) / sizeof(kzz[0]) + 1; i++)
    {
        cout << "   " << i << " - " << kzz[i - 1] << endl;
    }

    cout << "Choose one of listed above: ";

    int number; cin >> number;

    cout << "Your choice: "<< kzz[number - 1];
}

string FourthProblem() {
    int machines_status;
    cout << "У вас одна одномашинная (1) или многомашинная (2) система? "; cin >> machines_status;
    if (machines_status == 1) return "Ваша система Первого Класса";

    cout << "Машины вашей системы локализированны (1) или распределены (2)? "; cin >> machines_status;
    if (machines_status == 1) return "Ваша система Второго Класса";
    else return "Ваша система Третьего Класса";
}

class FifthProblem
{
public:
    static void task_1() {
        cout << "Task 1\n";
        float r;
        cout << "Введите значение R: "; cin >> r;
        cout << "Значение R = " << r << ", ";
        if (r >= 0.7 && r <= 1) cout << "Риск высокий\n";
        else if (r >= 0.35 && r < 0.7) cout << "Риск средний\n";
        else cout << "Риск низкий\n";
    }

    static void task_2(int number) {
        cout << "\nTask 2\n";

        const int base = { 5 };
        string result;
        cout << "Вы ввели число = " << number << ", основание: " << base << endl;
        
        int numerator = number / base;
        int remainder = number % base;
        result += to_string(remainder);

        cout << "\n\t" << number << " : " << base << " = " << numerator << "\tR = " << remainder << endl;

        while (numerator != 0)
        {
            remainder = numerator % base;

            cout << "\t" << numerator << " : " << base << " = " << numerator / base << "\tR = " << remainder << endl;

            result += to_string(remainder);
            numerator = numerator / base;
        }

        reverse(result.begin(), result.end());

        cout << "\nЧисло " << number << " в " << base << " системе счисления: " << result << endl;
    }

    static void task_3() {
        cout << "\nTask 3\n";

        string str_number;
        int base;
        cout << "Введите число: "; cin >> str_number;
        cout << "Введите основание: "; cin >> base;

        cout << "\nВы ввели число = " << str_number << ", основание: " << base << endl << endl;

        reverse(str_number.begin(), str_number.end());
        int length = str_number.length();
        int *array = new int[length];
        int summ = 0;
        int temp_number;


        for (int i = 0; i < length; i++)
        {
            temp_number = str_number[i] - '0';
            array[i] = temp_number * pow(base, i);
            summ += array[i];

            cout << temp_number << "*" << base << "^" << i;

            if (i == length - 1) cout << " = ";
            else cout << " + ";
        }
        cout << summ;

        delete[] array;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    //first_output
    cout << "First Problem\n";
    FirstProblem first(3.2, 17.5, 4.8);
    cout << first.task_1() << endl;
    cout << first.task_2() << endl;

    //second_output
    cout << "\nSecond Problem\n";
    cout << SecondProblem(3.7) << endl << SecondProblem(2) << endl << SecondProblem(3.5) << endl;

    //third_output
    cout << "\nThird Problem\n";
    ThirdProblem();
    cout << endl;

    //fourth_output
    cout << "\nFourth Problem\n";
    cout << FourthProblem() << endl;

    //fifth_output
    cout << "\nFifht Problem\n";
    FifthProblem fifth;
    fifth.task_1();
    fifth.task_2(183);
    fifth.task_3();
}
