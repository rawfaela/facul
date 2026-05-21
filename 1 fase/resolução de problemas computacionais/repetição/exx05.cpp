//Elabore um algoritmo que leia vários números, e imprima o maior, menor e a média aritmética dos números. Considere que o número zero (0) finaliza a entrada de dados e não faz parte da seqüência 

#include<stdio.h>

main()
{
	float num, maior, menor, soma, cont;
	num = 1;
	maior = -999999999;
	menor = 9999999999;
	while (num != 0)
	{
		printf("digite um numero, se digitar 0 sai: ");
		scanf("%f",&num);
		if (num != 0)
		{
			if (num < menor)
			{
				menor = num;
			}
			if (num > maior)
			{
				maior = num;	
			}	
			soma += num;
			cont += 1;
		}
		
	}
	printf("maior: %.2f", maior);
	printf("\nmenor: %.2f", menor);
	printf("\nmedia arit: %.2f", soma/cont);
}
