#include <stdio.h>

void par (){
    int i;
    for (i = 1; i < 21; i ++){
        if (i%2 == 0)
            printf (" %i  ", i);
    }
}
void impar (){
    int i;
    for (i = 1; i < 21; i ++){
        if (i%2 != 0)
            printf (" %i  ", i);
    }
}
int main() {
    int opcao;
    printf ("opcao 1: par \nopcao 2: impar \n");
    scanf ("%i", &opcao);
    switch(opcao) {
        case 1:
            printf ("pares");
            par();
            break;
        case 2:
            printf ("impares");
            impar();
            break;
        }
}
