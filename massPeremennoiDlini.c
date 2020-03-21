#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Размер массива и инденксная переменная
    int n, k;
    //Определение массива
    printf("Введите рамер массива: ");
    scanf("%d", &n);
    //Создание массива
    int nums[n];
    //Инициализация генератора случайных чисел
    srand(5);
    //Заполнение массива случайными числами
    for(k = 0; k < n; k++)
    {
        nums[k] = rand()%10;
        printf("|%d", nums[k]);
    }
    printf("\n");
    return 0;
}
