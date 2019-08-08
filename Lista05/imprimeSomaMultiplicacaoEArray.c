#include<stdio.h>
main()
{
	int vet[5], soma=0, multip=1, i;
	for(i=0;i<5;i++)
	{
		printf("Entre com o valor %d: ", i);
		scanf("%d", &vet[i]);
		soma = soma + vet[i];
		multip = multip * vet [i];
	}
	
	printf("  Soma = %d", soma);
	printf("\n  Multiplicacao = %d", multip);
	printf("\n  Vetor = ");
	for(i=0;i<5;i++)
	printf("%d  ", vet[i]);
}
