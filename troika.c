#include<stdio.h>

int main()
{
	int a = 3;
	printf("3, \n");
	for(int i=0; i<10; i++)
	{
		a = a*3;
		printf("%d, \n", a);
	}
	return 0;
}
