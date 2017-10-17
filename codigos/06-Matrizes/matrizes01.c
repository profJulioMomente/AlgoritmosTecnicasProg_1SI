#include<stdio.h>
#include<stdlib.h>

main() {
	int M1 [3][4]; //declarando uma matriz de 3 linhas e 3 colunas
	int i, j;
	
	for(i=0; i<3; i++){ //laço para percorrer as linhas
		for(j=0; j<4; j++){ //laço para percorrer as colunas
			printf("M[%d][%d]: ",i,j);
			scanf("%d", &M1[i][j]);
		}
	}
	
	for(i=0; i<5; i++){ //laço para percorrer as linhas
		for(j=0; j<4; j++){ //laço para percorrer as colunas
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}
