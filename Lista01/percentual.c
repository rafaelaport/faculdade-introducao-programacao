#include<stdio.h>
main()
{
	float custo, total, acrescimo, percentual;
	printf("Digite o valor do preco de custo: ");
	scanf("%f", &custo);
	printf("DIgite o percentual sobre o preco de custo: ");
	scanf("%f", &percentual);
	acrescimo = custo * percentual/100;
	total = acrescimo + custo;
	printf("O valor da venda e RS%8.2f", total);	
}
