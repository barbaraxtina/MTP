#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

double main() {
	Matriz A, B, M;
	int nlinA, ncolA, nlinB, ncolB;
	printf("Entre com o numero de linhas e o numero de colunas da matriz A: ");
	scanf("%d", &nlinA);
	scanf("%d", &ncolA);
	printf("Entre com o numero de linhas e o numero de colunas da matriz B: ");
	scanf("%d", &nlinB);
	scanf("%d", &ncolB);
	if (ncolA==nlinB){
        A = criarMatriz(nlinA, ncolA);
        preencherMatriz(A);
        B = criarMatriz(nlinB, ncolB);
        preencherMatriz(B);
        M = criarMatriz(ncolA, nlinB);
        M = multiplicaMat(A, B);
        imprimirMatriz(M);
        destruirMatriz(A);
        destruirMatriz(B);
        destruirMatriz(M);
	}
	else
        printf("A multiplicacao nao pode ser executada!");
	return EXIT_SUCCESS;
}


