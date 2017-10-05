#include <stdio.h>

int main (){
	unsigned int v = 0xFACA8421; 
	unsigned char* p;
	int i = 0;
	p = &v;
	printf ("%p \n", p);
	for (i = 0; i < sizeof(v); i++) 
		printf ("End: %p ; Conteudo: %i \n", (p+i), *(p + i));
	return 0;
}
//*(p+i) = p[i]
