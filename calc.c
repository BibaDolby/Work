#include<stdio.h>
#include<stdlib.h>

int Summ(int a, int b);
int Min(int a, int b);
int Del(int a, int b);
int Umn(int a, int b);
int Step(int a, int b);
int OstDel(int a, int b);

int main(int a, int b, char p)
{
    system("clear");

    fprintf(stdout, "Введите число a: ");
    scanf("%d", &a);
    fprintf(stdout, "Введите операцию: ");
    p = getchar();
    scanf("%c", &p);
    fprintf(stdout, "Введите число b: ");
    scanf("%d", &b);

    if(p == '+')
        fprintf(stdout, "%d + %d = %d\n", a, b, Summ(a, b));
    else if(p == '-')
        fprintf(stdout, "%d - %d = %d\n", a, b, Min(a, b));
    else if(p == '/')
        fprintf(stdout, "%d / %d = %d\n", a, b, Del(a, b));
    else if(p == '*')
        fprintf(stdout, "%d * %d = %d\n", a, b, Umn(a, b));
    else if(p == '^')
        fprintf(stdout, "%d ^ %d = %d\n", a, b, Step(a, b));
    else if(p == '%')
        fprintf(stdout, "%d %% %d = %d\n", a, b, OstDel(a, b));
    return 0;
}
int Summ(int a, int b)
{
    return a + b;
}
int Min(int a, int b)
{
    return a - b;
}
int Del(int a, int b)
{
    return a / b;
}
int Umn(int a, int b)
{
    return a * b;
}
int Step(int a, int b)
{
    int res = 1;
    for(int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}
int OstDel(int a, int b)
{
    return a % b;
}