#include<stdio.h>
#include<stdlib.h>

main () {
	int valor, soma=0;
	
	do{
		printf("Informe um valor: ");
		scanf("%d", &valor);
		
		if(valor != -1) {
			soma = soma + valor;
		}
		
	} while(valor!=-1);
	
	printf("Soma = %d\n", soma);
	system("pause");
}
