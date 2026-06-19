/* Elabore um programa em C/C++ que leia um vetor X com 10 números e calcule e imprima a diferença entre o
maior e o menor elemento existente no vetor, bem como as posições que o maior e o menor ocupam no
conjunto de dados. */

#include<stdio.h>

main()
{
	int X[10], maior = -99999999, menor = 9999999999, posmaior, posmenor;
	
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero pro vetor X: ");
		scanf("%i",&X[i]);
		
		if (X[i] > maior)
		{
			maior = X[i];
			posmaior = i;
		}
		if (X[i] < menor)
		{
			menor = X[i];
			posmenor = i;
		}
	}
	printf("Diferenca entre maior e menor: %i\nPos do maior numero: %i\nPos do menor: %i",(maior-menor),posmaior,posmenor);
	
}
