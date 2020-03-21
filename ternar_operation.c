#include<stdio.h>
# define X 1
#define Y 0

int main()
{
	int a = 10;
	int b = 5;
	int ternar = (a > b)? X:Y;
	printf("a > b? ответ: %d", ternar);

	return 0;
}
