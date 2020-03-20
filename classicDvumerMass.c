#include<stdio.h>

#define ROWS 3
#define COLS 5

int main()
{
    //Создание двумерного массива
    int nums[ROWS][COLS];
    //Индексные переменные и переменная-счетчик
    int i ,j, count = 0;
    //Заполнение массива и отображение значений эл. массива
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            count++;
            //Присваивание значений эл.
            nums[i][j] = count;
            //Отображение значений элемента
            printf("%3d", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
