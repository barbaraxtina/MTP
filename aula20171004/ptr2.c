#include <stdio.h>

int main ()
{
	int vetor[] = {0,1,2,4,8,16,1025};
	unsigned char* p;
	int i = 0, m = 0, n = 0, r = 0;
	p = (unsigned char*)vetor;
	printf ("%p \n", p);
	for (i = 0; i < sizeof(vetor); i++) 
	{
		printf ("End: %p ; Conteudo: %i \n", (p+i), *(p + i));
		
			if (*(p+i) == 0)
				m++;
	}
	printf("A qtd de enderecos com bytes '0' e': %i\n", m);
	printf ("A qtd de bytes investigada foi: %i \n", sizeof(vetor));
	return 0;
}
