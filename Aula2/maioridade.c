#include<stdio.h>
#include<stdlib.h>

main () {
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade>=18){
		printf("Voce atingiu a maioridade\n");
	}
	else {
		printf("Voce nao atingiu a maioridade\n");
	}
	
	system("pause");
}
