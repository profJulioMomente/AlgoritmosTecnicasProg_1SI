#include<stdio.h>
#include<stdlib.h>

main() {
	int opcao;	
	float v1, v2, res;
	
	do {
		system("cls");
		
		printf("[1] - Soma\n");
		printf("[2] - Subtracao\n");
		printf("[3] - Multiplicacao\n");
		printf("[4] - Divisao\n");
		printf("[0] - Encerrar\n");
		printf("Informe a opcao desejada: ");
		scanf("%d", &opcao);
		
		if (opcao>=1 && opcao <=4) {
			printf("Informe o primeiro valor: ");
			scanf("%f", &v1);
			printf("Informe o segundo valor: ");
			scanf("%f", &v2);
		}
		
		switch(opcao){
			case 1:
				res = v1 + v2;
				break;
			case 2:
				res = v1 - v2;
				break;
			case 3:
				res = v1 * v2;
				break;
			case 4:
				if(v2!=0) {
					res = v1/v2;
				}
				else
					printf("Impossivel dividir por zero\n");
				break;
			case 0:
				printf("--Encerrando--\n");
				break;
			default:
				printf("Opcao invalida!!\n");
				break;
		}
		
		if(opcao>=1 && opcao <=4) {
			printf("Resultado = %f\n\n",res);
		}
		
		system("pause");
	} while(opcao != 0);
	
//	return 199;
	
}
