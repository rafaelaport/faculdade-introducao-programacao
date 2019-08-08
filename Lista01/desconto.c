#include<stdio.h>
main()
{
	float produto, desconto, valor;
	printf("Digite o valor do produto: ");
	scanf("%f", &produto);
	desconto = produto * 9/100;
	valor = produto - desconto;
	printf("Desconto = RS%6.2f\n", desconto);
	printf("Valor com desconto = RS %6.2f", valor);
}
