
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myfunc.h"

// Задаем степень точности вычислений (до 5 знаков после запятой)
double epsilon = 1e-6;

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

    // Обработка недопустимого значения
    if (fabs(a) < epsilon) {

        // Если b отлично от нуля, решаем стандартное линейное уравнение bx + c = 0
        if (fabs(b) > epsilon) {

            Roots* result = malloc(sizeof(Roots));
            result->root1 = -c / b;
            result->root2 = -c / b;

            return result;
        }
        return NULL;
    }
    // Нет корней
    if (D + epsilon < 0) {
        return NULL;
    }

    Roots* result = malloc(sizeof(Roots)); // Выделяем память под результат
    
    // Один корень
    if (fabs(D) < epsilon) {
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
