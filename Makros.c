#include<stdio.h>
#include<stdlib.h>

// #define ��������_�������(���������) ���

//����������� ������� ��� ����������
#define message() printf("������������ �����:\n")
//����������� ������� � ����� �����������
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

	//����� �������
	message();
	numbers(40, 0);
	message();
	numbers(0, 50);

	system("pause>null");
	return 0;
}