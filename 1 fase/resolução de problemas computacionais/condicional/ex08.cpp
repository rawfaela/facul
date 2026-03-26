/* Elabore um algoritmo que receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário.
Escolha do usuário      Operação
        1       Média entre os números digitados
        2        Diferença do maior pelo menor
        3      Produto entre os números digitados
        4       Divisão do primeiro pelo segundo */

#include<stdio.h>
main()
{
	int op;
	float num1, num2;
	printf("digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("digite o segundo numero: ");
	scanf("%f", &num2);
	printf("1-Media entre numeros digitados.\n2-Diferenca do maior pelo menor.\n3-Produto entre os numeros digitados.\n4-Divisao do primeiro pelo segundo.\nEscolha uma opcao: ");
	scanf("%i", &op);
	
	
	if (op==1){
		printf("media: %.2f", (num1+num2)/2);
	}
	else if(op==2){
		if (num1>num2){
			printf("diferenca: %.2f",num1-num2);
		} else {
			printf("diferenca: %.2f",num2-num1);
		}
	}
	else if(op==3){
		printf("produto: %.2f", num1*num2);
	}
	else if(op==4){
		printf("divisao: %.2f", num1/num2);
	}
	else{
		printf("opcao invalida");
	}
}
