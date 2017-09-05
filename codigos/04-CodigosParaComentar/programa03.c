#include<stdio.h>
#include<stdlib.h>

main(){
	float valor, st=0;
	char c;
	
	do{
		system("cls");
		printf("st = %.2f\n", st);
		printf("informe o valor: ");
		scanf("%f", &valor);
		st += valor;
		
		printf("Deseja continuar? [S/N]: "	);
		scanf(" %c", &c);
	} while (c != 'n' && c!= 'N'); //1 Estabelece o término da repetiçao (leitura de N ou n)
	
	printf("t = %.2f\n\n", st);
	system("pause");
}
