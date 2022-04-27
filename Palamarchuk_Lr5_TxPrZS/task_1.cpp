#include "task_1.h"

float* task_1() {
    static float array[3];

    float a = 2.3;
    float x = 7 + rand() % (20 - 7 + 1) / 10.0;
    float delta_x = 0.2;

    array[0] = M_PI * x * x - 7 / (x * x);
    array[1] = a * x * x * x + 7 * sqrt(x);
    array[2] = log(x + 7 * sqrt(abs(x + 2)));

    return array;
}