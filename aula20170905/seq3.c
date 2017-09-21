#include <stdio.h>

int main ()
{
	float A, B, C, D, E, m;
	printf ("Digite os valores das notas dos alunos: ");
	scanf ("%f %f %f %f %f" , &A, &B, &C, &D, &E);
	if (A>=0 && A<=10 && B>=0 && B<=10 && C>=0 && C<=10 && D>=0 && D<=10 && E>=0 && E<=10)
	{
		m = (2*A+2*B+2*C+3*D+5*E)/14;
		printf ("\n\n %.3f", m);
	}
}

