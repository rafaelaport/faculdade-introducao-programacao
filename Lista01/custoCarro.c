#include<stdio.h>
main()
{
	float custo, distribuidor, impostos, total;
	printf("Digite o valor de custo de fabrica do carro: ");
	scanf("%f", &custo);
	distribuidor = custo * 28/100;
	impostos = custo * 45/100;
	total = custo + distribuidor + impostos;
	printf(" O custo do carro ao consumidor e RS%8.2f", total);
}
