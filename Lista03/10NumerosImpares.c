#include<stdio.h>
main()
{
	int vetor [9], i, x=1;
	for(i=0;i<=9;i++)
	{
		vetor[i]=x;
		x=x+2;
	}
	
	for(i=0;i<=9;i++)
	printf("Posicao %d = %d\n", i, vetor[i]);
}
