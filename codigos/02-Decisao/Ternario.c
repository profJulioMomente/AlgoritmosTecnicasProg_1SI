#include<stdio.h>
#include<stdlib.h>

main () {
	int valor;
	
	printf("Informe um valor: ");
	scanf("%d", &valor);
	
	valor%2==0?printf("par\n"):printf("impar\n");
	
	system("pause");
	
	
}
