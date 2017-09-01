#include<stdio.h>
#include<stdlib.h>

main() {
	
	int inteiro, real, duplo, duplo_ext, caracter;
	
	inteiro = sizeof(int);
	real = sizeof(float);
	duplo = sizeof(double);
	duplo_ext = sizeof(long double);
	caracter = sizeof(char);
	
	printf("Int %dB\n", inteiro);
	printf("Float %dB\n", real);
	printf("Double %dB\n", duplo);
	printf("long Double %dB\n", duplo_ext);
	printf("Char %dB\n", caracter);
	
	system("pause");
	
}
