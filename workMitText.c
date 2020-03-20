#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100
#define C 'и'
int main()
{
    //Символьный массив с текстовым значением
    char txt[SIZE] = "Мы изучаем язык программирования С";
    //Пустой символьный массив
    char str[SIZE];
    wchar_t ch = L'и';
    //Отображение символьного массива
    printf("%s\n", txt);
    //Длинна текста
    printf("Длина текста: %ld\n", strlen(txt));
    //Копирование текстового значения
    strcpy(str, txt);
    //Сравнение исходного текста и копии
    if(!strcmp(str, txt))
    {
        printf("Создана копия текстовой строки\n");
    }
    //Изменение исходного текста
    strcat(txt, ", и не изучаем Java");
    //Сравнение текстовых значений
    if(strcmp(str, txt))
    {
        printf("Исходная строка изменилась\n");
    }
    //Содержимое исходной строки
    printf("%s\n", txt);
    //Содержимое копии
    printf("%s\n", str);
    //Поиск символа в строке
    printf("%s\n", strchr(txt,ch));
    //puts(strchr(txt, C));
    //printf("\n");
    //Поиск подстроки в строке
    printf("%s\n", strstr(txt, "и не"));
    return 0;
}
