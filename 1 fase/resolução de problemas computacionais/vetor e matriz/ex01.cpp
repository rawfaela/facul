//Elabore um programa em C/C++ que entre com 7 números inteiros e imprima uma listagem contendo os 7 números.

#include<stdio.h>

main()
{
	int lista[7];
	for (int i = 0; i<7; i++)
	{
		printf("digite um numero: ");
		scanf("%i",&lista[i]);
	}
	for (int i = 0; i<7; i++)
	{
		printf("\nposicao %i: %i",i,lista[i]);
	}
}
