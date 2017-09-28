#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	int a, i = 0,j =0, c;
	printf("\nDigite uma frase: \n");
	char frase[250]; //frase1[256];
	fgets(frase, 250, stdin);
	for(i ; i < strlen(frase); i++)
		printf("%c",tolower(frase[i]));
	printf("\n");
	for(j ; frase[j] != '\0' ; j++)
	{
	
		if(isalpha(frase[j]))
			c = c + 1;
	}	
	printf("%d \n", c);	
	if (strncmp( frase,"bom dia",7) ==0)
	 	printf("\nBom dia tambem\n");
	if (strncmp( frase,"tchau",5) ==0)
		printf("\nSaindo? Que pena...");
	else 
	{
		strcat(frase,"?"); //add ? na frase 
		printf("Voce quiz dizer: %s", frase);
	}
	return 0;

}
