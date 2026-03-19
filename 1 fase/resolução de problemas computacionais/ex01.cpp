//Faça um programa que recebe dois números, calcule e mostre a subtração do primeiro número pelo segundo.

#include<stdio.h>
main()
{
	int num1,num2;
	printf("digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("digite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("subtracao: %d", (num1-num2));
}
