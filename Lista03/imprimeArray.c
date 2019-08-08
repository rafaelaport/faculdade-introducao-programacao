#include<stdio.h>
main()
{
	int vet[5], i;
	for(i=0;i<5;i++)
	{
		printf("Entre com o valor da posicao %d: ", i);
		scanf("%d", &vet[i]);
		
		if(vet[i]<0)
		vet[i] = 0;
	}
	
	printf("\n  Imprimindo vetor \n");
	for(i=0;i<5;i++)
	{
		printf("%d  ", vet[i]);
	}
}
