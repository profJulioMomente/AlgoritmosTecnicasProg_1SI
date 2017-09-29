#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
	char Nome[50]="JULIO CESAR";
	int i;
	
	for (i=0; i<strlen(Nome); i++){
		printf("%c -- %d\n", Nome[i], Nome[i]);
		
	}
	
	printf("\n\n");
	system("pause");
}
