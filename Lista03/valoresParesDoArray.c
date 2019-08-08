#include<stdio.h>
main()
{
	int vet[5], i, soma=0;
	for(i=0;i<5;i++)
	{
		printf("Informe o valor da posicao %d: ", i);
		scanf("%d", &vet[i]);
		
		if (vet[i]%2==0)
		soma ++;
	}
	
	printf("Possui %d valores pares.", soma);	
}
