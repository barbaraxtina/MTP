
#include <stdio.h>

int main ()
{	
	float N,i = 0, aux = 1;
	printf("\nDigite um numero inteiro \n");
	scanf("%f", &N);
	while(N - i > 0)
	{
		aux = aux*(N-i);
		i++;
	}
	printf("\n%f \n", aux);
	return 0;
}
