#include<stdio.h>
#include<stdlib.h>

main() {
	char Nome[50];
	char Mensagem[10] = "Bom dia"; //Válido apenas na declaração
	
	//Mensagem = "Ola "; //Erro - Operação não permitida;
	
	printf("Digite seu Nome: ");
	//scanf("%s", Nome);	
	scanf("%[^\n]s", Nome);	//leitura de palavras com espaços
	
	printf("Ola %s\n", Nome);
	//printf("%s %s\n",Mensagem, Nome);
	
	
	system("pause");
	
}

