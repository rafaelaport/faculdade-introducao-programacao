#include<stdio.h>
main()
{
	int i, imaior;
	float vet[5], maior=0;
	for (i=0;i<5;i++)
	{
		printf("Entre com o salario %d: ", i);
		scanf("%f", &vet[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(vet[i]>maior)
		{
			maior = vet[i];
			imaior = i;
		}
	}

	printf("\nO maior salario = %5.2f", maior);
	printf("\nO indice do maior salario = %d", i);
}
