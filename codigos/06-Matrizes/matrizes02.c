#include<stdio.h>
#include<stdlib.h>

main() {
	int M1[2][5], M2[2][5], R[2][5]; //declarando uma matriz de 3 linhas e 3 colunas
	int i, j;
	
	printf("Leitura da matriz 1\n");
	for(i=0; i<2; i++){ //laço para percorrer as linhas
		for(j=0; j<5; j++){ //laço para percorrer as colunas
			printf("M1[%d][%d]: ",i,j);
			scanf("%d", &M1[i][j]);
		}
	}
	
	printf("Leitura da matriz 2\n");
	for(i=0; i<2; i++){ //laço para percorrer as linhas
		for(j=0; j<5; j++){ //laço para percorrer as colunas
			printf("M2[%d][%d]: ",i,j);
			scanf("%d", &M2[i][j]);
		}
	}
	
	for(i=0; i<2; i++){ //laço para percorrer as linhas
		for(j=0; j<5; j++){ //laço para percorrer as colunas
			R[i][j] = M1[i][j] + M2[i][j];
		}
	}
	
	printf("\nResultado\n");
	for(i=0; i<2; i++){ //laço para percorrer as linhas
		for(j=0; j<5; j++){ //laço para percorrer as colunas
			printf("%d ",R[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}
