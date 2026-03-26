/* O custo ao consumidor de um carro novo é a soma do preço de fábrica, com o percentual de lucro do
distribuidor aplicado ao preço de fábrica, e dos impostos aplicados ao preço de fábrica. Elabore um
algoritmo que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o
percentual de impostos. Calcule e mostre:
a. O valor correspondente ao lucro do distribuidor
b. O valor correspondente aos impostos
c. O preço final do veículo */

#include<stdio.h>
main()
{
	float precofab, lucro, imposto, vlucro, vimposto;
	
	printf("digite o preco de fabrica: ");
	scanf("%f", &precofab);
	printf("digite o percentual de lucro do distribuidor: ");
	scanf("%f", &lucro);
	printf("digite o percentual de impostos: ");
	scanf("%f", &imposto);
	
	vlucro = precofab * lucro/100;
	vimposto = precofab * imposto/100;
	printf("lucro do distribuidor: %.2f", vlucro);
	printf("\nvalor dos impostos: %.2f", vimposto);
	printf("\npreco final: %.2f", (precofab + vlucro + vimposto));
}
