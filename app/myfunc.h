#ifndef MYFUNC_H
#define MYFUNC_H

// Зададим структуру для возврата корней квадратного уравнения
typedef struct {
    double root1;
    double root2;
} Roots;

int myfunc(int b);

// Погрешность вычислений
extern double epsilon;

int fibonachi(int num);

Roots* my_sqrt(double a, double b, double c);
#endif // MYFUNC_H
