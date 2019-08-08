#include<stdio.h>
main()
{
	int vet[5], par[5], impar[5], i, ip=0, ii=0, x;
	
	for(i=0;i<5;i++)
	par[i] = 0;
	
	for(i=0;i<5;i++)
	impar[i] = 0;
	
	for(i=0;i<5;i++)
	{
		printf("Entre com o valor %d: ",i);
		scanf("%d", &vet[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(vet[i]%2==0)
		{
			par[ip] = vet[i];
			ip ++;
		}
		else
		{
			impar[ii] = vet[i];
			ii ++;
		}
	}
	
	printf("\n Imprimindo vetor ");
	for(x=0;x<5;x++)
	{
		printf("%d  ", vet[x]);
	}
	
	printf("\n Imprimindo vetor par ");
	for(x=0;x<5;x++)
	{
		printf("%d  ", par[x]);
	}
	
	printf("\n Imprimindo vetor impar ");
	for(x=0;x<5;x++)
	{
		printf("%d  ", impar[x]);
	}
}
