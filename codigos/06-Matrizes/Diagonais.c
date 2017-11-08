#include<stdio.h>
#include<stdlib.h>

void leMatriz(int M[][4], int linhas);
void imprimeMatriz(int M[][4], int linhas);
int maiorDiagonalPrincipal(int M[][4], int linhas);
int somaDiagonalSecundaria(int M[][4], int linhas);

main(){
	int Matriz[4][4];
	
	leMatriz(Matriz, 4);
	
	printf("O maior elemento da diagonal principal e %d\n", maiorDiagonalPrincipal(Matriz, 4));
	
	printf("A soma da diagonal secundaria e %d\n", somaDiagonalSecundaria(Matriz, 4));
	
	imprimeMatriz(Matriz, 4);
	
}

void leMatriz(int M[][4], int linhas){
	int i, j;
	
	for(i=0; i<linhas; i++){
		for(j=0; j<4; j++){
			printf("M[%d][%d] : ", i+1, j+1);
			scanf("%d", &M[i][j]);
		}
	}
	
}

void imprimeMatriz(int M[][4], int linhas){
	int i, j;
	
	for(i=0; i<linhas; i++){
		for(j=0; j<4; j++){
			printf("%d \t", M[i][j]);
		}
		printf("\n");
	}
}


int maiorDiagonalPrincipal(int M[][4], int linhas){
	int i, maior;
	
	maior = M[0][0];	
	for(i=1; i<linhas; i++){
		if(M[i][i] > maior){
			maior = M[i][i];
		}
	}
	return maior;
}


int somaDiagonalSecundaria(int M[][4], int linhas){
	int i,j, soma=0;
	
	for(i=0; i<linhas; i++){
		soma = soma + M[i][3-i];
	}
	return soma;
}

