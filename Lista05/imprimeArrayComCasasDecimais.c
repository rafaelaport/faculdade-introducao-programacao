#include<stdio.h>
main()
{
	int i;
	float vet[5];
	for(i=0;i<5;i++)
	{
		printf("Informe o numero inteiro %d: ", i);
		scanf("%f", &vet[i]);
	}
	
	printf("\n Imprimindo vetor\n");
	for(i=4;i>=0;i--)
	{
		printf("%2.2f  ", vet[i]);
	}
}
