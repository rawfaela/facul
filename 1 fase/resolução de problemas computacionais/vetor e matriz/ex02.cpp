//Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os elementos do vetor, em ordem normal e ordem inversa.

#include<stdio.h>

main()
{
	int A[5];
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero: ");
		scanf("%i",&A[i]);
	}
	printf("os valores informados sao: ");
	for (int i = 0; i<5; i++)
	{
		printf("\nA[%i]: %i",i,A[i]);
	}
	printf("\n\nem ordem inversa, os valores informados sao: ");
	for (int i = 4; i >= 0; i--)
	{
		printf("\nA[%i]: %i",i,A[i]);
	}
}
