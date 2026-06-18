//Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e imprima o índice do primeiro número negativo, se houver. Caso não existam números negativos, imprimir a seguinte mensagem “Negativo não encontrado”.

#include<stdio.h>

main()
{
	int A[5];
	bool temNeg = false;
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero: ");
		scanf("%i",&A[i]);
	}
	
	for (int i = 0; i<5; i++)
	{
		if (A[i] < 0)
		{
			printf("indice do primeiro num neg: %i",i);
			temNeg = true;
			break;
		}
	}
	
	if (temNeg == false)
	{
		printf("Negativo nao encontrado.");
	}
}
