#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
	char Nome[50];
	int i;
	
	printf("Digite seu Nome: ");
	scanf("%[^\n]s", Nome);	//leitura de palavras com espaços
	
	for(i=strlen(Nome)-1; i>=0; i--){
		printf("%c",Nome[i]);
	}
	
	printf("\n\n");
	system("pause");
	
}

