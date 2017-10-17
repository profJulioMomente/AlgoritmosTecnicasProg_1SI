#include<stdio.h>
#include<stdlib.h>

main() {
	int i, qtdAcima=0, qtdAbaixo=0;
	float soma=0, media;
	float Notas[10]; //declaração de um vetor de floats de 50 posições
	
	for(i=0; i <10; i++){
		printf("Informa a nota do aluno %d: ", i);
		scanf("%f", &Notas[i]);
		soma = soma + Notas[i];
	}
	media = soma/10;
	
	for(i=0; i<10; i++){
		if(Notas[i]	>= media){
			qtdAcima++;
		} else {
			qtdAbaixo++;
		}
	}
	
	printf("A media da turma e %f\n", media);
	printf("%d alunos estao acima da media\n", qtdAcima);
	printf("%d alunos estao abaixo da media\n\n", qtdAbaixo);
	
	for(i=0; i<10; i++){
		printf("Nota[%d] = %f\n", i, Notas[i]);
	}
	
	system("pause");
}
