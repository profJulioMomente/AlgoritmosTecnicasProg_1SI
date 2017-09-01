#include<stdio.h>
#include<stdlib.h>

main(){
	int cont=0, valor, maior;	
	
	while(cont<10){
		printf("Informe um valor: ");
		scanf("%d", &valor);
		
		if(cont == 0){
			maior = valor;
		}
		else {
			if(valor> maior){
				maior = valor;
			}
		}
		cont++;
	}
	
	printf("O maior valor e %d\n\n", maior);
	
	system("pause");
	
}
