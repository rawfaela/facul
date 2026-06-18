/*Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A. Construir um vetor B de
mesma dimensão, com os mesmo elementos do vetor A, os quais devem estar invertidos, ou seja, o primeiro
elemento do vetor A passa a ser o último elemento do vetor B, o segundo elemento do vetor A, passa a ser o
penúltimo elemento do vetor B, e assim por diante. Ao final, imprima os elementos do 2 vetores. */

#include<stdio.h>

main()
{
	int A[5], B[5], cont = 0;
	
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero pro vetor A: ");
		scanf("%i",&A[i]);
	}
	for (int i = 4; i>=0; i--)
	{
		B[i] = A[cont];
		cont++;
	}
	
	printf("\nvetor A:");
	for (int i = 0; i<5; i++)
	{
		printf("\nA[%i]: %i",i,A[i]);
	}

	printf("\n\nvetor B:");
	for (int i = 0; i<5; i++)
	{
		printf("\nB[%i]: %i",i,B[i]);
	}
}
