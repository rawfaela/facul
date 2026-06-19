/* Elabore um programa em C/C++ que armazene números em dois vetores inteiros de cinco elementos cada (A
e B), gere e imprima o vetor soma. */

#include<stdio.h>

main()
{
	int A[5], B[5], soma[5];
	
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero pro vetor A: ");
		scanf("%i",&A[i]);
	}
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero pro vetor B: ");
		scanf("%i",&B[i]);
		
		soma[i] = A[i] + B[i];
	}
	
	for (int i = 0; i<5; i++)
	{
		printf("\nsoma[%i]: %i",i,soma[i]);
	}
	
}
