#include<stdio.h>
#include<stdlib.h>

main () {
	int V1[5], V2[5], Res[5], i;
	
	printf("\nVetor 1\n");
	for(i = 0; i<5; i++){
		printf("V1[%d]: ", i);
		scanf("%d", &V1[i]);
	}
	
	printf("\nVetor 2\n");
	for(i = 0; i<5; i++){
		printf("V2[%d]: ", i);
		scanf("%d", &V2[i]);
	}
	
	for(i=0; i<5; i++){
		Res[i] = V1[i] + V2[i];
	}
	
	printf("\nResultado\n");
	for(i = 0; i<5; i++){
		printf("Res[%d] = %d\n ", i, Res[i]);
	}
	
	system("pause");
}
