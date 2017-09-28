#include <stdio.h>
#include <string.h>

int main ()
{
	int i = 0, V =0, C=0, D=0, E=0;
	printf("\nDigite uma frase: \n");
	char frase[250];
	fgets(frase, 250, stdin);
	for(i ; i < strlen(frase); i++)
		frase[i] = tolower(frase[i]);
	for(i=0; frase[i]!= '\0'; i++)
	{
	
		if( frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' )
		{
		   	V++;
		}
		if (frase[i] == ' ')
		{
		  	E++;
		}
		if( frase[i] == 'b' || frase[i] == 'c' || frase[i] == 'd' || frase[i] == 'f' || frase[i] == 'g' || frase[i] == 'h' || frase[i] == 'j' || frase[i] == 'k' || frase[i] == 'l' || frase[i] == 'm' || frase[i] == 'n' || frase[i] == 'p' || frase[i] == 'q' || frase[i] == 'r' || frase[i] == 's' || frase[i] == 't' || frase[i] == 'v' || frase[i] == 'w' || frase[i] == 'x' || frase[i] == 'y' || frase[i] == 'z') 
		{
			C++;
		}	
		if( frase[i] == '1' || frase[i] == '2' || frase[i] == '3' || frase[i] == '4' || frase[i] == '5' || frase[i] == '6' || frase[i] == '7' || frase[i] == '8' || frase[i] == '9' || frase[i] == '0') 
		{
			D++;
		}
	}
	printf("V:%d""\n""C:%d""\n""D:%d""\n""E:%d", V,C,D,E);
	return 0;
}
		
	
	
	
