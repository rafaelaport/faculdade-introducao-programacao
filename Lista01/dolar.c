#include<stdio.h>
main()
{
	float dolar, cotacao, real;
	printf("Digite a quantidade de dolares guardados no cofre: ");
	scanf("%f", &dolar);
	printf("Digite a cotacao do dolar: ");
	scanf("%f", &cotacao);
	real = dolar * cotacao;
	printf("Valor em reais e RS%8.2f", real);
	
}
