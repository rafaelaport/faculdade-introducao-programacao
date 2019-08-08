#include<stdio.h>
main()
{
	int idade[5], q=0, i;
	float altura[5], soma=0, media=0;
	for(i=0;i<5;i++)
	{
		printf("Entre com a idade do aluno %d: ", i);
		scanf("%d", &idade[i]);
		printf("Entre com a altura do aluno %d: ", i);
		scanf("%f", &altura[i]);
		soma = soma + altura[i];
	}
	media = soma/5;
	
	for(i=0;i<5;i++)
	{
		if((idade[i]>13) && (altura[i]<media))
		q ++;
	}
	
	printf("\n  O total de alunos = %d", q);
}
