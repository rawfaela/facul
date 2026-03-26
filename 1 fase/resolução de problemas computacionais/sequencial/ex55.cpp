/* 55. Elabore um algoritmo que receba o custo de um espetáculo teatral e o preço do convite desse
espetáculo. Esse algoritmo deve calcular e mostrar a quantidade de convites que devem ser vendidos
para que pelo menos o custo do espetáculo seja alcançado. */
  
#include<stdio.h>
main()
{
	float custo, preco;
	printf("digite o custo do espetaculo: ");
	scanf("%f", &custo);
	printf("digite o preco do convite: ");
	scanf("%f",&preco);
	
	printf("devem ser vendidos %.2f convites", custo/preco);
}
