#include <stdio.h>
 int main ()
 
 {
 	int x,i,soma = 0;
 	printf("Digite um numero: \n");
 	scanf("%d", &x);
 	for (i=1; i <x; i++)
 	{
 		if (x%i == 0)
 		 soma = soma + i;	 
 	}
 	if (soma == x)
 	{
 		printf("\nE perfeito\n");
 	}
 	else 
 	    printf("\nNao e perfeito\n");
 	    
 	return 0;
 }
