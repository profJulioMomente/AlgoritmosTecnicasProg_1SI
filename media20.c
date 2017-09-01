#include<stdio.h>
#include<stdlib.h>

main(){
	float soma=0,media, nota;
	int cont=0;
	
	while(cont<20){
		printf("Informe a nota: ");
		scanf("%f", &nota);
		
		soma = soma+nota;
		cont++;
	}
	
	media = soma/20;
	printf("Media = %f\n", media);
	
	system("pause");
	
}
