#include <stdio.h>
#include <time.h>
#include <string.h>
void desenho (int col, int lin){
    char matriz [lin][col];
    int i, j, n, p;
    char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
    n = strlen(caracteres);
    for (i = 0; i < lin; i ++)
        for (j = 0; j < col; j ++){
            p = rand()%(n+1);
            matriz [i][j] = caracteres [p];
            printf("%c", matriz[i][j]);
    }
}
int main(){
    srand (time(0));
    int col, lin;
    printf("digite o numero de linhas e colunas: ");
    scanf ("%i %i", &lin, &col);
    desenho (col, lin);
    return 0;
}
