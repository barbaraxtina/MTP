#include <stdio.h>
int main ()
{
	int n;
	printf ("Digite um numero para verificacao: ");
	scanf ("%i", &n);
		if (n%2==0)
		printf("\n par");
		else
		printf ("\n impar");
		if (n%3==0)
		printf ("\n mult. 3");
		if (n%5==0)
		printf ("\n mult. 5");
		if (n%7==0)
		printf ("\n mult. 7");
		return 0;
}
