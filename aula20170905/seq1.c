#include <stdio.h>

int main ()

{
	float l, a;
	printf ("Digite a medida do lado do quadrado:	");
	scanf ("%f", &l); // para salvar o número na variável, usar o "&" e o nome da incógnita; para usar o double "%lf", para usar o inteiro "%d", para usar float "%f".
	a= l*l;
	printf ("%.2f", a);
}
