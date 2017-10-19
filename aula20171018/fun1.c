#include <stdio.h>
double numeros (double *num, double *den){
    printf ("Numerador: \n");
    printf ("Denominador: \n");
    scanf("%d %d",&num,&den);
}
double somatorio (double *n1, double *d1, double *n2, double *d2){
    (((*d2)*(*n1))+((*d1)*(*n2)))/((*d1)*(*d2); // a = n1, b = d1, c = n2, d = d2
}
void main (){
    double n1, d1, n2, d2;
    printf ("%f %f\n", numeros(n1, d1));
    printf ("%f %f\n", numeros(d1, d2));
    printf ("%f %f\n", somatorio(*n1, *d1, *n2, *d2));
}
