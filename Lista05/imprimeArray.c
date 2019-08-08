#include<stdio.h>
main()
{
	int vet[5], i;
	for(i=0;i<5;i++)
	{
		printf("Informe o numero inteiro %d: ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("\n Imprimindo vetor\n");
	for(i=0;i<5;i++)
	{
		printf("%d  ", vet[i]);
	}
}
