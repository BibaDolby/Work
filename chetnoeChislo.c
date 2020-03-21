#include<stdio.h>

int main()
{
	int a;
	printf("Vvedite chislo: ");
	scanf("%d", &a);
	if(a % 2 == 0)
	{
		printf("chislo chetnoe");
	}
	else
	{
		printf("chisli NEchetnoe");
	}
	return 0;
}
