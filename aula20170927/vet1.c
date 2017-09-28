#include <stdio.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int x,i,soma = 0;
	float y;
	int vet[1000];
	printf("\nDigite um numero: ");
	scanf("%d", &x);
    for(i=0; i<1000; i++)
	{
		vet[i] = rand() %(x+1);
		soma = soma + vet[i];
	}
	y = soma/1000;
	printf("em torno de %f\n", y);
	return 0;
	
}
