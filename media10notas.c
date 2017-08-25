#include<stdio.h>
#include<stdlib.h>

main() {
	float nota, soma=0, media;
	int i;
	
	for(i=0; i<10; i++){
		printf("Informe a nota %d: ",i);
		scanf("%f", &nota);
		
		soma = soma + nota;
	}
	media = soma/10;
	printf("Media = %f\n", media);
	system("pause");
}
