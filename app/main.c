#include <stdio.h>

#include "myfunc.h"

// Точка запуска проекта
int main()
{
    printf("Hello World!\n");
    Roots roots = my_sqrt(1.0, -5.0, 6.0);
    printf("Результат: x1=%lf, x2=%lf\n", roots.root1, roots.root2);
}
