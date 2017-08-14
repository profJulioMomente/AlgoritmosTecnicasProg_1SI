#include<stdio.h>
#include<stdlib.h>


main () {
    int valor;
    float resultado;

    printf("Insira um valor: ");
    scanf("%d", &valor);

    resultado = (float) 1/valor;

    printf("Resultado: %f\n", resultado);

    system("pause");
}
