#include<stdio.h>
main()
{
	int i;
	float vet[4], media=0, soma=0;
	for(i=0;i<4;i++)
	{
		printf("Informe o valor %d: ", i);
		scanf("%f", &vet[i]);
		soma = soma + vet[i];
	}
	
	media = soma/4;
	
	printf("\n");
	for(i=0;i<4;i++)
	{
		printf("Nota %d = %2.2f\n", i, vet[i]);
	}
	
	printf("A media = %2.2f", media);
}
