#include<stdio.h>

int main()
{
	printf("Vvedite tri chisla: ");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a > b && a>c)
	{
		printf("max: %d", a);
	}
	else if(b>a && b>c)
	{
		printf("max: %d", b);
	}
	else if(c>a && c>b)
	{
		printf("max: %d", c);
	}
	return 0;
}
