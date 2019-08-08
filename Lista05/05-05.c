#include<stdio.h>
main()
{
	int x, i, quant;
	float nota[4], media[3], soma=0;
	for(x=0;x<3;x++)
	{
		printf("    ALUNO %d\n", x);
		for(i=0;i<4;i++)
		{
			printf("Entre com a nota %d: ", i);
			scanf("%f", &nota[i]);
			soma = soma + nota[i];
		}
		media [x] = soma/4;
		soma=0;
		for (x=0;x<3;x++)
		{
			printf("\n Media %d = %2.2f", x, media[x]);
			if (media[x]>=7)
			quant ++;			
		}
		printf("\nQuantidade de alunos = %d", quant);
	}
}
