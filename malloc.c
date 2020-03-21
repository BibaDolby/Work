#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Указатели
    int *p;
    char *q;
    double *r;
    //Динамическое выделение памяти
    p = malloc(sizeof(int));
    q = malloc(sizeof(char));
    r = malloc(sizeof(double));
    //Присваивание значений через указатели
    *p = 100;
    *q = 'D';
    *r = 1.234567;
    //Отображение значений
    printf("%d\n", *p);
    printf("%c\n", *q);
    printf("%f\n", *r);
    //Освобождение памяти
    free(p);
    free(q);
    free(r);

    return 0;
}
