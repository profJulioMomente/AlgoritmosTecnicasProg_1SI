#include<stdio.h>
#include<stdlib.h>

main() {
	int opcao;	
	float v1, v2, res;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &v1);
	printf("Informe o segundo valor: ");
	scanf("%f", &v2);
	
	
	printf("[1] - Soma\n");
	printf("[2] - Subtracao\n");
	printf("[3] - Multiplicacao\n");
	printf("[4] - Divisao\n");
	printf("Informe a opcao desejada: ");
	scanf("%d", &opcao);
	
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
		default:
			printf("Opcao invalida!!\n");
			break;
	}
	
	printf("Resultado = %f\n\n",res);
	system("pause");
	
//	return 199;
	
}
