#include<stdio.h>
#include<stdlib.h>


main() {
	int soma =0, valor, cont=0;
	
	while(soma<100){
		printf("informe um valor: ");
		scanf("%d", &valor);
		cont++; //equivalente a cont = cont+1;
		soma = soma + valor;
	}
	
	printf("Foram necessarios %d valores\n\n", cont);
	
	system("pause");
}
