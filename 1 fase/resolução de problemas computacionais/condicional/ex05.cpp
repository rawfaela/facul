//Elabore um algoritmo que leia dois números e imprima o maior número.

#include<stdio.h>
main()
{
	float num1, num2;
	printf("digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("digite o segundo numero: ");
	scanf("%f", &num2);
	
	if (num1>num2){
		printf("%.2f", num1);
	}
	else if (num2>num1){
		printf("%.2f", num2);
	}
	else {
		printf("numeros iguais");
}
