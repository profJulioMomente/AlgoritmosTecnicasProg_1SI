#include<stdio.h>
#include<stdlib.h>

main () {
	int valor, aux, cont=0;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &valor);
	
	aux = valor;
	
	do{
		aux = aux/10;	
		cont++;
	} while(aux != 0);
	
	printf("O valor %d possui %d digitos\n\n", valor, cont);
	system("pause");
	
	
}
