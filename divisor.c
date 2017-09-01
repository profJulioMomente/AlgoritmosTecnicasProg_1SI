#include<stdio.h>
#include<stdlib.h>

main(){
	int valor1, valor2;
	int divisor, dividendo;
	int cont=0;
	
	printf("Inforne o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &valor2);	
	
	if(valor2!=0) {
		divisor = valor1;
		dividendo = valor2;
		
		while(divisor >= dividendo){
			divisor = divisor - dividendo;
			cont++;
		}
		
		printf("%d / %d = %d, resto %d\n\n", valor1, valor2, cont, divisor);
		
		
		system("pause");
		
	}
	
	
}
