#include<stdio.h>
#include<stdlib.h>

main() {
	int v1, v2, min, res, i;
	
	printf("Informe o primeiro valor inteiro: ");
	scanf("%d", &v1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%d", &v2);
	
	if(v1<v2){
		min = v1;
	} else {
		min = v2;
	}
	
	for (i=1; i<min; i++){
		if(v1%i == 0 && v2%i==0){
			res = i;
		}
	}
	
	printf("Resultado = %d\n\n", res);
	system("pause");
}
