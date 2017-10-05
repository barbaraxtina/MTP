#include <stdio.h>

int main (){
	int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
	unsigned char* p;
	int i = 0, m = 0, n = 0;
	p = (unsigned char*)vetor;
	for (i = 0; i < sizeof(vetor); i++) 
	{
		printf ("Endereco: %p ; Conteudo [H]: %X \n", (p+i), *(p + i));
		
			if (*(p+i) == 0)
				m++;
				n = 24 - m;
	}
	printf("A qtd de enderecos com bit ='1' e': %i\n", n);
	printf ("A qtd de bits investigada foi: %i \n", sizeof(vetor));
	return 0;
}
