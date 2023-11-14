#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "myfunc.h"

int is_number(const char *str) {
    char *endptr;
    strtod(str, &endptr);
    return *endptr == '\0';
}

int is_integer(const char *str) {
    char *endptr;
    long num = strtol(str, &endptr, 10);
    return *endptr == '\0' && num >= INT_MIN && num <= INT_MAX;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Неверное количество аргументов\n");
        printf("Использование: ./ctest fibonachi <num> или ./ctest my_sqrt <a> <b> <c>\n");
        return 1;
    }

    if (strcmp(argv[1], "fibonachi") == 0) {
        if (argc != 3 || !is_integer(argv[2])) {
            printf("Использование: %s fibonachi <num>\n", argv[0]);
            return 1;
        }

        int num = atoi(argv[2]);
        int result = fibonachi(num);
        printf("Результат для fibonachi(%d): %d\n", num, result);
    } else if (strcmp(argv[1], "my_sqrt") == 0) {
        if (argc != 5 || !is_number(argv[2]) || !is_number(argv[3]) || !is_number(argv[4])) {
            printf("Использование: %s my_sqrt <a> <b> <c>\n", argv[0]);
            return 1;
        }
        double a = atof(argv[2]);
        double b = atof(argv[3]);
        double c = atof(argv[4]);
        Roots* roots = my_sqrt(a, b, c);
        if (roots != NULL) {
            printf("Результат для my_sqrt(%.2lf, %.2lf, %.2lf): root1=%.6lf, root2=%.6lf\n", a, b, c, roots->root1, roots->root2);
            free(roots);
        } else {
            printf("Нет корней для my_sqrt(%.2lf, %.2lf, %.2lf)\n", a, b, c);
        }
    } else {
        printf("Неизвестная команда: %s\n", argv[1]);
        return 1;
    }

    return 0;
}
