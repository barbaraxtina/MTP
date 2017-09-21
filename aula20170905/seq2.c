#include <stdio.h>

int main ()

{
	float b, h, a;
	printf ("Digite a medida da base do paralelogramo: ");
	scanf ("%f", &b); // para salvar o número na variável, usar o "&" e o nome da incógnita; para usar o double "%lf", para usar o inteiro "%d", para usar float "%f".
	printf ("Digite a medida da altura do paralelogramo: ");
	scanf ("%f", &h);
	a= b*h;
	printf ("\n\n %.3f", a);
}
