#include <stdio.h>

int main ()

{
	int vet1[10]; 
	int vet2[10];
	int i,j;
	for (i=0; i<10; i++)
	{
		printf("\nDigite um valor:");
		scanf("%d", &vet1[i]);
	}
 	for (i=0, j=9; i<10; i++, j--)
	{
		
		vet2[j] = vet1[i];
     	
    }
    for(j=0;j<10;j++)
    	printf("%d", vet2[j]);
    return 0;
}
