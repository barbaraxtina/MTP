#include <stdio.h>
#include <ctype.h>

int main ()
{
	int a, i = 0, c = 0;
	printf("\nDigite uma frase: \n");
	char frase[250];
	fgets(frase, 250, stdin);
	for(i ; frase[i] != '\0' ; i++)
		if(isalpha(frase[i]))
			c = c + 1;
	printf("%d\n", c);	
	return 0;
}

