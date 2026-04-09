/* Faça um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as
tabelas a seguir, o novo preço e a classificação.
TABELA 1 - PERCENTUAL DE AUMENTO
PREÇO                                       %
Até R$ 50,00 (inclusive)                    5
Entre R$ 50,00 e R$ 100,00 (inclusive)     10
Acima de R$ 100,00                         15

TABELA 2 - CLASSIFICAÇÕES
NOVO PREÇO                             CLASSIFICAÇÃO
Até R$ 80,00 (inclusive)                   Barato
Entre R$ 80,00 e R$ 120,00 (inclusive)     Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)     Caro
Maior que R$ 200,00                     Muito caro  */

#include<stdio.h>
main()
{
	float preco, novo;
	printf("digite preco: ");
	scanf("%f", &preco);
	
	if (preco<=50){
		novo = preco * 1.05;
	} else if(preco<=100){
		novo = preco * 1.1;
	} else{
		novo = preco * 1.15;
	};

	if (novo<=80){
		printf("novo preco: %.2f. classificacao: barato", novo);
	} else if(novo<=120){
		printf("novo preco: %.2f. classificacao: normal", novo);
	} else if(novo<=200){
		printf("novo preco: %.2f. classificacao: caro", novo);
	} else{
		printf("novo preco: %.2f. classificacao: muito caro", novo);
	}
}
