#include<stdio.h>
#include<stdlib.h>

main() {
	int V[10], i, pos=-1, busca;

	//leitura dos valores	
	for(i=0; i<10; i++){
		printf("V[%d]: ", i);
		scanf("%d", &V[i]);
	}
	
	printf("Informe o valor a ser pesquisado: ");
	scanf("%d", &busca);
	
	for (i=0; i<10; i++){
		if(busca == V[i]) {
			//pos = i;
			printf("Valor encontrado na posicao %d\n",i);
		}
	}
	
	if(pos!= -1){
		printf("Valor encontrado na posicao %d\n", pos);
	} else {
		printf("Valor nao encontrado\n");
	}
	system("pause");
}
