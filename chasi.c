#include<stdio.h>

int main()
{
	int k, h, m;
	scanf("%d", &k);
	h = k / 3600;
	m = (k % 60) / 60;
	printf("%d %d\n", h, m);
	return 0;
}
