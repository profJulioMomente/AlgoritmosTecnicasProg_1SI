#include<stdio.h>
#include<stdlib.h>

main() {
	char Nome[50];
	char Mensagem[10] = "Bom dia"; //V�lido apenas na declara��o
	
	//Mensagem = "Ola "; //Erro - Opera��o n�o permitida;
	
	printf("Digite seu Nome: ");
	//scanf("%s", Nome);	
	scanf("%[^\n]s", Nome);	//leitura de palavras com espa�os
	
	printf("Ola %s\n", Nome);
	//printf("%s %s\n",Mensagem, Nome);
	
	
	system("pause");
	
}

