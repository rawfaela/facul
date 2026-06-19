/* Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e gere e imprima o vetor T
triplo, que deverá conter os elementos do primeiro vetor multiplicados por 3. */

#include<stdio.h>

main()
{
	int A[5], T[5];
	
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero pro vetor A: ");
		scanf("%i",&A[i]);
	}
	for (int i = 0; i<5; i++)
	{
		T[i] = A[i] * 3;
		printf("\nT[%i]: %i",i,T[i]);
	}
	
}
