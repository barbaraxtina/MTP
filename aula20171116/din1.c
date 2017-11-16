#include <stdio.h>
#include <math.h>

int media (int a, float * numeros){
    float med = 0;
    int i;
    for(i = 0; i < a; i++)
        med += numeros[i];
    med /= a;
    printf("A media e' igual a %f\n", med);
    return med;
}
int desvio (float med, int a, float * numeros){
    int i;
    float desvio = 0;
    for (i = 0; i < a; i++){
        desvio = desvio + pow((numeros[i] - med),2);
    }
    desvio  = sqrt(desvio/(a-1));
    printf("O desvio e' igual a %f\n", desvio);
    return 0;
}
int main (){
    int a, i;
    float med;
    printf("Digite a quantidade de numeros que deseja:");
    scanf("%d", &a);
    float numeros[a];
    for (i = 0; i < a; i ++)
        scanf("%f", &numeros[i]);
    med = media(a, numeros);
    desvio(med, a, numeros);
    return 0;
}
