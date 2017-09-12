#include<stdio.h>
#include<stdlib.h>

main (){
	int valor, palindrome=0, quociente, resto;	
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &valor);
	
	quociente = valor;
	
	do{
		palindrome = palindrome*10;
		resto = quociente%10;
		quociente = quociente/10;
		palindrome = palindrome + resto;
	} while(quociente != 0);
	
	if(valor == palindrome){
		printf("%d e palindrome\n", valor);
	} else {
		printf("%d nao e palindrome\n", valor);
	}
	system("pause");
}
