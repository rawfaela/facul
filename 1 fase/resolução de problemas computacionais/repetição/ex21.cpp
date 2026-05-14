//Elabore um algoritmo que receba a idade e o peso de 12 pessoas. Calcular e imprimir as médias dos pesos das pessoas da mesma faixa etária. As faixas etárias são: de 0 a 18 anos, e maiores de 28 anos.

#include<stdio.h>

main()
{
	int idade, cont1, cont2;
	float peso, soma1, soma2;
	cont1 = 0;
	cont2 = 0;
	soma1 = 0;
	soma2 = 0;
	for (int i = 1; i <= 12; i ++)
	{
		printf("digite sua idade: ");
		scanf("%i",&idade);
		
		printf("digite seu peso: ");
		scanf("%f",&peso);
		
		if (idade <= 18)
		{
			soma1 += peso;
			cont1 += 1;
		}
		else
		{
			soma2 += peso;
			cont2 += 1;
		}
	}
	printf("media do peso da faixa etaria ate 18: %.2f", soma1/cont1);
	printf("\nmedia do peso da faixa etaria maior que 18: %.2f", soma2/cont2);
	
}
