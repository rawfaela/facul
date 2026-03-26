//Elabore um algoritmo que leia dois números inteiros e efetue a adição; caso o resultado seja maior que 10, imprima-o.

#include<stdio.h>
main()
{
	int num1, num2, soma;
	printf("digite o primeiro numero: ");
	scanf("%i", &num1);
	printf("digite o segundo numero: ");
	scanf("%i", &num2);
	
	soma = num1 + num2;
	if (soma > 10){
		printf("%i",soma);
	}
}
