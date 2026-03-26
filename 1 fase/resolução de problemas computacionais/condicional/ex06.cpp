//Elabore um algoritmo que leia dois números e imprima qual é maior e qual é menor.

#include<stdio.h>
main()
{
	float num1, num2;
	printf("digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("digite o segundo numero: ");
	scanf("%f", &num2);
	
	if (num1>num2){
		printf("maior: %.2f", num1);
		printf("\nmenor: %.2f", num2);
	}
	else{
		printf("maior: %.2f", num2);
		printf("\nmenor: %.2f", num1);
	}
}
