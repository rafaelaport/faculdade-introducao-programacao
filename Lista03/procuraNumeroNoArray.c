#include<stdio.h>
main()
{
	int vetor[5], i, x, posicao=6;
	for(i=0;i<5;i++)
	{
		printf("Entre com o valor da posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("Entre com o valor X: ");
	scanf("%d", &x);
	
	for(i=0;i<5;i++)
	{
		if (x==vetor[i])
			posicao = i;
	}
	
	if (posicao==6)
		printf("Nao foi encontrado numero %d.", x);	
	else
		printf("Numero %d encontrado na posicao %d.", x, posicao);
}	
