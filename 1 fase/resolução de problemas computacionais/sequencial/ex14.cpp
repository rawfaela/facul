//João recebeu seu salário e precisa pagar duas contas atrasadas. Por causa do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará so salário de João

#include<stdio.h>
main()
{
	float salario, conta1, conta2, multa;
	printf("digite seu salario: ");
	scanf("%f",&salario);
	printf("digite o valor da conta1: ");
	scanf("%f",&conta1);
	printf("digite o valor da conta2: ");
	scanf("%f",&conta2);
	multa = (conta1*1.02) + (conta2*1.02);
	salario = salario - multa;
	printf("seu salario final sera: %.2f", salario);
	
}
