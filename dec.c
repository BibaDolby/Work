//Функция Dec переводит введенное число из десятичной системы счисления в двоичную 
#include<stdio.h>

void Dec(int a);

int main()
{
    int input;
    printf("input: ");
    scanf("%d", &input);
    Dec(input);
    printf("\n");
    return 0;
}

void Dec(int a)
{
    if(a > 0)
    {
        Dec(a / 2);            
        int res = a % 2;
        if(res > 0)
        {
            printf(" %d ", 1);
        }
        else if(res == 0)
        {
            printf(" %d ", 0);
        }
    }
    else if(a < 0)
        printf("input chislo > 0!");
}