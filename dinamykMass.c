#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Размер массива и индексная переменная
    int n, k;
    //Определение массива
    printf("Укажите размер массива: ");
    scanf("%d", &n);
    //Создание динамичексого массива
    int *nums = malloc(n *sizeof(int));
    //Инициализация генератора случ. чисел
    srand(5);
    //Заполнение массива случайными числами
    for(k = 0; k < n; k++)
    {
        nums[k] = rand()%10;
        printf("|%d", nums[k]);
    }
    printf("\n");
    //Высвобождение памятивыделенной под массив
    free(nums);

    return 0;
}
