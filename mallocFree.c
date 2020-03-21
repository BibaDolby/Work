#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Ukazatel
	int *p;
	char *q;
	double *r;
	//Dinamicheskoe videlenie pamyaty
	p = malloc(sizeof(int));
	q = malloc(sizeof(char));
	r = malloc(sizeof(double));
	//Prisvaivanie znacheniy
	*p = 100;
	*q = 'D';
	*r = 1.234567;
	//Otobrajenie znacheniy
	printf("%d\n", *p);
	printf("%c\n", *q);
	printf("%f\n", *r);
	//Osvobojdenie pamyaty
	free(p);
	free(q);
	free(r);
	
	return 0;

}
