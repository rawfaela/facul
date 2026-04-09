/* Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no
último ano. Faça um algoritmo que receba o saldo médio de um cliente e calcule o valor do
crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito.
          Saldo Médio                           Mensagem
Acima de R$4.000,00                        30% do saldo médio
fechado R$ 4.000,00 aberto R$ 3.000,00     25% do saldo médio
fechado R$ 3.000,00 aberto R$ 2.000,00     20% do saldo médio
Até R$ 2.000,00                            10% do saldo médio */

#include<stdio.h>
main()
{
	float saldo;
	
	printf("Digite o saldo medio: ");
	scanf("%f", &saldo);
	
	if(saldo<=2000){
		printf("10%% do saldo medio. Saldo medio: %.2f. Credito: %.2f", saldo, (saldo * 0.1));
	} else if(saldo<=3000){
		printf("20%% do saldo medio. Saldo medio: %.2f. Credito: %.2f", saldo, (saldo*0.2));
	} else if(saldo<=4000){
		printf("25%% do saldo medio. Saldo medio: %.2f. Credito: %.2f", saldo, (saldo*0.25));
	} else{
		printf("30%% do saldo medio. Saldo medio: %.2f. Credito: %.2f", saldo, (saldo*0.3));
	}

}
