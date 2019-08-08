#include<stdio.h>
main()
{
	int vetor[11], x, y, i, soma;
	for(i=0;i<=11;i++)
	{
		printf("Entre com o numero %d: ", i);
		scanf("%d", &vetor[i]);	
	}	
	
	printf("Entre com a posicao X: ");
	scanf("%d", &x);
	printf("Entre com a posicao Y: ");
	scanf("%d", &y);
	
	soma = vetor[x] + vetor[y];
	printf("Soma = %d", soma);
}
