#include<stdio.h>
#include<stdlib.h>

void multiplicaMatriz(int M1[][3], int l1, int M2[][3], int l2, int R[][3], int lR);
void leMatriz(int M[][3], int l);
void imprimeMatriz(int M[][3], int l);
void inicializaMatriz(int M[][3], int l);


main(){
	int Matriz1[3][3], Matriz2[3][3], MatrizR[3][3];
	
	leMatriz(Matriz1, 3);

	leMatriz(Matriz2, 3);
	
	inicializaMatriz(MatrizR, 3);
	
	multiplicaMatriz(Matriz1, 3, Matriz2, 3, MatrizR, 3);
	
	imprimeMatriz(MatrizR, 3);

	system("pause");	
}

void leMatriz(int M[][3], int l){
	int i, j;
	
	for(i=0; i<l; i++){
		for(j=0; j<3; j++){
			printf("M[%d][%d] : ", i, j);
			scanf("%d", &M[i][j]);	
		}
	}
}


void imprimeMatriz(int M[][3], int l){
	int i, j;
	for(i=0; i<l; i++){
		for(j=0; j<3; j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
}


void multiplicaMatriz(int M1[][3], int l1, int M2[][3], int l2, int R[][3], int lR){
	int i, j, k;	
	
	for(i=0; i<l1; i++){
		for(j=0; j<3; j++){
			for(k=0; k<l2; k++){
			 R[i][j] = R[i][j] + M1[i][k]*M2[k][j];
			}
		}
	}
	
}

void inicializaMatriz(int M[][3], int l){
	int i, j;
	for(i=0; i<l; i++){
		for(j=0; j<3; j++){
			M[i][j] = 0;
		}
	}	
		
}



