#include<stdio.h>
int preencher (int num, int den){
    printf ("Numerador: \n");
    printf ("Denominador: \n");
    scanf("%d/%d",num,den);
    return 0;
}
int resto_quociente (int a, int b, int *r, int *q){
    *r = a%b;
    *q = a/b;
    printf("%d %d", &r, &q);
    return 0;
}
int main (){
    int a, b, r, q;
    preencher(a, b);
    resto_quociente(a, b, &r, &q);
    return 0;
}
