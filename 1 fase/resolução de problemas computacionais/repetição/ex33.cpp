/*  Faça um programa que receba o preço unitário, a refrigeração (S para os produtos que necessitem de refrigeração e N para os que não necessitem) e a categoria (A — alimentação; L — limpeza; e V — vestuário) de doze produtos, e que calcule e mostre:
• O custo de estocagem, calculado de acordo com a tabela a seguir.
Preço Unitário Refrigeração Categoria Custo de Estocagem

Até 20                          A         R$ 2,00
                                L         R$ 3,00
                                V         R$ 4,00
  
Entre 20 e 50     S                       R$ 6,00
                  N                       R$ 0,00
  
Maior que 50
                  S             A         R$ 5,00
                                L         R$ 2,00
                                V         R$ 4,00
                  N           A ou V      R$ 0,00
                                L         R$ 1,00
• O imposto calculado de acordo com as regras a seguir:
Se o produto não preencher nenhum dos requisitos a seguir, seu imposto será de 2% sobre o preço Unitário; caso contrário, será de 4%.
Os requisitos são: categoria — A e refrigeração — S.
• O preço final, ou seja, preço unitário mais custo de estocagem mais imposto.
• A classificação calculada usando a tabela a seguir.
  Preço Final                             Classificação
Até R$ 20,00                                 Barato
Entre R$ 20,00 e R$ 100,00 (Inclusive)       Normal
Acima de R$ 100,00                            Caro
• A média dos valores adicionais, ou seja, a média dos custos de estocagem e dos impostos dos doze produtos.
• O maior preço final.
• O menor preço final.
• O total dos impostos.
• A quantidade de produtos com classificação barato.
• A quantidade de produtos com classificação cara.
• A quantidade de produtos com classificação normal. */

#include<stdio.h>
#include <ctype.h> //toupper()
main()
{
	float preco_un, custo_esto, imposto, preco_fin;
	char ref, cat;
	for (int i = 1; i <= 12; i++)
	{
		printf("digite o preco unitario: ");
		scanf("%f",&preco_un);
		
		do 
		{
			printf("digite se e refrigerado ou nao (S/N)");
			scanf("%c",&ref);
			ref = toupper(ref);
		} while (ref != 'S' and ref != 'N');
		
		do
		{
			printf("A-alimentacao\nL-limpeza\nV-vestuario\ndigite a categoria: ");
			scanf("%c",&cat);
			cat = toupper(cat);
		} while (cat != "A" and cat != "L" and cat != "V")

		if (preco_un <= 20)
		{
			switch (cat)
			{
				case 'A':
					custo_esto = 2;
				break;
				
				case 'L':
					custo_esto = 3;
				break;
				
				case 'V':
					custo_esto = 4;
				break;
			}
		}
		else if (preco_un <=50)
		{
			if (ref = 'S')
			{
				custo_esto = 6;
			}
			else 
			{
				custo_esto = 0;
			}
		}
		else 
		{
			if (ref = 'S')
			{
				switch (cat)
				{
					case 'A':
						custo_esto = 5;
					break;
					
					case 'L':
						custo_esto = 2;
					break;
					
					case 'V':
						custo_esto = 4;
					break;
				}				
			}
			else
			{
				if (cat = 'A' or cat = 'V')
				{
					custo_esto = 0;
				}
				else 
				{
					custo_esto = 0;
				}
			}
		}
		
		if (cat = 'A' or ref = 'S')
		{
			imposto = preco_un * 0.02;
		}
		else 
		{
			imposto = preco_un * 0.04;
		}
		
		preco_fin = preco_un + custo_esto + imposto;
		
		printf("produto: %d\n preco unitario: %.2f\n refrigerado: %c\n categoria: %c\n custo estocagem: %.2f\n\n",i,preco_un,ref,cat,custo_esto);
	}
}
