#include<stdio.h>
const int tam = 10;

int achou (int v[], int num)
{
	int pos = 0, acho=0;
	
	do
	{
		if (v[pos] == num)
			acho = 1;
		else
			pos++;
	}while ((!acho) && (pos < tam));
	return acho;		
}

main()
{
	int numero, vet[] = {10, 20, 30, 40, 50, 60, 70, 80 , 90, 100};

	printf("Informe um numero: ");
	scanf("%d", &numero);

	if (achou(vet, numero))
		printf("Achou o numero %d", numero);
	else
		printf("Nao achou o numero %d", numero);
	
}

