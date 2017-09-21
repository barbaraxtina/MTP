#include <stdio.h>

int main ()
{
	int i;
	double inv2 = 0;
	float inv1 = 0, inv0, n;
	printf("\n Insira um numero inteiro: \n");
	scanf("%f", &n);
	inv0 = 1/n;
	for(i = 0; i < 729; i++)
	{
		inv1 = 	inv1 + inv0;
		inv2 = inv2 + inv0;
	}
	printf(" \n Float %.15f \n", inv1);
	printf(" \n Double %.15lf \n", inv2);
	return 0;
}
