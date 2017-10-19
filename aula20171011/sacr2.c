#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
    int res;
    res = rand()%6 + 1;
	return res;

}

int main() {
    srand(time(0));
    char c;
    int i, j, soma = 0;
    printf("Simulador de dado vs. 2.0 - Digite ENTER para rodar o dado "
		"ou 'Q' para sair\n");
    for (j = 0; j < 3; j ++){
        soma = 0;
        for (i = 0; i < 5; i ++){
            scanf("%c", &c);
            printf("... %d\n", dado());
            soma = soma + dado();
        }
        printf ("o resultado da soma: %i \n", soma);
        if (soma > 18 && soma <23)
        {
            printf ("voce ganhou!");
            break;
        }
        else
            printf ("voce perdeu!");
    }
	printf ("o resultado: %i \n", soma);
	printf("Obrigado pela preferencia!\n");
    return EXIT_SUCCESS;
}

