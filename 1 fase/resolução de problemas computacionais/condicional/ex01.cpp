//Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade desse número.

#include<stdio.h>
main()
{
	float num;
	printf("digite um numero: ");
	scanf("%f", &num);
	
	if (num > 20){
		printf("metade dele: %.2f", (num/2));
	}
}
