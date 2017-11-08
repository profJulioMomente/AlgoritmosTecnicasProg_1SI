#include<stdio.h>
#include<stdlib.h>

void leDistancias(float V[], int tam);
int encontraMaior(float V[], int tam);
int encontraMenor(float V[], int tam);


main(){
	float Distancias[5];
	int i, posMaior, posMenor;
	float soma = 0;

	leDistancias(Distancias, 5);
	
	posMaior = encontraMaior(Distancias, 5);
	posMenor = encontraMenor(Distancias, 5);
	
	if(posMaior == posMenor){
		posMenor++;
	}
	
	for(i=0; i<5; i++){
		printf("%f ", Distancias[i]);
		if(i == posMaior || i == posMenor){
			printf("D - ");
		} else {
			soma = soma + Distancias[i];
			printf("A - ");
		}
	}
	printf("\nA distancia total e = %f\n", soma);
	
	system("pause");
	
}

void leDistancias(float V[], int tam){
	int i;
	
	for(i=0; i<tam; i++){
		printf("Distancia %d: ", i+1);
		scanf("%f", &V[i]);
	}
	
}

int encontraMaior(float V[], int tam){
	int i, posicaoMaior;
	float maior;
	
	maior = V[0];
	posicaoMaior = 0;
		
	for(i=1; i<tam; i++){
		if(V[i] > maior){
			maior = V[i];
			posicaoMaior = i;
		}
	}
		
	return posicaoMaior;
}

int encontraMenor(float V[], int tam){
	int i, posicaoMenor;
	float menor;
	
	menor = V[0];
	posicaoMenor = 0;
		
	for(i=1; i<tam; i++){
		if(V[i] < menor){
			menor = V[i];
			posicaoMenor = i;
		}
	}
		
	return posicaoMenor;
}	
	


