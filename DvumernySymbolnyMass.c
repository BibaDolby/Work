#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
#define COL 4

int main()
{
    system("chcp 1251");
    //Двумерный символьный массив
    char str[4][100] = {"Белый", "Красный", "Желтый", "Зеленый"};
    int k;
    //Отображение строк двумерного массива
    for(k = 0; k < 4; k++);
    {
        puts(str[k]);
    }
    return 0;
}
