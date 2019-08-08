#include<stdio.h>
main()
{
	float valor, prestacoes;
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	prestacoes = valor/5;
	printf("O valor de cada prestacao e RS%8.2f", prestacoes);
}
