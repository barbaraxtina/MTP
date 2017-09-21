#include <stdio.h>
 
 int main ()
 
 {
 	int i, cont = 0;
 	char palavra[256];
 	printf("Digite uma palavra: \n");
 	scanf("%s", palavra);
 	for(i=0; palavra[i] != '\0'; i++)
 	{
 		cont = cont + 1;
 	}
 	printf("%d", cont);
	return 0;
}
