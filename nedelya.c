#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("vvedi chislo: ");
	scanf("%d", &num);
	switch(num)
	{
		case 1: printf("monday"); break;
		case 2: printf("tuesday"); break;
		case 3: printf("wednesday"); break;
		case 4: printf("thursday"); break;
		case 5: printf("friday"); break;
		case 6: printf("saturday"); break;
		case 7: printf("sunday"); break;
		case 8: printf("no day"); break;
	}
	return 0;
}
