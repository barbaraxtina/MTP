#include<stdio.h>
int soma(int *A, int N){
    int i, S = 0;
    for (i = 0; i < N; i++)
        S = S + A[i];
    printf("%d", S);
    return 0;
}
int main (){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int N = sizeof(A)/sizeof(int);
    soma (A, N);
    return 0;
}
