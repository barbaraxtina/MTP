#include <stdio.h>

int main ()

{
	int vet1[10]; 
	int i,j,soma =0,prod =1;
	for (i=0; i<10; i++)
	{
		printf("\nDigite um valor:");
		scanf("%d", &vet1[i]);
	}
	for (j =0; j <10; j++)
	{
		soma = soma + vet1[j];
		prod = prod*vet1[j];
	}
	printf("%d""\n", soma); 
	printf("%d""\n", prod);
	return 0;
}
