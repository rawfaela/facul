// Elabore um algoritmo que imprima todos os números de 100 a 105, e ao final, a soma deles.
#include<stdio.h>
main()
{
	int soma;
	for (int i = 100; i<=105; i++) 
	{
		printf("%d\n",i);
		soma += i;
	}
	printf("A soma e: %d",soma);
}
