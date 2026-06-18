/* Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos, o maior, o menor, e a média dos valores informados. */

#include<stdio.h>

main()
{
	int A[5], maior = -99999999, menor = 999999999;
	float soma = 0;
	
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero: ");
		scanf("%i",&A[i]);
	}
	
	printf("\nelementos do vetor A: ");
	for (int i = 0; i<5; i++)
	{
		if (A[i]> maior)
		{
			maior = A[i];
		}
		if (A[i] < menor)
		{
			menor = A[i];
		}
		soma += A[i];
		
		printf("\nA[%i]: %i",i,A[i]);
	}
	printf("\nmaior: %i",maior);
	printf("\nmenor: %i", menor);
	printf("\nmedia: %.2f", soma/5);
	
}
