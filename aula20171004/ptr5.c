#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int vetor[1000], i = 0;
	for (i = 0; i < 1000; i++)
		vetor[i] = rand() % 1000; 
		printf ("%2d", vetor);
		return 0;
}
