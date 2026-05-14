//Elabore um algoritmo que imprima a tabuada de um número que será informado pelo usuário.

#include<stdio.h>
main()
{
	int num;
	printf("digite um numero para fazer a tabuada: ");
	scanf("%i",&num);
	
	for (int i = 1; i <= 10; i++)
	{
		printf("\n%i x %i = %i",num,i,(num*i));
	}
}
