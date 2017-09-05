#include<stdio.h>
#include<stdlib.h>

main(){
	float valor;
	int aux1, aux2;
	
	printf("Informe um valor real: ");
	scanf("%f", &valor);
	aux1 = valor*100; //1 - Elimina duas casas decimais (transforma em inteiro) e descarta as demais casas decimais
	aux2 = aux1/100; //2 - Obtenção da parte inteira do valor original (desconsiderando-se as casas decimais)
	aux1 = aux1%100; //3 - Obtenção apenas das casas decimais (2 casas) do valor original
	
	if(aux1<25) { // 4 Verifica se o valor decimal deve ser arredondado para baixo
		aux1 = 0;
	} else if (aux1 >= 75) { //5 verifica se o valor decimal deve ser arredondado para cima
		aux1 = 0;
		aux2 = aux2+1;	
	} else { //6 - arredondar o valor para 0.5
		aux1 = 50;
	}
	
	//if(aux1>=25 && aux1<75)
	
	valor = aux2 + (float) aux1/100;
	printf("%.2f\n\n", valor);
	system("pause");
}
