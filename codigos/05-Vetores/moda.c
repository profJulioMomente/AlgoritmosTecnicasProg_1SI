#include<stdio.h>
#include<stdlib.h>

void inicializaVetor(int V[], int tam);
void imprimeVetor(int V[], int tam);
void leVetor(int V[], int tam);
void contagem(int Dados[], int tamD, int Qtdd[], int tamQ);
int maximo(int Qtdd[], int tam);

main() {
	int D[20], Q[6];
	
	leVetor(D, 20);
	
	contagem(D, 20, Q, 6);
	printf("\n\n");
	imprimeVetor(Q,6);
	
	printf("A moda do vetor e %d\n", maximo(Q, 6));
	
	system("pause");
	
}

void leVetor(int V[], int tam){
	int i;
	
	for(i=0; i<tam; i++){
		printf("V[%d]: ", i);
		scanf("%d", &V[i]);
	}
	
}

int maximo(int Qtdd[], int tam) {
	int i, max = Qtdd[0], pos = 0;
	
	for	(i=1;i<tam;i++){
		if(Qtdd[i] > max){
			max = Qtdd[i];
			pos = i;
		}
	}
	return pos;
}

void contagem(int Dados[], int tamD, int Qtdd[], int tamQ){
	int i;
	
	inicializaVetor(Qtdd, tamQ);
	
	for(i=0; i<tamD; i++){
		Qtdd[Dados[i]]++;
	}
	
}

void imprimeVetor(int V[], int tam){
	int i;
	
	for(i=0;i<tam;i++){
		printf("V[%d] = %i\n", i, V[i]);
	}	
}

void inicializaVetor(int V[], int tam){
	int i;
	
	for(i=0; i<tam; i++){
		V[i] = 0;
	}
	
}
