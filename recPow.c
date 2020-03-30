//Функция рекурсивно возводит число в степень
#include<stdio.h>

void Pow(int a, int b);
int res = 1;

int main()
{
    int a, b;
    printf("input chislo: ");
    scanf("%d", &a);
    printf("input power: ");
    scanf("%d", &b);
    Pow(a, b);
    printf(" \n");
    return 0;
}

void Pow(int a, int b)
{
        res = res * a;
        b--;
        if(0 >= b)
        {
            printf(" %d ", res);
            return;
        }
        else    
            Pow(a, b);
}