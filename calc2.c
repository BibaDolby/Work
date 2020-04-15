#include<stdio.h>

#define Sum(a,b) a+b
#define Min(a,b) a-b
#define Del(a,b) a/b
#define Umn(a,b) a*b

int main(int a, int b, char p)
{
    fprintf(stdout, "Введите число a: ");
    scanf("%d", &a);
    fprintf(stdout, "Введите операцию: ");
    p = getchar();
    scanf("%c", &p);
    fprintf(stdout, "Введите число b: ");
    scanf("%d", &b);

    if(p == '+')
        fprintf(stdout, "%d + %d = %d\n", a, b, Sum(a, b));
    else if(p == '-')
        fprintf(stdout, "%d - %d = %d\n", a, b, Min(a, b));
    else if(p == '/')
        fprintf(stdout, "%d / %d = %d\n", a, b, Del(a, b));
    else if(p == '*')
        fprintf(stdout, "%d * %d = %d\n", a, b, Umn(a, b));
    return 0;
}