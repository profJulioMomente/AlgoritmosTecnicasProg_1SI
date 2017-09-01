#include<stdio.h>
#include<stdlib.h>

main() {
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	idade>=18?printf("Atingiu a maioridade\n"):printf("Nao atingiu a maioridade\n");
	
	system("pause");
	
}
