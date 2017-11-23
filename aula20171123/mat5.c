#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

double main() {
	Matriz A, B, I, M;
	int nlinA, ncolA, nlinB, ncolB;
	printf("Entre com o numero de linhas e o numero de colunas da matriz A: ");
	scanf("%d", &nlinA);
	scanf("%d", &ncolA);
    A = criarMatriz(nlinA, ncolA);
    preencherMatriz(A);
	printf("Entre com a matriz de coeficientes B: ");
	scanf("%d", &nlinB);
	scanf("%d", &ncolB);
	B = criarMatriz(nlinB, ncolB);
    preencherMatriz(B);
    I = criarMatriz(nlinA, ncolA);
    I = inversa(A);
    M = criarMatriz(nlinB, ncolB);
    M = multiplicaMat(I, B);
    imprimirMatriz(M);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(I);
    destruirMatriz(M);
	return EXIT_SUCCESS;
}


