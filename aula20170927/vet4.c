#include <stdio.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int x,i,j, y=0, min = 11, max =-1, vet[1000];
	printf("\nDigite um numero inteiro nao negativo entre 1 e 1000: ");
	scanf("%d", &x);
	y = x - 1;
	for(i=0; i<y; i++)
	{
			vet[i] = rand() %10;
	}
	for(i=0; i<y; i++)
	{
		if(vet[i] > max)
		max = vet[i];
	} 
	
	for(i=0; i<y; i++)
	{
		if(vet[i] < min)
		min= vet[i];
	}
	printf("max %d""\n""", max);
	printf("min %d""\n", min);
	return 0;   
}
