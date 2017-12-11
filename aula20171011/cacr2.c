#include <stdio.h>
#include <math.h>
float delta(float a, float b, float c){
    float delta;
    delta = b*b - 4*a*c;
    return delta;
}
void raizes (float a, float b, float c, float delt) {
    float raiz1, raiz2;
    if (delt > 0){
        raiz1 = (-b+sqrt(delt))/(2*a);
        raiz2 = (-b-sqrt(delt))/(2*a);
        printf(" a raiz 1: %f \na raiz 2: %f", raiz1, raiz2);
    }
    if (delt == 0){
        raiz1 = -b/(2*a);
        printf(" a raiz 1 = raiz 2: %f", raiz1);
    }
    if (delt < 0)
        printf("NAN, NAN");
}
int main(){
    float a, b, c, delt;
    printf("digite os coeficientes da equacao: ");
    scanf("%f %f %f", &a, &b, &c);
    delt = delta(a, b, c);
    raizes (a, b, c, delt);
    return 0;
}
