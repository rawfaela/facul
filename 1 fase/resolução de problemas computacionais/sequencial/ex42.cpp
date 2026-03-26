//Sabe-se que:
//1 pé = 12 polegadas
//1 jarda = 3 pés
//1 milha = 1760 jardas
//Elabore um algoritmo que receba uma medida em pés, faça as conversões a seguir, e imprima o
//resultado de cada conversão realizada.
//a. polegadas
//b. jardas
//c. milhas

#include<stdio.h>
main()
{
	float num;
	printf("digite o num: ");
	scanf("%f",&num);
	printf("polegadas: %.2f", (num*12));
	printf("\njardas: %.2f", (num/3));
	printf("\nmilhas: %.2f", (num*1760));
}
