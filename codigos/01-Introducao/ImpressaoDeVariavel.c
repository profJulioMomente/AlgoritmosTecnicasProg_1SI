//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

/*
Comentario de varias linhas
*/

//Funcao Principal
main() {
	int valor_inteiro;
	float valor_real;
	double notacao_cientifica;
	char letra;
	
	valor_inteiro = 15;
	valor_real = 2.375;
	notacao_cientifica = 1.61e-12;
	letra = 's';
	
	
	/*
	 \n - pula linha
	 Especificadores de formato:
	 	%d - Inteiros
	 	%f - Real com ponto flutuante
	 	%e - Real em notacao cientifica
	 	%c - Um unico caractere
	 	%s - Palavra ou texto
	*/
	printf("Letra: %c \nInteiro: %d \nReal: %f\n", letra, valor_inteiro, valor_real);
	printf("Notacao cientifica: %e \nPalavra: %s\n\n", notacao_cientifica, "Unilago");
	
	
	system("pause"); //Comando para pausar o terminal
	
}
