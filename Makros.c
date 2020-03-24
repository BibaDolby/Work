#include<stdio.h>
#include<stdlib.h>

// #define название_макроса(аргументы) код

//Определение макроса без аргументов
#define message() printf("Отображаются числа:\n")
//Определение макроса с двумя аргументоми
#define numbers(n, y) ;\
	for(int k = 1; k <= (n); k++)\
	{\
		printf("%d ", k);\
	}\
	printf("\n");\
	for(int t = 1; t <=(y); t++)\
	{\
		printf("%d ", t);\
	}\
	printf("\n")\

int main(void)
{
	system("chcp 1251>null");

	//Вызов макроса
	message();
	numbers(40, 0);
	message();
	numbers(0, 50);

	system("pause>null");
	return 0;
}