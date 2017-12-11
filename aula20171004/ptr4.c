#include <stdio.h>

int main (){
	float n1, n2, soma = 0;
	unsigned char* p;
	printf ("Digite um numero real qualquer: \n");
	scanf ("%f", &n1);
	printf ("Digite outro numero real qualquer: \n");
	scanf ("%f", &n2);
	p = &n1;
	printf ("o endereco do primeiro numero e': 0x%p, %f \n", p, n1);
	p = &n2;
	printf ("o endereco do segundo numero e': 0x%p, %f \n", p, n2);
	soma = n1 + n2;
	p = &soma;
	printf ("O resultado da soma dos numeros e': 0x%p, %f \n", p, soma);
	return 0;
}
