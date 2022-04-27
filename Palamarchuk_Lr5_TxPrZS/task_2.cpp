#include "includes.h"

int task_2(int n, int m) {
    //creating2xarray
    int** array = new int* [m];
    int zero_counter = 0;
    for (int i = 0; i < m; i++)
    {
        array[i] = new int[n];
    }

    //filling
    for (int y = 0; y < m; y++)
    {
        cout << "\t\t";
        for (int x = 0; x < n; x++)
        {
            array[y][x] = rand() % (10 + 1);
            cout << array[y][x] << "\t";
            if (array[y][x] == 0)
            {
                zero_counter += 1;
            }
        }
        cout << endl;
    }

    return zero_counter;
}