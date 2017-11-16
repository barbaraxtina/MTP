#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char str[150];
    printf("Digite um texto para ser transformado em maiusculo, e para sair digite 1: \n\n");
	fgets(str,150,stdin);
	for(i=0; str[i] != '\0'; i++)
	{
			if (str[i] == '*')
			{
				return 0;
				break;

			}
			else
			{
				str[i]=toupper(str[i]);
			}
	}
	printf("\n%s \n", str);
	getchar();
	return 0;
}
