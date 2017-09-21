#include <stdio.h>
#include <math.h>

int main ()
{
	double r, b, n;
	printf("\n Digite um numero para o calculo do LOG \n\n");
	scanf("%lf", &n); getchar();
	printf("\n Digite um valor para a base LOG \n");
	printf("\n A base deve ser diferente de '0'\n\n");
	scanf("%lf", &b); getchar();
	r = (log(n)/log(b));
	printf("\n%.3lf \n", r);
	return 0;
}
