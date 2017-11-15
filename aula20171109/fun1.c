#include <stdio.h>
int numeros (int *num, int *den){
    printf ("Numerador: \n");
    printf ("Denominador: \n");
    scanf("%d/%d",num,den);
    return 0;
}
int somatorio (int n1, int d1, int n2, int d2, int *n, int *d){
    *n = (((d2)*(n1))+((d1)*(n2)));
    *d = ((d1)*(d2)); // a = n1, b = d1, c = n2, d = d2
    return 0;
}
int main (){
    int n1, d1, n2, d2, n, d;
    numeros(&n1, &d1);
    numeros(&n2, &d2);
    somatorio(n1, d1, n2, d2, &n, &d);
    printf("%d/%d", n,d );
    return 0;
}
