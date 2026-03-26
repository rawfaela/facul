//Elabore um algoritmo que leia três números e imprima o menor número.

#include<stdio.h>
main()
{
	float num1, num2, num3;
	printf("digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("digite o segundo numero: ");
	scanf("%f", &num2);
	printf("digite o terceiro numero: ");
	scanf("%f", &num3);
	
	if (num1<num2 && num1<num3){
		printf("menor: %.2f", num1);
	}
	else if (num2<num1 and num2<num3){
		printf("menor: %.2f", num2);
	}
	else{
		printf("menor: %.2f", num3);
	}
}
