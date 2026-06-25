//ex12
/* Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e 10 números inteiros
pares em um vetor B. Construir um vetor I, sendo este a intersecção dos vetores A e B. Dessa forma, I
deve ter a capacidade de armazenar no máximo 5 elementos. */
//intersecção = iguais nos dois

// NAO TERMINEI

#include<stdio.h>

main()
{
	int A[5], B[10], I[5], num = 1;
	
	for (int i = 0; i < 5; i++)
	{
		printf("digite um numero: ");
		scanf("%i", &A[i]);	
	}
	
	for (int i = 0; i < 10; i++)
	{
		while (num % 2 != 0)
		{
			printf("digite um numero par: ");
			scanf("%i", &num);
			
			if (num % 2 == 0)
			{
				B[i] = num;	
				num = 1;
				break;
			}
			else
			{
				printf("numero digitado nao e par!\n");
			}
		}	
	}
	
	for (int i = 0; i < 5; i++) //I
	{
		for (int x = 0; x < 10; x++) //B
		{
			for (int y = 0; y < 5; y++) //A
			{
				if (B[x] == A[y])
				{
					printf("\nA[y]: %i",A[y]); //pra teste
					I[i] = A[y];
					break;
				}
			}
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		printf("\nI[%i]: %i",i,I[i]);
	}	
}
