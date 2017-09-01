#include<stdio.h>
#include<stdlib.h>

main(){
	int cont=0, valor, maior=-999999;	
	
	while(cont<10){
		printf("Informe um valor: ");
		scanf("%d", &valor);
		if(valor> maior){
			maior = valor;
		}
		cont++;
	}
	
	printf("O maior valor e %d\n\n", maior);
	
	system("pause");
	
}
