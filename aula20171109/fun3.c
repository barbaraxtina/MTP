#include<stdio.h>
int comparar(int *A, int *B, int m, int n){
    int i,j;
    for (j = 0; j < n; j++){
        for (i = 0; i < m; i++){
            if (A[j] == B[i])
                printf(" %d ", A[j]);
        }
    }
    return 0;
}
int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    comparar(A, B, m, n);
    return 0;
}

