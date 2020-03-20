#include<stdio.h>
#include<stdlib.h>

#define MYTEXT "Введите текст"

int main()
{
    system("chcp 1251>null");
    //Объявление символьных массивов
    char str[100] = "Мы изучаем";
    char words[] = "Вы ввели текст";
    //char txt[] = {'я', 'з', 'ы', 'к', '' , 'C', '\0'};
    //Отображение текста
    printf("%s\n", str);
    printf("%s:", MYTEXT);
    //Считывание текста
    scanf("%[^\n]", str);
    //Отображение текста
    printf("%s: %s\n", words,str);
    return 0;
}
