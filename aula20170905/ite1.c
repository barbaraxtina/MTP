#include <stdio.h>

int main ()
{
	int fat, n;
	printf ("Digite um numero inteiro para calcular seu fatorial: "); 
	scanf ("%i", &n);
	for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
	printf("\n %d", fat);
	return 0;	
}
