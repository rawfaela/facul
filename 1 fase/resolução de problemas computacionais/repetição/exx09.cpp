/* Uma loja utiliza os seguintes códigos para as vendas diárias:
V – para compras à vista;
P – para compras à prazo;
Dada uma lista de transações de compra ou venda, contendo o valor de cada transação e o
respectivo código de transação (V ou P), elabore um algoritmo que leia um conjunto de transações
de vendas (x para o tipo da transação encerra o programa), e, ao final, calcule e imprima:
a) O valor total de compras a vista;
b) O valor total de compras a prazo;
c) O valor total de compras efetuadas; */

#include<stdio.h>
#include<ctype.h>

main()
{
	char cod;
	float valor = 0, totalv = 0, totalp = 0, total = 0;
	
	while (cod != 'X')
	{
		printf("V - compra a vista\nP - compra a prazo\ndigite: ");
		scanf(" %c",&cod);
		cod = toupper(cod);
		
		if (cod != 'X')
		{
			printf("digite o valor da compra: ");
			scanf("%f",&valor);
			
			total += valor;
			if (cod == 'V')
			{
				totalv += valor;
			}
			else if (cod == 'P')
			{
				totalp += valor;
			}
		}
	}
	printf("\nvalor total de compras a vista: %.2f",totalv);
	printf("\nvalor total de compras a prazo: %.2f",totalp);
	printf("\nvalor total de compras: %.2f", total);
}
