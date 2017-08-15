#include<stdio.h>
#include<stdlib.h>

main() {
	float l1, l2, l3;
	
	printf("Informe os lados do triangulo: ");
	scanf("%f %f %f", &l1, &l2, &l3);
	
	if(l1<l2+l3 && l2<l1+l3 && l3<l1+l2 ){
		printf("Os lados formam um triangulo\n");
	}
	else {
		printf("Os lados nao formam um triangulo\n");
	}
	
	system("pause");
}
