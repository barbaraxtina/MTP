#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int i;
	float p,a,cont = 0;
	printf("\nInsira a probabilidade de 0 a 1 \n");
	scanf("%f", &p);
	for(i = 0; i < 1000; i++)
	{
		a = (rand()%11);
		a = a/10;
		if(a < p)
			cont++;
	}
	printf("\n%.1f\n", cont);
	return 0;
}
