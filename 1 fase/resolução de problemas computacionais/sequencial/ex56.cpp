/* Pedro comprou um saco de ração com peso em quilos. Pedro possui dois gatos para os quais fornece
a quantidade de ração em gramas. Elabore um algoritmo que receba o peso do saco de ração e
quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após
cinco dias. */

#include<stdio.h>
main()
{
	float saco, qtd1, qtd2;
	printf("digite o peso do saco em kg: ");
	scanf("%f", &saco);
	printf("digite a qtd de racao pro gato 1: ");
	scanf("%f", &qtd1);
	printf("digite a qtd de racao pro gato 2: ");
	scanf("%f", &qtd2);
	
	printf("resto de racao no saco dps de 5 dias: %.2f", (saco*1000 - ((qtd1+qtd2)*5))/1000); //ou (saco - ((qtd1+qtd2)*0.005))
}
