#include<stdio.h>
#include<stdlib.h>

main() {
	int valor, i;
	int par =0, impar =0;
	
	for(i=0; i<10; i++){
		printf("Informe um valor: ");
		scanf("%d", &valor);
		
		if(valor%2 == 0){
			par++;
		}
		else {
			impar++;
		}
	}
	printf("%d pares, %d impares\n\n", par, impar);
	
	system("pause");	
}
