#include <stdio.h>
#include <string.h>
//Criar estrutura do tipo cliente
typedef struct tipoCliente
	{
	char nome[100];
	int idade;
	int CPF[12];
	int RG[11];
	char usuario[10];
	char senha[8];
	float saldo;
	float retirar;
	int retirado;
	float inserir;
	int inserido;
	}cliente;

//Função para criar conta
int criar_conta ()
{
        //Cria variável c do tipo FILE
        FILE * c;
        //Cria variável do tipo cliente
        cliente user;
        user.idade = 0;
    while (user.idade < 18){
        user.saldo = 0;
        user.retirar = 0;
        user.retirado = 0;
        user.inserir = 0;
        user.inserido = 0;
        printf("\nDigite aas informacoes pedidas");
        printf("\nInsira sua idade: \n");
        scanf("%d",&user.idade);
        if (user.idade < 18){
            printf("\nEh necessario ter mais de 18 anos para abrir uma conta.\n");
        }
    }
	printf("\nInsira seu nome: \n");
	scanf("%s", user.nome);
	printf("\nInsira seu RG: \n");
	scanf("%s",user.RG);
	printf("\nInsira seu CPF: \n");
	scanf("%s",user.CPF);
	printf("\nInsira o usuario desejado(maximo 10 caracteres): \n");
	scanf("%s",user.usuario);
	printf("\nInsira a senha desejada(maximo 8 caracteres): \n");
	scanf("%s",user.senha);
	c = fopen(user.usuario ,"wb");
	fwrite(&user, sizeof(cliente), 1, c);
	fclose(c);
	return 0;
}

//Função para mostrar a conta
int mostrar()
{
	char usuario[10], senha[8];
	FILE * p;
	cliente k;
	printf("\nDigite seu usuario: \n");
	scanf("%s", usuario);
	p = fopen(usuario,"rb");
	if(p == NULL)
	{
		printf("\nA conta informada nao foi encontrada\n");
		return 0;
	}
	fread(&k,sizeof(cliente),1,p);
	fclose(p);
	printf("\nInsira sua senha: \n");
	scanf("%s", senha);
	if(strcmp(senha,k.senha) == 0)
		printf("\n Nome : %s \n Idade: %d \n RG: %s \n CPF: %s \n", k.nome,k.idade,k.RG,k.CPF);
	return 0;
}
int saldo()
{
	FILE * arq;
	cliente cl;
	char usuario[10];
	char senha[8];
	int i = 0;
	printf("\nInsira seu usuario: \n");
	scanf("%s", usuario);
	if(fopen(usuario,"rb") != 0)
	{
		arq = fopen(usuario,"rb");
		fread(&cl,sizeof(cliente),1,arq);
		fclose(arq);
 		printf("\nInsira sua senha: \n");
		scanf("%s",senha);
		if(strcmp(senha,cl.senha) == 0)
			{
				printf("\n  %s : o saldo e : %.2f reais \n", cl.usuario, cl.saldo);
				return 0;
			}
	}
	else
		printf("\nA conta informada nao foi encontrada\n");
	return 0;
}
int inserir()
{
	FILE * p;
	cliente user;
	float v;
	char usuario[10],senha[8];
	printf("\nInsira o usuario: \n");
	scanf("%s", usuario);
	if(fopen(usuario,"rb") != 0);
	{
		p = fopen(usuario,"rb");
		fread(&user,sizeof(cliente), 1, p);
		fclose(p);
		printf("\nInsira a senha: \n");
		scanf("%s",senha);
		if(strcmp(senha,user.senha) == 0)
			{
				printf("\nDigite a quantia a ser depositada: \n");
				scanf("%f", &v);
				user.saldo = user.saldo + v;
				user.inserir = user.inserir + v;
				user.inserido++;
				p = fopen(usuario,"wb");
				fwrite(&user,sizeof(cliente),1,p);
				fclose(p);
				return 0;
			}

		else
            printf("\nA conta informada nao foi encontrada\n");
	}
	return 0;
}
int retirar()
{
	FILE * o;
	cliente old;
	float valor;
	char u[10], senha[8];
	int i = 0;
	printf("\nInsira seu usuario: \n");
	scanf("%s", u);
	if(fopen(u,"rb") != 0)
	{
		o = fopen(u,"rb");
		fread(&old,sizeof(cliente),1,o);
		fclose(o);
		printf("\nInsira sua senha: \n");
		scanf("%s",senha);
		if(strcmp(senha,old.senha) == 0)
			{
				printf("\nDigite o valor a ser retirado: \n");
				scanf("%f", &valor);
				if(old.saldo < valor)
				{
					printf("\nEssa transacao nao pode ser efetuada");
					return 0;
				}
				else
				{
				    old.saldo = old.saldo - valor;
                    old.retirar = old.retirar + valor;
                    old.retirado++;
					o = fopen(u,"wb");
					fwrite(&old,sizeof(cliente), 1, o);
					fclose(o);
					return 0;
				}
			}

	}
	else
		printf("\nA sua conta nao foi encontrada");
	return 0;
}
int extrato()
{
	FILE * A;
	char u[10],senha[8];
	int i = 0;
	cliente user;
	printf("\nInsira seu usuario\n");
	scanf("%s",u);
	if(fopen(u,"rb") != 0)
	{
		A = fopen(u,"rb");
		fread(&user,sizeof(cliente),1,A);
		fclose(A);
		printf("\nInsira sua senha: \n");
		scanf("%s", senha);
		if(strcmp(senha,user.senha) == 0)
			{
				printf("\nRETIROU: $%.2f em %d vezes \n", user.retirar, user.retirado);
				printf("\nINSERIU: $%.2f em %d vezes \n", user.inserir, user.inserido);
				return 0;
			}
	}
	else
	{
		printf("\nA sua conta nao foi encontrada!");
	}
	return 0;
}
int remover()
{
	FILE * op;
	int i = 3;
	cliente L;
	char usuario[10], senha[8];
	printf("\nInsira seu usuario\n");
	scanf("%s", usuario);
	if(fopen(usuario,"r") != NULL)
	{
		op = fopen(usuario,"r");
		fread(&L,sizeof(cliente),1,op);
		fclose(op);
		printf("\nInsira sua senha para a conta ser deletada: \n", i);
		scanf("%s", senha);
		if(strcmp(senha,L.senha) == 0)
		{
				i = 0;
				remove(usuario);
				printf("\nA sua conta foi removida\n");
				return 0;
		}

	}
	else
		printf("\nAsua conta nao foi encontrada\n");
	return 0;
}

#include <stdio.h>

int main ()
{
	int b = 0, op;
	printf("\nEscolha a opcao desejada: \n");
	while(b != 1)
	{
		printf("\n 1 - Criar nova conta \n 2 - Mostrar conta existente \n 3 - Mostrar saldo \n 4 - Inserir dinheiro \n 5 - Retirar dinheiro \n 6 - Extrato \n 7 - Remover conta \n 8 - Sair \n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				b = criar_conta();
				if(b = 0)
					printf("\nConta criada com sucesso");
				if(b != 0)
					printf("\nNao foi possivel criar a conta");
				break;
			case 2:
				b = mostrar();
				break;
			case 3:
				b = saldo();
				break;
			case 4:
				b = inserir();
				break;
			case 5:
				b = retirar();
				break;
			case 6:
				b = extrato();
				break;
			case 7:
				b = remover();
				break;
			case 8:
				b = 1;
				break;
		}
	}
	return 0;
}


