#include<stdio.h>
#include<stdlib.h>

main() {
	int d, b=0, m=1;
	int valor;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &valor);
	
	d = valor;
	
	while(d!=0){
		b = b + (d%2)*m;
		d = d/2;
		m = m*10;
	}
	printf("%d --> %d\n\n", valor, b);
	system("pause");
}
