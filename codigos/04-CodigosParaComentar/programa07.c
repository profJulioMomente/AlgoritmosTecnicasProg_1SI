#include<stdio.h>
#include<stdlib.h>

main() {
	int valor, i;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &valor);
	
	i=2;
	while(i<=valor){
		if(valor%i == 0){
			printf("%d\n", i);
			valor = valor/i;
		}
		else {
			i++;	
		}
	}
	system("pause");
}
