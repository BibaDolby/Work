#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int main()
{
    //Объявление символьного массива
    char str[SIZE] = "Мы изучаем язык С";
    //Отображение текста
    puts(str);
    puts("Введите текст: ");
    //Считывание текста
    fgets(str, SIZE, stdin);
    //Отображение текста
    puts("Вы ввели такой текст:");
    puts(str);
    return 0;
}
