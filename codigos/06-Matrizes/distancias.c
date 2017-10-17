#include<stdio.h>
#include<stdlib.h>

main() {
	float Dist[5][5];
	int i, j;
	
	printf("Leitura das distancias\n");
	for(i=0; i<5; i++){ //laço para percorrer as linhas
		for(j=i; j<5; j++){ //laço para percorrer as colunas
			if(i == j) {
				Dist[i][j] = 0;	
			} else {
				printf("Distancia entre %d e %d: ",i,j);
				scanf("%f", &Dist[i][j]);
				Dist[j][i] = Dist[i][j];
			}
		}
	}
	
	
	printf("\nResultado\n");
	for(i=0; i<5; i++){ //laço para percorrer as linhas
		for(j=0; j<5; j++){ //laço para percorrer as colunas
			printf("%02.2f\t ",Dist[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
}
