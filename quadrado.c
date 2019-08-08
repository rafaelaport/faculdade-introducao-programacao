#include<stdio.h>
main()
{
	int numero, quadrado;
	printf("Digite um numero inteiro nao-nulo: ");
	scanf("%d", &numero);
	quadrado = numero * numero;
	printf("O quadrado do numero %d = %d", numero, quadrado);
}
