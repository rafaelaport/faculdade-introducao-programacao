#include<stdio.h>
main()
{
	int vet1[4], vet2[4], vet3[8], i, x=0;
	for(i=0;i<4;i++)
	{
		printf("Entre com o valor %d do vetor 1: ", i);
		scanf("%d", &vet1[i]);
	}
	
	printf("\n");
	for(i=0;i<4;i++)
	{
		printf("Entre com o valor %d do vetor 2: ", i);
		scanf("%d", &vet2[i]);
	}
	
	for(i=0;i<8;i++)
	{
		if(i%2==0)
			vet3[i] = vet1[x];
		else
		{
			vet3[i] = vet2[x];
			x++;
		}
	}
	
	printf("\n  Imprimindo vetor\n");
	for(i=0;i<10;i++)
		printf("%d  ", vet3[i]);
}
