#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main()
{
    //Создание массива
    int nums[SIZE];
    //Индексная переменная
    int k;
    //Инициализация генератора случайных чисел
    srand(5);
    //Заполение массива числами и отображение значений элементов массива
    for(k = 0; k < SIZE; k++)
    {
        nums[k] = 1 + rand()%20;//Массив от 1 до 20(%20)
        printf("|%2d", nums[k]);
    }
    printf("|\n");
    //Изменияем значение элемента массива
    for(k = 0; k < SIZE; k++)
    {
        *(nums+k)%=10;
        printf("|%2d", *(nums+k));
    }
    printf("|\n");

    return 0;
}
