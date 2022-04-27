// Palamarchuk_Lr5_TxPrZS.cpp
#include <ctime>
#include <iomanip>
#include "task_1.h"
#include "task_2.h"

int main()
{
    srand(time(0));
    cout << setprecision(10);

    //task_1
    float* array = task_1();
    cout << "Task 1\ny = " << array[0] << ", " << array[1] << ", " << array[2] << endl << endl;

    //task_2
    cout << "Task 2\n";
    cout << "Matrix A\n";
    int result = task_2(5, 5);
    cout << "Zeros: " << result << endl << endl;

    cout << "Matrix B\n";
    result = task_2(2, 4);
    cout << "Zeros: " << result << endl << endl;
}
