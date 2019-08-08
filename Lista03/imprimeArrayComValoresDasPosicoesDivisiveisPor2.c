#include<stdio.h>
main()
{
	int vet1[5], vet2[5], vet3[5], i, x=0;
	
//lendo primeiro vetor 
	for(i=0;i<5;i++)
	{
		printf("Entre com o valor da posicao %d do vetor 1: ", i);
		scanf("%d", &vet1[i]);
	}

//Lendo segundo vetor 
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("Entre com o valor da posicao %d do vetor 2: ", i);
		scanf("%d", &vet2[i]);
	}
	
//Montando terceiro vetor
	for(i=0;i<5;i++)
		if(i%2==0)
		vet3[i] = vet1[x];
		else 
		{
			vet3[i] = vet2[x];
			x = x + 1;
		}
	
	printf("\n  Imprimindo vetor\n");
	for(i=0;i<5;i++)
	{
		printf("%d  ", vet3[i]);
	}
}
