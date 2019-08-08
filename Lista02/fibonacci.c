#include<stdio.h>
int calculafibonacci (int n)
{
	int a = 0, b = 1, aux, i;
	
	printf("Serie de Fibonacci: ");
	printf("\n%d\n%d", a, b);
	
	for (i=0;i<n;i++)
	{
		aux = a + b;
		printf("\n%d", aux);
		a = b;
		b = aux;
	}	
}

main()
{
	int n;
	printf("Digite o tamanho da serie: ");
	scanf("%d", &n);
	calculafibonacci (n);	
}
