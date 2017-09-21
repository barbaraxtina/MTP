#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int B, P, x, r;
	printf ("Digite o valor da base para elevar a uma potencia: ");
	scanf ("%d", &B);
	r = B;
	printf ("Digite o valor da potencia: ");
	scanf ("%d", &P);
	for (x = 1; x < P; x++)
		r = r*B;
	printf ("%d", r);
	return 0;
}
