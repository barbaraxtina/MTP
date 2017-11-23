#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

double main() {
	Matriz A, At, H, I;
	int nlin, ncol, l, c;
	printf("Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin);
	scanf("%d", &ncol);
	if (nlin==ncol){
        A = criarMatriz(nlin, ncol);
        preencherMatriz(A);
        imprimirMatriz(A);
        printf("Entre com a linha e a coluna que deseja tirar o menor: ");
        scanf("%d", &l);
        scanf("%d", &c);
        menor(A, l, c);
        cofator (A, l, c);
        comatriz(A);
        I = adjunta(A);
        imprimirMatriz(I);
        destruirMatriz(A);
        destruirMatriz(I);
	}
	else
        printf("A matriz nao e' quadrada!");
	return EXIT_SUCCESS;
}
