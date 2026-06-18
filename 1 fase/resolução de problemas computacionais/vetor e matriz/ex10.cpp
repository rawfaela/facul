/*Dado um vetor A de 5 elementos, elabore um programa em C/C++ que solicite ao usuário um número e
verifique se esse número encontra-se inserido no vetor. Caso o elemento esteja inserido no vetor, deve-se
exibir uma mensagem indicando que o elemento foi encontrado e sua posição, caso contrário, exibir a
seguinte mensagem “Elemento não encontrado” */

#include<stdio.h>

main()
{
	int A[5], num;
	bool encontrado = false;
	
	for (int i = 0; i<5; i++)
	{
		printf("digite um numero: ");
		scanf("%i",&A[i]);
	}
	
	printf("digite um numero para ver se esta no vetor: ");
	scanf("%i",&num);
	for (int i = 0; i<5; i++)
	{
		if (A[i] == num)
		{
			encontrado = true;
			printf("elemento encontrado na posicao %i",i);
			break;
		}
	}
	if (encontrado == false)
	{
		printf("elemento nao encontrado");
	}
}
