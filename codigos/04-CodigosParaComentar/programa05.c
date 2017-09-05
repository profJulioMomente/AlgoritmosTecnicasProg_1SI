#include<stdio.h>
#include<stdlib.h>

main() {
	int d=0, b, m=1;
	int valor;
	
	printf("Informe um valor binario: ");
	scanf("%d", &valor);
	
	b = valor;
	
	while(b!=0){
		d = d + (b%10)*m;
		b = b/10;
		m = m*2;
	}
	printf("%d --> %d\n\n", valor, d);
	system("pause");
}
