// Palamarchuk_Lr7_TxPrZS.cpp
#include "TaskOne.h"
#include "TaskSecond.h"

int main()
{
    cout << "Task 1, result: ";
    TaskOne task1(1.5, 1.2, 5.0, 2.1);
    cout << task1.calculate() << endl << endl;

    cout << "Task 2, outputting all fields:\n";
    TaskSecond task2(1.5, 1.2, 5.0, 2.1);
    float* array = task2.outputAllFields();
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    delete[] array;

    cout << "\nTask 3, working with a file..." << endl;
    task2.outputFieldsToFile();
    cout << endl;
    task2.inputFieldsFromFile();
}
