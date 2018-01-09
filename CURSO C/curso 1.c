#include <stdio.h>

int soma (int x, int y){
    return (x+y);
}
int main (){
    int a, b, s;
    printf ("\nDigite o valor de 'a': ");
    scanf ("%i", &a);
    printf ("\nDigite o valor de 'b': ");
    scanf ("%i", &b);
    s = soma(a, b);
    printf("\n\nO resultado e: %d\n\n", s);
    return (0);
    }
