#include<stdio.h>
#include<stdlib.h>

void leVetor(float V[], int tam);
void imprimeVetor(float V[], int tam);
int somaVetor(float V1[], int tam1, float V2[], int tam2, float R[], int tamR);

main(){
	float Vetor[5], Vetor2[6], Resultado[5];
	int Erro;
	
	leVetor(Vetor, 5);
	leVetor(Vetor2, 6);
	
	Erro = somaVetor(Vetor, 5, Vetor2, 6, Resultado, 5);
	
	if(Erro)
		printf("Vetores de tamanho incompativel\n");
	else
		imprimeVetor(Resultado, 10);
	
	system("pause");
}

void leVetor(float V[], int tam){
	int i;
	
	for(i=0; i<tam; i++){
		printf("%d -- Informe um valor real: ", i);
		scanf("%f", &V[i]);
	}
	
}


void imprimeVetor(float V[], int tam){
	int i;
	
	for(i=0;i<tam;i++){
		printf("V[%d] = %f\n", i, V[i]);
	}	
}

int somaVetor(float V1[], int tam1, float V2[], int tam2, float R[], int tamR){
	int i;
	
	if(tam1 == tam2 && tam2 == tamR){
		for(i=0; i<tam1; i++){
			R[i] = V1[i] + V2[i];
		}
		return 0;
	} else {
		return 1;
	}
}
