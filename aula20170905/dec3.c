#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(0));
	int n, m, s, p;
    m = rand() %6+1;
    n = rand() %6+1;
    p = rand() %6+1;
    s = m+n+p;
    printf ("%i %i %i", m, n, p);
    if (s==7 || s==11)
    	printf ("o jogador ganhou");
    else 
    	printf ("\n\no jogador perdeu");
    return (0);
}
