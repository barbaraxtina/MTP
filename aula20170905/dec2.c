#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(0));
	int n, m, s;
    printf("Digite um numero: ");
    scanf ("%i", &n);
    m = rand() %10;
    s = m+n;
    printf ("%i\n %i\n %i\n", n, m, s);
    if (s%2==0)
   		printf ("par");
    else 
 		printf ("impar");
 	
}
