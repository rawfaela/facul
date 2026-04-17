/* Elabore um algoritmo que leia o código de um determinado produto e mostre a sua
classificação. Utilize a seguinte tabela como referência:
Código                     Classificação
1                      Alimento não perecível
2,3 ou 4               Alimento perecível
5 ou 6                 Vestuário
7                      Higiene pessoal
8 até 15               Limpeza e utensílios domésticos
Qualquer outro código Incorreto */

#include<stdio.h>

int main()
{
	int cod;
	printf("digite o codigo do produto: ");
	scanf("%d",&cod);
	
	switch(cod)
	{
		case 1:
			printf("alimento nao perecivel");
		break;
		case 2 ... 4:
			printf("alimento perecivel");
		break;
		case 5 ... 6:
			printf("vestuario");
		break;
		case 7:
			printf("higiene pessoal");
		break;
		case 8 ... 15:
			printf("limpeza e utensilios domesticos");
		break;
		default:
			printf("incorreto");
	}
}
