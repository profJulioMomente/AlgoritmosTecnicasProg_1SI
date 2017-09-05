#include<stdio.h>
#include<stdlib.h>


main () {
	int v1, v2;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &v1);
	
	v2 = v1%100; // 1- atribuir os dois ultimos digitos do numero a v2
	v1 = v1/100; // 2- Associar os demais digitos de v1(exceto os dois ultimos) a varivel v1
	
	printf("%d", v1);
	if(v2!=0){
		printf(",%2d",v2);	
	}
	printf("\n\n");
	system("pause");
	
}
