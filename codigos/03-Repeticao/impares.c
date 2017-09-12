#include<stdio.h>
#include<stdlib.h>

main() {
	int i, valor;
	
	printf("Informe um valor: ");
	scanf("%d", &valor);
	
	for(i=0; i<valor; i++){
		printf("%d\n", (i*2)+1);
	}
	system("pause");
}
