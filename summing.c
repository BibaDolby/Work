#include<stdio.h>

int main()
{
	long num;
	long sum = 0L;
	int status;

	printf("Vvedite celoe chislo dlya summirovaniya");      
	printf("ili q dlya exit program: ");
	status = scanf("%ld", &num);
	while(status == 1)
	{
		sum = sum+num;
		printf("vvedite led chislo: ");
		status = scanf("%ld", &num);
	}
	printf("summa chisel: %ld.\n", sum);
	return 0;
}
