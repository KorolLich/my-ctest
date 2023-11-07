
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myfunc.h"

// Задаем степень точности вычислений (до 5 знаков после запятой)
double epsilon = 1e-5;

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

// a*x^2 + b*x + c = 0 
Roots* my_sqrt(double a, double b, double c) {
    double D = b*b - 4*a*c;
    Roots* result = malloc(sizeof(Roots)); // Выделяем память под результат

    // а == 0 недопустимое значение
    if (fabs(a) < epsilon) {
        return NULL;
    }
    // Нет корней
    if (D + epsilon < 0) {
        return NULL;
    }
    // Один корень
    else if (fabs(D) < epsilon) {
        result->root1 = result->root2 = -b / (2 * a);
    }
    // Два корня
    else {
        double sqrtD = sqrt(D);
        result->root1 = (-b + sqrtD) / (2 * a);
        result->root2 = (-b - sqrtD) / (2 * a);
    }

    return result;
}
