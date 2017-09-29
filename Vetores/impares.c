#include<stdio.h>
#include<stdlib.h>

main () {
	int Vetor[10], i;
	
	for(i=0; i<10; i++){
		Vetor[i] = i*2+1;
	}
	
	for(i=0; i<10; i++){
		printf("%d\n", Vetor[i]);	
	}
	system("pause");
}
