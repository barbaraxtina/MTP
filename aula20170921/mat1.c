#include <stdio.h>
#include <math.h>

int main ()
{
	double R, soma, sP1, sP2, X1, X2, Y1, Y2;
	printf("\nDigite as coordenadas do ponto 1 \n");
	scanf("%lf %lf", &X1 , &Y1);
	printf("\nDigite as coordenadas do ponto 2 \n");
	scanf("%lf %lf", &X2 , &Y2);
	sP1 = pow((X2 - X1), 2.0);
	sP2 = pow((Y2 - Y1), 2.0);
	soma = sP1 + sP2 ;
	R = sqrt(soma);
	printf("%.4f \n", R);
	return 0;
}

