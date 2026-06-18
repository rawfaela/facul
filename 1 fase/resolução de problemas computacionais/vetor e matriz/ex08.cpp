// Elabore um programa em C/C++ que entre com 5 números inteiros em dois vetores A e B. Construir um vetor C, sendo este a junção dos vetores A e B. Dessa forma, C deve ter o dobro de elementos dos vetores A e B. Ao final, imprima os elementos dos 3 vetores.

#include<stdio.h>

main()
{
	int A[5], B[5], C[10], cont = 0;
	bool passouDoA = false;
	
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero pro vetor A: ");
		scanf("%i",&A[i]);
	}
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero pro vetor B: ");
		scanf("%i",&B[i]);
	}
	
	for (int i = 0; i<10; i++)
	{
		if (passouDoA == false)
		{
			C[i] = A[cont];
			cont++;
			
			if (cont == 5)
			{
				cont = 0;
				passouDoA = true;
			}
		}
		else
		{
			C[i] = B[cont];
			cont++;
		}
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
	printf("\n\nvetor C:");
	for (int i = 0; i<10; i++)
	{
		printf("\nC[%i]: %i",i,C[i]);
	}
}
